void _ZN6uu_tac13try_mmap_path17h5a76dff90b159c96E(undefined8 *param_1)

{
  int __fd;
  int local_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined local_30;
  undefined2 local_2e;
  byte local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  
  _ZN3std2fs4File4open17h54d8f508eb814270E(&local_48);
  if ((local_48 & 1) != 0) {
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h817b496011a5d2a4E
              (&local_48);
    *param_1 = 0;
    return;
  }
  __fd = local_48._4_4_;
  local_4c = local_48._4_4_;
  local_38 = 0;
  local_48 = 0;
  local_30 = 0;
  local_2e = 0;
                    /* try { // try from 002133c8 to 002133ec has its CatchHandler @ 00213418 */
  _ZN7memmap211MmapOptions3map17h02fdac4a9f0686f4E(local_28,&local_48,&local_4c);
  if ((local_28[0] & 1) == 0) {
    param_1[1] = local_20;
    param_1[2] = uStack_18;
    *param_1 = 1;
  }
  else {
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_memmap2__Mmap_C_std__io__error__Error_GT__GT_17h6ab4ebf47749bb69E
              (local_28);
    *param_1 = 0;
    __fd = local_4c;
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h1d9f2810d658cc7aE(__fd);
  return;
}