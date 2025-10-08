ulong _ZN21ruff_python_formatter6string9normalize16StringNormalizer21preferred_quote_style17h4147ade4e9a8fab6E
                (long param_1,uint param_2,long param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined uVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 unaff_R14;
  undefined7 uVar8;
  ulong uVar7;
  bool bVar9;
  long local_38;
  long local_30;
  
  uVar8 = (undefined7)((ulong)unaff_R14 >> 8);
  if ((char)param_2 == '\x03') {
    uVar6 = (uint)*(byte *)(param_1 + 0x35);
    param_2 = (uint)*(byte *)(param_1 + 0x35);
    bVar1 = *(byte *)(param_1 + 0x2c);
    if (bVar1 == 3) goto LAB_00427c6c;
LAB_00427c56:
    bVar9 = 2 < bVar1;
    cVar4 = *(char *)(param_1 + 0x2a);
    uVar6 = param_2;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x2c);
    uVar6 = param_2;
    if (bVar1 != 3) goto LAB_00427c56;
LAB_00427c6c:
    bVar9 = 0xb < *(byte *)(param_1 + 0x2d);
    cVar4 = *(char *)(param_1 + 0x2a);
  }
  local_38 = param_3;
  local_30 = param_4;
  if ((cVar4 != '\x02') &&
     ((bVar1 = *(byte *)(param_1 + 0x2b), (bVar1 & 2) == 0 ||
      (uVar7 = (*(code *)
                 PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8
               )(&local_38), (uVar7 & 2) != 0)))) {
    uVar7 = CONCAT71(uVar8,2);
    if (!(bool)((char)uVar6 == '\x02' & bVar9)) {
      uVar7 = (ulong)(~bVar1 & 1);
    }
    goto LAB_00427d5a;
  }
  lVar2 = local_30;
  uVar7 = CONCAT71(uVar8,2);
  if ((char)uVar6 == '\x02') goto LAB_00427d5a;
  if (local_38 == 3) {
    uVar3 = (*(code *)
              PTR__ZN122__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_core__convert__From_LT_ruff_python_ast__nodes__TStringFlags_GT__GT_4from17h278c7bfd346f0e8cE_006be150
            )(*(undefined4 *)(local_30 + 0x24));
LAB_00427cf2:
    cVar4 = _ZN21ruff_python_formatter6string9normalize56is_interpolated_string_with_quoted_format_spec_and_debug17h75d1bb52bcbb9979E
                      (*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),uVar3,param_1);
    if (cVar4 != '\0') goto LAB_00427d5a;
  }
  else if ((int)local_38 == 2) {
    if ((!bVar9) &&
       ((cVar4 = _ZN21ruff_python_formatter6string9normalize39is_fstring_with_quoted_debug_expression17h3c23dfe7f06b780aE
                           (local_30,param_1), cVar4 != '\0' ||
        (cVar4 = _ZN21ruff_python_formatter6string9normalize66is_fstring_with_triple_quoted_literal_expression_containing_quotes17h3e8a5c5d3145f36aE
                           (*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),param_1),
        cVar4 != '\0')))) goto LAB_00427d5a;
    uVar3 = (*(code *)
              PTR__ZN122__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_core__convert__From_LT_ruff_python_ast__nodes__FStringFlags_GT__GT_4from17hf5c3807e34bef0f1E_006be148
            )(*(undefined4 *)(lVar2 + 0x24));
    goto LAB_00427cf2;
  }
  uVar5 = (*(code *)
            PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8)
                    (&local_38);
  uVar7 = (ulong)uVar6;
  if ((uVar5 & 2) != 0) {
    uVar7 = 1;
    if (*(byte *)(param_1 + 0x3c) != 2) {
      uVar7 = (ulong)(*(byte *)(param_1 + 0x3c) ^ 1);
    }
  }
LAB_00427d5a:
  return uVar7 & 0xffffffff;
}