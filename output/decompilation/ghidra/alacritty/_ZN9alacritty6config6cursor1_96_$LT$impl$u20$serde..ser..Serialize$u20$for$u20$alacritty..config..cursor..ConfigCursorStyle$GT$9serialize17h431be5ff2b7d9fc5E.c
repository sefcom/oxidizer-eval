undefined8 *
_ZN9alacritty6config6cursor1_96__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__cursor__ConfigCursorStyle_GT_9serialize17h431be5ff2b7d9fc5E
          (char param_1,undefined param_2,undefined8 *param_3)

{
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 *local_28;
  char local_20;
  
  if (param_1 == '\x03') {
    _ZN9alacritty6config6cursor1_90__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__cursor__CursorShape_GT_9serialize17h9b011caabb010f23E
              (param_2,*param_3);
  }
  else {
    _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
              (&local_28,param_3,2);
    if (local_20 == '\x03') {
      return local_28;
    }
    local_38 = local_28;
    local_30 = CONCAT31(local_30._1_3_,local_20);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h81499fddd266ffa4E
              (&local_38,param_1);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hbaa674dcf246b469E
              (&local_38,param_2);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_38,local_30);
  }
  return (undefined8 *)0x0;
}