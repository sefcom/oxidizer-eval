bool _ZN9alacritty6config16prune_yaml_nulls4walk17hc2d85b513bfb25bcE
               (ulong *param_1,undefined param_2)

{
  ulong uVar1;
  undefined local_9;
  
  uVar1 = 5;
  if ((*param_1 ^ 0x8000000000000000) < 7) {
    uVar1 = *param_1 ^ 0x8000000000000000;
  }
  local_9 = param_2;
  if (uVar1 == 5) {
    _ZN8indexmap3map4core25IndexMapCore_LT_K_C_V_GT_15retain_in_order17he9a4d152b7a8fd53E
              (param_1,&local_9);
    return param_1[6] == 0;
  }
  if (uVar1 == 4) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_10retain_mut17hfadf262ef8a2827fE(param_1 + 1,&local_9);
    return param_1[3] == 0;
  }
  if (uVar1 == 0) {
    return true;
  }
  return false;
}