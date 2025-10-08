undefined8 *
_ZN9alacritty6config4font1_81__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__font__Font_GT_9serialize17h4b95852879e2b310E
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,9);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h61835a098f3ea790E
                       (&local_20,"offsetGaveUpHaystackTooLongUnsupportedAnchored",6,
                        *(undefined4 *)(param_1 + 0xc4),*(undefined *)(param_1 + 0xc5));
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h61835a098f3ea790E
                         (&local_20,"glyph_offset",0xc,*(undefined *)(param_1 + 0xc6),
                          *(undefined *)(param_1 + 199));
      if (puVar1 == (undefined8 *)0x0) {
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                  (&local_20,"use_thin_strokes",0x10,*(undefined4 *)(param_1 + 200));
        puVar1 = (undefined8 *)
                 _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he7b6e7b5cb79b69eE
                           (&local_20,param_1);
        if (puVar1 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)
                   _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h0cedf239ce9f5e24E
                             (&local_20,&DAT_001ec4c8,4,param_1 + 0x30);
          if (puVar1 == (undefined8 *)0x0) {
            puVar1 = (undefined8 *)
                     _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h0cedf239ce9f5e24E
                               (&local_20,"italic",6,param_1 + 0x60);
            if (puVar1 == (undefined8 *)0x0) {
              puVar1 = (undefined8 *)
                       _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h0cedf239ce9f5e24E
                                 (&local_20,"bold_italic",0xb,param_1 + 0x90);
              if (puVar1 == (undefined8 *)0x0) {
                _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h6e804f055b9e11c7E
                          (&local_20,*(undefined4 *)(param_1 + 0xc0));
                _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                          (&local_20,"builtin_box_drawing",0x13,*(undefined *)(param_1 + 0xc9));
                _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                          (*local_20,local_18);
                return (undefined8 *)0x0;
              }
            }
          }
        }
      }
    }
  }
  return puVar1;
}