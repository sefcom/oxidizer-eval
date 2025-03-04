undefined8 *
_ZN7uu_join5State3new17h1e047ff86b763ae6E
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
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hab9f309aad09d5a2E
                    (param_3,param_4,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h5119db07cecb01a2E(local_60,param_3,param_4);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h7f1f9b7a34a3754bE
              (&local_70,local_60,param_3,param_4);
    if (local_70 != 0) {
      param_1[1] = local_70;
      param_1[2] = CONCAT44(uStack_64,local_68);
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hde7863a5cb2c8fe9E
              (local_60,0x2000,local_68);
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h27c807e2bc113c31E(local_60);
    ppuVar3 = &
              PTR__ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17hbb47e49cdc346051E_00235340
    ;
  }
  else {
    auVar4 = _ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE(param_5);
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf2d7d209ce9381d4E(auVar4._0_8_,auVar4._8_4_ & 1);
    ppuVar3 = &
              PTR__ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h0f85b25f7f9a1e6fE_002353c8
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