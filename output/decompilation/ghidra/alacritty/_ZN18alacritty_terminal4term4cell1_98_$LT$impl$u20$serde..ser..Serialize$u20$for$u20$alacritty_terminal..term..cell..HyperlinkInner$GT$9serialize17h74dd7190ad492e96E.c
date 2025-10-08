undefined8 *
_ZN18alacritty_terminal4term4cell1_98__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty_terminal__term__cell__HyperlinkInner_GT_9serialize17h74dd7190ad492e96E
          (long param_1,undefined8 param_2)

{
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,2);
  if ((char)local_18 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hb5400f5b6759c993E
              (&local_20,"id",2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hb5400f5b6759c993E
              (&local_20,"uri",3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_20,local_18);
    local_20 = (undefined8 *)0x0;
  }
  return local_20;
}