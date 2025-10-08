undefined  [16]
_ZN7uu_more5Pager7page_up17h8ac51dfc33201f5eE(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long unaff_RBX;
  ulong uVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar6 = 0xffffffffffffffff;
  if (!CARRY8(*(ulong *)(param_1 + 0x58),*(ulong *)(param_1 + 0x78))) {
    uVar6 = *(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x78);
  }
  lVar5 = 0;
  lVar7 = uVar1 - uVar6;
  if (uVar1 < uVar6) {
    lVar7 = lVar5;
  }
  *(long *)(param_1 + 0x50) = lVar7;
  if (*(char *)(param_1 + 0x81) == '\x01') {
    local_48 = 0;
    local_40 = 1;
    local_38 = 0;
    if (uVar6 < uVar1) {
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      lVar3 = *(long *)(param_1 + 0x48);
      do {
                    /* try { // try from 0017b0c0 to 0017b0e4 has its CatchHandler @ 0017b145 */
        auVar8 = _ZN7uu_more5Pager12seek_to_line17h869c7595a8249d8fE(param_1,lVar7);
        param_3 = auVar8._8_8_;
        lVar5 = auVar8._0_8_;
        if (lVar5 != 0) goto LAB_0017b126;
        local_38 = 0;
        auVar8 = (**(code **)(lVar3 + 0x80))(uVar2,&local_48);
        if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    /* try { // try from 0017b117 to 0017b11f has its CatchHandler @ 0017b143 */
          auVar8 = (*(code *)
                     PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                   )(auVar8._8_8_);
          param_3 = auVar8._8_8_;
          lVar5 = auVar8._0_8_;
          goto LAB_0017b126;
        }
        cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h506ca15ca5b86ee2E
                          (local_40,local_38,
                           "\nNext file: %--More--()\'. Press \'h\' for instructions. (unimplemented)][Press space to continue, \'q\' to quit.]"
                           ,1);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -1;
        *(long *)(param_1 + 0x50) = lVar7;
      } while (lVar7 != 0);
      lVar5 = 0;
      param_3 = param_1;
    }
    else {
      lVar5 = 0;
      param_3 = unaff_RBX;
    }
LAB_0017b126:
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17habcac018958bfd8aE(&local_48);
  }
  auVar8._8_8_ = param_3;
  auVar8._0_8_ = lVar5;
  return auVar8;
}