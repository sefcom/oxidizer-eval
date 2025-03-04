long * _ZN6uu_seq11numberparse25parse_exponent_no_decimal17hd2950fa793267dc0E
                 (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long local_98;
  undefined uStack_90;
  undefined7 uStack_8f;
  undefined uStack_88;
  undefined7 uStack_87;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  char local_70;
  undefined7 uStack_6f;
  undefined4 local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                    (param_4 + 1);
  if (lVar3 == 0) {
    uVar5 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                      (param_2,param_3,param_4 + 1,param_3,
                       &PTR_s_src_uu_seq_src_numberparse_rs_00243f40);
                    /* catch() { ... } // from try @ 001cddab with catch @ 001cde71 */
                    /* try { // try from 001cde74 to 001cde7b has its CatchHandler @ 001cde84 */
    _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(&local_98);
    plVar6 = (long *)_Unwind_Resume(uVar5);
    return plVar6;
  }
  _ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_i64_GT_8from_str17hb0cdd6b069f41ab1E
            (&local_70,lVar3);
  iVar1 = iStack_64;
  if (local_70 != '\0') {
LAB_001cdd71:
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = -0x7ffffffffffffffc;
    return param_1;
  }
  lVar3 = CONCAT44(iStack_64,local_68);
  _ZN10bigdecimal8impl_num68__LT_impl_u20_num_traits__Num_u20_for_u20_bigdecimal__BigDecimal_GT_14from_str_radix17h190f4d397e37218eE
            (&local_70,param_2,param_3);
  local_98 = CONCAT71(uStack_6f,local_70);
  if (local_98 == -0x8000000000000000) {
    local_48 = local_68;
    iStack_44 = iStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    _ZN4core3ptr53drop_in_place_LT_bigdecimal__ParseBigDecimalError_GT_17h74d029f24c9f47dbE
              (&local_48);
    goto LAB_001cdd71;
  }
  uStack_8f = CONCAT43(iStack_64,local_68._1_3_);
  uStack_87 = CONCAT43(uStack_5c,uStack_60._1_3_);
  uStack_88 = (undefined)uStack_60;
  uStack_80 = local_58;
  uStack_7c = uStack_54;
  local_78 = uStack_50;
  uStack_74 = uStack_4c;
  uStack_90 = (undefined)local_68;
                    /* try { // try from 001cddab to 001cde04 has its CatchHandler @ 001cde71 */
  cVar2 = _ZN6uu_seq11numberparse19is_minus_zero_float17hd0ffcc4c912113deE
                    (param_2,param_3,&local_98);
  if (cVar2 == '\0') {
    if (SCARRY8(param_4,lVar3)) {
      *(undefined *)(param_1 + 1) = 0;
      *param_1 = -0x7ffffffffffffffc;
      goto LAB_001cde25;
    }
    lVar4 = 1;
    if (1 < param_4 + lVar3) {
      lVar4 = param_4 + lVar3;
    }
    lVar4 = lVar4 + (ulong)((char)uStack_80 == '\0');
  }
  else {
    lVar4 = 2;
    if (0 < lVar3) {
      lVar4 = lVar3 + 2;
    }
  }
  cVar2 = _ZN6uu_seq11numberparse19is_minus_zero_float17hd0ffcc4c912113deE
                    (param_2,param_3,&local_98);
  uVar7 = (long)iVar1 >> 0x1f & -lVar3;
  if (cVar2 == '\0') {
    param_1[4] = CONCAT44(uStack_74,local_78);
    param_1[2] = CONCAT71(uStack_87,uStack_88);
    param_1[3] = CONCAT44(uStack_7c,uStack_80);
    *param_1 = local_98;
    param_1[1] = CONCAT71(uStack_8f,uStack_90);
    param_1[5] = lVar4;
    param_1[6] = uVar7;
    return param_1;
  }
  *param_1 = -0x7ffffffffffffffe;
  param_1[5] = lVar4;
  param_1[6] = uVar7;
LAB_001cde25:
  _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(&local_98);
  return param_1;
}