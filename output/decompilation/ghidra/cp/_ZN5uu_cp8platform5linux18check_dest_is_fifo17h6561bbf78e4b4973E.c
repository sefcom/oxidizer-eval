ulong _ZN5uu_cp8platform5linux18check_dest_is_fifo17h6561bbf78e4b4973E
                (undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  int local_c0 [14];
  uint local_88;
  
  _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(local_c0,param_1,param_2);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
            (local_c0);
  return CONCAT71((int7)((ulong)unaff_RBP >> 8),(local_88 & 0xf000) == 0x1000 && local_c0[0] != 2) &
         0xffffffff;
}