bool _ZN21ruff_python_formatter9statement11stmt_assign26has_target_own_parentheses17h34ae9872ca5846a0E
               (int *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = true;
  if (*param_1 != 0x1e) {
    cVar2 = _ZN21ruff_python_formatter10expression19has_own_parentheses17he088d283b6b32ebcE();
    bVar1 = cVar2 != '\x02';
  }
  return bVar1;
}