undefined8 *
_ZN9alacritty6config6window1_87__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__window__Identity_GT_9serialize17hf3851234d94fd96eE
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,2);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hb5400f5b6759c993E
              (&local_20,&DAT_001fe07a,5,*(undefined8 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x10));
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h49c65d3945825339E
                       (&local_20,param_1 + 0x18);
    if (puVar1 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                (*local_20,local_18);
      return (undefined8 *)0x0;
    }
  }
  return puVar1;
}