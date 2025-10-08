ulong _ZN5uu_cp19file_or_link_exists17h2275c94decc1c7b4E(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  int local_c0 [44];
  
  _ZN3std2fs16symlink_metadata17h814bc3976f7d40c5E(local_c0,param_1,param_2);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
            (local_c0);
  return CONCAT71((int7)((ulong)unaff_RBP >> 8),local_c0[0] != 2) & 0xffffffff;
}