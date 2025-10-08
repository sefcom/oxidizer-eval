void _ZN9alacritty7display5color1_86__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__display__color__CellRgb_GT_9serialize17hb40e7733c4da70c4E
               (char *param_1,undefined8 param_2)

{
  if (*param_1 == '\0') {
    _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_22serialize_unit_variant17h9902c65e3ba750b4E
              (param_2,&DAT_002020c9,0xe);
    return;
  }
  if (*param_1 == '\x01') {
    _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_22serialize_unit_variant17h9902c65e3ba750b4E
              (param_2,&DAT_002020d7,0xe);
    return;
  }
  _ZN72__LT_alacritty__display__color__Rgb_u20_as_u20_serde__ser__Serialize_GT_9serialize17h2317636dce049321E
            (param_1 + 1);
  return;
}