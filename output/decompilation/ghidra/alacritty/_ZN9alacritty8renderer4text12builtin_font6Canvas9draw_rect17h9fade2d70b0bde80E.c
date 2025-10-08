void _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined auVar10 [16];
  
  uVar5 = (long)param_1 >> 0x3f & (long)(param_1 - DAT_001ec664) | (long)param_1;
  if (param_1 < 0.0) {
    uVar5 = 0;
  }
  if (DAT_001ec668 < param_1) {
    uVar5 = 0xffffffffffffffff;
  }
  param_3 = param_3 + param_1;
  uVar7 = (long)(param_3 - DAT_001ec664) & (long)param_3 >> 0x3f | (long)param_3;
  if (param_3 < 0.0) {
    uVar7 = 0;
  }
  if (DAT_001ec668 < param_3) {
    uVar7 = 0xffffffffffffffff;
  }
  lVar1 = *(long *)(param_5 + 0x18);
  lVar4 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(uVar7,lVar1);
  uVar7 = (long)param_2 >> 0x3f & (long)(param_2 - DAT_001ec664) | (long)param_2;
  if (param_2 < 0.0) {
    uVar7 = 0;
  }
  if (DAT_001ec668 < param_2) {
    uVar7 = 0xffffffffffffffff;
  }
  param_4 = param_4 + param_2;
  uVar8 = (long)(param_4 - DAT_001ec664) & (long)param_4 >> 0x3f | (long)param_4;
  if (param_4 < 0.0) {
    uVar8 = 0;
  }
  if (DAT_001ec668 < param_4) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar8 = _ZN4core3cmp3Ord3min17h7c13e9bfb8ea3862E(uVar8,*(undefined8 *)(param_5 + 0x20));
  lVar9 = uVar8 - uVar7;
  if (uVar7 <= uVar8 && lVar9 != 0) {
    uVar2 = *(undefined8 *)(param_5 + 8);
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    lVar4 = lVar4 + uVar7 * lVar1;
    lVar6 = uVar5 + uVar7 * lVar1;
    do {
      auVar10 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h1733595a6a516e51E
                          (lVar6,lVar4,uVar2,uVar3);
      _ZN74__LT__u5b_T_u5d__u20_as_u20_core__slice__specialize__SpecFill_LT_T_GT__GT_9spec_fill17h15b3a9a1ce3f9f9aE
                (auVar10._0_8_,auVar10._8_8_,0xffffff);
      lVar4 = lVar4 + lVar1;
      lVar6 = lVar6 + lVar1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}