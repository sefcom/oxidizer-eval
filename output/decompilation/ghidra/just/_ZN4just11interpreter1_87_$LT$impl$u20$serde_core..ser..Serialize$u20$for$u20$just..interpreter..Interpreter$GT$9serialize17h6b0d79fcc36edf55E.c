void _ZN4just11interpreter1_87__LT_impl_u20_serde_core__ser__Serialize_u20_for_u20_just__interpreter__Interpreter_GT_9serialize17h6b0d79fcc36edf55E
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  _ZN100__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde_core__ser__Serializer_GT_16serialize_struct17hfdad5c5179e3ff91E
            (&local_18,param_2,2);
  if ((char)local_10 != '\x03') {
    lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17hea2c6c8d9163c7f7E
                      (&local_18,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (lVar1 == 0) {
      lVar1 = _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_15serialize_field17h948252368f2890fcE
                        (&local_18,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
      if (lVar1 == 0) {
        _ZN91__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hdc3b867c22c4b60fE
                  (local_18,local_10);
        return;
      }
    }
  }
  return;
}