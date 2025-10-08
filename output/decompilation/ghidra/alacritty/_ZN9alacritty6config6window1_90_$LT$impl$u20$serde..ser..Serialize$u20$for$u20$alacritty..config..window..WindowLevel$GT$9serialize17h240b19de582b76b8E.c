void _ZN9alacritty6config6window1_90__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__window__WindowLevel_GT_9serialize17h240b19de582b76b8E
               (ulong param_1,undefined8 param_2)

{
  if ((param_1 & 1) != 0) {
    _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_22serialize_unit_variant17h9902c65e3ba750b4E
              (param_2,"AlwaysOnTop",0xb);
    return;
  }
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_22serialize_unit_variant17h9902c65e3ba750b4E
            (param_2,"NormalOblique",6);
  return;
}