void _ZN5uu_cp8platform5linux22check_sparse_detection17he625f50b8a9bdb43E(undefined2 *param_1)

{
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  ulong local_70;
  ulong local_60;
  
  _ZN3std2fs4File4open17h2ade805364297b3fE(&local_c0);
  if (local_c0 == 0) {
    local_c4 = local_bc;
                    /* try { // try from 00212f33 to 00212f42 has its CatchHandler @ 00212f89 */
    _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_c0,&local_c4);
    if (local_c0 == 2) {
      *(undefined8 *)(param_1 + 4) = local_b8;
      *(undefined *)param_1 = 1;
    }
    else if (local_60 < local_70 >> 9) {
      *(undefined *)((long)param_1 + 1) = 1;
      *(undefined *)param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_bc);
  }
  else {
    *(undefined8 *)(param_1 + 4) = local_b8;
    *(undefined *)param_1 = 1;
  }
  return;
}