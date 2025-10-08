void _ZN16fuel_core_keygen1_77__LT_impl_u20_serde__ser__Serialize_u20_for_u20_fuel_core_keygen__KeyType_GT_9serialize17h251b27f8bf23e753E
               (undefined8 param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    _ZN77__LT_serde_json__value__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_22serialize_unit_variant17h3966ea39887aa664E
              (param_1,"peering",7);
    return;
  }
  _ZN77__LT_serde_json__value__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_22serialize_unit_variant17h3966ea39887aa664E
            (param_1,"block-production",0x10);
  return;
}