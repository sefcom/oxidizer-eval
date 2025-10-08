undefined8 *
_ZN9alacritty6config9ui_config1_96__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__ui_config__Delta_LT_T_GT__GT_9serialize17h0b9a316c05b9340aE
          (undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *local_28;
  undefined4 local_20;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_28,param_3,2);
  if ((char)local_20 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h9dbff1b897f855a2E
              (&local_28,"x",param_1);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h9dbff1b897f855a2E
              (&local_28,"y",param_2);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_28,local_20);
    local_28 = (undefined8 *)0x0;
  }
  return local_28;
}