ulong _ZN21ruff_python_formatter9statement11stmt_assign26should_parenthesize_target17ha4c5f7eea9272c30E
                (undefined8 param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = _ZN21ruff_python_formatter9statement11stmt_assign26has_target_own_parentheses17h34ae9872ca5846a0E
                    (param_1,*(undefined8 *)(param_2 + 0x10));
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = _ZN21ruff_python_formatter9statement11stmt_assign37is_attribute_with_parenthesized_value17hd5324170738abb14E
                    (param_1,param_2);
  return uVar2 ^ 1;
}