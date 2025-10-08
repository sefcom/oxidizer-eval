void _ZN16fuel_core_keygen1_89__LT_impl_u20_serde__ser__Serialize_u20_for_u20_fuel_core_keygen__ParseSecretResponse_GT_9serialize17h6856df9bd3cb0936E
               (undefined *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  bVar1 = *(byte *)(param_2 + 0xb);
  lVar2 = *param_2;
  (*(code *)
    PTR__ZN77__LT_serde_json__value__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h7a9ca1aa14a2b47cE_0024c6b8
  )(&local_88,"ParseSecretResponse",0x13,(ulong)bVar1 + 1 + lVar2);
  if (local_88 == (long *)0x8000000000000002) {
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_7c,uStack_80);
    *param_1 = 6;
    return;
  }
  uStack_48 = CONCAT44(uStack_7c,uStack_80);
  local_40 = CONCAT44(uStack_74,local_78);
  uStack_38 = CONCAT44(uStack_6c,uStack_70);
  local_30 = local_68;
  uStack_2c = uStack_64;
  uStack_28 = uStack_60;
  uStack_24 = uStack_5c;
  local_50 = local_88;
                    /* try { // try from 00181d0c to 00181d4a has its CatchHandler @ 00181d98 */
  if ((((bVar1 == 0) ||
       (lVar3 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h72ca2abd469adf17E
                          (&local_50,param_2 + 0xb), lVar3 == 0)) &&
      ((lVar2 == 0 ||
       (local_88 = param_2,
       lVar3 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h70752fafb90c798cE
                         (&local_50,&local_88), lVar3 == 0)))) &&
     (lVar3 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he6fe9a1cbe390c78E
                        (&local_50,(long)param_2 + 0x79), lVar3 == 0)) {
    local_68 = local_30;
    uStack_64 = uStack_2c;
    uStack_60 = uStack_28;
    uStack_5c = uStack_24;
    local_78 = (undefined4)local_40;
    uStack_74 = local_40._4_4_;
    uStack_70 = (undefined4)uStack_38;
    uStack_6c = uStack_38._4_4_;
    local_88 = local_50;
    uStack_80 = (undefined4)uStack_48;
    uStack_7c = uStack_48._4_4_;
    (*(code *)
      PTR__ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_3end17h414374fb171b4415E_0024c6c0
    )(param_1,&local_88);
    return;
  }
  *(long *)(param_1 + 8) = lVar3;
  *param_1 = 6;
  _ZN4core3ptr57drop_in_place_LT_serde_json__value__ser__SerializeMap_GT_17h84d7b477e9fa0e88E
            (&local_50);
  return;
}