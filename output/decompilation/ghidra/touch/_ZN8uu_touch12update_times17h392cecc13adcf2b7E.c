undefined  [16]
_ZN8uu_touch12update_times17h392cecc13adcf2b7E
          (undefined8 param_1,undefined8 param_2,char param_3,char param_4,char param_5,
          undefined8 param_6,uint param_7,undefined8 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  long local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined local_58 [40];
  
  uVar2 = (ulong)param_7;
  if (param_5 == '\0') {
    local_60 = param_6;
    _ZN8uu_touch4stat17haa73667d17037b3bE(local_58,param_1,param_2,param_4 == '\0');
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hcdbd76867b98bd36E
              (&local_88,local_58,param_1,param_2);
    auVar3._8_8_ = local_78;
    auVar3._0_8_ = local_80;
    param_8 = local_70;
    param_9 = local_68;
    param_6 = local_60;
  }
  else {
    if (param_5 != '\x01') goto LAB_002c320f;
    _ZN8uu_touch4stat17haa73667d17037b3bE(local_58,param_1,param_2,param_4 == '\0');
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hc7a727021908757aE
              (&local_88,local_58,param_1,param_2);
    auVar3._8_8_ = local_78;
    auVar3._0_8_ = local_80;
    uVar2 = local_78;
    param_6 = local_80;
  }
  if (local_88 != 0) {
    return auVar3;
  }
LAB_002c320f:
  if ((param_4 == '\0') || (param_3 != '\0')) {
    uVar1 = _ZN8filetime14set_file_times17hbfafa69b31a805ceE
                      (param_1,param_2,param_6,uVar2 & 0xffffffff,param_8,param_9);
  }
  else {
    uVar1 = _ZN8filetime22set_symlink_file_times17hd7eb213bf3122499E
                      (param_1,param_2,param_6,uVar2 & 0xffffffff,param_8,param_9);
  }
  auVar3 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h2d49cffdd9c7d093E
                     (uVar1,param_1,param_2);
  return auVar3;
}