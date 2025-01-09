bool __rustcall uu_cksum::had_reset(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  long local_40;
  long local_38;
  
  lVar1 = param_1 + param_2 * 0x18;
  local_40 = param_1;
  local_38 = lVar1;
  auVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                     (&local_40);
  local_40 = param_1;
  local_38 = lVar1;
  auVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                     (&local_40);
  local_40 = param_1;
  local_38 = lVar1;
  auVar5 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                     (&local_40);
  bVar2 = false;
  if ((((auVar3._0_8_ == 1) && (auVar4._0_8_ == 1)) && (auVar5._0_8_ == 1)) &&
     (bVar2 = false, auVar3._8_8_ < auVar4._8_8_)) {
    bVar2 = auVar4._8_8_ < auVar5._8_8_;
  }
  return bVar2;
}