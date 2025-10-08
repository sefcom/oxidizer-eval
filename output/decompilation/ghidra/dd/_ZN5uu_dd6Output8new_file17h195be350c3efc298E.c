undefined *
_ZN5uu_dd6Output8new_file17h195be350c3efc298E
          (undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40 [2];
  
  _ZN5uu_dd6Output8new_file8open_dst17h5868589bebfcde5cE
            (local_40,param_2,param_3,*(undefined *)(param_4 + 0x91),*(undefined *)(param_4 + 0x92),
             param_4 + 0x96);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hce41de670c7cb157E
            (&local_50,local_40,param_2,param_3);
  if (CONCAT44(uStack_4c,local_50) == 0) {
    local_50 = local_48;
    if (*(char *)(param_4 + 0x93) == '\0') {
                    /* try { // try from 001907e5 to 00190803 has its CatchHandler @ 00190827 */
      local_40[0] = (*(code *)PTR__ZN3std2fs4File7set_len17h8625c3bc8a96431dE_00246d20)
                              (&local_50,*(undefined8 *)(param_4 + 0x88));
      if (local_40[0] != 0) {
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc7a03f57d9b19cc5E
                  (local_40);
        local_48 = local_50;
      }
    }
    _ZN5uu_dd6Output12prepare_file17hcfa8f7430863883aE(param_1,local_48,param_4);
  }
  else {
    *(long *)(param_1 + 8) = CONCAT44(uStack_4c,local_50);
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_44,local_48);
    *param_1 = 4;
  }
  return param_1;
}