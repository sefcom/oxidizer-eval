undefined8
_ZN9alacritty7display4bell10VisualBell20intensity_at_instant17h7ef172ac2da99aa5E
          (long *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  ulong local_28;
  uint local_20;
  
  iVar1 = *(int *)(param_1 + 1);
  if ((*param_1 != 0 || iVar1 != 0) && (uVar2 = *(uint *)(param_1 + 3), uVar2 != 1000000000)) {
    uVar3 = param_1[2];
    if (param_2 == uVar3) {
      if (uVar2 <= param_3) {
LAB_00549cf4:
        local_28 = param_2;
        local_20 = param_3;
        auVar7 = (*(code *)PTR__ZN3std4time7Instant14duration_since17h569f2ab177f38507E_009dfe28)
                           (&local_28,uVar3,uVar2);
        auVar5._0_8_ = auVar7._8_8_ & 0xffffffff;
        auVar5._8_4_ = iVar1;
        auVar5._12_4_ = 0;
        auVar7._8_8_ = _UNK_001e9258;
        auVar7._0_8_ = _s__001e9250;
        auVar6._0_8_ = SUB168(auVar5 | auVar7,0) - _s__001e9250;
        auVar6._8_8_ = SUB168(auVar5 | auVar7,8) - _UNK_001e9258;
        divpd(auVar6,_DAT_001e8540);
                    /* WARNING: Could not recover jumptable at 0x00549d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_001f1f44 +
                          *(int *)(&DAT_001f1f44 + (ulong)*(byte *)(param_1 + 4) * 4)))();
        return uVar4;
      }
    }
    else if ((long)uVar3 <= (long)param_2) goto LAB_00549cf4;
  }
  return 0;
}