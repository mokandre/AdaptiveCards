[Adaptive Cards Javascript SDK](../README.md) / [card-elements](../modules/card_elements.md) / DateInput

# Class: DateInput

[card-elements](../modules/card_elements.md).DateInput

## Hierarchy

* [*Input*](card_elements.input.md)

  ↳ **DateInput**

## Table of contents

### Constructors

- [constructor](card_elements.dateinput.md#constructor)

### Properties

- [\_parent](card_elements.dateinput.md#_parent)
- [\_renderedElement](card_elements.dateinput.md#_renderedelement)
- [customCssSelector](card_elements.dateinput.md#customcssselector)
- [defaultValue](card_elements.dateinput.md#defaultvalue)
- [errorMessage](card_elements.dateinput.md#errormessage)
- [height](card_elements.dateinput.md#height)
- [horizontalAlignment](card_elements.dateinput.md#horizontalalignment)
- [id](card_elements.dateinput.md#id)
- [isRequired](card_elements.dateinput.md#isrequired)
- [label](card_elements.dateinput.md#label)
- [labelledBy](card_elements.dateinput.md#labelledby)
- [max](card_elements.dateinput.md#max)
- [maxVersion](card_elements.dateinput.md#maxversion)
- [min](card_elements.dateinput.md#min)
- [onPreProcessPropertyValue](card_elements.dateinput.md#onpreprocesspropertyvalue)
- [onValueChanged](card_elements.dateinput.md#onvaluechanged)
- [placeholder](card_elements.dateinput.md#placeholder)
- [separator](card_elements.dateinput.md#separator)
- [spacing](card_elements.dateinput.md#spacing)
- [defaultMaxVersion](card_elements.dateinput.md#defaultmaxversion)
- [errorMessageProperty](card_elements.dateinput.md#errormessageproperty)
- [heightProperty](card_elements.dateinput.md#heightproperty)
- [horizontalAlignmentProperty](card_elements.dateinput.md#horizontalalignmentproperty)
- [idProperty](card_elements.dateinput.md#idproperty)
- [isRequiredProperty](card_elements.dateinput.md#isrequiredproperty)
- [isVisibleProperty](card_elements.dateinput.md#isvisibleproperty)
- [labelProperty](card_elements.dateinput.md#labelproperty)
- [langProperty](card_elements.dateinput.md#langproperty)
- [maxProperty](card_elements.dateinput.md#maxproperty)
- [minProperty](card_elements.dateinput.md#minproperty)
- [onRegisterCustomProperties](card_elements.dateinput.md#onregistercustomproperties)
- [placeholderProperty](card_elements.dateinput.md#placeholderproperty)
- [requiresProperty](card_elements.dateinput.md#requiresproperty)
- [separatorProperty](card_elements.dateinput.md#separatorproperty)
- [spacingProperty](card_elements.dateinput.md#spacingproperty)
- [typeNameProperty](card_elements.dateinput.md#typenameproperty)
- [valueProperty](card_elements.dateinput.md#valueproperty)

### Accessors

- [allowCustomPadding](card_elements.dateinput.md#allowcustompadding)
- [defaultStyle](card_elements.dateinput.md#defaultstyle)
- [hasVisibleSeparator](card_elements.dateinput.md#hasvisibleseparator)
- [hostConfig](card_elements.dateinput.md#hostconfig)
- [index](card_elements.dateinput.md#index)
- [inputControlContainerElement](card_elements.dateinput.md#inputcontrolcontainerelement)
- [isInline](card_elements.dateinput.md#isinline)
- [isInteractive](card_elements.dateinput.md#isinteractive)
- [isNullable](card_elements.dateinput.md#isnullable)
- [isStandalone](card_elements.dateinput.md#isstandalone)
- [isVisible](card_elements.dateinput.md#isvisible)
- [lang](card_elements.dateinput.md#lang)
- [parent](card_elements.dateinput.md#parent)
- [renderedElement](card_elements.dateinput.md#renderedelement)
- [renderedInputControlElement](card_elements.dateinput.md#renderedinputcontrolelement)
- [requires](card_elements.dateinput.md#requires)
- [separatorElement](card_elements.dateinput.md#separatorelement)
- [separatorOrientation](card_elements.dateinput.md#separatororientation)
- [useDefaultSizing](card_elements.dateinput.md#usedefaultsizing)
- [value](card_elements.dateinput.md#value)

### Methods

- [adjustRenderedElementSize](card_elements.dateinput.md#adjustrenderedelementsize)
- [applyPadding](card_elements.dateinput.md#applypadding)
- [asString](card_elements.dateinput.md#asstring)
- [createPlaceholderElement](card_elements.dateinput.md#createplaceholderelement)
- [focus](card_elements.dateinput.md#focus)
- [getActionAt](card_elements.dateinput.md#getactionat)
- [getActionById](card_elements.dateinput.md#getactionbyid)
- [getActionCount](card_elements.dateinput.md#getactioncount)
- [getAllInputs](card_elements.dateinput.md#getallinputs)
- [getAllLabelIds](card_elements.dateinput.md#getalllabelids)
- [getCustomProperty](card_elements.dateinput.md#getcustomproperty)
- [getDefaultPadding](card_elements.dateinput.md#getdefaultpadding)
- [getDefaultSerializationContext](card_elements.dateinput.md#getdefaultserializationcontext)
- [getEffectivePadding](card_elements.dateinput.md#geteffectivepadding)
- [getEffectiveStyle](card_elements.dateinput.md#geteffectivestyle)
- [getEffectiveStyleDefinition](card_elements.dateinput.md#geteffectivestyledefinition)
- [getElementById](card_elements.dateinput.md#getelementbyid)
- [getForbiddenActionTypes](card_elements.dateinput.md#getforbiddenactiontypes)
- [getHasBackground](card_elements.dateinput.md#gethasbackground)
- [getImmediateSurroundingPadding](card_elements.dateinput.md#getimmediatesurroundingpadding)
- [getJsonTypeName](card_elements.dateinput.md#getjsontypename)
- [getPadding](card_elements.dateinput.md#getpadding)
- [getParentContainer](card_elements.dateinput.md#getparentcontainer)
- [getResourceInformation](card_elements.dateinput.md#getresourceinformation)
- [getRootElement](card_elements.dateinput.md#getrootelement)
- [getRootObject](card_elements.dateinput.md#getrootobject)
- [getSchema](card_elements.dateinput.md#getschema)
- [getSchemaKey](card_elements.dateinput.md#getschemakey)
- [getValue](card_elements.dateinput.md#getvalue)
- [hasAllDefaultValues](card_elements.dateinput.md#hasalldefaultvalues)
- [hasDefaultValue](card_elements.dateinput.md#hasdefaultvalue)
- [indexOf](card_elements.dateinput.md#indexof)
- [internalParse](card_elements.dateinput.md#internalparse)
- [internalRender](card_elements.dateinput.md#internalrender)
- [internalToJSON](card_elements.dateinput.md#internaltojson)
- [internalValidateProperties](card_elements.dateinput.md#internalvalidateproperties)
- [isAtTheVeryBottom](card_elements.dateinput.md#isattheverybottom)
- [isAtTheVeryLeft](card_elements.dateinput.md#isattheveryleft)
- [isAtTheVeryRight](card_elements.dateinput.md#isattheveryright)
- [isAtTheVeryTop](card_elements.dateinput.md#isattheverytop)
- [isBleeding](card_elements.dateinput.md#isbleeding)
- [isBleedingAtBottom](card_elements.dateinput.md#isbleedingatbottom)
- [isBleedingAtTop](card_elements.dateinput.md#isbleedingattop)
- [isBottomElement](card_elements.dateinput.md#isbottomelement)
- [isDesignMode](card_elements.dateinput.md#isdesignmode)
- [isDisplayed](card_elements.dateinput.md#isdisplayed)
- [isFirstElement](card_elements.dateinput.md#isfirstelement)
- [isHiddenDueToOverflow](card_elements.dateinput.md#ishiddenduetooverflow)
- [isLastElement](card_elements.dateinput.md#islastelement)
- [isLeftMostElement](card_elements.dateinput.md#isleftmostelement)
- [isRightMostElement](card_elements.dateinput.md#isrightmostelement)
- [isSet](card_elements.dateinput.md#isset)
- [isTopElement](card_elements.dateinput.md#istopelement)
- [isValid](card_elements.dateinput.md#isvalid)
- [overrideInternalRender](card_elements.dateinput.md#overrideinternalrender)
- [parse](card_elements.dateinput.md#parse)
- [populateSchema](card_elements.dateinput.md#populateschema)
- [preProcessPropertyValue](card_elements.dateinput.md#preprocesspropertyvalue)
- [remove](card_elements.dateinput.md#remove)
- [render](card_elements.dateinput.md#render)
- [resetDefaultValues](card_elements.dateinput.md#resetdefaultvalues)
- [resetValidationFailureCue](card_elements.dateinput.md#resetvalidationfailurecue)
- [setCustomProperty](card_elements.dateinput.md#setcustomproperty)
- [setPadding](card_elements.dateinput.md#setpadding)
- [setParent](card_elements.dateinput.md#setparent)
- [setShouldFallback](card_elements.dateinput.md#setshouldfallback)
- [setValue](card_elements.dateinput.md#setvalue)
- [shouldFallback](card_elements.dateinput.md#shouldfallback)
- [shouldSerialize](card_elements.dateinput.md#shouldserialize)
- [showValidationErrorMessage](card_elements.dateinput.md#showvalidationerrormessage)
- [toJSON](card_elements.dateinput.md#tojson)
- [truncateOverflow](card_elements.dateinput.md#truncateoverflow)
- [undoOverflowTruncation](card_elements.dateinput.md#undooverflowtruncation)
- [updateInputControlAriaLabelledBy](card_elements.dateinput.md#updateinputcontrolarialabelledby)
- [updateLayout](card_elements.dateinput.md#updatelayout)
- [validateProperties](card_elements.dateinput.md#validateproperties)
- [validateValue](card_elements.dateinput.md#validatevalue)
- [valueChanged](card_elements.dateinput.md#valuechanged)

## Constructors

### constructor

\+ **new DateInput**(): [*DateInput*](card_elements.dateinput.md)

**Returns:** [*DateInput*](card_elements.dateinput.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:898](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L898)

## Properties

### \_parent

• `Protected` `Optional` **\_parent**: *undefined* \| [*CardObject*](card_object.cardobject.md)

Inherited from: [Input](card_elements.input.md).[_parent](card_elements.input.md#_parent)

Defined in: [card-object.ts:64](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L64)

___

### \_renderedElement

• `Protected` `Optional` **\_renderedElement**: *undefined* \| HTMLElement

Inherited from: [Input](card_elements.input.md).[_renderedElement](card_elements.input.md#_renderedelement)

Defined in: [card-object.ts:65](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L65)

___

### customCssSelector

• `Optional` **customCssSelector**: *undefined* \| *string*

Inherited from: [Input](card_elements.input.md).[customCssSelector](card_elements.input.md#customcssselector)

Defined in: [card-elements.ts:327](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L327)

___

### defaultValue

• `Optional` **defaultValue**: *undefined* \| *string*

Defined in: [card-elements.ts:3442](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3442)

___

### errorMessage

• `Optional` **errorMessage**: *undefined* \| *string*

Inherited from: [Input](card_elements.input.md).[errorMessage](card_elements.input.md#errormessage)

Defined in: [card-elements.ts:2431](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2431)

___

### height

• **height**: [*CardElementHeight*](../modules/card_elements.md#cardelementheight)

Inherited from: [Input](card_elements.input.md).[height](card_elements.input.md#height)

Defined in: [card-elements.ts:53](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L53)

___

### horizontalAlignment

• **horizontalAlignment**: [*HorizontalAlignment*](../enums/enums.horizontalalignment.md)

Inherited from: [Input](card_elements.input.md).[horizontalAlignment](card_elements.input.md#horizontalalignment)

Defined in: [card-elements.ts:44](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L44)

___

### id

• `Optional` **id**: *undefined* \| *string*

Inherited from: [Input](card_elements.input.md).[id](card_elements.input.md#id)

Defined in: [card-object.ts:53](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L53)

___

### isRequired

• **isRequired**: *boolean*

Inherited from: [Input](card_elements.input.md).[isRequired](card_elements.input.md#isrequired)

Defined in: [card-elements.ts:2428](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2428)

___

### label

• `Optional` **label**: *undefined* \| *string*

Inherited from: [Input](card_elements.input.md).[label](card_elements.input.md#label)

Defined in: [card-elements.ts:2425](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2425)

___

### labelledBy

• `Optional` **labelledBy**: *undefined* \| *string*

Inherited from: [Input](card_elements.input.md).[labelledBy](card_elements.input.md#labelledby)

Defined in: [card-elements.ts:2610](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2610)

___

### max

• `Optional` **max**: *undefined* \| *string*

Defined in: [card-elements.ts:3448](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3448)

___

### maxVersion

• **maxVersion**: [*Version*](serialization.version.md)

Inherited from: [Input](card_elements.input.md).[maxVersion](card_elements.input.md#maxversion)

Defined in: [serialization.ts:898](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L898)

___

### min

• `Optional` **min**: *undefined* \| *string*

Defined in: [card-elements.ts:3445](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3445)

___

### onPreProcessPropertyValue

• `Optional` **onPreProcessPropertyValue**: *undefined* \| (`sender`: [*CardObject*](card_object.cardobject.md), `property`: [*PropertyDefinition*](serialization.propertydefinition.md), `value`: *any*) => *any*

Inherited from: [Input](card_elements.input.md).[onPreProcessPropertyValue](card_elements.input.md#onpreprocesspropertyvalue)

Defined in: [card-object.ts:67](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L67)

___

### onValueChanged

• **onValueChanged**: (`sender`: [*Input*](card_elements.input.md)) => *void*

#### Type declaration:

▸ (`sender`: [*Input*](card_elements.input.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`sender` | [*Input*](card_elements.input.md) |

**Returns:** *void*

Defined in: [card-elements.ts:2608](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2608)

Inherited from: [Input](card_elements.input.md).[onValueChanged](card_elements.input.md#onvaluechanged)

Defined in: [card-elements.ts:2608](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2608)

___

### placeholder

• `Optional` **placeholder**: *undefined* \| *string*

Defined in: [card-elements.ts:3451](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3451)

___

### separator

• **separator**: *boolean*

Inherited from: [Input](card_elements.input.md).[separator](card_elements.input.md#separator)

Defined in: [card-elements.ts:50](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L50)

___

### spacing

• **spacing**: [*Spacing*](../enums/enums.spacing.md)

Inherited from: [Input](card_elements.input.md).[spacing](card_elements.input.md#spacing)

Defined in: [card-elements.ts:47](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L47)

___

### defaultMaxVersion

▪ `Static` **defaultMaxVersion**: [*Version*](serialization.version.md)

Inherited from: [Input](card_elements.input.md).[defaultMaxVersion](card_elements.input.md#defaultmaxversion)

Defined in: [serialization.ts:775](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L775)

___

### errorMessageProperty

▪ `Readonly` `Static` **errorMessageProperty**: [*StringProperty*](serialization.stringproperty.md)

Inherited from: [Input](card_elements.input.md).[errorMessageProperty](card_elements.input.md#errormessageproperty)

Defined in: [card-elements.ts:2422](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2422)

___

### heightProperty

▪ `Readonly` `Static` **heightProperty**: [*ValueSetProperty*](serialization.valuesetproperty.md)

Inherited from: [Input](card_elements.input.md).[heightProperty](card_elements.input.md#heightproperty)

Defined in: [card-elements.ts:24](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L24)

___

### horizontalAlignmentProperty

▪ `Readonly` `Static` **horizontalAlignmentProperty**: [*EnumProperty*](serialization.enumproperty.md)<*typeof* [*HorizontalAlignment*](../enums/enums.horizontalalignment.md)\>

Inherited from: [Input](card_elements.input.md).[horizontalAlignmentProperty](card_elements.input.md#horizontalalignmentproperty)

Defined in: [card-elements.ts:32](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L32)

___

### idProperty

▪ `Readonly` `Static` **idProperty**: [*StringProperty*](serialization.stringproperty.md)

Inherited from: [Input](card_elements.input.md).[idProperty](card_elements.input.md#idproperty)

Defined in: [card-object.ts:41](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L41)

___

### isRequiredProperty

▪ `Readonly` `Static` **isRequiredProperty**: [*BoolProperty*](serialization.boolproperty.md)

Inherited from: [Input](card_elements.input.md).[isRequiredProperty](card_elements.input.md#isrequiredproperty)

Defined in: [card-elements.ts:2421](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2421)

___

### isVisibleProperty

▪ `Readonly` `Static` **isVisibleProperty**: [*BoolProperty*](serialization.boolproperty.md)

Inherited from: [Input](card_elements.input.md).[isVisibleProperty](card_elements.input.md#isvisibleproperty)

Defined in: [card-elements.ts:22](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L22)

___

### labelProperty

▪ `Readonly` `Static` **labelProperty**: [*StringProperty*](serialization.stringproperty.md)

Inherited from: [Input](card_elements.input.md).[labelProperty](card_elements.input.md#labelproperty)

Defined in: [card-elements.ts:2420](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2420)

___

### langProperty

▪ `Readonly` `Static` **langProperty**: [*StringProperty*](serialization.stringproperty.md)

Inherited from: [Input](card_elements.input.md).[langProperty](card_elements.input.md#langproperty)

Defined in: [card-elements.ts:21](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L21)

___

### maxProperty

▪ `Readonly` `Static` **maxProperty**: [*StringProperty*](serialization.stringproperty.md)

Defined in: [card-elements.ts:3439](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3439)

___

### minProperty

▪ `Readonly` `Static` **minProperty**: [*StringProperty*](serialization.stringproperty.md)

Defined in: [card-elements.ts:3438](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3438)

___

### onRegisterCustomProperties

▪ `Optional` `Static` **onRegisterCustomProperties**: *undefined* \| (`sender`: [*SerializableObject*](serialization.serializableobject.md), `schema`: [*SerializableObjectSchema*](serialization.serializableobjectschema.md)) => *void*

Inherited from: [Input](card_elements.input.md).[onRegisterCustomProperties](card_elements.input.md#onregistercustomproperties)

Defined in: [serialization.ts:774](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L774)

___

### placeholderProperty

▪ `Readonly` `Static` **placeholderProperty**: [*StringProperty*](serialization.stringproperty.md)

Defined in: [card-elements.ts:3437](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3437)

___

### requiresProperty

▪ `Readonly` `Static` **requiresProperty**: [*SerializableObjectProperty*](serialization.serializableobjectproperty.md)

Inherited from: [Input](card_elements.input.md).[requiresProperty](card_elements.input.md#requiresproperty)

Defined in: [card-object.ts:42](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L42)

___

### separatorProperty

▪ `Readonly` `Static` **separatorProperty**: [*BoolProperty*](serialization.boolproperty.md)

Inherited from: [Input](card_elements.input.md).[separatorProperty](card_elements.input.md#separatorproperty)

Defined in: [card-elements.ts:23](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L23)

___

### spacingProperty

▪ `Readonly` `Static` **spacingProperty**: [*EnumProperty*](serialization.enumproperty.md)<*typeof* [*Spacing*](../enums/enums.spacing.md)\>

Inherited from: [Input](card_elements.input.md).[spacingProperty](card_elements.input.md#spacingproperty)

Defined in: [card-elements.ts:37](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L37)

___

### typeNameProperty

▪ `Readonly` `Static` **typeNameProperty**: [*StringProperty*](serialization.stringproperty.md)

Inherited from: [Input](card_elements.input.md).[typeNameProperty](card_elements.input.md#typenameproperty)

Defined in: [card-object.ts:32](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L32)

___

### valueProperty

▪ `Readonly` `Static` **valueProperty**: [*StringProperty*](serialization.stringproperty.md)

Defined in: [card-elements.ts:3436](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3436)

## Accessors

### allowCustomPadding

• `Protected`get **allowCustomPadding**(): *boolean*

**Returns:** *boolean*

Defined in: [card-elements.ts:315](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L315)

___

### defaultStyle

• `Protected`get **defaultStyle**(): *string*

**Returns:** *string*

Defined in: [card-elements.ts:323](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L323)

___

### hasVisibleSeparator

• get **hasVisibleSeparator**(): *boolean*

**Returns:** *boolean*

Defined in: [card-elements.ts:596](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L596)

___

### hostConfig

• get **hostConfig**(): [*HostConfig*](host_config.hostconfig.md)

**Returns:** [*HostConfig*](host_config.hostconfig.md)

Defined in: [card-elements.ts:557](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L557)

• set **hostConfig**(`value`: [*HostConfig*](host_config.hostconfig.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`value` | [*HostConfig*](host_config.hostconfig.md) |

**Returns:** *void*

Defined in: [card-elements.ts:571](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L571)

___

### index

• get **index**(): *number*

**Returns:** *number*

Defined in: [card-elements.ts:575](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L575)

___

### inputControlContainerElement

• `Protected`get **inputControlContainerElement**(): HTMLElement

**Returns:** HTMLElement

Defined in: [card-elements.ts:2488](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2488)

___

### isInline

• get **isInline**(): *boolean*

**Returns:** *boolean*

Defined in: [card-elements.ts:592](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L592)

___

### isInteractive

• get **isInteractive**(): *boolean*

**Returns:** *boolean*

Defined in: [card-elements.ts:2671](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2671)

___

### isNullable

• `Protected`get **isNullable**(): *boolean*

**Returns:** *boolean*

Defined in: [card-elements.ts:2480](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2480)

___

### isStandalone

• get **isStandalone**(): *boolean*

**Returns:** *boolean*

Defined in: [card-elements.ts:588](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L588)

___

### isVisible

• get **isVisible**(): *boolean*

**Returns:** *boolean*

Defined in: [card-elements.ts:77](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L77)

• set **isVisible**(`value`: *boolean*): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`value` | *boolean* |

**Returns:** *void*

Defined in: [card-elements.ts:81](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L81)

___

### lang

• get **lang**(): *undefined* \| *string*

**Returns:** *undefined* \| *string*

Defined in: [card-elements.ts:56](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L56)

• set **lang**(`value`: *undefined* \| *string*): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`value` | *undefined* \| *string* |

**Returns:** *void*

Defined in: [card-elements.ts:72](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L72)

___

### parent

• get **parent**(): *undefined* \| [*CardElement*](card_elements.cardelement.md)

**Returns:** *undefined* \| [*CardElement*](card_elements.cardelement.md)

Defined in: [card-elements.ts:609](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L609)

___

### renderedElement

• get **renderedElement**(): *undefined* \| HTMLElement

**Returns:** *undefined* \| HTMLElement

Defined in: [card-object.ts:143](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L143)

___

### renderedInputControlElement

• `Protected`get **renderedInputControlElement**(): *undefined* \| HTMLElement

**Returns:** *undefined* \| HTMLElement

Defined in: [card-elements.ts:2484](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2484)

___

### requires

• get **requires**(): [*HostCapabilities*](host_capabilities.hostcapabilities.md)

**Returns:** [*HostCapabilities*](host_capabilities.hostcapabilities.md)

Defined in: [card-object.ts:56](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L56)

___

### separatorElement

• get **separatorElement**(): *undefined* \| HTMLElement

**Returns:** *undefined* \| HTMLElement

Defined in: [card-elements.ts:605](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L605)

___

### separatorOrientation

• `Protected`get **separatorOrientation**(): [*Orientation*](../enums/enums.orientation.md)

**Returns:** [*Orientation*](../enums/enums.orientation.md)

Defined in: [card-elements.ts:319](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L319)

___

### useDefaultSizing

• `Protected`get **useDefaultSizing**(): *boolean*

**Returns:** *boolean*

Defined in: [card-elements.ts:311](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L311)

___

### value

• get **value**(): *undefined* \| *string*

**Returns:** *undefined* \| *string*

Defined in: [card-elements.ts:3518](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3518)

## Methods

### adjustRenderedElementSize

▸ `Protected`**adjustRenderedElementSize**(`renderedElement`: HTMLElement): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`renderedElement` | HTMLElement |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:236](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L236)

___

### applyPadding

▸ `Protected`**applyPadding**(): *void*

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:255](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L255)

___

### asString

▸ **asString**(): *undefined* \| *string*

**Returns:** *undefined* \| *string*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:333](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L333)

___

### createPlaceholderElement

▸ `Protected`**createPlaceholderElement**(): HTMLElement

**Returns:** HTMLElement

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:221](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L221)

___

### focus

▸ **focus**(): *void*

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2614](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2614)

___

### getActionAt

▸ **getActionAt**(`index`: *number*): *undefined* \| [*Action*](card_elements.action.md)

#### Parameters:

Name | Type |
:------ | :------ |
`index` | *number* |

**Returns:** *undefined* \| [*Action*](card_elements.action.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:412](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L412)

___

### getActionById

▸ **getActionById**(`id`: *string*): *undefined* \| [*Action*](card_elements.action.md)

#### Parameters:

Name | Type |
:------ | :------ |
`id` | *string* |

**Returns:** *undefined* \| [*Action*](card_elements.action.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:547](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L547)

___

### getActionCount

▸ **getActionCount**(): *number*

**Returns:** *number*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:408](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L408)

___

### getAllInputs

▸ **getAllInputs**(`processActions?`: *boolean*): [*Input*](card_elements.input.md)[]

#### Parameters:

Name | Type | Default value |
:------ | :------ | :------ |
`processActions` | *boolean* | true |

**Returns:** [*Input*](card_elements.input.md)[]

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2665](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2665)

___

### getAllLabelIds

▸ `Protected`**getAllLabelIds**(): *string*[]

**Returns:** *string*[]

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2441](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2441)

___

### getCustomProperty

▸ **getCustomProperty**(`name`: *string*): *any*

#### Parameters:

Name | Type |
:------ | :------ |
`name` | *string* |

**Returns:** *any*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:985](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L985)

___

### getDefaultPadding

▸ `Protected`**getDefaultPadding**(): [*PaddingDefinition*](shared.paddingdefinition.md)

**Returns:** [*PaddingDefinition*](shared.paddingdefinition.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:291](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L291)

___

### getDefaultSerializationContext

▸ `Protected`**getDefaultSerializationContext**(): [*BaseSerializationContext*](serialization.baseserializationcontext.md)

**Returns:** [*BaseSerializationContext*](serialization.baseserializationcontext.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:217](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L217)

___

### getEffectivePadding

▸ **getEffectivePadding**(): [*PaddingDefinition*](shared.paddingdefinition.md)

**Returns:** [*PaddingDefinition*](shared.paddingdefinition.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:551](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L551)

___

### getEffectiveStyle

▸ **getEffectiveStyle**(): *string*

**Returns:** *string*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:341](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L341)

___

### getEffectiveStyleDefinition

▸ **getEffectiveStyleDefinition**(): [*ContainerStyleDefinition*](host_config.containerstyledefinition.md)

**Returns:** [*ContainerStyleDefinition*](host_config.containerstyledefinition.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:349](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L349)

___

### getElementById

▸ **getElementById**(`id`: *string*): *undefined* \| [*CardElement*](card_elements.cardelement.md)

#### Parameters:

Name | Type |
:------ | :------ |
`id` | *string* |

**Returns:** *undefined* \| [*CardElement*](card_elements.cardelement.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:543](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L543)

___

### getForbiddenActionTypes

▸ **getForbiddenActionTypes**(): [*ActionType*](../modules/card_elements.md#actiontype)[]

**Returns:** [*ActionType*](../modules/card_elements.md#actiontype)[]

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:353](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L353)

___

### getHasBackground

▸ `Protected`**getHasBackground**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:295](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L295)

___

### getImmediateSurroundingPadding

▸ **getImmediateSurroundingPadding**(`result`: [*PaddingDefinition*](shared.paddingdefinition.md), `processTop?`: *boolean*, `processRight?`: *boolean*, `processBottom?`: *boolean*, `processLeft?`: *boolean*): *void*

#### Parameters:

Name | Type | Default value |
:------ | :------ | :------ |
`result` | [*PaddingDefinition*](shared.paddingdefinition.md) | - |
`processTop` | *boolean* | true |
`processRight` | *boolean* | true |
`processBottom` | *boolean* | true |
`processLeft` | *boolean* | true |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:357](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L357)

___

### getJsonTypeName

▸ **getJsonTypeName**(): *string*

**Returns:** *string*

Overrides: [Input](card_elements.input.md)

Defined in: [card-elements.ts:3486](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3486)

___

### getPadding

▸ `Protected`**getPadding**(): *undefined* \| [*PaddingDefinition*](shared.paddingdefinition.md)

**Returns:** *undefined* \| [*PaddingDefinition*](shared.paddingdefinition.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:299](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L299)

___

### getParentContainer

▸ **getParentContainer**(): *undefined* \| [*Container*](card_elements.container.md)

**Returns:** *undefined* \| [*Container*](card_elements.container.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:521](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L521)

___

### getResourceInformation

▸ **getResourceInformation**(): [*IResourceInformation*](../interfaces/shared.iresourceinformation.md)[]

**Returns:** [*IResourceInformation*](../interfaces/shared.iresourceinformation.md)[]

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:539](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L539)

___

### getRootElement

▸ **getRootElement**(): [*CardElement*](card_elements.cardelement.md)

**Returns:** [*CardElement*](card_elements.cardelement.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:517](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L517)

___

### getRootObject

▸ **getRootObject**(): [*CardObject*](card_object.cardobject.md)

**Returns:** [*CardObject*](card_object.cardobject.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-object.ts:103](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L103)

___

### getSchema

▸ **getSchema**(): [*SerializableObjectSchema*](serialization.serializableobjectschema.md)

**Returns:** [*SerializableObjectSchema*](serialization.serializableobjectschema.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:989](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L989)

___

### getSchemaKey

▸ `Protected`**getSchemaKey**(): *string*

**Returns:** *string*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-object.ts:48](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L48)

___

### getValue

▸ `Protected`**getValue**(`property`: [*PropertyDefinition*](serialization.propertydefinition.md)): *any*

#### Parameters:

Name | Type |
:------ | :------ |
`property` | [*PropertyDefinition*](serialization.propertydefinition.md) |

**Returns:** *any*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:826](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L826)

___

### hasAllDefaultValues

▸ **hasAllDefaultValues**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:950](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L950)

___

### hasDefaultValue

▸ **hasDefaultValue**(`property`: [*PropertyDefinition*](serialization.propertydefinition.md)): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`property` | [*PropertyDefinition*](serialization.propertydefinition.md) |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:946](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L946)

___

### indexOf

▸ **indexOf**(`cardElement`: [*CardElement*](card_elements.cardelement.md)): *number*

#### Parameters:

Name | Type |
:------ | :------ |
`cardElement` | [*CardElement*](card_elements.cardelement.md) |

**Returns:** *number*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:455](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L455)

___

### internalParse

▸ `Protected`**internalParse**(`source`: [*PropertyBag*](../modules/serialization.md#propertybag), `context`: [*BaseSerializationContext*](serialization.baseserializationcontext.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`source` | [*PropertyBag*](../modules/serialization.md#propertybag) |
`context` | [*BaseSerializationContext*](serialization.baseserializationcontext.md) |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:839](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L839)

___

### internalRender

▸ `Protected`**internalRender**(): *undefined* \| HTMLElement

**Returns:** *undefined* \| HTMLElement

Overrides: [Input](card_elements.input.md)

Defined in: [card-elements.ts:3457](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3457)

___

### internalToJSON

▸ `Protected`**internalToJSON**(`target`: [*PropertyBag*](../modules/serialization.md#propertybag), `context`: [*BaseSerializationContext*](serialization.baseserializationcontext.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`target` | [*PropertyBag*](../modules/serialization.md#propertybag) |
`context` | [*BaseSerializationContext*](serialization.baseserializationcontext.md) |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:876](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L876)

___

### internalValidateProperties

▸ **internalValidateProperties**(`context`: [*ValidationResults*](card_object.validationresults.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`context` | [*ValidationResults*](card_object.validationresults.md) |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2624](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2624)

___

### isAtTheVeryBottom

▸ **isAtTheVeryBottom**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:485](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L485)

___

### isAtTheVeryLeft

▸ **isAtTheVeryLeft**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:473](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L473)

___

### isAtTheVeryRight

▸ **isAtTheVeryRight**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:477](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L477)

___

### isAtTheVeryTop

▸ **isAtTheVeryTop**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:481](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L481)

___

### isBleeding

▸ **isBleeding**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:337](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L337)

___

### isBleedingAtBottom

▸ **isBleedingAtBottom**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:493](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L493)

___

### isBleedingAtTop

▸ **isBleedingAtTop**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:489](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L489)

___

### isBottomElement

▸ **isBottomElement**(`element`: [*CardElement*](card_elements.cardelement.md)): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`element` | [*CardElement*](card_elements.cardelement.md) |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:509](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L509)

___

### isDesignMode

▸ **isDesignMode**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:459](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L459)

___

### isDisplayed

▸ `Protected`**isDisplayed**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:245](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L245)

___

### isFirstElement

▸ **isFirstElement**(`element`: [*CardElement*](card_elements.cardelement.md)): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`element` | [*CardElement*](card_elements.cardelement.md) |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:465](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L465)

___

### isHiddenDueToOverflow

▸ **isHiddenDueToOverflow**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:513](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L513)

___

### isLastElement

▸ **isLastElement**(`element`: [*CardElement*](card_elements.cardelement.md)): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`element` | [*CardElement*](card_elements.cardelement.md) |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:469](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L469)

___

### isLeftMostElement

▸ **isLeftMostElement**(`element`: [*CardElement*](card_elements.cardelement.md)): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`element` | [*CardElement*](card_elements.cardelement.md) |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:497](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L497)

___

### isRightMostElement

▸ **isRightMostElement**(`element`: [*CardElement*](card_elements.cardelement.md)): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`element` | [*CardElement*](card_elements.cardelement.md) |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:501](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L501)

___

### isSet

▸ **isSet**(): *boolean*

**Returns:** *boolean*

Overrides: [Input](card_elements.input.md)

Defined in: [card-elements.ts:3490](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3490)

___

### isTopElement

▸ **isTopElement**(`element`: [*CardElement*](card_elements.cardelement.md)): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`element` | [*CardElement*](card_elements.cardelement.md) |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:505](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L505)

___

### isValid

▸ **isValid**(): *boolean*

**Returns:** *boolean*

Overrides: [Input](card_elements.input.md)

Defined in: [card-elements.ts:3494](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L3494)

___

### overrideInternalRender

▸ `Protected`**overrideInternalRender**(): *undefined* \| HTMLElement

**Returns:** *undefined* \| HTMLElement

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2492](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2492)

___

### parse

▸ **parse**(`source`: *any*, `context?`: [*SerializationContext*](card_elements.serializationcontext.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`source` | *any* |
`context?` | [*SerializationContext*](card_elements.serializationcontext.md) |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:329](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L329)

___

### populateSchema

▸ `Protected`**populateSchema**(`schema`: [*SerializableObjectSchema*](serialization.serializableobjectschema.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`schema` | [*SerializableObjectSchema*](serialization.serializableobjectschema.md) |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:788](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L788)

___

### preProcessPropertyValue

▸ **preProcessPropertyValue**(`property`: [*PropertyDefinition*](serialization.propertydefinition.md), `propertyValue?`: *any*): *any*

#### Parameters:

Name | Type |
:------ | :------ |
`property` | [*PropertyDefinition*](serialization.propertydefinition.md) |
`propertyValue?` | *any* |

**Returns:** *any*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-object.ts:73](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L73)

___

### remove

▸ **remove**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:416](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L416)

___

### render

▸ **render**(): *undefined* \| HTMLElement

**Returns:** *undefined* \| HTMLElement

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:424](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L424)

___

### resetDefaultValues

▸ **resetDefaultValues**(): *void*

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:964](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L964)

___

### resetValidationFailureCue

▸ `Protected`**resetValidationFailureCue**(): *void*

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2575](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2575)

___

### setCustomProperty

▸ **setCustomProperty**(`name`: *string*, `value`: *any*): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`name` | *string* |
`value` | *any* |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:974](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L974)

___

### setPadding

▸ `Protected`**setPadding**(`value`: *undefined* \| [*PaddingDefinition*](shared.paddingdefinition.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`value` | *undefined* \| [*PaddingDefinition*](shared.paddingdefinition.md) |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:303](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L303)

___

### setParent

▸ **setParent**(`value`: *undefined* \| [*CardObject*](card_object.cardobject.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`value` | *undefined* \| [*CardObject*](card_object.cardobject.md) |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-object.ts:91](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L91)

___

### setShouldFallback

▸ **setShouldFallback**(`value`: *boolean*): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`value` | *boolean* |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-object.ts:95](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L95)

___

### setValue

▸ `Protected`**setValue**(`property`: [*PropertyDefinition*](serialization.propertydefinition.md), `value`: *any*): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`property` | [*PropertyDefinition*](serialization.propertydefinition.md) |
`value` | *any* |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:830](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L830)

___

### shouldFallback

▸ **shouldFallback**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-object.ts:99](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L99)

___

### shouldSerialize

▸ `Protected`**shouldSerialize**(`context`: [*SerializationContext*](card_elements.serializationcontext.md)): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`context` | [*SerializationContext*](card_elements.serializationcontext.md) |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:307](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L307)

___

### showValidationErrorMessage

▸ `Protected`**showValidationErrorMessage**(): *void*

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2589](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2589)

___

### toJSON

▸ **toJSON**(`context?`: [*BaseSerializationContext*](serialization.baseserializationcontext.md)): *undefined* \| [*PropertyBag*](../modules/serialization.md#propertybag)

#### Parameters:

Name | Type |
:------ | :------ |
`context?` | [*BaseSerializationContext*](serialization.baseserializationcontext.md) |

**Returns:** *undefined* \| [*PropertyBag*](../modules/serialization.md#propertybag)

Inherited from: [Input](card_elements.input.md)

Defined in: [serialization.ts:916](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L916)

___

### truncateOverflow

▸ `Protected`**truncateOverflow**(`maxHeight`: *number*): *boolean*

#### Parameters:

Name | Type |
:------ | :------ |
`maxHeight` | *number* |

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:279](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L279)

___

### undoOverflowTruncation

▸ `Protected`**undoOverflowTruncation**(): *void*

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:289](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L289)

___

### updateInputControlAriaLabelledBy

▸ `Protected`**updateInputControlAriaLabelledBy**(): *void*

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2455](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2455)

___

### updateLayout

▸ **updateLayout**(`processChildren?`: *boolean*): *void*

#### Parameters:

Name | Type | Default value |
:------ | :------ | :------ |
`processChildren` | *boolean* | true |

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:450](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L450)

___

### validateProperties

▸ **validateProperties**(): [*ValidationResults*](card_object.validationresults.md)

**Returns:** [*ValidationResults*](card_object.validationresults.md)

Inherited from: [Input](card_elements.input.md)

Defined in: [card-object.ts:131](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-object.ts#L131)

___

### validateValue

▸ **validateValue**(): *boolean*

**Returns:** *boolean*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2651](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2651)

___

### valueChanged

▸ `Protected`**valueChanged**(): *void*

**Returns:** *void*

Inherited from: [Input](card_elements.input.md)

Defined in: [card-elements.ts:2563](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/card-elements.ts#L2563)
