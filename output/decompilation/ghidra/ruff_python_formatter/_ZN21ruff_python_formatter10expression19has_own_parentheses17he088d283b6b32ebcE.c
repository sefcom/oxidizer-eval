char _ZN21ruff_python_formatter10expression19has_own_parentheses17he088d283b6b32ebcE
               (undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long extraout_RDX;
  
  switch(*param_1) {
  case 6:
  case 7:
  case 0x1d:
    goto switchD_004104ab_caseD_6;
  case 8:
  case 9:
  case 10:
  case 0x1a:
    goto switchD_004104ab_caseD_8;
  case 0xb:
    return '\x02' - *(char *)(param_1 + 0xd);
  default:
    return '\x02';
  case 0x10:
    if (*(long *)(param_1 + 6) + *(long *)(param_1 + 10) != 0) {
      return '\x01';
    }
    goto LAB_004104cf;
  case 0x1e:
    if (*(char *)(param_1 + 0xb) == '\0') {
      return '\x02';
    }
switchD_004104ab_caseD_6:
    if (*(long *)(param_1 + 6) == 0) {
LAB_004104cf:
      uVar1 = (*(code *)
                PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
              )();
      _ZN21ruff_python_formatter8comments8Comments8dangling17h912433ddb439ab44E(param_2,uVar1);
      if (extraout_RDX == 0) {
        return '\0';
      }
    }
switchD_004104ab_caseD_8:
    return '\x01';
  }
}