undefined8 *
_ZN18alacritty_terminal4grid3row1_95__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty_terminal__grid__row__Row_LT_T_GT__GT_9serialize17h51c55fcc77707b60E
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  undefined4 local_10;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_18,param_2,2);
  puVar1 = local_18;
  if ((char)local_10 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h81f11216d5771df8E
                       (&local_18,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (puVar1 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hc7b2f370ad8f0396E
                (&local_18,"occ",3,*(undefined8 *)(param_1 + 0x18));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                (*local_18,local_10);
      return (undefined8 *)0x0;
    }
  }
  return puVar1;
}