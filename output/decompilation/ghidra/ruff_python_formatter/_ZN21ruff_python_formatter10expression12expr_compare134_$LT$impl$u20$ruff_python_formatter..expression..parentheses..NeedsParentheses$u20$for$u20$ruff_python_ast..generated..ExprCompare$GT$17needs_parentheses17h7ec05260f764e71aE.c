char _ZN21ruff_python_formatter10expression12expr_compare134__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprCompare_GT_17needs_parentheses17h7ec05260f764e71aE
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 *puVar1;
  char cVar2;
  long lVar3;
  undefined8 local_30;
  undefined4 *local_28;
  undefined8 local_20;
  undefined4 *local_18;
  
  if (param_2 == 0x27) {
    return '\x01';
  }
  puVar1 = (undefined4 *)*param_1;
  switch(*puVar1) {
  case 0x11:
    local_28 = puVar1 + 2;
    local_30 = 2;
    if (*(long *)(puVar1 + 2) == -0x7fffffffffffffff) {
      return '\0';
    }
    cVar2 = (*(code *)
              PTR__ZN111__LT_ruff_python_ast__expression__StringLike_u20_as_u20_ruff_python_formatter__string__StringLikeExtensions_GT_12is_multiline17h5df9e50e5280e4acE_006bdd38
            )(&local_30,param_4);
    if (cVar2 == '\0') {
      return '\0';
    }
    lVar3 = *(long *)(param_4 + 0x10);
    local_20 = 0x2c;
    break;
  case 0x12:
    local_28 = puVar1 + 2;
    local_30 = 3;
    cVar2 = (*(code *)
              PTR__ZN111__LT_ruff_python_ast__expression__StringLike_u20_as_u20_ruff_python_formatter__string__StringLikeExtensions_GT_12is_multiline17h5df9e50e5280e4acE_006bdd38
            )(&local_30,param_4);
    if (cVar2 == '\0') {
      return '\0';
    }
    lVar3 = *(long *)(param_4 + 0x10);
    local_20 = 0x2d;
    break;
  case 0x13:
    return '\0';
  case 0x14:
    local_28 = puVar1 + 2;
    local_30 = 1;
    if (*(long *)(puVar1 + 2) == 0) {
      return '\0';
    }
    cVar2 = (*(code *)
              PTR__ZN111__LT_ruff_python_ast__expression__StringLike_u20_as_u20_ruff_python_formatter__string__StringLikeExtensions_GT_12is_multiline17h5df9e50e5280e4acE_006bdd38
            )(&local_30,param_4);
    if (cVar2 == '\0') {
      return '\0';
    }
    lVar3 = *(long *)(param_4 + 0x10);
    local_20 = 0x2f;
    break;
  default:
    goto switchD_00409af2_caseD_4;
  }
  local_18 = local_28;
  lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                    (lVar3 + 0x40,&local_20);
  if ((lVar3 == 0) && (param_1[4] != 0)) {
    cVar2 = _ZN21ruff_python_formatter10expression12expr_compare134__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprCompare_GT_17needs_parentheses28__u7b__u7b_closure_u7d__u7d_17had80a468163ea522E
                      (param_4,param_1[3]);
    return (cVar2 != '\0') * '\x03';
  }
switchD_00409af2_caseD_4:
  return '\0';
}