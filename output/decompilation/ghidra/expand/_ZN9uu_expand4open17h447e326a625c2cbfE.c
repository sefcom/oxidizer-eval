void _ZN9uu_expand4open17h447e326a625c2cbfE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined local_30 [16];
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h93b642f2c60b0d07E
                    (param_2,param_3,&DAT_0011d0aa,1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h7a18960032b2623aE(local_30,param_2,param_3);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17he232720af68fd4beE
              (&local_40,local_30,param_2,param_3);
    if (local_40 != 0) {
      param_1[1] = local_40;
      param_1[2] = CONCAT44(uStack_34,local_38);
      *param_1 = 0;
      return;
    }
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h092a5431f0b59057E(local_38);
    ppuVar3 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h25ec311da04c4799E_0021cdc0;
  }
  else {
    uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h038c1d0fe051ec46E(uVar2);
    ppuVar3 = (undefined **)&DAT_0021ce18;
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17he6e2f9fcb356c1dbE
            (param_1,0x2000,uVar2,ppuVar3);
  return;
}