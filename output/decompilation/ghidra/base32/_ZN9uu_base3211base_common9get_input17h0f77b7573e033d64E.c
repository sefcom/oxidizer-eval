undefined8 *
_ZN9uu_base3211base_common9get_input17h0f77b7573e033d64E(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined auVar3 [12];
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28 [2];
  
  if (*(long *)(param_2 + 0x10) == -0x8000000000000000) {
    local_28[0] = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    auVar3 = _ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE(local_28);
    local_38 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h482febea39d844c0E(auVar3._0_8_,auVar3._8_4_ & 1);
    ppuVar1 = &
              PTR__ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17hf44bde066d9fa3ccE_00249738
    ;
  }
  else {
    _ZN3std2fs4File4open17h6364263faa0b0b02E(local_28);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hb851e02a25cfd4b9E
              (&local_38,local_28,param_2 + 0x10);
    if (local_38 != 0) {
      ppuVar1 = (undefined **)CONCAT44(uStack_2c,local_30);
      uVar2 = 1;
      goto LAB_001c18d2;
    }
    local_38 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h49813bb62d5bf258E(local_30);
    ppuVar1 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h6b3699632b99c7faE_00249790;
  }
  uVar2 = 0;
LAB_001c18d2:
  param_1[1] = local_38;
  param_1[2] = ppuVar1;
  *param_1 = uVar2;
  return param_1;
}