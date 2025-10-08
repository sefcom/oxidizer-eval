void _ZN9alacritty7display6damage11merge_rects17h0447d93a60ef6e50E
               (int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  iVar1 = *param_3;
  iVar2 = _ZN4core3cmp3Ord3min17h3552534d3430b892E(iVar5,iVar1);
  iVar3 = _ZN4core3cmp3Ord3max17h485505c56320f468E(iVar5 + param_2[2],iVar1 + param_3[2]);
  iVar5 = param_2[1];
  iVar1 = param_3[1];
  iVar4 = _ZN4core3cmp3Ord3max17h485505c56320f468E(param_2[3] + iVar5,param_3[3] + iVar1);
  iVar5 = _ZN4core3cmp3Ord3min17h3552534d3430b892E(iVar5,iVar1);
  *param_1 = iVar2;
  param_1[1] = iVar5;
  param_1[2] = iVar3 - iVar2;
  param_1[3] = iVar4 - iVar5;
  return;
}