undefined8 _ZN9uu_csplit11SplitWriter10new_writer17hf8bcfdadfd914b2eE(undefined8 *param_1)

{
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined local_28 [24];
  
  _ZN9uu_csplit10split_name9SplitName3get17h6978abebafad78dbE(local_28,param_1[4],param_1[5]);
  _ZN3std2fs4File6create17hf27309c53a086f3bE(&local_48,local_28);
  if (local_48 == 0) {
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h49ebb8e54e383c4eE
              (&local_48,0x2000,uStack_44);
                    /* try { // try from 002bd268 to 002bd26f has its CatchHandler @ 002bd29a */
    _ZN4core3ptr109drop_in_place_LT_core__option__Option_LT_std__io__buffered__bufwriter__BufWriter_LT_std__fs__File_GT__GT__GT_17h415acb109cb632b9E
              (param_1);
    param_1[2] = local_38;
    param_1[3] = uStack_30;
    *param_1 = CONCAT44(uStack_44,local_48);
    param_1[1] = uStack_40;
    param_1[5] = param_1[5] + 1;
    param_1[6] = 0;
    *(undefined *)(param_1 + 7) = 0;
    uStack_40 = 0;
  }
  return uStack_40;
}