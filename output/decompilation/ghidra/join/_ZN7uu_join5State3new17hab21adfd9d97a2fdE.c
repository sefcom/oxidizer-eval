undefined8 *
_ZN7uu_join5State3new17hab21adfd9d97a2fdE
          (undefined8 *param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined param_7,undefined param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined auVar4 [12];
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined local_60 [48];
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h40620c7a8dc116e5E
                    (param_3,param_4,&DAT_0011afe2,1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h123aad933b4bca75E(local_60,param_3,param_4);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hadc359ee40c1b991E
              (&local_70,local_60,param_3,param_4);
    if (local_70 != 0) {
      param_1[1] = local_70;
      param_1[2] = CONCAT44(uStack_64,local_68);
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h7f82d3637640fb6bE
              (local_60,local_68);
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha0ab546ee9cbc98bE(local_60);
    ppuVar3 = &
              PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h59bf49c537db7dcbE_001fe3e0
    ;
  }
  else {
    auVar4 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_002050f0)(param_5);
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h25e583750da886e1E(auVar4._0_8_,auVar4._8_4_ & 1);
    ppuVar3 = &
              PTR__ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17hd067adbadd965953E_001fe468
    ;
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = uVar2;
  param_1[6] = ppuVar3;
  *(undefined *)(param_1 + 7) = param_7;
  param_1[8] = param_6;
  param_1[9] = 1;
  param_1[10] = 0;
  *(undefined *)(param_1 + 0xb) = param_2;
  *(undefined *)((long)param_1 + 0x59) = param_8;
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  return param_1;
}