void _ZN7flealib3ftp3FTP16read_file_to_vec17he7dde53015678ca3E(undefined8 *param_1)

{
  undefined auVar1 [16];
  int local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  _ZN3std2fs4File4open17hb7998fa934f45aceE(&local_20);
  if ((local_20 & 1) != 0) {
    param_1[1] = uStack_18;
    *param_1 = 0x8000000000000000;
    return;
  }
  local_24 = local_20._4_4_;
  local_20 = 0;
  uStack_18 = 1;
  local_10 = 0;
                    /* try { // try from 004a39e8 to 004a39f7 has its CatchHandler @ 004a3a4e */
  auVar1 = (*(code *)
             PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17hc5ce334212601c81E_008284f0
           )(&local_24,&local_20);
  if (auVar1._0_8_ == 0) {
    param_1[2] = local_10;
    *param_1 = local_20;
    param_1[1] = uStack_18;
  }
  else {
    param_1[1] = auVar1._8_8_;
    *param_1 = 0x8000000000000000;
                    /* try { // try from 004a3a0e to 004a3a17 has its CatchHandler @ 004a3a3a */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(&local_20);
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_24);
  return;
}