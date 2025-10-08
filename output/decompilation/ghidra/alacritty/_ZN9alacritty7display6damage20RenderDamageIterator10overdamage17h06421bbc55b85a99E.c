void _ZN9alacritty7display6damage20RenderDamageIterator10overdamage17h06421bbc55b85a99E
               (undefined8 *param_1,long param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x18);
  iVar1 = _ZN4core3cmp3Ord3max17h485505c56320f468E(*param_3 - iVar3,0);
  *param_3 = iVar1;
  uVar2 = _ZN4core3cmp3Ord3max17h485505c56320f468E(*(int *)(param_2 + 0x10) - iVar1,0);
  iVar3 = _ZN4core3cmp3Ord3min17h3552534d3430b892E(uVar2,iVar3 * 2 + param_3[2]);
  param_3[2] = iVar3;
  iVar3 = *(int *)(param_2 + 0x1c);
  iVar1 = _ZN4core3cmp3Ord3max17h485505c56320f468E(param_3[1] - iVar3 / 2,0);
  param_3[1] = iVar1;
  uVar2 = _ZN4core3cmp3Ord3max17h485505c56320f468E(*(int *)(param_2 + 0x14) - iVar1,0);
  iVar3 = _ZN4core3cmp3Ord3min17h3552534d3430b892E(uVar2,iVar3 + param_3[3]);
  param_3[3] = iVar3;
  *param_1 = *(undefined8 *)param_3;
  *(int *)(param_1 + 1) = param_3[2];
  *(int *)((long)param_1 + 0xc) = param_3[3];
  return;
}