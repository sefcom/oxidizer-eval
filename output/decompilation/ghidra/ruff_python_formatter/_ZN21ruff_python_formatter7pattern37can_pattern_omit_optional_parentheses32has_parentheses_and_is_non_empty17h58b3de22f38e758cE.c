undefined8
_ZN21ruff_python_formatter7pattern37can_pattern_omit_optional_parentheses32has_parentheses_and_is_non_empty17h58b3de22f38e758cE
          (ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  switch(*param_1 ^ 0x8000000000000000) {
  case 0:
  case 1:
  case 5:
  case 6:
  case 7:
    goto switchD_00417cac_caseD_0;
  case 2:
    uVar2 = param_1[3];
    break;
  default:
    uVar2 = param_1[5];
    break;
  case 4:
    uVar2 = param_1[3];
    goto joined_r0x00417cd8;
  }
  if (uVar2 == 0) {
    uVar2 = _ZN21ruff_python_formatter8comments8Comments8dangling17hc16bf927eb814731E
                      (param_2[2],param_1);
joined_r0x00417cd8:
    if (uVar2 == 0) {
switchD_00417cac_caseD_0:
      uVar1 = _ZN21ruff_python_formatter7pattern24is_pattern_parenthesized17h69f247e6dcabd7b6E
                        (param_1,*(undefined8 *)(*(long *)(param_2[2] + 0x60) + 8),
                         *(undefined8 *)(*(long *)(param_2[2] + 0x60) + 0x10),*param_2,param_2[1]);
      return uVar1;
    }
  }
  return 1;
}