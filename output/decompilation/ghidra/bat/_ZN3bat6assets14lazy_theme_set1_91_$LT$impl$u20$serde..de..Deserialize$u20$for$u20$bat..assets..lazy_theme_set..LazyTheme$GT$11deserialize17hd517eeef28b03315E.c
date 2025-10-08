void _ZN3bat6assets14lazy_theme_set1_91__LT_impl_u20_serde__de__Deserialize_u20_for_u20_bat__assets__lazy_theme_set__LazyTheme_GT_11deserialize17hd517eeef28b03315E
               (long *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  uStack_30 = 1;
  uStack_38 = param_2;
  _ZN5serde2de9SeqAccess12next_element17haa3b9dd3840f626fE(&lStack_28,&uStack_38);
  if (lStack_28 != -0x7fffffffffffffff) {
    if (lStack_28 != -0x8000000000000000) {
      *param_1 = lStack_28;
      param_1[1] = lStack_20;
      param_1[2] = lStack_18;
      param_1[3] = -0x8000000000000000;
      return;
    }
    lStack_20 = _ZN5serde2de5Error14invalid_length17h2a6738f98ec035f2E
                          (0,&PTR_s_struct_LazyTheme_with_1_elementu_007cefd8,&DAT_007cbdb0);
  }
  param_1[1] = lStack_20;
  *param_1 = -0x8000000000000000;
  return;
}