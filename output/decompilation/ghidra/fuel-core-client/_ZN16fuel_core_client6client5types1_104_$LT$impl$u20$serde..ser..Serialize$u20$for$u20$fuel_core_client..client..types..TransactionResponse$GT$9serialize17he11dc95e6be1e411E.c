void _ZN16fuel_core_client6client5types1_104__LT_impl_u20_serde__ser__Serialize_u20_for_u20_fuel_core_client__client__types__TransactionResponse_GT_9serialize17he11dc95e6be1e411E
               (undefined *param_1,long param_2)

{
  long lVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (*(code *)
    PTR__ZN77__LT_serde_json__value__ser__Serializer_u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h7a9ca1aa14a2b47cE_00720188
  )(&local_48,"TransactionResponse",0x13,2);
  local_78 = CONCAT44(uStack_44,local_48);
  uStack_70 = CONCAT44(uStack_3c,uStack_40);
  if (local_78 == -0x7ffffffffffffffe) {
    *(undefined8 *)(param_1 + 8) = uStack_70;
    *param_1 = 6;
    return;
  }
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
                    /* try { // try from 00396465 to 0039647c has its CatchHandler @ 003964cc */
  lVar1 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd5d0fafbf02edf13E
                    (&local_78,param_2 + 0x88);
  if (lVar1 == 0) {
    lVar1 = _ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h1b7a9fe931d70210E
                      (&local_78,param_2);
    if (lVar1 == 0) {
      local_28 = local_58;
      uStack_24 = uStack_54;
      uStack_20 = uStack_50;
      uStack_1c = uStack_4c;
      local_38 = local_68;
      uStack_34 = uStack_64;
      uStack_30 = uStack_60;
      uStack_2c = uStack_5c;
      local_48 = (undefined4)local_78;
      uStack_44 = local_78._4_4_;
      uStack_40 = (undefined4)uStack_70;
      uStack_3c = uStack_70._4_4_;
      (*(code *)
        PTR__ZN84__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde__ser__SerializeStruct_GT_3end17h414374fb171b4415E_00720190
      )(param_1,&local_48);
      return;
    }
  }
  *(long *)(param_1 + 8) = lVar1;
  *param_1 = 6;
  _ZN4core3ptr57drop_in_place_LT_serde_json__value__ser__SerializeMap_GT_17h8b43c782ab8dd56fE
            (&local_78);
  return;
}