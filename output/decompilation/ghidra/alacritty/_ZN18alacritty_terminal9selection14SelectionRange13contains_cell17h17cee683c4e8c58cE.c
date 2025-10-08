undefined8
_ZN18alacritty_terminal9selection14SelectionRange13contains_cell17h17cee683c4e8c58cE
          (long *param_1,long *param_2,long param_3,int param_4,char param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 2);
  if ((param_4 == *(int *)(param_2 + 2) && param_5 == '\0') &&
     (iVar4 = param_4, param_3 == param_2[1])) {
    if (*(int *)(param_1 + 1) == param_4 && *param_1 == param_3) {
      return 0;
    }
    if (*(int *)(param_1 + 3) == param_4 && param_1[2] == param_3) {
      return 0;
    }
    if (*(char *)(param_1 + 4) == '\x01') {
      if (*(int *)(param_1 + 1) == param_4 && param_1[2] == param_3) {
        return 0;
      }
      if (*(int *)(param_1 + 3) == param_4 && *param_1 == param_3) {
        return 0;
      }
    }
  }
  lVar1 = param_2[1];
  cVar2 = _ZN18alacritty_terminal9selection14SelectionRange8contains17h3bc08e8a28ad661fE
                    (param_1,lVar1,iVar4);
  if (cVar2 != '\0') {
    return 1;
  }
  if ((*(byte *)(*param_2 + 0x14) & 0x20) == 0) {
    return 0;
  }
  uVar3 = _ZN18alacritty_terminal9selection14SelectionRange8contains17h3bc08e8a28ad661fE
                    (param_1,lVar1 + 1,iVar4);
  return uVar3;
}