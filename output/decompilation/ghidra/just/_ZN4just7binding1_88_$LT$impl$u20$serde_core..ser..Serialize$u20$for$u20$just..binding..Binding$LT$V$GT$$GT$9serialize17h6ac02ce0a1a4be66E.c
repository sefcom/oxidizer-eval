void _ZN4just7binding1_88__LT_impl_u20_serde_core__ser__Serialize_u20_for_u20_just__binding__Binding_LT_V_GT__GT_9serialize17h6ac02ce0a1a4be66E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  _ZN100__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17hfdad5c5179e3ff91E
            (&local_18,param_2,4);
  if ((char)local_10 != '\x03') {
    lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                      (&local_18,"export",6,*(undefined *)(param_1 + 0xcd));
    if (lVar1 == 0) {
      lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17hfa8b07ca5a303dcfE
                        (&local_18,param_1 + 0x80);
      if (lVar1 == 0) {
        lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h8fce071aeefde71fE
                          (&local_18,"private",7,*(undefined *)(param_1 + 0xce));
        if (lVar1 == 0) {
          lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h5bafdab35f8b6ee8E
                            (&local_18,param_1);
          if (lVar1 == 0) {
            _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hdc3b867c22c4b60fE
                      (local_18,local_10);
            return;
          }
        }
      }
    }
  }
  return;
}