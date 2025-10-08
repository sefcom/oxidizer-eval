undefined8 *
_ZN9alacritty3cli1_83__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__cli__TerminalOptions_GT_9serialize17hf607c0ac033dcd34E
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,3);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17ha1407653161aa2ffE
                       (&local_20,param_1 + 0x18);
    if (puVar1 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                (&local_20,&DAT_001ebba8,4,*(undefined4 *)(param_1 + 0x30));
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcb2c7c9149519398E
                         (&local_20,&DAT_0020185a,7,*(undefined8 *)(param_1 + 8),
                          *(undefined8 *)(param_1 + 0x10));
      if (puVar1 == (undefined8 *)0x0) {
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                  (*local_20,local_18);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}