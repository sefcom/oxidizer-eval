void _ZN21ruff_python_formatter6string9normalize13QuoteMetadata9from_part17h0afa9ff01e69dd98E
               (undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4,undefined param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined *puVar8;
  ulong local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [16];
  undefined local_40 [16];
  
  local_70 = param_2;
  local_68 = param_3;
  if (param_2 < 2) {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    local_58 = param_1;
    uVar5 = (*(code *)
              PTR__ZN15ruff_python_ast10expression14StringLikePart13content_range17he2557f5203d115c0E_006be160
            )(param_2,param_3);
    uVar6 = _ZN14ruff_text_size5range122__LT_impl_u20_core__convert__From_LT_ruff_text_size__range__TextRange_GT__u20_for_u20_core__ops__range__Range_LT_T_GT__GT_4from17h5565193b43bb472cE
                      (uVar5,extraout_RDX & 0xffffffff);
    local_60 = uVar2;
    lVar7 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h6f62413506656e8fE
                      (uVar6,extraout_RDX_00,uVar1,uVar2);
    if (lVar7 == 0) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                (uVar1,local_60,uVar6,extraout_RDX_00,
                 &PTR_s_crates_ruff_python_formatter_src_0067f6d0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar4 = (*(code *)
              PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8
            )(&local_70);
    _ZN21ruff_python_formatter6string9normalize13QuoteMetadata8from_str17h18c8ad1316633cd8E
              (local_58,lVar7,extraout_RDX_01,uVar4,param_5);
  }
  else {
    if (param_2 == 2) {
      uVar4 = (*(code *)
                PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8
              )();
      puVar8 = local_50;
      _ZN21ruff_python_formatter6string9normalize13QuoteMetadata8from_str17h18c8ad1316633cd8E
                (puVar8,1,0,uVar4,param_5);
      uVar4 = (*(code *)
                PTR__ZN122__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_core__convert__From_LT_ruff_python_ast__nodes__FStringFlags_GT__GT_4from17hf5c3807e34bef0f1E_006be148
              )(*(undefined4 *)(param_3 + 0x24));
    }
    else {
      uVar4 = (*(code *)
                PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8
              )(&local_70);
      puVar8 = local_40;
      _ZN21ruff_python_formatter6string9normalize13QuoteMetadata8from_str17h18c8ad1316633cd8E
                (puVar8,1,0,uVar4,param_5);
      uVar4 = (*(code *)
                PTR__ZN122__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_core__convert__From_LT_ruff_python_ast__nodes__TStringFlags_GT__GT_4from17h278c7bfd346f0e8cE_006be150
              )(*(undefined4 *)(param_3 + 0x24));
    }
    _ZN21ruff_python_formatter6string9normalize13QuoteMetadata34merge_interpolated_string_elements17h354cb7889e5fa776E
              (param_1,puVar8,param_3,uVar4,param_4,param_5);
  }
  return;
}