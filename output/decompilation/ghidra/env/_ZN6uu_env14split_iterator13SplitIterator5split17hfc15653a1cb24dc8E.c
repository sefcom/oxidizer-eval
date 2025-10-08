int * _ZN6uu_env14split_iterator13SplitIterator5split17hfc15653a1cb24dc8E
                (int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined8 local_18;
  
                    /* try { // try from 0017112d to 00171134 has its CatchHandler @ 0017118c */
  _ZN6uu_env14split_iterator13SplitIterator10state_root17hc4d795535555f919E(&local_38);
  if (local_38 == 0xc) {
    *(undefined8 *)(param_1 + 6) = param_2[10];
    iVar1 = *(int *)((long)param_2 + 0x44);
    iVar2 = *(int *)(param_2 + 9);
    iVar3 = *(int *)((long)param_2 + 0x4c);
    param_1[2] = *(int *)(param_2 + 8);
    param_1[3] = iVar1;
    param_1[4] = iVar2;
    param_1[5] = iVar3;
    *param_1 = 0xc;
    _ZN4core3ptr49drop_in_place_LT_std__sys__os_str__bytes__Buf_GT_17he7d5b41560417e9bE
              (*param_2,param_2[1]);
  }
  else {
    *(undefined8 *)(param_1 + 8) = local_18;
    param_1[4] = local_28;
    param_1[5] = iStack_24;
    param_1[6] = iStack_20;
    param_1[7] = iStack_1c;
    *param_1 = local_38;
    param_1[1] = iStack_34;
    param_1[2] = iStack_30;
    param_1[3] = iStack_2c;
    _ZN4core3ptr58drop_in_place_LT_uu_env__split_iterator__SplitIterator_GT_17h99564937bce00632E
              (param_2);
  }
  return param_1;
}