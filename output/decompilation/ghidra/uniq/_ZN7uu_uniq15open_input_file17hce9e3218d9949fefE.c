undefined8 *
_ZN7uu_uniq15open_input_file17hce9e3218d9949fefE
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined auVar4 [12];
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50 [6];
  
  if (param_2 == 0) {
LAB_00168724:
    local_50[0] = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001fc560)();
    auVar4 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_001fc568)(local_50);
    local_60 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9df9e3bedef2cae6E(auVar4._0_8_,auVar4._8_4_ & 1);
    ppuVar2 = &
              PTR__ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17hc5a3017132635bc9E_001f59f0
    ;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h679c5716f854e642E
                      (param_2,param_3,&DAT_0011b6a4,1);
    if (cVar1 != '\0') goto LAB_00168724;
    _ZN3std2fs4File4open17h89bebe60b629907aE(local_50,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hc64994a9983278f5E
              (&local_60,local_50,param_2,param_3);
    if (local_60 != 0) {
      ppuVar2 = (undefined **)CONCAT44(uStack_54,local_58);
      uVar3 = 1;
      goto LAB_00168751;
    }
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17ha5cb902d0606ef3dE
              (local_50,local_58);
    local_60 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hcfb3c24bb78fa996E(local_50);
    ppuVar2 = &
              PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h8eb7cfe9d0d2500eE_001f5968
    ;
  }
  uVar3 = 0;
LAB_00168751:
  param_1[1] = local_60;
  param_1[2] = ppuVar2;
  *param_1 = uVar3;
  return param_1;
}