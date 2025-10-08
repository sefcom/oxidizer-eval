bool _ZN7uu_tail8platform4unix19supports_pid_checks17ha9469f91d23a1bd0E(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_0027d8d8)(param_1,0);
  if (iVar1 != 0) {
    iVar1 = _ZN7uu_tail8platform4unix9get_errno17h80cf25b3e2f9c5b9E();
    return iVar1 != 0x26;
  }
  return true;
}