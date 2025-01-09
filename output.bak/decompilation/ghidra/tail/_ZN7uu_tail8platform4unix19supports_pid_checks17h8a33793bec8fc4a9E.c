bool __rustcall uu_tail::platform::unix::supports_pid_checks(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_kill_002c28c0)(param_1,0);
  if (iVar1 != 0) {
    iVar1 = get_errno();
    return iVar1 != 0x26;
  }
  return true;
}