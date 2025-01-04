bool __rustcall uu_tail::platform::unix::ProcessChecker::is_dead(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = (*(code *)PTR_kill_002c28c0)(*param_1,0);
  if (iVar1 != 0) {
    iVar1 = get_errno();
    bVar2 = iVar1 != 1;
  }
  return bVar2;
}