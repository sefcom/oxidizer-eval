int * _ZN6uu_env14split_iterator13SplitIterator5split17hbd91db14676a9a59E(int *param_1,long param_2)

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
  
                    /* try { // try from 001da37d to 001da384 has its CatchHandler @ 001da3db */
  _ZN6uu_env14split_iterator13SplitIterator10state_root17ha7ad7ed6584dc219E(&local_38);
  if (local_38 == 8) {
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x50);
    iVar1 = *(int *)(param_2 + 0x44);
    iVar2 = *(int *)(param_2 + 0x48);
    iVar3 = *(int *)(param_2 + 0x4c);
    param_1[2] = *(int *)(param_2 + 0x40);
    param_1[3] = iVar1;
    param_1[4] = iVar2;
    param_1[5] = iVar3;
    *param_1 = 8;
    _ZN4core3ptr60drop_in_place_LT_uu_env__string_expander__StringExpander_GT_17ha4fe71f9740e15f8E
              (param_2);
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
    _ZN4core3ptr58drop_in_place_LT_uu_env__split_iterator__SplitIterator_GT_17hd7192570ff598ae0E
              (param_2);
  }
  return param_1;
}