void _ZN9alacritty8renderer8Renderer6resize17h83e3b437aa0cd7e9E(int *param_1,long param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  fVar1 = *(float *)(param_2 + 0x20);
  iVar3 = (int)fVar1;
  if (DAT_001edecc < fVar1) {
    iVar3 = 0x7fffffff;
  }
  iVar4 = 0;
  if (NAN(fVar1)) {
    iVar3 = iVar4;
  }
  fVar1 = *(float *)(param_2 + 0x24);
  iVar7 = (int)fVar1;
  if (DAT_001edecc < fVar1) {
    iVar7 = 0x7fffffff;
  }
  if (NAN(fVar1)) {
    iVar7 = 0;
  }
  fVar1 = *(float *)(param_2 + 0x10);
  iVar6 = (int)fVar1;
  if (DAT_001edecc < fVar1) {
    iVar6 = 0x7fffffff;
  }
  fVar2 = *(float *)(param_2 + 0x14);
  if (NAN(fVar1)) {
    iVar6 = iVar4;
  }
  iVar5 = (int)fVar2;
  if (DAT_001edecc < fVar2) {
    iVar5 = 0x7fffffff;
  }
  if (NAN(fVar2)) {
    iVar5 = iVar4;
  }
  (*(code *)_ZN9alacritty2gl7storage8Viewport17h10fb47e81d67ad16E_0)
            (iVar3,iVar7,iVar6 + iVar3 * -2,iVar5 + iVar7 * -2);
  if (*param_1 == 1) {
    _ZN9alacritty8renderer4text12TextRenderer6resize17h29ae557e2ecc5169E(param_1 + 2,param_2);
    return;
  }
  _ZN9alacritty8renderer4text12TextRenderer6resize17h4301adbe248d70e5E(param_1 + 2,param_2);
  return;
}