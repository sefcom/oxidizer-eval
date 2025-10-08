void _ZN9alacritty8renderer4text17update_projection17h3b47cfa7fc1313deE
               (undefined8 param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  
  fVar1 = *(float *)(param_2 + 0x10);
  uVar5 = (uint)(long)fVar1;
  if (fVar1 < 0.0) {
    uVar5 = 0;
  }
  fVar2 = *(float *)(param_2 + 0x20);
  if (DAT_001edbc8 < fVar1) {
    uVar5 = 0xffffffff;
  }
  iVar6 = (int)(long)fVar2;
  if (fVar2 < 0.0) {
    iVar6 = 0;
  }
  if (DAT_001edbc8 < fVar2) {
    iVar6 = -1;
  }
  if ((uint)(iVar6 * 2) <= uVar5) {
    fVar3 = *(float *)(param_2 + 0x14);
    uVar5 = (uint)(long)fVar3;
    if (fVar3 < 0.0) {
      uVar5 = 0;
    }
    fVar4 = *(float *)(param_2 + 0x24);
    if (DAT_001edbc8 < fVar3) {
      uVar5 = 0xffffffff;
    }
    iVar6 = (int)(long)fVar4;
    if (fVar4 < 0.0) {
      iVar6 = 0;
    }
    if (DAT_001edbc8 < fVar4) {
      iVar6 = -1;
    }
    if ((uint)(iVar6 * 2) <= uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0056c0ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)_ZN9alacritty2gl7storage9Uniform4f17h285528eef856017eE_0)
                (DAT_001ebe74,DAT_001eb5d0,_s__001ec4b0 / (fVar1 - (fVar2 + fVar2)),
                 DAT_001eb760 / (fVar3 - (fVar4 + fVar4)));
      return;
    }
  }
  return;
}