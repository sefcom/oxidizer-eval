undefined8 _ZN5uu_dd7is_fifo17h9d574f34ee5f3724E(undefined8 param_1,undefined8 param_2)

{
  int local_b0 [14];
  uint local_78;
  
  _ZN3std2fs8metadata17he5d63b9e36b09796E(local_b0,param_1,param_2);
  if ((local_b0[0] != 2) && ((local_78 & 0xf000) == 0x1000)) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he8a2e51a512ba290E
              (local_b0);
    return 1;
  }
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he8a2e51a512ba290E
            (local_b0);
  return 0;
}