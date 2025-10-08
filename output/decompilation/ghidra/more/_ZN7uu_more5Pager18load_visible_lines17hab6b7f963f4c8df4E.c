long _ZN7uu_more5Pager18load_visible_lines17hab6b7f963f4c8df4E(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _ZN4core3ptr52drop_in_place_LT__u5b_alloc__string__String_u5d__GT_17h6802b68d421aa63dE
            (*(undefined8 *)(param_1 + 0x18),uVar1);
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar3 = _ZN7uu_more5Pager12seek_to_line17h869c7595a8249d8fE
                    (param_1,*(undefined8 *)(param_1 + 0x50));
  if (lVar3 == 0) {
    local_50 = 0;
    uStack_48 = 1;
    local_40 = 0;
    if (*(long *)(param_1 + 0x58) != 0) {
      do {
        local_40 = 0;
                    /* try { // try from 0017b88f to 0017b8f0 has its CatchHandler @ 0017b92e */
        auVar4 = (**(code **)(*(long *)(param_1 + 0x48) + 0x80))
                           (*(undefined8 *)(param_1 + 0x40),&local_50);
        if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    /* try { // try from 0017b901 to 0017b909 has its CatchHandler @ 0017b92c */
          lVar3 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                  )(auVar4._8_8_);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17habcac018958bfd8aE(&local_50);
          return lVar3;
        }
        if (auVar4._8_8_ == 0) break;
        cVar2 = _ZN7uu_more5Pager19should_squeeze_line17hcc3a424a86437f5aE
                          (param_1,uStack_48,local_40);
        if (cVar2 == '\0') {
          local_28 = local_40;
          local_38 = (undefined4)local_50;
          uStack_34 = local_50._4_4_;
          uStack_30 = (undefined4)uStack_48;
          uStack_2c = uStack_48._4_4_;
          local_50 = 0;
          uStack_48 = 1;
          local_40 = 0;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4de2a5e1402a45f2E(param_1 + 0x10,&local_38);
        }
        else {
          *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
        }
      } while (*(ulong *)(param_1 + 0x20) < *(ulong *)(param_1 + 0x58));
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17habcac018958bfd8aE(&local_50);
    lVar3 = 0;
  }
  return lVar3;
}