void __rustcall uu_cp::platform::linux::check_sparse_detection(undefined2 *param_1)

{
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  ulong local_70;
  ulong local_60;
  
  std::fs::File::open(&local_c0);
  if (local_c0 == 0) {
    local_c4 = local_bc;
                    /* try { // try from 00212573 to 00212582 has its CatchHandler @ 002125c9 */
    std::fs::File::metadata(&local_c0,&local_c4);
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
    core::ptr::drop_in_place<std::fs::File>(local_bc);
  }
  else {
    *(undefined8 *)(param_1 + 4) = local_b8;
    *(undefined *)param_1 = 1;
  }
  return;
}