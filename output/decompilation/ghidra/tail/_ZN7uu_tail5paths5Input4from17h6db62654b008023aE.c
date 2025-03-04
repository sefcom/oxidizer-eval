undefined8 *
_ZN7uu_tail5paths5Input4from17h6db62654b008023aE(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  auVar1 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h82be18048d2a1ec1E
                     (param_2);
  _ZN100__LT_uu_tail__paths__InputKind_u20_as_u20_core__convert__From_LT__RF_std__ffi__os_str__OsStr_GT__GT_4from17h609f399a6d164abaE
            (&local_30,auVar1._0_8_);
  if (local_30 == -0x8000000000000000) {
                    /* try { // try from 00210f88 to 00210fc4 has its CatchHandler @ 00211022 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8732f121b58e7ba0E
              (&local_60,"standard input",0xe);
    local_38 = local_50;
    local_48 = local_60;
    uStack_40 = uStack_58;
  }
  else {
    _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E
              (&local_60,auVar1._0_8_,auVar1._8_8_);
                    /* try { // try from 00210fcf to 00210fd8 has its CatchHandler @ 00211013 */
    _ZN73__LT_alloc__borrow__Cow_LT_str_GT__u20_as_u20_alloc__string__ToString_GT_9to_string17ha2cb0370e40ab073E
              (&local_48,uStack_58,local_50);
                    /* try { // try from 00210fd9 to 00210fe2 has its CatchHandler @ 00211022 */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h890545819f3c5be0E(&local_60);
  }
  param_1[5] = local_20;
  param_1[3] = local_30;
  param_1[4] = uStack_28;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  return param_1;
}