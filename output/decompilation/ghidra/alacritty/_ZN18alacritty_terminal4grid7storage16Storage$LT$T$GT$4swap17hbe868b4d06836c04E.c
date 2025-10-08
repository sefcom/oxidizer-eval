void _ZN18alacritty_terminal4grid7storage16Storage_LT_T_GT_4swap17hbe868b4d06836c04E
               (long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar7 = ((long)(*(int *)(param_1 + 0x20) - param_2) + *(long *)(param_1 + 0x18)) - 1;
  uVar11 = *(ulong *)(param_1 + 0x10);
  uVar12 = uVar11;
  if (uVar7 < uVar11) {
    uVar12 = 0;
  }
  uVar9 = ((long)(*(int *)(param_1 + 0x20) - param_3) + *(long *)(param_1 + 0x18)) - 1;
  if (uVar9 < uVar11) {
    uVar11 = 0;
  }
  lVar3 = *(long *)(param_1 + 8);
  lVar8 = (uVar7 - uVar12) * 0x20;
  lVar10 = (uVar9 - uVar11) * 0x20;
  uVar4 = *(undefined8 *)(lVar3 + lVar8);
  uVar5 = ((undefined8 *)(lVar3 + lVar8))[1];
  uVar6 = ((undefined8 *)(lVar3 + lVar10))[1];
  *(undefined8 *)(lVar3 + lVar8) = *(undefined8 *)(lVar3 + lVar10);
  ((undefined8 *)(lVar3 + lVar8))[1] = uVar6;
  *(undefined8 *)(lVar3 + lVar10) = uVar4;
  ((undefined8 *)(lVar3 + lVar10))[1] = uVar5;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar8);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar10);
  uVar6 = puVar1[1];
  puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar10);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  return;
}