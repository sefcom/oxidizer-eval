void _ZN7uu_tail4args9parse_num17hf0843dd0db285fb1E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int extraout_EDX;
  long lVar5;
  undefined auVar6 [16];
  long local_58;
  long local_50;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h4e90a49aa4a98ea5E(param_2,param_3);
  lVar5 = auVar6._8_8_;
  lVar3 = auVar6._0_8_;
  local_50 = lVar5 + lVar3;
  local_58 = lVar3;
  iVar2 = _ZN4core3str11validations15next_code_point17habe44cbb115926faE(&local_58);
  if (iVar2 != 0) {
    if (extraout_EDX == 0x2b) {
      auVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                         (lVar3,lVar5);
      if (auVar6._0_8_ == 0) {
LAB_001fa137:
        uVar4 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                          (lVar3,lVar5,1,lVar5,&PTR_s_src_uu_tail_src_args_rs_002bb690);
                    /* catch() { ... } // from try @ 001fa0ce with catch @ 001fa152 */
                    /* try { // try from 001fa155 to 001fa15c has its CatchHandler @ 001fa165 */
        _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_u64_C_uucore__parser__parse_size__ParseSizeError_GT__GT_17h1cd421d162b21d56E
                  (&local_58);
        _Unwind_Resume(uVar4);
        return;
      }
      bVar1 = true;
      goto LAB_001fa09c;
    }
    if (extraout_EDX == 0x2d) {
      auVar6 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                         (lVar3,lVar5);
      if (auVar6._0_8_ == 0) goto LAB_001fa137;
      bVar1 = false;
      goto LAB_001fa09c;
    }
  }
  bVar1 = false;
LAB_001fa09c:
  _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE
            (&local_58,auVar6._0_8_,auVar6._8_8_);
  if ((int)local_58 == 3) {
    if (local_50 == 0) {
      if (bVar1) {
        param_1[1] = 2;
      }
      else {
        param_1[1] = 3;
      }
    }
    else if (bVar1) {
      param_1[1] = 1;
      param_1[2] = local_50;
    }
    else {
      param_1[1] = 0;
      param_1[2] = local_50;
    }
    uVar4 = 3;
  }
  else {
                    /* try { // try from 001fa0ce to 001fa0dd has its CatchHandler @ 001fa152 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8732f121b58e7ba0E
              (&local_38,auVar6._0_8_,auVar6._8_8_);
    param_1[3] = local_28;
    *(undefined4 *)(param_1 + 1) = local_38;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 2) = uStack_30;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_2c;
    uVar4 = 1;
  }
  *param_1 = uVar4;
  _ZN4core3ptr97drop_in_place_LT_core__result__Result_LT_u64_C_uucore__parser__parse_size__ParseSizeError_GT__GT_17h1cd421d162b21d56E
            (&local_58);
  return;
}