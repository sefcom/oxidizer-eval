undefined8 _ZN7uu_more5Pager12seek_to_line17h869c7595a8249d8fE(long param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  uVar2 = _ZN4core3cmp3Ord3min17hb3329b13fb983db2E(param_2,*(undefined8 *)(param_1 + 0x70));
  if (uVar2 < *(ulong *)(param_1 + 0x38)) {
    uVar3 = 0;
    auVar4 = (**(code **)(*(long *)(param_1 + 0x48) + 0x88))
                       (*(undefined8 *)(param_1 + 0x40),0,
                        *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar2 * 8));
    if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      uVar3 = (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
              )(auVar4._8_8_);
    }
    return uVar3;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0022d198)
            (uVar2,*(ulong *)(param_1 + 0x38),&PTR_s_src_uu_more_src_more_rs_00225470);
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}