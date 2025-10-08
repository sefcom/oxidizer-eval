undefined8 *
_ZN9alacritty3cli1_80__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__cli__IpcGetConfig_GT_9serialize17hc2d465425a3c42bdE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 *local_30;
  undefined4 local_28;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_30,param_5,1);
  if ((char)local_28 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he1b55bffd4d8313aE
              (&local_30,param_1,param_2,param_3,param_4);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_30,local_28);
    local_30 = (undefined8 *)0x0;
  }
  return local_30;
}