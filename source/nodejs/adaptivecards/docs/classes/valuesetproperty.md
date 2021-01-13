[Adaptive Cards Javascript SDK](../README.md) › [ValueSetProperty](valuesetproperty.md)

# Class: ValueSetProperty

## Hierarchy

* [PropertyDefinition](propertydefinition.md)

  ↳ **ValueSetProperty**

## Index

### Constructors

* [constructor](valuesetproperty.md#constructor)

### Properties

* [defaultValue](valuesetproperty.md#optional-readonly-defaultvalue)
* [isSerializationEnabled](valuesetproperty.md#isserializationenabled)
* [name](valuesetproperty.md#readonly-name)
* [onGetInitialValue](valuesetproperty.md#optional-readonly-ongetinitialvalue)
* [sequentialNumber](valuesetproperty.md#readonly-sequentialnumber)
* [targetVersion](valuesetproperty.md#readonly-targetversion)
* [values](valuesetproperty.md#readonly-values)

### Methods

* [getInternalName](valuesetproperty.md#getinternalname)
* [isValidValue](valuesetproperty.md#isvalidvalue)
* [parse](valuesetproperty.md#parse)
* [toJSON](valuesetproperty.md#tojson)

## Constructors

###  constructor

\+ **new ValueSetProperty**(`targetVersion`: [Version](version.md), `name`: string, `values`: [IVersionedValue](../interfaces/iversionedvalue.md)‹string›[], `defaultValue?`: undefined | string, `onGetInitialValue?`: undefined | function): *[ValueSetProperty](valuesetproperty.md)*

*Overrides [PropertyDefinition](propertydefinition.md).[constructor](propertydefinition.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`targetVersion` | [Version](version.md) |
`name` | string |
`values` | [IVersionedValue](../interfaces/iversionedvalue.md)‹string›[] |
`defaultValue?` | undefined &#124; string |
`onGetInitialValue?` | undefined &#124; function |

**Returns:** *[ValueSetProperty](valuesetproperty.md)*

## Properties

### `Optional` `Readonly` defaultValue

• **defaultValue**? : *undefined | string*

*Overrides [PropertyDefinition](propertydefinition.md).[defaultValue](propertydefinition.md#optional-readonly-defaultvalue)*

___

###  isSerializationEnabled

• **isSerializationEnabled**: *boolean* = true

*Inherited from [PropertyDefinition](propertydefinition.md).[isSerializationEnabled](propertydefinition.md#isserializationenabled)*

___

### `Readonly` name

• **name**: *string*

*Overrides [PropertyDefinition](propertydefinition.md).[name](propertydefinition.md#readonly-name)*

___

### `Optional` `Readonly` onGetInitialValue

• **onGetInitialValue**? : *undefined | function*

*Overrides [PropertyDefinition](propertydefinition.md).[onGetInitialValue](propertydefinition.md#optional-readonly-ongetinitialvalue)*

___

### `Readonly` sequentialNumber

• **sequentialNumber**: *number*

*Inherited from [PropertyDefinition](propertydefinition.md).[sequentialNumber](propertydefinition.md#readonly-sequentialnumber)*

___

### `Readonly` targetVersion

• **targetVersion**: *[Version](version.md)*

*Overrides [PropertyDefinition](propertydefinition.md).[targetVersion](propertydefinition.md#readonly-targetversion)*

___

### `Readonly` values

• **values**: *[IVersionedValue](../interfaces/iversionedvalue.md)‹string›[]*

## Methods

###  getInternalName

▸ **getInternalName**(): *string*

*Inherited from [PropertyDefinition](propertydefinition.md).[getInternalName](propertydefinition.md#getinternalname)*

**Returns:** *string*

___

###  isValidValue

▸ **isValidValue**(`value`: string, `context`: [BaseSerializationContext](baseserializationcontext.md)): *boolean*

**Parameters:**

Name | Type |
------ | ------ |
`value` | string |
`context` | [BaseSerializationContext](baseserializationcontext.md) |

**Returns:** *boolean*

___

###  parse

▸ **parse**(`sender`: [SerializableObject](serializableobject.md), `source`: [PropertyBag](../README.md#propertybag), `context`: [BaseSerializationContext](baseserializationcontext.md)): *string | undefined*

*Overrides [PropertyDefinition](propertydefinition.md).[parse](propertydefinition.md#parse)*

**Parameters:**

Name | Type |
------ | ------ |
`sender` | [SerializableObject](serializableobject.md) |
`source` | [PropertyBag](../README.md#propertybag) |
`context` | [BaseSerializationContext](baseserializationcontext.md) |

**Returns:** *string | undefined*

___

###  toJSON

▸ **toJSON**(`sender`: [SerializableObject](serializableobject.md), `target`: [PropertyBag](../README.md#propertybag), `value`: string | undefined, `context`: [BaseSerializationContext](baseserializationcontext.md)): *void*

*Overrides [PropertyDefinition](propertydefinition.md).[toJSON](propertydefinition.md#tojson)*

**Parameters:**

Name | Type |
------ | ------ |
`sender` | [SerializableObject](serializableobject.md) |
`target` | [PropertyBag](../README.md#propertybag) |
`value` | string &#124; undefined |
`context` | [BaseSerializationContext](baseserializationcontext.md) |

**Returns:** *void*
