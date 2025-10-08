undefined4
_ZN9alacritty7display6damage13rects_overlap17h703efb688ce982c6E(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1[2] + *param_1 < *param_2) {
    return 0;
  }
  if (*param_2 + param_2[2] < *param_1) {
    return 0;
  }
  iVar1 = param_1[1];
  if (param_1[3] + iVar1 < param_2[1]) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 <= param_2[1] + param_2[3]);
}