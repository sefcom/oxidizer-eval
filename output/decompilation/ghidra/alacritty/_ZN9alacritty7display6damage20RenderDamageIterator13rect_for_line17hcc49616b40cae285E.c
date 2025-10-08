void _ZN9alacritty7display6damage20RenderDamageIterator13rect_for_line17hcc49616b40cae285E
               (int *param_1,long param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x18);
  iVar3 = *(int *)(param_2 + 0x24);
  uVar4 = *param_3;
  uVar5 = param_3[2];
  uVar6 = param_3[4];
  iVar7 = *(int *)(param_2 + 0x1c);
  *param_1 = iVar2 * uVar5 + *(int *)(param_2 + 0x20);
  param_1[1] = ~uVar4 * iVar7 + (iVar1 - iVar3);
  param_1[2] = ((uVar6 - uVar5) + 1) * iVar2;
  param_1[3] = iVar7;
  return;
}