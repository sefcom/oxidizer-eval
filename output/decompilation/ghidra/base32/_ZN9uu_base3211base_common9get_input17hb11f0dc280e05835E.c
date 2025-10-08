undefined8 *
_ZN9uu_base3211base_common9get_input17hb11f0dc280e05835E(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined local_38 [32];
  
  _ZN3std2fs4File4open17h1ad496a7ceefb856E(local_38,param_2 + 0x10);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h223c42e18bad111bE
            (&local_50,local_38,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  if (local_50 == 0) {
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he7c5401255d3159bE(uStack_48);
    param_1[1] = uVar1;
    param_1[2] = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hbea7af752178cd26E_0020dfa8;
    *param_1 = 0;
  }
  else {
    param_1[1] = local_50;
    param_1[2] = CONCAT44(uStack_44,uStack_48);
    *param_1 = 1;
  }
  return param_1;
}