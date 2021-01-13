// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
#include "pch.h"
#include "NumberInput.h"
#include "ParseUtil.h"
#include "Util.h"

using namespace AdaptiveSharedNamespace;

NumberInput::NumberInput() : BaseInputElement(CardElementType::NumberInput)
{
    PopulateKnownPropertiesSet();
}

Json::Value NumberInput::SerializeToJsonValue() const
{
    Json::Value root = BaseInputElement::SerializeToJsonValue();

    if (m_min)
    {
        root[AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Min)] = *m_min;
    }

    if (m_max)
    {
        root[AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Max)] = *m_max;
    }

    if (m_value)
    {
        root[AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Value)] = *m_value;
    }

    if (!m_placeholder.empty())
    {
        root[AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Placeholder)] = m_placeholder;
    }

    return root;
}

std::string NumberInput::GetPlaceholder() const
{
    return m_placeholder;
}

void NumberInput::SetPlaceholder(const std::string& value)
{
    m_placeholder = value;
}

std::optional<int> NumberInput::GetValue() const
{
    return m_value;
}

void NumberInput::SetValue(const std::optional<int>& value)
{
    m_value = value;
}

std::optional<int> NumberInput::GetMax() const
{
    return m_max;
}

void NumberInput::SetMax(const std::optional<int>& value)
{
    m_max = value;
}

std::optional<int> NumberInput::GetMin() const
{
    return m_min;
}

void NumberInput::SetMin(const std::optional<int>& value)
{
    m_min = value;
}

std::shared_ptr<BaseCardElement> NumberInputParser::Deserialize(ParseContext& context, const Json::Value& json)
{
    ParseUtil::ExpectTypeString(json, CardElementType::NumberInput);

    std::shared_ptr<NumberInput> numberInput = BaseInputElement::Deserialize<NumberInput>(context, json);

    numberInput->SetPlaceholder(ParseUtil::GetString(json, AdaptiveCardSchemaKey::Placeholder));

    static const std::optional<int> emptyOptionalInt;
    numberInput->SetValue(ParseUtil::GetOptionalInt(json, AdaptiveCardSchemaKey::Value, emptyOptionalInt));
    numberInput->SetMax(ParseUtil::GetOptionalInt(json, AdaptiveCardSchemaKey::Max, emptyOptionalInt));
    numberInput->SetMin(ParseUtil::GetOptionalInt(json, AdaptiveCardSchemaKey::Min, emptyOptionalInt));

    return numberInput;
}

std::shared_ptr<BaseCardElement>
NumberInputParser::DeserializeFromString(ParseContext& context, const std::string& jsonString)
{
    return NumberInputParser::Deserialize(context, ParseUtil::GetJsonValueFromString(jsonString));
}

void NumberInput::PopulateKnownPropertiesSet()
{
    m_knownProperties.insert({AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Placeholder),
                              AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Value),
                              AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Max),
                              AdaptiveCardSchemaKeyToString(AdaptiveCardSchemaKey::Min)});
}
