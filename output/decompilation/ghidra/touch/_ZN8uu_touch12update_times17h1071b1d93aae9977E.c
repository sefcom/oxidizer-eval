undefined  [16]
_ZN8uu_touch12update_times17h1071b1d93aae9977E
          (undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,char param_5,
          undefined8 param_6,uint param_7,undefined8 param_8,undefined4 param_9)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined auVar3 [16];
  byte local_88 [8];
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined local_58 [40];
  
  ppuVar2 = (undefined **)(ulong)param_7;
  if (param_5 == '\0') {
    local_60 = param_6;
    _ZN8uu_touch4stat17hbfae00cfffe9133bE(local_58,param_1,param_2,(param_4 ^ 1) & 1);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6051b7f2787ec345E
              (local_88,local_58,param_1,param_2);
    param_8 = local_70;
    param_9 = local_68;
    param_6 = local_60;
joined_r0x0023a83f:
    if ((local_88[0] & 1) != 0) goto LAB_0023a8a7;
  }
  else if (param_5 == '\x01') {
    _ZN8uu_touch4stat17hbfae00cfffe9133bE(local_58,param_1,param_2,(param_4 ^ 1) & 1);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6051b7f2787ec345E
              (local_88,local_58,param_1,param_2);
    ppuVar2 = local_78;
    param_6 = local_80;
    goto joined_r0x0023a83f;
  }
  if (((param_3 | param_4 ^ 1) & 1) == 0) {
    uVar1 = _ZN8filetime22set_symlink_file_times17h9ccde51c46d20a81E
                      (param_1,param_2,param_6,(ulong)ppuVar2 & 0xffffffff,param_8,param_9);
  }
  else {
    uVar1 = _ZN8filetime14set_file_times17hdefd26471d4e860aE();
  }
  local_80 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h7dcef3be84e18410E
                       (uVar1,param_1,param_2);
  local_78 = &
             PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h8c2532bd7c9ab47cE_003795c8
  ;
LAB_0023a8a7:
  auVar3._8_8_ = local_78;
  auVar3._0_8_ = local_80;
  return auVar3;
}