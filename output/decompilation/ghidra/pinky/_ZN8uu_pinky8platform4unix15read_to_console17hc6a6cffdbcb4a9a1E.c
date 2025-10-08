void _ZN8uu_pinky8platform4unix15read_to_console17hc6a6cffdbcb4a9a1E(undefined4 param_1)

{
  undefined auVar1 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [24];
  undefined local_38 [48];
  
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h00e1d9f834816982E
            (local_38,param_1);
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
                    /* try { // try from 001640f1 to 0016412f has its CatchHandler @ 001641b7 */
  auVar1 = _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_11read_to_end17h05014a0e11dc2a76E
                     (local_38,&local_a8);
  if (auVar1._0_8_ == 0) {
    _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h5ea1a6bc07b7fdfcE
              (0,auVar1._8_8_);
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001ffe20)
              (local_50,local_a0,local_98);
    local_88 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h3e04ddfa3244aadcE;
    local_80 = &DAT_00119240;
    local_78 = 1;
    local_60 = 0;
    local_70 = &local_90;
    local_68 = 1;
                    /* try { // try from 00164172 to 0016417c has its CatchHandler @ 001641a8 */
    local_90 = local_50;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0)(&local_80);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h29ddd331d55ccf59E(local_50);
  }
  else {
    _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h5ea1a6bc07b7fdfcE
              (auVar1._0_8_,auVar1._8_8_);
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h736d7624bde0aeedE
            (local_a8,local_a0);
  _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h4d2d4d2b5655530eE
            (local_38);
  return;
}