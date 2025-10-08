undefined  [16]
_ZN6uu_seq16select_precision17h84cf8927d3a54a3bE(int *param_1,int *param_2,long *param_3)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  undefined auVar3 [16];
  
  if (((*param_1 == 1) && (*param_2 == 1)) && (*param_3 != 0)) {
    if ((*(long *)(param_2 + 2) == 0 && *(long *)(param_1 + 2) == 0) && param_3[1] == 0) {
      return ZEXT816(1);
    }
    uVar2 = _ZN4core3cmp3Ord3max17hc4036d29a65f4853E();
    auVar3._8_8_ = uVar2;
    auVar3._0_8_ = 1;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}