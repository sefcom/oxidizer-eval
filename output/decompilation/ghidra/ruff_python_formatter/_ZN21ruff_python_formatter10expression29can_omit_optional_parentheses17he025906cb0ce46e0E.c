undefined8
_ZN21ruff_python_formatter10expression29can_omit_optional_parentheses17he025906cb0ce46e0E
          (undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined6 local_20;
  undefined2 uStack_1a;
  uint local_18;
  char local_14;
  byte local_13;
  
  local_38 = 0;
  local_20 = 0;
  uStack_1a = 0;
  local_18 = 0;
  local_14 = '\0';
  local_13 = 0;
  local_28 = param_2;
  _ZN21ruff_python_formatter10expression33CanOmitOptionalParenthesesVisitor19visit_subexpression17h8d70ca0c45844b66E
            (&local_38,param_1);
  uVar2 = 0;
  if (((local_14 == '\x01') && (local_18 < 2)) && (uVar2 = 1, 1 < local_13)) {
    if ((CONCAT26(uStack_1a,local_20) != 0) &&
       (cVar1 = _ZN21ruff_python_formatter10expression29can_omit_optional_parentheses16is_parenthesized17h96a2abf8babbfaf8E
                          (CONCAT26(uStack_1a,local_20),param_2), cVar1 != '\0')) {
      return 1;
    }
    if (1 < (uint)local_38) {
      uVar2 = _ZN21ruff_python_formatter10expression29can_omit_optional_parentheses16is_parenthesized17h96a2abf8babbfaf8E
                        (local_30,param_2);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}