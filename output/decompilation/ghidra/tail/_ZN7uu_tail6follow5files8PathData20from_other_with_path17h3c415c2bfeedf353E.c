undefined8
_ZN7uu_tail6follow5files8PathData20from_other_with_path17h3c415c2bfeedf353E
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 local_190;
  int local_e0 [2];
  undefined8 local_d8;
  
  lVar1 = *(long *)(param_2 + 200);
  ppuVar2 = *(undefined ***)(param_2 + 0xd0);
  if (lVar1 == 0) {
                    /* try { // try from 0020eecd to 0020eeed has its CatchHandler @ 0020efb4 */
    _ZN3std2fs4File4open17hcbb28a04a46ba590E(&local_190,param_3,param_4);
    if ((int)local_190 == 0) {
                    /* try { // try from 0020eef7 to 0020ef15 has its CatchHandler @ 0020efb2 */
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17ha3ac34d0a7f10d70E
                (local_e0,0x2000,local_190._4_4_);
      lVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf480b26787a6f5a3E(local_e0);
    }
    else {
      _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17hb4496a4e206aee00E
                (&local_190);
      lVar1 = 0;
    }
    ppuVar2 = &
              PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17ha419d633ac1ad1e3E_002bc4c8
    ;
  }
                    /* try { // try from 0020ef20 to 0020ef52 has its CatchHandler @ 0020efbe */
  _ZN3std2fs8metadata17h5a76b0b01e9dc15dE(local_e0,param_3,param_4);
  if (local_e0[0] == 2) {
    local_190 = 2;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he6af43ab7f514533E
              (local_d8);
  }
  else {
    (*(code *)PTR_memcpy_002c2760)(&local_190,local_e0,0xb0);
  }
                    /* try { // try from 0020ef7b to 0020ef8d has its CatchHandler @ 0020efb9 */
  _ZN7uu_tail6follow5files8PathData3new17h9cc9fab20487d2f9E
            (param_1,lVar1,ppuVar2,&local_190,*(undefined8 *)(param_2 + 0xb8),
             *(undefined8 *)(param_2 + 0xc0));
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e81f59885851d09E(param_2 + 0xb0);
  return param_1;
}