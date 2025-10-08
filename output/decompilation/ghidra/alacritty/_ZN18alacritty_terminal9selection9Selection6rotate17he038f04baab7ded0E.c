void _ZN18alacritty_terminal9selection9Selection6rotate17he038f04baab7ded0E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               int param_5,int param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  uVar7 = _ZN18alacritty_terminal4grid10Dimensions15bottommost_line17h4f75d9959625aee4E(param_4);
  cVar6 = _ZN80__LT_alacritty_terminal__index__Point_LT_L_C_C_GT__u20_as_u20_core__cmp__Ord_GT_3cmp17h2b413278cc536aeeE
                    (*param_2,*(undefined4 *)(param_2 + 1),param_2[3],*(undefined4 *)(param_2 + 4));
  puVar11 = param_2 + 3;
  puVar5 = param_2;
  if (cVar6 < '\x01') {
    puVar11 = param_2;
    puVar5 = param_2 + 3;
  }
  iVar8 = *(int *)(puVar11 + 1);
  if ((param_5 == 0 || param_5 <= iVar8) && iVar8 < param_6) {
    iVar8 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE(iVar8 - param_7,uVar7);
    *(int *)(puVar11 + 1) = iVar8;
    if ((iVar8 < param_6) || (param_6 <= *(int *)(puVar5 + 1))) {
      if ((param_5 != 0) && (iVar8 < param_5)) {
        if (*(char *)(param_2 + 6) != '\x01') {
          *puVar11 = 0;
          *(undefined *)(puVar11 + 2) = 0;
        }
        *(int *)(puVar11 + 1) = param_5;
        iVar8 = param_5;
      }
      goto LAB_004746c8;
    }
LAB_004746f7:
    *(undefined *)(param_1 + 5) = 2;
  }
  else {
LAB_004746c8:
    iVar9 = *(int *)(puVar5 + 1);
    if ((param_5 <= iVar9 || param_5 == 0) && iVar9 < param_6) {
      iVar9 = _ZN4core3cmp3Ord3min17h08e004ced85b11ebE(iVar9 - param_7,uVar7);
      *(int *)(puVar5 + 1) = iVar9;
      if (iVar9 < iVar8) goto LAB_004746f7;
      if (param_6 <= iVar9) {
        if (*(char *)(param_2 + 6) != '\x01') {
          uVar10 = _ZN18alacritty_terminal4grid10Dimensions11last_column17h43ccb5805f51a6acE
                             (param_3);
          *puVar5 = uVar10;
          *(undefined *)(puVar5 + 2) = 1;
        }
        *(int *)(puVar5 + 1) = param_6 + -1;
      }
    }
    param_1[6] = param_2[6];
    uVar10 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar4;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    *param_1 = uVar10;
    param_1[1] = uVar1;
  }
  return;
}