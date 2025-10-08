undefined8 * _ZN5uu_dd6Output10new_stdout17hc67289d375d2c7daE(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  uint local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  long local_20;
  long local_18;
  
  uStack_28 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00246850)();
  local_30 = local_30 & 0xffffff00;
                    /* try { // try from 001906d4 to 001906ea has its CatchHandler @ 00190727 */
  uVar1 = _ZN5uu_dd4Dest4seek17h5a64bc595251d974E(&local_30,*(undefined8 *)(param_2 + 0x88));
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h202423c1371f09a8E
            (&local_20,uVar1);
  if (local_20 == 0) {
    *param_1 = CONCAT44(uStack_2c,local_30);
    param_1[1] = uStack_28;
    local_18 = param_2;
  }
  else {
    param_1[1] = local_20;
    *(undefined *)param_1 = 4;
    _ZN4core3ptr32drop_in_place_LT_uu_dd__Dest_GT_17h46074e24ca5324afE(local_30,uStack_2c);
  }
  param_1[2] = local_18;
  return param_1;
}