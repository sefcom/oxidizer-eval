ulong _ZN18alacritty_terminal9selection14SelectionRange8contains17h3bc08e8a28ad661fE
                (ulong *param_1,ulong param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 1);
  if (param_3 < iVar1) {
    return 0;
  }
  if (*(int *)(param_1 + 3) < param_3) {
    return 0;
  }
  if (param_2 < *param_1) {
    if (iVar1 == param_3) {
      return 0;
    }
    if (*(char *)(param_1 + 4) != '\0') {
      return 0;
    }
  }
  uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  if (param_1[2] < param_2) {
    if (*(int *)(param_1 + 3) == param_3) {
      return 0;
    }
    uVar2 = (ulong)(*(byte *)(param_1 + 4) ^ 1);
  }
  return uVar2;
}