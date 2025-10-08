byte _ZN5uu_rm11is_writable17h35835a5ca0912becE(undefined8 param_1,undefined8 param_2)

{
  int local_b0 [2];
  undefined8 local_a8;
  byte local_78;
  
  _ZN3std2fs8metadata17h578d377c5d8d0272E(local_b0,param_1,param_2);
  if (local_b0[0] == 2) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h33062896cdc75427E
              (2,local_a8);
    return 0;
  }
  return local_78 >> 7;
}