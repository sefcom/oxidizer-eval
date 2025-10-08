void _ZN9uu_expand4open17hc6af5baed7605e7eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined local_30 [16];
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h753b77f0d1eb3c52E
                    (param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h53728ac18aa86877E(local_30,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h87ef89ef0d1df0a6E
              (&local_40,local_30,param_2,param_3);
    if (local_40 != 0) {
      param_1[1] = local_40;
      param_1[2] = CONCAT44(uStack_34,local_38);
      *param_1 = 0;
      return;
    }
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hb4bf27c5c9220e60E(local_38);
    ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h5c399ccc8c9312d5E_001e8900;
  }
  else {
    uVar2 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001ef2e0)();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc4b868a3ce8ede0fE(uVar2);
    ppuVar3 = (undefined **)&DAT_001e8958;
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h6870313491e79ed7E
            (param_1,uVar2,ppuVar3);
  return;
}