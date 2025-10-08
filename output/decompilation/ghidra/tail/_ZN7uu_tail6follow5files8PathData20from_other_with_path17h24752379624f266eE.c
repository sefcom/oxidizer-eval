void _ZN7uu_tail6follow5files8PathData20from_other_with_path17h24752379624f266eE
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 local_190;
  int local_e0 [44];
  
  lVar1 = *(long *)(param_2 + 200);
  ppuVar2 = *(undefined ***)(param_2 + 0xd0);
  ppuVar4 = ppuVar2;
  lVar3 = lVar1;
  if (lVar1 == 0) {
                    /* try { // try from 001a2d9a to 001a2dbe has its CatchHandler @ 001a2ea6 */
    _ZN3std2fs4File4open17h45183e62b5972047E(&local_190,param_3,param_4);
    if ((int)local_190 == 1) {
      _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h1d555ffd127b633fE
                (&local_190);
      lVar3 = 0;
    }
    else {
                    /* try { // try from 001a2dc8 to 001a2de1 has its CatchHandler @ 001a2e92 */
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h293b79a640eb5f10E
                (local_e0,local_190._4_4_);
      lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf1e01b4c89005b4bE(local_e0);
    }
    ppuVar4 = &
              PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hdd2cb84096b06aabE_00273408
    ;
  }
                    /* try { // try from 001a2dec to 001a2e1e has its CatchHandler @ 001a2eb0 */
  _ZN3std2fs8metadata17h5c248dd9820946ebE(local_e0,param_3,param_4);
  if (local_e0[0] == 2) {
    local_190 = 2;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17ha4975ed621f4cd7cE
              (local_e0);
  }
  else {
    (*(code *)PTR_memcpy_0027d2f0)(&local_190,local_e0,0xb0);
  }
                    /* try { // try from 001a2e47 to 001a2e5b has its CatchHandler @ 001a2eab */
  _ZN7uu_tail6follow5files8PathData3new17h86625b3b593f4467E
            (param_1,lVar3,ppuVar4,&local_190,*(undefined8 *)(param_2 + 0xb8),
             *(undefined8 *)(param_2 + 0xc0));
  if (lVar1 == 0) {
                    /* try { // try from 001a2e61 to 001a2e6c has its CatchHandler @ 001a2e8d */
    _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h1ddfbf499f92a46cE
              (0,ppuVar2);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha5fed46387940267E(param_2 + 0xb0);
  return;
}