void _ZN18alacritty_terminal4grid6resize57__LT_impl_u20_alacritty_terminal__grid__Grid_LT_T_GT__GT_12shrink_lines17h17439bedf3b4c61eE
               (long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 < (long)*(int *)(param_1 + 0x38) + 1U) {
    _ZN18alacritty_terminal4grid13Grid_LT_T_GT_9scroll_up17hf31756b0f8886f88E
              (param_1,0,*(undefined4 *)(param_1 + 0x98));
    uVar4 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE
                      (*(undefined4 *)(param_1 + 0x38),(int)param_2 + -1);
    *(undefined4 *)(param_1 + 0x38) = uVar4;
  }
  uVar4 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE
                    (*(undefined4 *)(param_1 + 0x68),(int)param_2 + -1);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 == 0) {
    (*(code *)
      PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_009de548)
              (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977380);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = (*(long *)(param_1 + 0x98) - param_2) + uVar1 + *(long *)(param_1 + 0x18);
  if ((uVar5 | uVar1) >> 0x20 == 0) {
    uVar5 = (uVar5 & 0xffffffff) % (uVar1 & 0xffffffff);
  }
  else {
    uVar5 = uVar5 % uVar1;
  }
  *(ulong *)(param_1 + 0x18) = uVar5;
  lVar6 = param_2 - *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar6 + lVar2;
  if (lVar6 + lVar2 + 1000U < uVar1) {
    _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_8truncate17h2d132ed67c9d1788E(param_1);
  }
  *(ulong *)(param_1 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x98) = param_2;
  return;
}