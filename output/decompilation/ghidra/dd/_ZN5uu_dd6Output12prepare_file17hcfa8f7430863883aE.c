void _ZN5uu_dd6Output12prepare_file17hcfa8f7430863883aE
               (undefined8 *param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  undefined local_30;
  byte bStack_2f;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  long local_20;
  long local_18;
  
  bStack_2f = *(byte *)(param_3 + 0x90) ^ 1;
  local_30 = 1;
                    /* try { // try from 001908da to 001908f0 has its CatchHandler @ 0019092c */
  uStack_2c = param_2;
  uVar1 = _ZN5uu_dd4Dest4seek17h5a64bc595251d974E(&local_30,*(undefined8 *)(param_3 + 0x88));
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h503797b426a911f8E
            (&local_20,uVar1);
  if (local_20 == 0) {
    *param_1 = CONCAT44(uStack_2c,CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30)));
    param_1[1] = uStack_28;
    local_18 = param_3;
  }
  else {
    param_1[1] = local_20;
    *(undefined *)param_1 = 4;
    _ZN4core3ptr32drop_in_place_LT_uu_dd__Dest_GT_17h46074e24ca5324afE
              (CONCAT22(uStack_2e,CONCAT11(bStack_2f,local_30)),uStack_2c);
  }
  param_1[2] = local_18;
  return;
}