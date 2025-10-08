void _ZN16fuel_core_keygen1_84__LT_impl_u20_serde__ser__Serialize_u20_for_u20_fuel_core_keygen__NewKeyResponse_GT_9serialize17ha23a02590d9f8a6bE
               (undefined *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  bVar1 = *(byte *)(param_2 + 0xf);
  lVar2 = *param_2;
  (*(code *)
    PTR__ZN77__LT_serde_json__value__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h7a9ca1aa14a2b47cE_0024c6b8
  )(&local_58,"NewKeyResponse",0xe,(ulong)bVar1 + 2 + lVar2);
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  if (local_58 == (long *)0x8000000000000002) {
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *param_1 = 6;
    return;
  }
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  local_88 = local_58;
                    /* try { // try from 00181bc8 to 00181bcf has its CatchHandler @ 00181c69 */
  lVar3 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17ha82e0add9300603bE
                    (&local_88,param_2 + 0xb);
                    /* try { // try from 00181bf5 to 00181c33 has its CatchHandler @ 00181c69 */
  if ((((lVar3 == 0) &&
       ((bVar1 == 0 ||
        (lVar3 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h72ca2abd469adf17E
                           (&local_88,param_2 + 0xf), lVar3 == 0)))) &&
      ((lVar2 == 0 ||
       (local_58 = param_2,
       lVar3 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h70752fafb90c798cE
                         (&local_88,&local_58), lVar3 == 0)))) &&
     (lVar3 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he6fe9a1cbe390c78E
                        (&local_88,(long)param_2 + 0x99), lVar3 == 0)) {
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_58 = local_88;
    uStack_50 = (undefined4)uStack_80;
    uStack_4c = uStack_80._4_4_;
    (*(code *)
      PTR__ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_3end17h414374fb171b4415E_0024c6c0
    )(param_1,&local_58);
    return;
  }
  *(long *)(param_1 + 8) = lVar3;
  *param_1 = 6;
  _ZN4core3ptr57drop_in_place_LT_serde_json__value__ser__SerializeMap_GT_17h84d7b477e9fa0e88E
            (&local_88);
  return;
}