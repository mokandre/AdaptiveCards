// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"

#include "AdaptiveElementParserRegistration.h"
#include "AdaptiveNumberInput.h"
#include "AdaptiveNumberInputRenderer.h"
#include <limits>

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::AdaptiveNamespace;
using namespace ABI::Windows::Foundation;
using namespace ABI::Windows::Foundation::Collections;
using namespace ABI::Windows::UI::Xaml;
using namespace ABI::Windows::UI::Xaml::Controls;
using namespace ABI::Windows::UI::Xaml::Input;

namespace AdaptiveNamespace
{
    HRESULT AdaptiveNumberInputRenderer::RuntimeClassInitialize() noexcept { return S_OK; }

    HRESULT AdaptiveNumberInputRenderer::Render(_In_ IAdaptiveCardElement* adaptiveCardElement,
                                                _In_ IAdaptiveRenderContext* renderContext,
                                                _In_ IAdaptiveRenderArgs* renderArgs,
                                                _COM_Outptr_ IUIElement** numberInputControl) noexcept
    try
    {
        ComPtr<IAdaptiveHostConfig> hostConfig;
        RETURN_IF_FAILED(renderContext->get_HostConfig(&hostConfig));
        if (!XamlHelpers::SupportsInteractivity(hostConfig.Get()))
        {
            RETURN_IF_FAILED(renderContext->AddWarning(
                ABI::AdaptiveNamespace::WarningStatusCode::InteractivityNotSupported,
                HStringReference(L"Number input was stripped from card because interactivity is not supported").Get()));
            return S_OK;
        }

        ComPtr<IAdaptiveCardElement> cardElement(adaptiveCardElement);
        ComPtr<IAdaptiveNumberInput> adaptiveNumberInput;
        RETURN_IF_FAILED(cardElement.As(&adaptiveNumberInput));

        ComPtr<ITextBox> textBox =
            XamlHelpers::CreateXamlClass<ITextBox>(HStringReference(RuntimeClass_Windows_UI_Xaml_Controls_TextBox));

        ComPtr<IInputScopeName> inputScopeName =
            XamlHelpers::CreateXamlClass<IInputScopeName>(HStringReference(RuntimeClass_Windows_UI_Xaml_Input_InputScopeName));
        RETURN_IF_FAILED(inputScopeName->put_NameValue(InputScopeNameValue::InputScopeNameValue_Number));

        ComPtr<IInputScope> inputScope =
            XamlHelpers::CreateXamlClass<IInputScope>(HStringReference(RuntimeClass_Windows_UI_Xaml_Input_InputScope));
        ComPtr<IVector<InputScopeName*>> names;
        RETURN_IF_FAILED(inputScope->get_Names(names.GetAddressOf()));
        RETURN_IF_FAILED(names->Append(inputScopeName.Get()));

        RETURN_IF_FAILED(textBox->put_InputScope(inputScope.Get()));

        ComPtr<ABI::Windows::Foundation::IReference<int32_t>> value;
        RETURN_IF_FAILED(adaptiveNumberInput->get_Value(&value));

        if (value.Get())
        {
            int boxValue;
            if (SUCCEEDED(value->get_Value(&boxValue)))
            {
                std::wstring stringValue = std::to_wstring(boxValue);
                RETURN_IF_FAILED(textBox->put_Text(HStringReference(stringValue.c_str()).Get()));
            }
        }

        ComPtr<ITextBox2> textBox2;
        RETURN_IF_FAILED(textBox.As(&textBox2));

        HString placeHolderText;
        RETURN_IF_FAILED(adaptiveNumberInput->get_Placeholder(placeHolderText.GetAddressOf()));
        RETURN_IF_FAILED(textBox2->put_PlaceholderText(placeHolderText.Get()));

        ComPtr<IFrameworkElement> frameworkElement;
        RETURN_IF_FAILED(textBox.As(&frameworkElement));
        RETURN_IF_FAILED(frameworkElement->put_VerticalAlignment(ABI::Windows::UI::Xaml::VerticalAlignment_Top));
        RETURN_IF_FAILED(
            XamlHelpers::SetStyleFromResourceDictionary(renderContext, L"Adaptive.Input.Number", frameworkElement.Get()));

        ComPtr<IAdaptiveInputElement> numberInputAsAdaptiveInput;
        RETURN_IF_FAILED(adaptiveNumberInput.As(&numberInputAsAdaptiveInput));

        ComPtr<IUIElement> textBoxAsUIElement;
        RETURN_IF_FAILED(textBox.As(&textBoxAsUIElement));

        // If there's any validation on this input, put the input inside a border
        ComPtr<ABI::Windows::Foundation::IReference<int32_t>> max;
        RETURN_IF_FAILED(adaptiveNumberInput->get_Max(&max));

        ComPtr<ABI::Windows::Foundation::IReference<int32_t>> min;
        RETURN_IF_FAILED(adaptiveNumberInput->get_Min(&min));

        ComPtr<IUIElement> inputLayout;
        ComPtr<IBorder> validationBorder;
        RETURN_IF_FAILED(XamlHelpers::HandleInputLayoutAndValidation(
            numberInputAsAdaptiveInput.Get(), textBoxAsUIElement.Get(), (max.Get() || min.Get()), renderContext, &inputLayout, &validationBorder));

        // Create the InputValue and add it to the context
        ComPtr<NumberInputValue> input;
        RETURN_IF_FAILED(
            MakeAndInitialize<NumberInputValue>(&input, adaptiveNumberInput.Get(), textBox.Get(), validationBorder.Get()));
        RETURN_IF_FAILED(renderContext->AddInputValue(input.Get(), renderArgs));

        RETURN_IF_FAILED(inputLayout.CopyTo(numberInputControl));
        return S_OK;
    }
    CATCH_RETURN;

    HRESULT AdaptiveNumberInputRenderer::FromJson(
        _In_ ABI::Windows::Data::Json::IJsonObject* jsonObject,
        _In_ ABI::AdaptiveNamespace::IAdaptiveElementParserRegistration* elementParserRegistration,
        _In_ ABI::AdaptiveNamespace::IAdaptiveActionParserRegistration* actionParserRegistration,
        _In_ ABI::Windows::Foundation::Collections::IVector<ABI::AdaptiveNamespace::AdaptiveWarning*>* adaptiveWarnings,
        _COM_Outptr_ ABI::AdaptiveNamespace::IAdaptiveCardElement** element) noexcept
    try
    {
        return AdaptiveNamespace::FromJson<AdaptiveNamespace::AdaptiveNumberInput, AdaptiveSharedNamespace::NumberInput, AdaptiveSharedNamespace::NumberInputParser>(
            jsonObject, elementParserRegistration, actionParserRegistration, adaptiveWarnings, element);
    }
    CATCH_RETURN;
}
