long * _ZN18alacritty_terminal9selection9Selection12range_simple17h1a39dda08803e914E
                 (long *param_1,undefined8 param_2,long *param_3,long *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  long lVar7;
  
  cVar3 = (*(code *)
            PTR__ZN18alacritty_terminal9selection9Selection8is_empty17h0b26168e8eea422cE_009de588)
                    (param_2);
  uVar5 = 2;
  if (cVar3 != '\0') goto LAB_006bd8ee;
  if (*(char *)(param_4 + 2) == '\0') {
    if (*(int *)(param_3 + 1) == *(int *)(param_4 + 1)) {
      lVar7 = *param_4;
      if (*param_3 != lVar7) {
        if (lVar7 == 0) goto LAB_006bd895;
LAB_006bd885:
        *param_4 = lVar7 + -1;
      }
    }
    else {
      lVar7 = *param_4;
      if (lVar7 != 0) goto LAB_006bd885;
LAB_006bd895:
      *param_4 = param_5 + -1;
      *(int *)(param_4 + 1) = *(int *)(param_4 + 1) + -1;
    }
  }
  lVar7 = *param_3;
  iVar4 = *(int *)(param_3 + 1);
  iVar1 = *(int *)(param_4 + 1);
  iVar6 = iVar1;
  if ((*(char *)(param_3 + 2) != '\0') && ((iVar4 != iVar1 || (iVar6 = iVar4, lVar7 != *param_4))))
  {
    lVar7 = lVar7 + 1;
    *param_3 = lVar7;
    iVar6 = iVar1;
    if (lVar7 == param_5) {
      *param_3 = 0;
      iVar4 = iVar4 + 1;
      *(int *)(param_3 + 1) = iVar4;
      lVar7 = 0;
    }
  }
  lVar2 = *param_4;
  *param_1 = lVar7;
  *(int *)(param_1 + 1) = iVar4;
  param_1[2] = lVar2;
  *(int *)(param_1 + 3) = iVar6;
  uVar5 = 0;
LAB_006bd8ee:
  *(undefined *)(param_1 + 4) = uVar5;
  return param_1;
}