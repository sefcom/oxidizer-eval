undefined *
_ZN5uu_dd6Output8new_file17h911369a13f3ee1abE
          (undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 local_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40 [2];
  
  _ZN5uu_dd6Output8new_file8open_dst17h968e64089c53b51aE
            (local_40,param_2,param_3,*(undefined *)(param_4 + 0x91),*(undefined *)(param_4 + 0x92),
             param_4 + 0x96);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h68ea94665ebd88f8E
            (&local_50,local_40,param_2,param_3);
  if (local_50 == 0) {
    local_54 = local_48;
    if (*(char *)(param_4 + 0x93) == '\0') {
                    /* try { // try from 001d77c5 to 001d77e3 has its CatchHandler @ 001d7807 */
      local_40[0] = _ZN3std2fs4File7set_len17hd21acd2eeb028efbE
                              (&local_54,*(undefined8 *)(param_4 + 0x88));
      if (local_40[0] != 0) {
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hdf0c997779a17efcE
                  (local_40);
        local_48 = local_54;
      }
    }
    _ZN5uu_dd6Output12prepare_file17h9725a129054f1a6aE(param_1,local_48,param_4);
  }
  else {
    *(long *)(param_1 + 8) = local_50;
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_44,local_48);
    *param_1 = 4;
  }
  return param_1;
}