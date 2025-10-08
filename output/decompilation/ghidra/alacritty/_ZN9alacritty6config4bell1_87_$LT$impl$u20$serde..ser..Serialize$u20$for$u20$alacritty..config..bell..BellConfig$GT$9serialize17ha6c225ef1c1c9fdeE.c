undefined8 *
_ZN9alacritty6config4bell1_87__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__bell__BellConfig_GT_9serialize17ha6c225ef1c1c9fdeE
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,4);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h93f4958ac4447d91E
              (&local_20,*(undefined *)(param_1 + 0x32));
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h5e14459ab1ed8facE
                       (&local_20,&DAT_0020185a,7,param_1);
    if (puVar1 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
                (&local_20,"color",5,param_1 + 0x33);
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h784573cd3be1eb3aE
                (&local_20,&DAT_001ea208,8,*(undefined4 *)(param_1 + 0x30));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                (*local_20,local_18);
      return (undefined8 *)0x0;
    }
  }
  return puVar1;
}