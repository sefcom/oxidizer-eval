bool _ZN7uu_tail8platform4unix14ProcessChecker7is_dead17hb09aad58966101f3E(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = (*(code *)PTR_kill_0027d8d8)(param_1,0);
  if (iVar1 != 0) {
    iVar1 = _ZN7uu_tail8platform4unix9get_errno17h80cf25b3e2f9c5b9E();
    bVar2 = iVar1 != 1;
  }
  return bVar2;
}