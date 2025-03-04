bool _ZN7uu_tail8platform4unix14ProcessChecker7is_dead17he1a98e91c2c8dfd9E(undefined4 *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = (*(code *)PTR_kill_002c28c0)(*param_1,0);
  if (iVar1 != 0) {
    iVar1 = _ZN7uu_tail8platform4unix9get_errno17hcaebd61abd6c9378E();
    bVar2 = iVar1 != 1;
  }
  return bVar2;
}