void _ZN3bat5theme9ThemeName3new17hd040bb7840011c00E(undefined8 *param_1)

{
  char cVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17h35c1f69784b2d4f1E(&local_20);
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                    (uStack_18,local_10,&DAT_002a2e73,7);
  if (cVar1 != '\0') {
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_20);
    return;
  }
  param_1[2] = local_10;
  *param_1 = local_20;
  param_1[1] = uStack_18;
  return;
}