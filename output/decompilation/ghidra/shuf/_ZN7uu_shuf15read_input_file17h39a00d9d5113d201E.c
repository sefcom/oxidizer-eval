undefined8 *
_ZN7uu_shuf15read_input_file17h39a00d9d5113d201E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined auVar4 [16];
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined local_58 [56];
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h7a1eebabf92f0a45E
                    (param_2,param_3,&DAT_0011f2e6,1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h6de938cd2a1a2187E(&local_70,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h44a724dea645e385E
              (&local_80,&local_70,param_2,param_3);
    if (local_80 != 0) {
      param_1[1] = local_80;
      param_1[2] = CONCAT44(uStack_74,local_78);
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h76bc6918f77c692bE(local_78);
    ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hf9a2806ca240e877E_00237c28;
  }
  else {
    uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfbb2289a6863f155E(uVar2);
    ppuVar3 = (undefined **)&DAT_00237c80;
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h7d287012b593b0a9E
            (local_58,0x2000,uVar2,ppuVar3);
  local_70 = 0;
  uStack_68 = 1;
  local_60 = 0;
                    /* try { // try from 001c1765 to 001c1784 has its CatchHandler @ 001c17e4 */
  auVar4 = _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_11read_to_end17hc79da0281f407c42E
                     (local_58,&local_70);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6f9450da0d088758E
            (&local_80,auVar4._0_8_,auVar4._8_8_,param_2,param_3);
  if (local_80 == 0) {
    param_1[2] = local_60;
    *(undefined4 *)param_1 = (undefined4)local_70;
    *(undefined4 *)((long)param_1 + 4) = local_70._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_68._4_4_;
  }
  else {
    param_1[1] = local_80;
    param_1[2] = CONCAT44(uStack_74,local_78);
    *param_1 = 0x8000000000000000;
                    /* try { // try from 001c17a9 to 001c17b2 has its CatchHandler @ 001c17df */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hfc2a7b88a66b26ddE(&local_70);
  }
  _ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17hf54340fb0eaaa981E
            (local_58);
  return param_1;
}