void _ZN6uu_tac13try_mmap_path17h01ee297263e394e5E(undefined8 *param_1)

{
  int __fd;
  int local_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined local_30;
  undefined2 local_2e;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  _ZN3std2fs4File4open17h0ae14c8dddef61f7E(&local_48);
  if ((int)local_48 == 0) {
    __fd = local_48._4_4_;
    local_4c = local_48._4_4_;
    local_38 = 0;
    local_48 = 0;
    local_30 = 0;
    local_2e = 0;
                    /* try { // try from 002a09a3 to 002a09c8 has its CatchHandler @ 002a09f4 */
    _ZN7memmap211MmapOptions3map17hf6d33351edcc2203E(&local_28,&local_48,&local_4c);
    if (local_28 == 0) {
      param_1[1] = local_20;
      param_1[2] = uStack_18;
      *param_1 = 1;
    }
    else {
      _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_memmap2__Mmap_C_std__io__error__Error_GT__GT_17h33f78c51d3eed1e5E
                (&local_28);
      *param_1 = 0;
      __fd = local_4c;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h8bacf0b914d62b8aE(__fd);
  }
  else {
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17hb56a7153beea00aaE
              (&local_48);
    *param_1 = 0;
  }
  return;
}