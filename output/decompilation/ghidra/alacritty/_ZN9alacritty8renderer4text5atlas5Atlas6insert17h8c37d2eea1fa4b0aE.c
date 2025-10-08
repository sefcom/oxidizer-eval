void _ZN9alacritty8renderer4text5atlas5Atlas6insert17h8c37d2eea1fa4b0aE
               (undefined *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_3 + 0x2c);
  iVar2 = *(int *)(param_2 + 4);
  if (iVar1 <= iVar2) {
    iVar3 = *(int *)(param_3 + 0x30);
    iVar4 = *(int *)(param_2 + 8);
    if (iVar3 <= iVar4) {
      iVar5 = *(int *)(param_2 + 0xc);
      iVar6 = iVar4 - *(int *)(param_2 + 0x10);
      if (iVar2 < iVar5 + iVar1 || iVar6 <= iVar3) {
        iVar5 = *(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14);
        iVar6 = iVar4 - iVar5;
        if (0 < iVar6) {
          *(int *)(param_2 + 0x10) = iVar5;
          *(undefined4 *)(param_2 + 0xc) = 0;
          *(undefined4 *)(param_2 + 0x14) = 0;
          iVar5 = 0;
          goto LAB_00563e01;
        }
      }
      else {
LAB_00563e01:
        if ((iVar5 + iVar1 <= iVar2) && (iVar3 < iVar6)) {
          _ZN9alacritty8renderer4text5atlas5Atlas12insert_inner17h1566285492361f39E();
          return;
        }
      }
      *param_1 = 0;
      goto LAB_00563db2;
    }
  }
  *param_1 = 1;
LAB_00563db2:
  param_1[0x1c] = 2;
  return;
}