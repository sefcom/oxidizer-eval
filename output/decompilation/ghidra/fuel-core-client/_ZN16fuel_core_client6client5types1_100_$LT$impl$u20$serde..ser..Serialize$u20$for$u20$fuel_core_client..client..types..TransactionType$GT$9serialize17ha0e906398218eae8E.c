void _ZN16fuel_core_client6client5types1_100__LT_impl_u20_serde__ser__Serialize_u20_for_u20_fuel_core_client__client__types__TransactionType_GT_9serialize17ha0e906398218eae8E
               (undefined *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == -0x7ffffffffffffffa) {
    (*(code *)
      PTR__ZN82__LT_serde_json__value__ser__RawValueEmitter_u20_as_u20_serde__ser__Serializer_GT_22serialize_unit_variant17h55ce2992e3d54d3aE_00720168
    )(param_1,"TransactionType",0xf,1,"Unknown",7);
    return;
  }
  uVar1 = (*(code *)PTR__ZN10serde_json3ser17invalid_raw_value17h042796ebf35e4ba4E_00720998)();
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 6;
  return;
}