ulong _ZN5uu_cp8platform5linux18check_dest_is_fifo17h1ec55e7a10ac562cE
                (undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  long local_b8;
  undefined8 local_b0;
  uint local_80;
  
  _ZN3std2fs8metadata17h003d8cdbffde7c56E(&local_b8,param_1,param_2);
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
            (local_b8,local_b0);
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),(local_80 & 0xf000) == 0x1000 && local_b8 != 2) &
         0xffffffff;
}