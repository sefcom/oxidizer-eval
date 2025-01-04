void __rustcall uu_sort::GlobalSettings::init_precomputed(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined uVar3;
  long lVar4;
  long local_28;
  long local_20;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10) * 0x38 + lVar1;
  local_28 = lVar1;
  local_20 = lVar4;
  uVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any(&local_28);
  *(undefined *)(param_1 + 0x60) = uVar3;
  uVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold(lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold(lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::fold(lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  return;
}