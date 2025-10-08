ulong _ZN5uu_dd7is_fifo17h03c77fb6372aebe6E(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  int local_c0 [14];
  uint local_88;
  
  _ZN3std2fs8metadata17haf79437f52961f9cE(local_c0,param_1,param_2);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4ae1ab93a658b5bE
            (local_c0);
  return CONCAT71((int7)((ulong)unaff_RBP >> 8),(local_88 & 0xf000) == 0x1000 && local_c0[0] != 2) &
         0xffffffff;
}