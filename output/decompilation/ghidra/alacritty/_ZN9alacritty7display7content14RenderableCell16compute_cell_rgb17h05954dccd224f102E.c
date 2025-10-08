void _ZN9alacritty7display7content14RenderableCell16compute_cell_rgb17h05954dccd224f102E
               (uint3 *param_1,uint3 *param_2,undefined4 *param_3,uint param_4,undefined8 param_5)

{
  undefined uVar1;
  undefined2 uVar2;
  uint3 uVar3;
  char cVar4;
  uint uVar5;
  
  if ((char)param_4 == '\0') {
    uVar2 = *(undefined2 *)param_1;
    uVar1 = *(undefined *)((long)param_1 + 2);
  }
  else {
    if ((param_4 & 0xff) != 1) {
      param_4 = param_4 >> 8;
      goto LAB_00546dfa;
    }
    uVar2 = *(undefined2 *)param_2;
    uVar1 = *(undefined *)((long)param_2 + 2);
  }
  param_4 = (uint)CONCAT12(uVar1,uVar2);
LAB_00546dfa:
  uVar3 = *param_1;
  *(short *)param_1 = (short)param_4;
  *(char *)((long)param_1 + 2) = (char)(param_4 >> 0x10);
  if ((char)param_5 == '\0') {
    uVar5 = (uint)uVar3;
  }
  else if (((uint)param_5 & 0xff) == 2) {
    uVar5 = (uint)((ulong)param_5 >> 8) & 0xffffff;
  }
  else {
    uVar5 = (uint)*param_2;
  }
  *(short *)param_2 = (short)uVar5;
  *(char *)((long)param_2 + 2) = (char)(uVar5 >> 0x10);
  cVar4 = _ZN75__LT_alacritty__display__color__CellRgb_u20_as_u20_core__cmp__PartialEq_GT_2eq17h8c6466bddcfe3538E
                    ();
  if (cVar4 == '\0') {
    *param_3 = 0x3f800000;
  }
  return;
}