void _ZN3bat6assets14lazy_theme_set1_94__LT_impl_u20_serde__de__Deserialize_u20_for_u20_bat__assets__lazy_theme_set__LazyThemeSet_GT_11deserialize17h79797e215bc54d40E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulong uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_40 = 1;
  uStack_48 = param_2;
  _ZN5serde2de9SeqAccess12next_element17h64c6d6bab901ebb8E(&uStack_28,&uStack_48);
  if (uStack_28 != 2) {
    uStack_38 = uStack_18;
    uStack_34 = uStack_14;
    uStack_30 = uStack_10;
    uStack_2c = uStack_c;
    if ((uStack_28 & 1) != 0) {
      param_1[2] = CONCAT44(uStack_14,uStack_18);
      param_1[3] = CONCAT44(uStack_c,uStack_10);
      uVar1 = 0;
      goto LAB_005469c3;
    }
    uStack_20 = _ZN5serde2de5Error14invalid_length17h2a6738f98ec035f2E
                          (0,&PTR_s_struct_LazyThemeSet_with_1_eleme_007cefc8,&DAT_007cbdb0);
  }
  uVar1 = 1;
LAB_005469c3:
  param_1[1] = uStack_20;
  *param_1 = uVar1;
  return;
}