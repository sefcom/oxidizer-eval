void _ZN21ruff_python_formatter6string9normalize16StringNormalizer9normalize17h1f11748c3c51b9f8E
               (undefined8 *param_1,undefined8 *param_2,undefined param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 extraout_EDX;
  ulong extraout_RDX;
  undefined auVar4 [16];
  undefined8 local_80;
  undefined auStack_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48 [8];
  undefined8 local_40;
  undefined local_38;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar2 = (*(code *)
            PTR__ZN15ruff_python_ast10expression14StringLikePart13content_range17he2557f5203d115c0E_006be160
          )(param_4,param_5);
  auVar4 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                     (uVar2,extraout_RDX & 0xffffffff);
  local_68 = auVar4._8_8_;
  local_60 = auVar4._0_8_;
  local_58 = uVar1;
  local_50 = uVar3;
  auVar4 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                     (local_60,local_68,uVar3,uVar1);
  if (auVar4._0_8_ != 0) {
    _ZN21ruff_python_formatter6string9normalize16StringNormalizer13choose_quotes17h6619749bbb6fca48E
              (local_48,param_2,param_3,param_4,param_5);
    if ((local_48[0] & 1) == 0) {
      local_80 = 0x8000000000000000;
    }
    else {
      _ZN21ruff_python_formatter6string9normalize16normalize_string17hc4cd811eeabf866fE
                (&local_80,auVar4._0_8_,auVar4._8_8_,local_40,local_38,0);
      auVar4._8_8_ = auStack_78._8_8_;
      auVar4._0_8_ = auStack_78._0_8_;
    }
                    /* try { // try from 00428033 to 0042803e has its CatchHandler @ 0042808a */
    auStack_78 = auVar4;
    uVar2 = (*(code *)
              PTR__ZN15ruff_python_ast10expression14StringLikePart13content_range17he2557f5203d115c0E_006be160
            )(param_4,param_5);
    param_1[2] = auStack_78._8_8_;
    *param_1 = local_80;
    param_1[1] = auStack_78._0_8_;
    *(undefined *)(param_1 + 4) = local_38;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((long)param_1 + 0x1c) = extraout_EDX;
    return;
  }
  uVar3 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                    (local_50,local_58,local_60,local_68,
                     &PTR_s_crates_ruff_python_formatter_src_0067f6b8);
                    /* catch() { ... } // from try @ 00428033 with catch @ 0042808a */
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17heb51e2f4908e5022E(&local_80);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}