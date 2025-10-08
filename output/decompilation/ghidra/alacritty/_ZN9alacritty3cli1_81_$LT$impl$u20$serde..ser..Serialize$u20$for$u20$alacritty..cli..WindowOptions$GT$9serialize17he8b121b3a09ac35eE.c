undefined8 *
_ZN9alacritty3cli1_81__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__cli__WindowOptions_GT_9serialize17he8b121b3a09ac35eE
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,4);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hccb5da5b514e3e9aE
                       (&local_20,param_1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h97c2df2456352321E
                         (&local_20,param_1 + 0x50);
      if (puVar1 == (undefined8 *)0x0) {
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h5427b222cf220eccE
                  (&local_20,&DAT_001e9e10,0x10,param_1 + 0x98);
        puVar1 = (undefined8 *)
                 _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcb2c7c9149519398E
                           (&local_20,&DAT_00201cf6,6,*(undefined8 *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x48));
        if (puVar1 == (undefined8 *)0x0) {
          _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                    (*local_20,local_18);
          return (undefined8 *)0x0;
        }
      }
    }
  }
  return puVar1;
}