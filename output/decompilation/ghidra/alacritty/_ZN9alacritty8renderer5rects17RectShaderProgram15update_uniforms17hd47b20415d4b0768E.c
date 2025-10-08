void _ZN9alacritty8renderer5rects17RectShaderProgram15update_uniforms17hd47b20415d4b0768E
               (int *param_1,long param_2,long param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_3 + 0x10);
  uVar2 = *(uint *)(param_3 + 0x14);
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar5 = *(float *)(param_2 + 0x14) - *(float *)(param_2 + 0x24);
  fVar6 = (float)(*(code *)PTR_floorf_009dfe38)(fVar5 / fVar3);
  if (*param_1 == 1) {
    (*(code *)_ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0)
              (*(undefined4 *)(param_2 + 0x18),param_1[1]);
    iVar4 = param_1[2];
  }
  else {
    iVar4 = param_1[2];
  }
  if (iVar4 == 1) {
    (*(code *)_ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0)(fVar3,param_1[3]);
    iVar4 = param_1[6];
  }
  else {
    iVar4 = param_1[6];
  }
  if (iVar4 == 1) {
    (*(code *)_ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0)
              (fVar5 - fVar3 * fVar6,param_1[7]);
    iVar4 = param_1[4];
  }
  else {
    iVar4 = param_1[4];
  }
  if (iVar4 == 1) {
    (*(code *)_ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0)
              (*(undefined4 *)(param_2 + 0x20),param_1[5]);
    iVar4 = param_1[8];
  }
  else {
    iVar4 = param_1[8];
  }
  if (iVar4 == 1) {
    (*(code *)_ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0)
              ((float)((uint)fVar1 & _DAT_001e90d0) - (float)(uVar2 & _DAT_001e90d0),param_1[9]);
    iVar4 = param_1[10];
  }
  else {
    iVar4 = param_1[10];
  }
  if (iVar4 == 1) {
    (*(code *)_ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0)
              (*(undefined4 *)(param_3 + 0x18),param_1[0xb]);
    iVar4 = param_1[0xc];
  }
  else {
    iVar4 = param_1[0xc];
  }
  if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00563511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)_ZN9alacritty2gl7storage9Uniform1f17he912ff9a2d8e282fE_0)
              ((uint)(fVar1 * DAT_001ec2f4) & _DAT_001e90d0,param_1[0xd]);
    return;
  }
  return;
}