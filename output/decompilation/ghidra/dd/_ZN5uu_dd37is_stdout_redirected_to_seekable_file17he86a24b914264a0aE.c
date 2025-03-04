ulong _ZN5uu_dd37is_stdout_redirected_to_seekable_file17he86a24b914264a0aE(void)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  int local_4c;
  undefined local_48 [16];
  int local_38;
  int local_34;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  _ZN5uu_dd20stdout_canonicalized17h8616e33a4059f2eeE(local_28);
                    /* try { // try from 001d8e3a to 001d8e43 has its CatchHandler @ 001d8f27 */
  _ZN3std2fs4File4open17h7106e998c3d1654bE(&local_38,local_20,local_18);
  if (local_38 != 0) {
    uVar2 = 0;
    goto LAB_001d8ec5;
  }
  local_4c = local_34;
                    /* try { // try from 001d8e58 to 001d8eb9 has its CatchHandler @ 001d8f36 */
  local_48 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                       (&local_4c,2,0);
  if (local_48._0_8_ == 0) {
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h5fb3bf5cfc30f7c8E
              (local_48);
    auVar3 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                       (&local_4c,1,0);
    local_48 = auVar3;
    if (auVar3._0_8_ != 0) {
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h5fb3bf5cfc30f7c8E
                (local_48);
      goto LAB_001d8eba;
    }
                    /* try { // try from 001d8ee6 to 001d8f0b has its CatchHandler @ 001d8f36 */
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h5fb3bf5cfc30f7c8E
              (local_48);
    lVar1 = _ZN3std2io4Seek6rewind17h775fcf7d5bbb9e4dE(&local_4c);
    local_48._0_8_ = lVar1;
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hdf0c997779a17efcE
              (local_48);
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),lVar1 == 0);
  }
  else {
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h5fb3bf5cfc30f7c8E
              (local_48);
LAB_001d8eba:
    uVar2 = 0;
  }
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h9d905c7759330312E(local_4c);
LAB_001d8ec5:
                    /* try { // try from 001d8ec5 to 001d8ece has its CatchHandler @ 001d8f14 */
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h4302a5a7bca89692E(local_28);
  if (local_38 != 0) {
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17hc4afd8b230b2ba09E
              (&local_38);
  }
  return uVar2 & 0xffffffff;
}