bool _ZN7uu_tail8platform4unix19supports_pid_checks17h8a33793bec8fc4a9E(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_002c28c0)(param_1,0);
  if (iVar1 != 0) {
    iVar1 = _ZN7uu_tail8platform4unix9get_errno17hcaebd61abd6c9378E();
    return iVar1 != 0x26;
  }
  return true;
}