long _ZN16fuel_core_client11reqwest_ext1_113__LT_impl_u20_serde__ser__Serialize_u20_for_u20_fuel_core_client__reqwest_ext__FuelOperation_LT_Operation_GT__GT_9serialize17h0488957e77c1d8d0E
               (long param_1)

{
  long lVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_13serialize_map17h35db61d25056f288E
            (&local_28);
  if ((char)local_28 == '\x02') {
    lVar1 = CONCAT44(uStack_1c,uStack_20);
  }
  else {
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    local_18 = local_28;
    lVar1 = _ZN102__LT_cynic__operation__Operation_LT_QueryFragment_C_Variables_GT__u20_as_u20_serde__ser__Serialize_GT_9serialize17h3088d4c4c71a1701E
                      (param_1,&local_18);
    if (lVar1 == 0) {
      lVar1 = _ZN5serde3ser12SerializeMap15serialize_entry17ha105efc45127fbc0E
                        (&local_18,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
      if (lVar1 == 0) {
        local_28 = local_18;
        uStack_24 = uStack_14;
        uStack_20 = uStack_10;
        uStack_1c = uStack_c;
        _ZN83__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeMap_GT_3end17h28851836131536caE
                  (&local_28);
        return 0;
      }
    }
  }
  return lVar1;
}