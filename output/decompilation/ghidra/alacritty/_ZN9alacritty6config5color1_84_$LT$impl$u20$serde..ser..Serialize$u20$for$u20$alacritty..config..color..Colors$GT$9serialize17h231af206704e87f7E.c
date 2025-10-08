undefined8 *
_ZN9alacritty6config5color1_84__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__color__Colors_GT_9serialize17h231af206704e87f7E
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
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h1ddec313a7001d1aE
                       (&local_20,param_1 + 0x90);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h71d7faf466ec259fE
                         (&local_20,"cursor",6,param_1 + 0x28);
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)
                 _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h71d7faf466ec259fE
                           (&local_20,"vi_mode_cursor",0xe,param_1 + 0x30);
        if (puVar1 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)
                   _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h71d7faf466ec259fE
                             (&local_20,"selection",9,param_1 + 0x38);
          if (puVar1 == (undefined8 *)0x0) {
            puVar1 = (undefined8 *)
                     _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h62b8e4a1c01765baE
                               (&local_20,param_1 + 0x60);
            if (puVar1 == (undefined8 *)0x0) {
              puVar1 = (undefined8 *)
                       _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h26e6d275d1ada039E
                                 (&local_20,param_1 + 0x78);
              if (puVar1 == (undefined8 *)0x0) {
                puVar1 = (undefined8 *)
                         _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hd1df34989ca44a95E
                                   (&local_20,param_1 + 0x9e);
                if (puVar1 == (undefined8 *)0x0) {
                  puVar1 = (undefined8 *)
                           _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17ha1e5829f8f90bae3E
                                     (&local_20,*(undefined8 *)(param_1 + 8),
                                      *(undefined8 *)(param_1 + 0x10));
                  if (puVar1 == (undefined8 *)0x0) {
                    puVar1 = (undefined8 *)
                             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h6cec2fa8fedcece8E
                                       (&local_20,param_1 + 0x40);
                    if (puVar1 == (undefined8 *)0x0) {
                      puVar1 = (undefined8 *)
                               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h37995c33e0cbb27aE
                                         (&local_20,param_1 + 0x18);
                      if (puVar1 == (undefined8 *)0x0) {
                        puVar1 = (undefined8 *)
                                 _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hafab9122653b938aE
                                           (&local_20,param_1 + 0x50);
                        if (puVar1 == (undefined8 *)0x0) {
                          _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                                    (&local_20,"transparent_background_colors",0x1d,
                                     *(undefined *)(param_1 + 0xb7));
                          _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                                    (&local_20,"draw_bold_text_with_bright_colors",0x21,
                                     *(undefined4 *)(param_1 + 0xb8));
                          puVar1 = (undefined8 *)
                                   _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcf81b0961741eebaE
                                             (&local_20,param_1 + 0x20);
                          if (puVar1 == (undefined8 *)0x0) {
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
            }
          }
        }
      }
    }
  }
  return puVar1;
}