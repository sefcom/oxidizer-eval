undefined  [16] __rustcall uu_env::apply_ignore_signal(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong extraout_RDX;
  undefined auVar4 [16];
  long local_20;
  long local_18;
  
  local_20 = *(long *)(param_1 + 0x68);
  local_18 = local_20 + *(long *)(param_1 + 0x70) * 8;
  while( true ) {
    puVar2 = (undefined4 *)
             _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_20)
    ;
    if (puVar2 == (undefined4 *)0x0) {
      return ZEXT816(0x2490c8) << 0x40;
    }
    iVar1 = _<nix::sys::signal::Signal_as_core::convert::TryFrom<i32>>::try_from(*puVar2);
    if (iVar1 != 0) break;
    lVar3 = ignore_signal(extraout_RDX & 0xffffffff);
    auVar4._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002490c8;
    auVar4._0_8_ = lVar3;
    if (lVar3 != 0) {
      return auVar4;
    }
  }
  auVar4 = uucore::mods::error::
           _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
           ::from(extraout_RDX << 0x20 | 2);
  return auVar4;
}