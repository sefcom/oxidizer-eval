undefined  [16]
_ZN9alacritty5event5Mouse5point17h7553a37268becc3aE
          (ulong param_1,ulong param_2,int *param_3,int param_4)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined auVar8 [16];
  
  fVar1 = (float)param_3[6];
  uVar5 = 0;
  if (0.0 <= fVar1) {
    uVar5 = (long)(fVar1 - DAT_001ec664) & (long)fVar1 >> 0x3f | (long)fVar1;
  }
  if (DAT_001ec668 < fVar1) {
    uVar5 = 0xffffffffffffffff;
  }
  if (uVar5 == 0) {
    (*(code *)
      PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_009de5b0)
              (&PTR_DAT_00982ba0);
  }
  else {
    fVar1 = (float)param_3[7];
    uVar7 = 0;
    if (0.0 <= fVar1) {
      uVar7 = (long)(fVar1 - DAT_001ec664) & (long)fVar1 >> 0x3f | (long)fVar1;
    }
    if (DAT_001ec668 < fVar1) {
      uVar7 = 0xffffffffffffffff;
    }
    if (uVar7 != 0) {
      fVar1 = (float)param_3[8];
      uVar6 = (long)(fVar1 - DAT_001ec664) & (long)fVar1 >> 0x3f | (long)fVar1;
      if (fVar1 < 0.0) {
        uVar6 = 0;
      }
      uVar4 = 0xffffffffffffffff;
      if (fVar1 <= DAT_001ec668) {
        uVar4 = uVar6;
      }
      uVar6 = param_1 - uVar4;
      if (param_1 < uVar4) {
        uVar6 = 0;
      }
      if ((uVar6 | uVar5) >> 0x20 == 0) {
        uVar4 = (uVar6 & 0xffffffff) / (uVar5 & 0xffffffff);
        uVar6 = (uVar6 & 0xffffffff) % (uVar5 & 0xffffffff);
      }
      else {
        uVar4 = uVar6 / uVar5;
        uVar6 = uVar6 % uVar5;
      }
      auVar8._0_8_ = _ZN4core3cmp3Ord3min17hffab314b5e6491b1E
                               (uVar4,*(long *)(param_3 + 2) + -1,uVar6);
      fVar1 = (float)param_3[9];
      uVar5 = (long)(fVar1 - DAT_001ec664) & (long)fVar1 >> 0x3f | (long)fVar1;
      if (fVar1 < 0.0) {
        uVar5 = 0;
      }
      uVar6 = 0xffffffffffffffff;
      if (fVar1 <= DAT_001ec668) {
        uVar6 = uVar5;
      }
      uVar5 = param_2 - uVar6;
      if (param_2 < uVar6) {
        uVar5 = 0;
      }
      if ((uVar5 | uVar7) >> 0x20 == 0) {
        uVar6 = (uVar5 & 0xffffffff) / (uVar7 & 0xffffffff);
        uVar5 = (uVar5 & 0xffffffff) % (uVar7 & 0xffffffff);
      }
      else {
        uVar6 = uVar5 / uVar7;
        uVar5 = uVar5 % uVar7;
      }
      iVar3 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E
                        (uVar6,(long)(*param_3 + -1),uVar5,*param_3 + -1);
      auVar8._8_4_ = iVar3 - param_4;
      auVar8._12_4_ = 0;
      return auVar8;
    }
  }
  (*(code *)
    PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_009de5b0)
            (&PTR_DAT_00982bb8);
  pcVar2 = (code *)swi(3);
  auVar8 = (*pcVar2)();
  return auVar8;
}