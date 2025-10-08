void _ZN21ruff_python_formatter7pattern33CanOmitOptionalParenthesesVisitor17visit_sub_pattern17hfa2475e1b6bf2f40E
               (long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  
  param_1[3] = param_2;
  cVar2 = _ZN21ruff_python_formatter7pattern24is_pattern_parenthesized17h69f247e6dcabd7b6E
                    (param_2,*(undefined8 *)(*(long *)(param_3[2] + 0x60) + 8),
                     *(undefined8 *)(*(long *)(param_3[2] + 0x60) + 0x10),*param_3,param_3[1]);
  if (cVar2 == '\0') {
    _ZN21ruff_python_formatter7pattern33CanOmitOptionalParenthesesVisitor13visit_pattern17he68f7da45c4f1f30E
              (param_1,param_2,param_3);
    lVar1 = *param_1;
  }
  else {
    *(undefined *)(param_1 + 4) = 1;
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    *param_1 = 2;
    param_1[1] = param_2;
    return;
  }
  return;
}