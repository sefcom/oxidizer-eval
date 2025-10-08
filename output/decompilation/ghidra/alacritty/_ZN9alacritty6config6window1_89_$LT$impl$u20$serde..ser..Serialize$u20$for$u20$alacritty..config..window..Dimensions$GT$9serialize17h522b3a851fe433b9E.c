undefined8 *
_ZN9alacritty6config6window1_89__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__window__Dimensions_GT_9serialize17h522b3a851fe433b9E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *local_28;
  undefined4 local_20;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_28,param_3,2);
  if ((char)local_20 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
              (&local_28,"columns",7,param_1);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
              (&local_28,"lines",5,param_2);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_28,local_20);
    local_28 = (undefined8 *)0x0;
  }
  return local_28;
}