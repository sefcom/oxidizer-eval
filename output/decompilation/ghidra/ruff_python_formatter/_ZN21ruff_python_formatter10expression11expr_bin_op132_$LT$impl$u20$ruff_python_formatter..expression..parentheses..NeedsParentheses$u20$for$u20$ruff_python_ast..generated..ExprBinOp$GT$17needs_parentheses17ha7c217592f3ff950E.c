char _ZN21ruff_python_formatter10expression11expr_bin_op132__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__ExprBinOp_GT_17needs_parentheses17ha7c217592f3ff950E
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long extraout_RDX;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  undefined4 *local_30;
  undefined local_28 [16];
  
  if (param_2 == 0x27) {
    return '\x01';
  }
  local_30 = (undefined4 *)*param_1;
  switch(*local_30) {
  case 0x11:
    local_38 = 2;
    lVar3 = 2;
    if (*(long *)(local_30 + 2) == -0x7fffffffffffffff) {
      return '\0';
    }
    break;
  case 0x12:
    local_38 = 3;
    lVar3 = 3;
    break;
  case 0x13:
    return '\0';
  case 0x14:
    local_38 = 1;
    lVar3 = 1;
    if (*(long *)(local_30 + 2) == 0) {
      return '\0';
    }
    break;
  default:
    goto switchD_004093a4_caseD_4;
  }
  local_30 = local_30 + 2;
  cVar1 = (*(code *)
            PTR__ZN111__LT_ruff_python_ast__expression__StringLike_u20_as_u20_ruff_python_formatter__string__StringLikeExtensions_GT_12is_multiline17h5df9e50e5280e4acE_006bdd38
          )(&local_38,param_4);
  if ((cVar1 != '\0') &&
     (cVar1 = _ZN21ruff_python_formatter10expression15has_parentheses17heb1fda5cfc7f167dE
                        (param_1[1],param_4), cVar1 != '\x02')) {
    lVar2 = *(long *)(param_4 + 0x10);
    _ZN21ruff_python_formatter8comments8Comments8dangling17h377ee9ebf27dc56bE(lVar2,param_1);
    if (extraout_RDX == 0) {
      local_28._0_8_ = *(undefined8 *)("." + lVar3 * 8);
      local_28._8_8_ = local_30;
      lVar2 = lVar2 + 0x40;
      lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                        (lVar2,local_28);
      if (lVar3 == 0) {
        local_28 = (*(code *)
                     PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
                   )(param_1[1]);
        lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                          (lVar2,local_28);
        return (lVar3 == 0) * '\x03';
      }
    }
  }
switchD_004093a4_caseD_4:
  return '\0';
}