undefined8 *
_ZN9alacritty6config6cursor1_85__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__cursor__Cursor_GT_9serialize17h2631e0db585e0a7bE
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,6);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hf5d42bd2d5b5b7c4E
                       (&local_20,*(undefined *)((long)param_1 + 0xe),
                        *(undefined *)((long)param_1 + 0xf));
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h4c62f94c6f3174e2E
                         (&local_20,*(undefined4 *)((long)param_1 + 0xc),
                          *(undefined *)((long)param_1 + 0xd));
      if (puVar1 == (undefined8 *)0x0) {
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                  (&local_20,&DAT_001e7830,0x10,*(undefined *)((long)param_1 + 0x11));
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h15a78651f5e15c60E
                  (*(undefined4 *)(param_1 + 1),&local_20,"thickness",9);
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h81a5ee6e99a1bd8bE
                  (&local_20,*param_1);
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h284e9b41a00f530aE
                  (&local_20,"blink_timeout",0xd,*(undefined4 *)(param_1 + 2));
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                  (*local_20,local_18);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}