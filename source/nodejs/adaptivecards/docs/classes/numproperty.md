[Adaptive Cards Javascript SDK](../README.md) › [NumProperty](numproperty.md)

# Class: NumProperty

## Hierarchy

* [PropertyDefinition](propertydefinition.md)

  ↳ **NumProperty**

## Index

### Constructors

* [constructor](numproperty.md#constructor)

### Properties

* [defaultValue](numproperty.md#optional-readonly-defaultvalue)
* [isSerializationEnabled](numproperty.md#isserializationenabled)
* [name](numproperty.md#readonly-name)
* [onGetInitialValue](numproperty.md#optional-readonly-ongetinitialvalue)
* [sequentialNumber](numproperty.md#readonly-sequentialnumber)
* [targetVersion](numproperty.md#readonly-targetversion)

### Methods

* [getInternalName](numproperty.md#getinternalname)
* [parse](numproperty.md#parse)
* [toJSON](numproperty.md#tojson)

## Constructors

###  constructor

\+ **new NumProperty**(`targetVersion`: [Version](version.md), `name`: string, `defaultValue?`: any, `onGetInitialValue?`: undefined | function): *[NumProperty](numproperty.md)*

*Inherited from [PropertyDefinition](propertydefinition.md).[constructor](propertydefinition.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`targetVersion` | [Version](version.md) |
`name` | string |
`defaultValue?` | any |
`onGetInitialValue?` | undefined &#124; function |

**Returns:** *[NumProperty](numproperty.md)*

## Properties

### `Optional` `Readonly` defaultValue

• **defaultValue**? : *any*

*Inherited from [PropertyDefinition](propertydefinition.md).[defaultValue](propertydefinition.md#optional-readonly-defaultvalue)*

___

###  isSerializationEnabled

• **isSerializationEnabled**: *boolean* = true

*Inherited from [PropertyDefinition](propertydefinition.md).[isSerializationEnabled](propertydefinition.md#isserializationenabled)*

___

### `Readonly` name

• **name**: *string*

*Inherited from [PropertyDefinition](propertydefinition.md).[name](propertydefinition.md#readonly-name)*

___

### `Optional` `Readonly` onGetInitialValue

• **onGetInitialValue**? : *undefined | function*

*Inherited from [PropertyDefinition](propertydefinition.md).[onGetInitialValue](propertydefinition.md#optional-readonly-ongetinitialvalue)*

___

### `Readonly` sequentialNumber

• **sequentialNumber**: *number*

*Inherited from [PropertyDefinition](propertydefinition.md).[sequentialNumber](propertydefinition.md#readonly-sequentialnumber)*

___

### `Readonly` targetVersion

• **targetVersion**: *[Version](version.md)*

*Inherited from [PropertyDefinition](propertydefinition.md).[targetVersion](propertydefinition.md#readonly-targetversion)*

## Methods

###  getInternalName

▸ **getInternalName**(): *string*

*Inherited from [PropertyDefinition](propertydefinition.md).[getInternalName](propertydefinition.md#getinternalname)*

**Returns:** *string*

___

###  parse

▸ **parse**(`sender`: [SerializableObject](serializableobject.md), `source`: [PropertyBag](../README.md#propertybag), `context`: [BaseSerializationContext](baseserializationcontext.md)): *number | undefined*

*Overrides [PropertyDefinition](propertydefinition.md).[parse](propertydefinition.md#parse)*

**Parameters:**

Name | Type |
------ | ------ |
`sender` | [SerializableObject](serializableobject.md) |
`source` | [PropertyBag](../README.md#propertybag) |
`context` | [BaseSerializationContext](baseserializationcontext.md) |

**Returns:** *number | undefined*

___

###  toJSON

▸ **toJSON**(`sender`: [SerializableObject](serializableobject.md), `target`: [PropertyBag](../README.md#propertybag), `value`: number | undefined, `context`: [BaseSerializationContext](baseserializationcontext.md)): *void*

*Overrides [PropertyDefinition](propertydefinition.md).[toJSON](propertydefinition.md#tojson)*

**Parameters:**

Name | Type |
------ | ------ |
`sender` | [SerializableObject](serializableobject.md) |
`target` | [PropertyBag](../README.md#propertybag) |
`value` | number &#124; undefined |
`context` | [BaseSerializationContext](baseserializationcontext.md) |

**Returns:** *void*
