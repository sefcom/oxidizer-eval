undefined8 *
_ZN9alacritty6config5color1_87__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__color__DimColors_GT_9serialize17h2f3ba63fb3cb2406E
          (long param_1,undefined8 param_2)

{
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,8);
  if ((char)local_18 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
              (&local_20,"black",5,param_1);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
              (&local_20,"red",3,param_1 + 3);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
              (&local_20,"green",5,param_1 + 6);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
              (&local_20,"yellow",6,param_1 + 9);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
              (&local_20,"blue",4,param_1 + 0xc);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
              (&local_20,"magenta",7,param_1 + 0xf);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
              (&local_20,"cyan",4,param_1 + 0x12);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcaa60fed18aa524eE
              (&local_20,"white",5,param_1 + 0x15);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_20,local_18);
    local_20 = (undefined8 *)0x0;
  }
  return local_20;
}