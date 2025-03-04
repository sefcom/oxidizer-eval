long * _ZN7uu_expr11syntax_tree8NumOrStr14eval_as_string17h2669c68487e16a4dE
                 (long *param_1,long *param_2)

{
  long lVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*param_2 == -0x8000000000000000) {
    param_1[2] = param_2[3];
    lVar1 = param_2[2];
    *param_1 = param_2[1];
    param_1[1] = lVar1;
  }
  else {
    local_28 = *(undefined4 *)param_2;
    uStack_24 = *(undefined4 *)((long)param_2 + 4);
    uStack_20 = *(undefined4 *)(param_2 + 1);
    uStack_1c = *(undefined4 *)((long)param_2 + 0xc);
    local_18 = *(undefined4 *)(param_2 + 2);
    uStack_14 = *(undefined4 *)((long)param_2 + 0x14);
    uStack_10 = *(undefined4 *)(param_2 + 3);
    uStack_c = *(undefined4 *)((long)param_2 + 0x1c);
                    /* try { // try from 0022fb48 to 0022fb52 has its CatchHandler @ 0022fb64 */
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h4c9da07ea4794d0bE
              (param_1,&local_28);
    _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17h4ffd1c0c3ebf756bE(&local_28);
  }
  return param_1;
}