void _ZN9alacritty3cli1_81__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__cli__SocketMessage_GT_9serialize17h0828b40020a1814cE
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 < -0x7ffffffffffffffe) {
    lVar1 = *param_1 + -0x7fffffffffffffff;
  }
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_25serialize_newtype_variant17h758821e0e218fb3eE
                (param_2,param_1 + 2);
      return;
    }
    _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_25serialize_newtype_variant17h580662eeeab5ff9bE
              (param_2,param_1[2],param_1[3],param_1[4],param_1[5]);
    return;
  }
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_25serialize_newtype_variant17h7d8ab219591a2e3eE
            (param_2,param_1);
  return;
}