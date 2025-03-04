undefined8 *
_ZN7uu_uniq15open_input_file17h792d730de2d63225E
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
LAB_001befc4:
    local_50[0] = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    auVar4 = _ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE(local_50);
    local_60 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he30472a92a05c52cE(auVar4._0_8_,auVar4._8_4_ & 1);
    ppuVar2 = &
              PTR__ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h7a40448b85f8499cE_002305f8
    ;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h34f4df7d1e205d5aE
                      (param_2,param_3,"-",1);
    if (cVar1 != '\0') goto LAB_001befc4;
    _ZN3std2fs4File4open17h5b9f23cfe6e73f37E(local_50,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h36f5bf5261f39eceE
              (&local_60,local_50,param_2,param_3);
    if (local_60 != 0) {
      ppuVar2 = (undefined **)CONCAT44(uStack_54,local_58);
      uVar3 = 1;
      goto LAB_001beff1;
    }
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hcde770ac63110b2aE
              (local_50,0x2000,local_58);
    local_60 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6a0535024ec58cb3E(local_50);
    ppuVar2 = &
              PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h058bcd1e5d334e6dE_00230570
    ;
  }
  uVar3 = 0;
LAB_001beff1:
  param_1[1] = local_60;
  param_1[2] = ppuVar2;
  *param_1 = uVar3;
  return param_1;
}