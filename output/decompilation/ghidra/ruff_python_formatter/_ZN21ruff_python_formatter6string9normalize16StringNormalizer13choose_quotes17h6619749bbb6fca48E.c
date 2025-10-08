void _ZN21ruff_python_formatter6string9normalize16StringNormalizer13choose_quotes17h6619749bbb6fca48E
               (ulong *param_1,ulong *param_2,undefined param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  undefined uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong extraout_RDX;
  long lVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  ulong local_80;
  ulong local_68;
  long local_60;
  ulong local_58;
  long local_50;
  undefined8 local_48;
  ulong *local_40;
  undefined8 local_38;
  
  uVar9 = *param_2;
  uVar1 = param_2[1];
  local_68 = param_4;
  local_60 = param_5;
  local_40 = param_1;
  uVar6 = (*(code *)
            PTR__ZN15ruff_python_ast10expression14StringLikePart13content_range17he2557f5203d115c0E_006be160
          )(param_4,param_5);
  auVar10 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                      (uVar6,extraout_RDX & 0xffffffff);
  local_48 = auVar10._0_8_;
  auVar11 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                      (local_48,auVar10._8_8_,uVar9,uVar1);
  lVar8 = auVar11._8_8_;
  uVar7 = auVar11._0_8_;
  if (uVar7 != 0) {
    local_50 = uVar7 + lVar8;
    local_38 = 0;
    local_58 = uVar7;
    auVar10 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hf02c8f78cfc17381E
                        (&local_58,&local_38);
    local_80 = auVar10._8_8_;
    bVar3 = (*(code *)
              PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8
            )(&local_68);
    bVar4 = _ZN21ruff_python_formatter6string9normalize16StringNormalizer21preferred_quote_style17h4147ade4e9a8fab6E
                      (param_2,param_3,param_4,param_5);
    if (bVar4 != 2) {
      if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        if (local_68 < 2) {
          auVar11 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                              (local_80,uVar7,lVar8);
          param_5 = lVar8;
          uVar9 = uVar7;
          if (auVar11._0_8_ == 0) goto LAB_00427f0d;
          uVar5 = (*(code *)
                    PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8
                  )(&local_68);
          _ZN21ruff_python_formatter6string9normalize13QuoteMetadata8from_str17h18c8ad1316633cd8E
                    (&local_58,auVar11._0_8_,auVar11._8_8_,uVar5,bVar4);
        }
        else {
          _ZN21ruff_python_formatter6string9normalize13QuoteMetadata9from_part17h0afa9ff01e69dd98E
                    (&local_58,local_68,local_60,param_2,bVar4);
        }
        bVar4 = _ZN21ruff_python_formatter6string9normalize13QuoteMetadata6choose17hb1a9d58975495a88E
                          (&local_58,bVar4);
      }
      bVar3 = bVar3 & 0xfe | bVar4;
    }
    *(byte *)(local_40 + 2) = bVar3;
    *local_40 = (ulong)(auVar10._0_4_ & 1);
    local_40[1] = local_80;
    return;
  }
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (uVar9,uVar1,local_48,auVar10._8_8_,&PTR_s_crates_ruff_python_formatter_src_0067f688);
  local_80 = uVar9;
LAB_00427f0d:
  (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
            (uVar9,param_5,local_80,param_5,&PTR_s_crates_ruff_python_formatter_src_0067f6a0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}