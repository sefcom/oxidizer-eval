long * _ZN6uu_seq11numberparse26parse_decimal_and_exponent17hfdc1c6342c162095E
                 (long *param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined uVar7;
  bool bVar8;
  long local_b0;
  char local_98;
  undefined7 uStack_97;
  undefined4 local_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long local_70;
  undefined uStack_68;
  undefined7 uStack_67;
  undefined uStack_60;
  undefined7 uStack_5f;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar2 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                    (param_5 + 1);
  if (lVar2 == 0) {
    uVar4 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                      (param_2,param_3,param_5 + 1,param_3,
                       &PTR_s_src_uu_seq_src_numberparse_rs_00243f58);
                    /* catch() { ... } // from try @ 001ce0ae with catch @ 001ce1f9
                       catch() { ... } // from try @ 001ce127 with catch @ 001ce1f9 */
                    /* try { // try from 001ce1fc to 001ce205 has its CatchHandler @ 001ce20e */
    _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(&local_70);
    plVar5 = (long *)_Unwind_Resume(uVar4);
    return plVar5;
  }
  _ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_i64_GT_8from_str17hb0cdd6b069f41ab1E
            (&local_98,lVar2);
  if (local_98 != '\0') {
LAB_001ce05f:
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = -0x7ffffffffffffffc;
    return param_1;
  }
  lVar2 = CONCAT44(iStack_8c,local_90);
  _ZN10bigdecimal8impl_num68__LT_impl_u20_num_traits__Num_u20_for_u20_bigdecimal__BigDecimal_GT_14from_str_radix17h190f4d397e37218eE
            (&local_98,param_2,param_3);
  local_70 = CONCAT71(uStack_97,local_98);
  if (local_70 == -0x8000000000000000) {
    local_48 = local_90;
    iStack_44 = iStack_8c;
    uStack_40 = uStack_88;
    uStack_3c = uStack_84;
    _ZN4core3ptr53drop_in_place_LT_bigdecimal__ParseBigDecimalError_GT_17h74d029f24c9f47dbE
              (&local_48);
    goto LAB_001ce05f;
  }
  uStack_67 = CONCAT43(iStack_8c,local_90._1_3_);
  uStack_5f = CONCAT43(uStack_84,uStack_88._1_3_);
  uStack_60 = (undefined)uStack_88;
  uStack_58 = local_80;
  uStack_54 = uStack_7c;
  local_50 = uStack_78;
  uStack_4c = uStack_74;
  uStack_68 = (undefined)local_90;
  if (param_5 != 0) {
    uVar7 = param_5 == param_3;
    if (param_3 <= param_5) goto LAB_001ce0c6;
    if (*(char *)(param_2 + param_5) < -0x40) {
      do {
                    /* try { // try from 001ce0ae to 001ce0d8 has its CatchHandler @ 001ce1f9 */
        uVar7 = 1;
        _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                  (param_2,param_3,0,param_5,&PTR_s_src_uu_seq_src_numberparse_rs_00243f70);
LAB_001ce0c6:
      } while (!(bool)uVar7);
    }
  }
  _ZN4core3num7dec2flt60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_f64_GT_8from_str17hfde7dd7a3aaead31E
            (&local_98,param_2,param_5);
  if (local_98 == '\0') {
    lVar3 = 2;
    if (0 < lVar2) {
      lVar3 = lVar2 + 2;
    }
    local_b0 = 1;
    if (iStack_8c < 0) {
      local_b0 = lVar3;
    }
    lVar3 = param_4 + lVar2;
                    /* try { // try from 001ce127 to 001ce196 has its CatchHandler @ 001ce1f9 */
    if (((!SCARRY8(param_4,lVar2)) &&
        ((cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h9cb9db4a84f1050bE
                            (param_2,param_3,"-.",2), cVar1 == '\0' ||
         (bVar8 = SCARRY8(lVar3,1), lVar3 = lVar3 + 1, !bVar8)))) &&
       ((lVar3 < local_b0 || (local_b0 = lVar3, -1 < lVar3)))) {
      uVar6 = (~param_4 + param_5) - lVar2;
      if ((long)(~param_4 + param_5) < lVar2) {
        uVar6 = 0;
      }
      else {
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0ebacd778ae85bc5E(uVar6 >> 0x3f);
      }
      cVar1 = _ZN6uu_seq11numberparse19is_minus_zero_float17hd0ffcc4c912113deE
                        (param_2,param_3,&local_70);
      if (cVar1 == '\0') {
        param_1[4] = CONCAT44(uStack_4c,local_50);
        param_1[2] = CONCAT71(uStack_5f,uStack_60);
        param_1[3] = CONCAT44(uStack_54,uStack_58);
        *param_1 = local_70;
        param_1[1] = CONCAT71(uStack_67,uStack_68);
        param_1[5] = local_b0;
        param_1[6] = uVar6;
        return param_1;
      }
      *param_1 = -0x7ffffffffffffffe;
      param_1[5] = local_b0;
      param_1[6] = uVar6;
      goto LAB_001ce118;
    }
  }
  *(undefined *)(param_1 + 1) = 0;
  *param_1 = -0x7ffffffffffffffc;
LAB_001ce118:
  _ZN4core3ptr43drop_in_place_LT_bigdecimal__BigDecimal_GT_17h9ea64fcf6ce46304E(&local_70);
  return param_1;
}