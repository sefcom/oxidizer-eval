undefined8 *
_ZN18alacritty_terminal4grid7storage1_103__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty_terminal__grid__storage__Storage_LT_T_GT__GT_9serialize17h9849e190c080e021E
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
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h80a98b7ad9f7c44dE
                       (&local_20,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (puVar1 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
                (&local_20,&DAT_001ed078,4,*(undefined8 *)(param_1 + 0x18));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
                (&local_20,"visible_lines",0xd,*(undefined8 *)(param_1 + 0x20));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
                (&local_20,"len",3,*(undefined8 *)(param_1 + 0x28));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                (*local_20,local_18);
      return (undefined8 *)0x0;
    }
  }
  return puVar1;
}