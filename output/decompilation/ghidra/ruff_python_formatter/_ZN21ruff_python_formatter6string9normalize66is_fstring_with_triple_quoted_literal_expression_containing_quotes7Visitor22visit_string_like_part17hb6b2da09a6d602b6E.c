void _ZN21ruff_python_formatter6string9normalize66is_fstring_with_triple_quoted_literal_expression_containing_quotes7Visitor22visit_string_like_part17hb6b2da09a6d602b6E
               (undefined8 *param_1,ulong param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong extraout_RDX;
  ulong local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_50 = param_2;
  local_48 = param_3;
  uVar7 = (*(code *)
            PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8)
                    (&local_50);
  puVar3 = 
  PTR__ZN122__LT_ruff_python_ast__nodes__AnyStringFlags_u20_as_u20_core__convert__From_LT_ruff_python_ast__nodes__FStringFlags_GT__GT_4from17hf5c3807e34bef0f1E_006be148
  ;
  if (((uVar7 & 2) != 0) && (*(char *)(param_1 + 1) == '\0')) {
    if (param_2 < 2) {
      uVar6 = (*(code *)
                PTR__ZN15ruff_python_ast10expression14StringLikePart13content_range17he2557f5203d115c0E_006be160
              )(param_2,param_3);
      uVar4 = (*(code *)
                PTR__ZN15ruff_python_ast10expression14StringLikePart5flags17h96befe9c7d415d6dE_006bdee8
              )(&local_50);
      cVar5 = _ZN21ruff_python_formatter6string9normalize66is_fstring_with_triple_quoted_literal_expression_containing_quotes7Visitor14contains_quote17hcddbc126b8c2d61dE
                        (*param_1,uVar6,extraout_RDX & 0xffffffff,uVar4);
      if (cVar5 == '\0') {
        return;
      }
    }
    else {
      local_40 = *(long *)(param_3 + 8);
      local_38 = *(long *)(param_3 + 0x10) * 0x50 + local_40;
      uVar2 = *param_1;
      do {
        lVar8 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8find_map17hc0f6080590e40ea9E
                          (&local_40);
        if (lVar8 == 0) {
          return;
        }
        uVar6 = *(undefined4 *)(lVar8 + 0x10);
        uVar1 = *(undefined4 *)(lVar8 + 0x14);
        uVar4 = (*(code *)puVar3)(*(undefined4 *)(param_3 + 0x24));
        cVar5 = _ZN21ruff_python_formatter6string9normalize66is_fstring_with_triple_quoted_literal_expression_containing_quotes7Visitor14contains_quote17hcddbc126b8c2d61dE
                          (uVar2,uVar6,uVar1,uVar4);
      } while (cVar5 == '\0');
    }
    *(undefined *)(param_1 + 1) = 1;
  }
  return;
}