ulong * _ZN18alacritty_terminal9selection9Selection11range_block17hb0d8e5332cc8abd5E
                  (ulong *param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  undefined uVar7;
  ulong uVar8;
  int iVar9;
  
  cVar5 = (*(code *)
            PTR__ZN18alacritty_terminal9selection9Selection8is_empty17h0b26168e8eea422cE_009de588)
                    (param_2);
  uVar7 = 2;
  if (cVar5 != '\0') goto LAB_006bd9c4;
  uVar3 = *param_3;
  uVar4 = *param_4;
  if (uVar4 < uVar3) {
    cVar5 = *(char *)(param_3 + 2);
    *(undefined *)(param_3 + 2) = *(undefined *)(param_4 + 2);
    *(char *)(param_4 + 2) = cVar5;
    *param_3 = uVar4;
    *param_4 = uVar3;
    uVar6 = uVar4;
    uVar8 = uVar3;
    if (cVar5 != '\0') goto LAB_006bd98a;
LAB_006bd961:
    if (*(int *)(param_3 + 1) == *(int *)(param_4 + 1)) {
      if (uVar3 != uVar4 && uVar8 != 0) goto LAB_006bd984;
      goto LAB_006bd98a;
    }
    if (uVar8 != 0) {
LAB_006bd984:
      *param_4 = uVar8 - 1;
      uVar8 = uVar8 - 1;
      goto LAB_006bd98a;
    }
    uVar8 = 0;
    iVar1 = *(int *)(param_3 + 1);
    iVar2 = *(int *)(param_4 + 1);
    cVar5 = *(char *)(param_3 + 2);
  }
  else {
    uVar6 = uVar3;
    uVar8 = uVar4;
    if (*(char *)(param_4 + 2) == '\0') goto LAB_006bd961;
LAB_006bd98a:
    iVar1 = *(int *)(param_3 + 1);
    iVar2 = *(int *)(param_4 + 1);
    cVar5 = *(char *)(param_3 + 2);
  }
  iVar9 = iVar2;
  if ((cVar5 != '\0') && (iVar9 = iVar1, iVar1 != iVar2 || uVar6 != uVar8)) {
    uVar6 = uVar6 + 1;
    *param_3 = uVar6;
    iVar9 = iVar2;
  }
  *param_1 = uVar6;
  *(int *)(param_1 + 1) = iVar1;
  param_1[2] = uVar8;
  *(int *)(param_1 + 3) = iVar9;
  uVar7 = 1;
LAB_006bd9c4:
  *(undefined *)(param_1 + 4) = uVar7;
  return param_1;
}