undefined8 *
_ZN9alacritty6config5color1_89__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__color__MatchColors_GT_9serialize17hb02bc6f60f76127dE
          (long param_1,undefined8 param_2)

{
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,2);
  if ((char)local_18 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h1982d51700ef5f91E
              (&local_20,"foreground",param_1);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h1982d51700ef5f91E
              (&local_20,"background",param_1 + 4);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_20,local_18);
    local_20 = (undefined8 *)0x0;
  }
  return local_20;
}