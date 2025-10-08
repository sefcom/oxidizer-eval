undefined8 *
_ZN9alacritty6config5mouse1_83__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__mouse__Mouse_GT_9serialize17hc834be7a04eeda3aE
          (undefined param_1,undefined8 param_2)

{
  undefined8 *local_18;
  undefined4 local_10;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_18,param_2,1);
  if ((char)local_10 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
              (&local_18,&DAT_001e9570,0x10,param_1);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_18,local_10);
    local_18 = (undefined8 *)0x0;
  }
  return local_18;
}