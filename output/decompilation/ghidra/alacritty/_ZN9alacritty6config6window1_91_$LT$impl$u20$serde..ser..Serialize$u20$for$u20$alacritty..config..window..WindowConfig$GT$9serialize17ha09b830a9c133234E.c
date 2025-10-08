undefined8 *
_ZN9alacritty6config6window1_91__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__window__WindowConfig_GT_9serialize17ha09b830a9c133234E
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,0xe);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h744c49a8bcb13573E
                       (&local_20,param_1 + 0x60);
    if (puVar1 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17habd7c1c57f4a3963E
                (&local_20,*(undefined *)(param_1 + 0x7a));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h0a08959a8d08803bE
                (&local_20,*(undefined *)(param_1 + 0x7b));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                (&local_20,"dynamic_padding",0xf,*(undefined4 *)(param_1 + 0x74));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                (&local_20,"dynamic_title",0xd,*(undefined *)(param_1 + 0x75));
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hf8718f1fc562fb45E
                         (&local_20,param_1);
      if (puVar1 == (undefined8 *)0x0) {
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h15a78651f5e15c60E
                  (*(undefined4 *)(param_1 + 0x6c),&local_20,"opacity",7);
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                  (&local_20,"blur",4,*(undefined *)(param_1 + 0x76));
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h17ee4998ca2a5cb9E
                  (&local_20,*(undefined4 *)(param_1 + 0x7c));
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                  (&local_20,&DAT_001fe0bf,0x11,*(undefined *)(param_1 + 0x77));
        puVar1 = (undefined8 *)
                 _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h6f20702cbdb64c63E
                           (&local_20,*(undefined4 *)(param_1 + 0x70),
                            *(undefined2 *)(param_1 + 0x72));
        if (puVar1 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)
                   _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd9a15b3003ad25f6E
                             (&local_20,*(undefined8 *)(param_1 + 0x50),
                              *(undefined8 *)(param_1 + 0x58));
          if (puVar1 == (undefined8 *)0x0) {
            _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h52baf4ca4dc79868E
                      (&local_20,*(undefined *)(param_1 + 0x79));
            _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h92dc711be8209396E
                      (&local_20,*(undefined4 *)(param_1 + 0x78));
            _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                      (*local_20,local_18);
            return (undefined8 *)0x0;
          }
        }
      }
    }
  }
  return puVar1;
}