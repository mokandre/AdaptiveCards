[Adaptive Cards Javascript SDK](../README.md) / [adaptivecards](../modules/adaptivecards.md) / NumProperty

# Class: NumProperty

[adaptivecards](../modules/adaptivecards.md).NumProperty

## Hierarchy

* [*PropertyDefinition*](serialization.propertydefinition.md)

  ↳ **NumProperty**

## Table of contents

### Constructors

- [constructor](adaptivecards.numproperty.md#constructor)

### Properties

- [defaultValue](adaptivecards.numproperty.md#defaultvalue)
- [isSerializationEnabled](adaptivecards.numproperty.md#isserializationenabled)
- [name](adaptivecards.numproperty.md#name)
- [onGetInitialValue](adaptivecards.numproperty.md#ongetinitialvalue)
- [sequentialNumber](adaptivecards.numproperty.md#sequentialnumber)
- [targetVersion](adaptivecards.numproperty.md#targetversion)

### Methods

- [getInternalName](adaptivecards.numproperty.md#getinternalname)
- [parse](adaptivecards.numproperty.md#parse)
- [toJSON](adaptivecards.numproperty.md#tojson)

## Constructors

### constructor

\+ **new NumProperty**(`targetVersion`: [*Version*](serialization.version.md), `name`: *string*, `defaultValue?`: *any*, `onGetInitialValue?`: (`sender`: [*SerializableObject*](serialization.serializableobject.md)) => *any*): [*NumProperty*](serialization.numproperty.md)

#### Parameters:

Name | Type |
:------ | :------ |
`targetVersion` | [*Version*](serialization.version.md) |
`name` | *string* |
`defaultValue?` | *any* |
`onGetInitialValue?` | (`sender`: [*SerializableObject*](serialization.serializableobject.md)) => *any* |

**Returns:** [*NumProperty*](serialization.numproperty.md)

Inherited from: [PropertyDefinition](serialization.propertydefinition.md)

Defined in: [serialization.ts:276](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L276)

## Properties

### defaultValue

• `Optional` `Readonly` **defaultValue**: *any*

Inherited from: [PropertyDefinition](serialization.propertydefinition.md).[defaultValue](serialization.propertydefinition.md#defaultvalue)

___

### isSerializationEnabled

• **isSerializationEnabled**: *boolean*= true

Inherited from: [PropertyDefinition](serialization.propertydefinition.md).[isSerializationEnabled](serialization.propertydefinition.md#isserializationenabled)

Defined in: [serialization.ts:276](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L276)

___

### name

• `Readonly` **name**: *string*

Inherited from: [PropertyDefinition](serialization.propertydefinition.md).[name](serialization.propertydefinition.md#name)

___

### onGetInitialValue

• `Optional` `Readonly` **onGetInitialValue**: *undefined* \| (`sender`: [*SerializableObject*](serialization.serializableobject.md)) => *any*

Inherited from: [PropertyDefinition](serialization.propertydefinition.md).[onGetInitialValue](serialization.propertydefinition.md#ongetinitialvalue)

___

### sequentialNumber

• `Readonly` **sequentialNumber**: *number*

Inherited from: [PropertyDefinition](serialization.propertydefinition.md).[sequentialNumber](serialization.propertydefinition.md#sequentialnumber)

Defined in: [serialization.ts:274](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L274)

___

### targetVersion

• `Readonly` **targetVersion**: [*Version*](serialization.version.md)

Inherited from: [PropertyDefinition](serialization.propertydefinition.md).[targetVersion](serialization.propertydefinition.md#targetversion)

## Methods

### getInternalName

▸ **getInternalName**(): *string*

**Returns:** *string*

Inherited from: [PropertyDefinition](serialization.propertydefinition.md)

Defined in: [serialization.ts:262](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L262)

___

### parse

▸ **parse**(`sender`: [*SerializableObject*](serialization.serializableobject.md), `source`: [*PropertyBag*](../modules/serialization.md#propertybag), `context`: [*BaseSerializationContext*](serialization.baseserializationcontext.md)): *undefined* \| *number*

#### Parameters:

Name | Type |
:------ | :------ |
`sender` | [*SerializableObject*](serialization.serializableobject.md) |
`source` | [*PropertyBag*](../modules/serialization.md#propertybag) |
`context` | [*BaseSerializationContext*](serialization.baseserializationcontext.md) |

**Returns:** *undefined* \| *number*

Overrides: [PropertyDefinition](serialization.propertydefinition.md)

Defined in: [serialization.ts:344](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L344)

___

### toJSON

▸ **toJSON**(`sender`: [*SerializableObject*](serialization.serializableobject.md), `target`: [*PropertyBag*](../modules/serialization.md#propertybag), `value`: *undefined* \| *number*, `context`: [*BaseSerializationContext*](serialization.baseserializationcontext.md)): *void*

#### Parameters:

Name | Type |
:------ | :------ |
`sender` | [*SerializableObject*](serialization.serializableobject.md) |
`target` | [*PropertyBag*](../modules/serialization.md#propertybag) |
`value` | *undefined* \| *number* |
`context` | [*BaseSerializationContext*](serialization.baseserializationcontext.md) |

**Returns:** *void*

Overrides: [PropertyDefinition](serialization.propertydefinition.md)

Defined in: [serialization.ts:348](https://github.com/microsoft/AdaptiveCards/blob/0938a1f10/source/nodejs/adaptivecards/src/serialization.ts#L348)
