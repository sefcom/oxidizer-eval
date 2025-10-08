undefined8 *
_ZN9alacritty6config5color1_88__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__color__HintColors_GT_9serialize17ha64f33ed1fe44d60E
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
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hf3adf65de168f2feE
                       (&local_18,param_1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17ha6bf970f14d2af8eE
                         (&local_18,param_1 + 8);
      if (puVar1 == (undefined8 *)0x0) {
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                  (*local_18,local_10);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}