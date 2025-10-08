ulong _ZN9alacritty7display8SizeInfo14contains_point17h0a9ac37fde68bbb4E
                (ulong *param_1,ulong param_2,ulong param_3)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 4);
  fVar5 = (float)param_1[1] * *(float *)(param_1 + 3) + fVar1;
  uVar2 = 0;
  uVar3 = (long)(fVar5 - DAT_001ec664) & (long)fVar5 >> 0x3f | (long)fVar5;
  if (fVar5 < 0.0) {
    uVar3 = uVar2;
  }
  if (DAT_001ec668 < fVar5) {
    uVar3 = 0xffffffffffffffff;
  }
  uVar4 = (long)fVar1 >> 0x3f & (long)(fVar1 - DAT_001ec664) | (long)fVar1;
  if (fVar1 < 0.0) {
    uVar4 = uVar2;
  }
  if (DAT_001ec668 < fVar1) {
    uVar4 = 0xffffffffffffffff;
  }
  if ((uVar4 < param_2) && (param_2 <= uVar3)) {
    fVar1 = *(float *)((long)param_1 + 0x24);
    fVar5 = (float)*param_1 * *(float *)((long)param_1 + 0x1c) + fVar1;
    uVar2 = 0;
    uVar3 = 0;
    if (0.0 <= fVar5) {
      uVar3 = (long)(fVar5 - DAT_001ec664) & (long)fVar5 >> 0x3f | (long)fVar5;
    }
    if (DAT_001ec668 < fVar5) {
      uVar3 = 0xffffffffffffffff;
    }
    if (param_3 <= uVar3) {
      uVar3 = 0;
      if (0.0 <= fVar1) {
        uVar3 = (long)(fVar1 - DAT_001ec664) & (long)fVar1 >> 0x3f | (long)fVar1;
      }
      if (DAT_001ec668 < fVar1) {
        uVar3 = 0xffffffffffffffff;
      }
      uVar2 = CONCAT71((int7)(uVar3 >> 8),uVar3 < param_3);
    }
  }
  return uVar2;
}