ulong _ZN18alacritty_terminal5index4Line10grid_clamp17h7a533a4686eb6d93E
                (int param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_4 == '\0') {
    uVar3 = _ZN18alacritty_terminal4grid10Dimensions15bottommost_line17h4f75d9959625aee4E(param_3);
    uVar2 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE(uVar3,param_1);
    uVar3 = 0;
LAB_00473034:
    uVar5 = _ZN4core3cmp3Ord3max17h3396bb7148673668E(uVar3,uVar2);
    return uVar5;
  }
  if (param_4 == '\x01') {
    uVar2 = _ZN18alacritty_terminal4grid10Dimensions15bottommost_line17h4f75d9959625aee4E(param_3);
    uVar3 = _ZN18alacritty_terminal4grid10Dimensions12topmost_line17hce2892a243265b85E
                      (param_2,param_3);
    uVar2 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE(uVar2,param_1);
    goto LAB_00473034;
  }
  iVar6 = param_1 - (int)param_3;
  iVar8 = (int)param_2;
  iVar7 = iVar6;
  if (param_1 < (int)param_3) {
    iVar4 = _ZN18alacritty_terminal4grid10Dimensions15bottommost_line17h4f75d9959625aee4E(param_3);
    if (iVar8 != 0) {
      iVar7 = iVar6 + 1;
      if (iVar6 != 0x7fffffff || iVar8 != -1) goto LAB_00473097;
      (*(code *)
        PTR__ZN4core9panicking11panic_const24panic_const_rem_overflow17hb7d6dc691a8e6ad1E_009de5a8)
                (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977c10);
      param_3 = extraout_RDX;
      goto LAB_00473076;
    }
    (*(code *)
      PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_009de548)
              (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977c10);
  }
  else {
LAB_00473076:
    iVar4 = _ZN18alacritty_terminal4grid10Dimensions12topmost_line17hce2892a243265b85E
                      (param_2,param_3);
    if (iVar8 != 0) {
      if (iVar7 != -0x80000000 || iVar8 != -1) {
LAB_00473097:
        return (ulong)(uint)(iVar7 % iVar8 + iVar4);
      }
      goto LAB_004730c6;
    }
  }
  (*(code *)
    PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_009de548)
            (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977c28);
LAB_004730c6:
  (*(code *)
    PTR__ZN4core9panicking11panic_const24panic_const_rem_overflow17hb7d6dc691a8e6ad1E_009de5a8)
            (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977c28);
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}