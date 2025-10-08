undefined8
_ZN11uu_realpath28canonicalize_relative_option17hbda6f1f43c1a9622E
          (long *param_1,undefined8 *param_2,undefined param_3,undefined param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_60;
  long local_58;
  long local_50;
  undefined local_48 [24];
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
                    /* try { // try from 00162c03 to 00162c30 has its CatchHandler @ 00162c8e */
  _ZN11uu_realpath21canonicalize_relative17ha3a23c9727c26a2fE(local_48,uVar1,uVar2,param_3,param_4);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h9ab56ab1f2cee605E
            (&local_60,local_48,uVar1,uVar2);
  if (local_60 != -0x8000000000000000) {
    uVar3 = _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb5b343c2ee7576a0E(uVar3,uVar1);
    *param_1 = local_60;
    param_1[1] = local_58;
    param_1[2] = local_50;
    return uVar3;
  }
  param_1[1] = local_58;
  param_1[2] = local_50;
  *param_1 = -0x7fffffffffffffff;
  uVar3 = _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb5b343c2ee7576a0E(uVar3,uVar1);
  return uVar3;
}