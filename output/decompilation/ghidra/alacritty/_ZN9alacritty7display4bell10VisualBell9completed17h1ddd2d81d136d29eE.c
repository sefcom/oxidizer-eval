bool _ZN9alacritty7display4bell10VisualBell9completed17h1ddd2d81d136d29eE(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  bool bVar3;
  undefined8 local_28;
  undefined4 local_20;
  
  iVar1 = *(int *)(param_1 + 3);
  if (iVar1 != 1000000000) {
    uVar2 = param_1[2];
    local_28 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_009de3e8)();
    local_20 = extraout_EDX;
    uVar2 = (*(code *)PTR__ZN3std4time7Instant14duration_since17h569f2ab177f38507E_009dfe28)
                      (&local_28,uVar2,iVar1);
    bVar3 = uVar2 < *param_1;
    if (uVar2 == *param_1) {
      bVar3 = extraout_EDX_00 < *(uint *)(param_1 + 1);
    }
    if (!bVar3) {
      *(undefined4 *)(param_1 + 3) = 1000000000;
    }
  }
  return iVar1 == 1000000000;
}