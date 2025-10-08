undefined8 *
_ZN18alacritty_terminal4grid1_91__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_9serialize17h6635bcffedf2638aE
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,5);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h21a5eb9a24ba2cd1E
                       (&local_20,param_1);
    if (puVar1 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
                (&local_20,"columns",7,*(undefined8 *)(param_1 + 0x90));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
                (&local_20,"lines",5,*(undefined8 *)(param_1 + 0x98));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
                (&local_20,"display_offset",0xe,*(undefined8 *)(param_1 + 0xa0));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
                (&local_20,"max_scroll_limit",0x10,*(undefined8 *)(param_1 + 0xa8));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                (*local_20,local_18);
      return (undefined8 *)0x0;
    }
  }
  return puVar1;
}