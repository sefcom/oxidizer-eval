undefined  [16] _ZN6uu_env19apply_ignore_signal17h50dc2527ab008a21E(long param_1)

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
             _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h009f5b357177ad4eE
                       (&local_20);
    if (puVar2 == (undefined4 *)0x0) {
      return ZEXT816(0x248908) << 0x40;
    }
    iVar1 = _ZN78__LT_nix__sys__signal__Signal_u20_as_u20_core__convert__TryFrom_LT_i32_GT__GT_8try_from17h02b141bd98cda8e5E
                      (*puVar2);
    if (iVar1 != 0) break;
    lVar3 = _ZN6uu_env13ignore_signal17hb651b27965f7f812E(extraout_RDX & 0xffffffff);
    auVar4._8_8_ = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h03ce124f780b058aE_00248908
    ;
    auVar4._0_8_ = lVar3;
    if (lVar3 != 0) {
      return auVar4;
    }
  }
  auVar4 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                     (extraout_RDX << 0x20 | 2);
  return auVar4;
}