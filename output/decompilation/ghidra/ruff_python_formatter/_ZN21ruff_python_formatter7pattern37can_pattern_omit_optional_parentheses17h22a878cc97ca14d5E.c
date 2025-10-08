undefined8
_ZN21ruff_python_formatter7pattern37can_pattern_omit_optional_parentheses17h22a878cc97ca14d5E
          (undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  long lStack_18;
  undefined2 local_10;
  
  local_30 = 0;
  local_20 = 0;
  lStack_18 = 0;
  local_10 = 0;
  _ZN21ruff_python_formatter7pattern33CanOmitOptionalParenthesesVisitor13visit_pattern17he68f7da45c4f1f30E
            (&local_30,param_1,param_2);
  if (((char)local_10 == '\x01') && (local_20 < 2)) {
    if ((lStack_18 != 0) &&
       (cVar1 = _ZN21ruff_python_formatter7pattern37can_pattern_omit_optional_parentheses32has_parentheses_and_is_non_empty17h58b3de22f38e758cE
                          (lStack_18,param_2), cVar1 != '\0')) {
      return 1;
    }
    if (1 < (uint)local_30) {
      uVar2 = _ZN21ruff_python_formatter7pattern37can_pattern_omit_optional_parentheses32has_parentheses_and_is_non_empty17h58b3de22f38e758cE
                        (local_28,param_2);
      return uVar2;
    }
  }
  return 0;
}