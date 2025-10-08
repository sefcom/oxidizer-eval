void _ZN4just5alias1_84__LT_impl_u20_serde_core__ser__Serialize_u20_for_u20_just__alias__Alias_LT_T_GT__GT_9serialize17h7b8274ae3f2505b6E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  _ZN100__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17hfdad5c5179e3ff91E
            (&local_18,param_2,3);
  if ((char)local_10 != '\x03') {
    lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h865793240a227b81E
                      (&local_18,param_1);
    if (lVar1 == 0) {
      lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17hfa8b07ca5a303dcfE
                        (&local_18,param_1 + 0x20);
      if (lVar1 == 0) {
        lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17ha263f0f605cc658fE
                          (&local_18,param_1 + 0x18);
        if (lVar1 == 0) {
          _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hdc3b867c22c4b60fE
                    (local_18,local_10);
          return;
        }
      }
    }
  }
  return;
}