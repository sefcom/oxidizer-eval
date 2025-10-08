undefined8 _ZN9uu_csplit11SplitWriter10new_writer17hee41ac5ef27e0855E(undefined8 *param_1)

{
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined local_28 [24];
  
  _ZN9uu_csplit10split_name9SplitName3get17hecaf47b623a4fc62E(local_28,param_1[4],param_1[5]);
  _ZN3std2fs4File6create17h9a48f376b3cc205cE(&local_48,local_28);
  if (local_48 == 1) {
    return uStack_40;
  }
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h7c2b7c3db821253cE
            (&local_48,uStack_44);
                    /* try { // try from 00221a49 to 00221a50 has its CatchHandler @ 00221a7b */
  _ZN4core3ptr109drop_in_place_LT_core__option__Option_LT_std__io__buffered__bufwriter__BufWriter_LT_std__fs__File_GT__GT__GT_17h8e7ec623bec16818E
            (param_1);
  param_1[2] = local_38;
  param_1[3] = uStack_30;
  *param_1 = CONCAT44(uStack_44,local_48);
  param_1[1] = uStack_40;
  param_1[5] = param_1[5] + 1;
  param_1[6] = 0;
  *(undefined *)(param_1 + 7) = 0;
  return 0;
}