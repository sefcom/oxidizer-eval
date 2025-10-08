void _ZN5uu_cp8platform5linux22check_sparse_detection17hf45a87016948019fE(undefined2 *param_1)

{
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  ulong local_70;
  ulong local_60;
  
  _ZN3std2fs4File4open17h87ebb42518eeb9ffE(&local_c0);
  if (local_c0 == 1) {
    *(undefined8 *)(param_1 + 4) = local_b8;
    *(undefined *)param_1 = 1;
    return;
  }
  local_c4 = local_bc;
                    /* try { // try from 0019b23b to 0019b24a has its CatchHandler @ 0019b291 */
  (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_00267b18)(&local_c0,&local_c4);
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
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_bc);
  return;
}