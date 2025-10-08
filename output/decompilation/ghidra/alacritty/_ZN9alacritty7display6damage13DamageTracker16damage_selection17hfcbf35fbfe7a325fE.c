void _ZN9alacritty7display6damage13DamageTracker16damage_selection17hfcbf35fbfe7a325fE
               (long param_1,long param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined auVar10 [16];
  undefined local_d0 [8];
  int local_c8;
  int local_b8;
  char local_b0;
  long local_a8;
  long local_a0;
  undefined local_98;
  undefined local_80 [40];
  undefined local_58 [40];
  
  lVar1 = param_1 + 0x88;
  _ZN4core10intrinsics25typed_swap_nonoverlapping17h0cea686fd98d21aeE(lVar1);
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (*(char *)(param_2 + 0x20) == '\x02') {
      if (*(char *)(param_1 + 0xa8) == '\x02') {
        return;
      }
    }
    else if ((*(char *)(param_1 + 0xa8) != '\x02') &&
            (cVar4 = _ZN86__LT_alacritty_terminal__selection__SelectionRange_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd74a6e47199b0cabE
                               (param_2,lVar1), cVar4 != '\0')) {
      return;
    }
    _ZN4core4iter6traits8iterator8Iterator5chain17h7fba6d8b5aa03e8eE(local_80,lVar1,param_2);
    _ZN4core4iter8adapters5chain17and_then_or_clear17h546794d3a53d3d0dE(&local_a8,local_80);
    _ZN4core6option15Option_LT_T_GT_7or_else17h367e921eb806fc58E(local_d0,&local_a8,local_58);
    if (local_b0 != '\x02') {
      iVar5 = *(int *)(param_1 + 0xb0) + -1;
      lVar1 = *(long *)(param_1 + 0x20);
      uVar2 = *(ulong *)(param_1 + 0x28);
      do {
        iVar6 = -local_c8;
        if (0 < local_c8) {
          iVar6 = local_c8;
        }
        iVar9 = local_b8 + param_3;
        if ((-1 < iVar9) && (param_3 - iVar5 <= iVar6)) {
          iVar6 = _ZN4core3cmp3Ord3max17h485505c56320f468E(local_c8 + param_3,0);
          iVar9 = _ZN4core3cmp3Ord5clamp17heae1d66c53e20e24E(iVar9,iVar5);
          local_a0 = (long)iVar9;
          local_98 = 0;
          local_a8 = (long)iVar6;
          auVar10 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h9242c5e565d5b6d1E
                              (&local_a8);
          uVar8 = auVar10._8_8_;
          while ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            if (uVar2 <= uVar8) {
              (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                        (uVar8,uVar2,&PTR_s_alacritty_src_display_damage_rs_00982318);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                              (*(undefined8 *)(lVar1 + 8 + uVar8 * 0x18),0);
            *(undefined8 *)(lVar1 + 8 + uVar8 * 0x18) = uVar7;
            uVar7 = _ZN4core3cmp3Ord3max17h20b6d33cbe488162E
                              (*(undefined8 *)(lVar1 + 0x10 + uVar8 * 0x18));
            *(undefined8 *)(lVar1 + 0x10 + uVar8 * 0x18) = uVar7;
            auVar10 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h9242c5e565d5b6d1E
                                (&local_a8);
            uVar8 = auVar10._8_8_;
          }
        }
        _ZN4core4iter8adapters5chain17and_then_or_clear17h546794d3a53d3d0dE(&local_a8,local_80);
        _ZN4core6option15Option_LT_T_GT_7or_else17h367e921eb806fc58E(local_d0,&local_a8,local_58);
      } while (local_b0 != '\x02');
    }
  }
  return;
}