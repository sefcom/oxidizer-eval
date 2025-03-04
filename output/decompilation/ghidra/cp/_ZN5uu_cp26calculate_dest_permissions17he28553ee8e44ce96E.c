void _ZN5uu_cp26calculate_dest_permissions17he28553ee8e44ce96E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined param_5,undefined param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_a8;
  
  _ZN3std2fs8metadata17h003d8cdbffde7c56E(&local_e0);
  iVar1 = (int)local_e0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
            (&local_e0);
  if (iVar1 == 2) {
    uVar2 = _ZN5uu_cp23handle_no_preserve_mode17h5c03b58fbdc698a0E(param_5,param_6,param_4);
    uVar3 = _ZN6uucore8features4mode9get_umask17hd2aa58752ad993faE();
    local_a8 = ~uVar3 & uVar2;
  }
  else {
    _ZN3std2fs16symlink_metadata17h8589e79b0a107deeE(&local_e0,param_2,param_3);
    local_d0 = local_d8;
    if ((int)local_e0 == 2) {
      local_e0 = param_7;
      local_d8 = param_8;
      _ZN119__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT_quick_error__Context_LT__RF_str_C_std__io__error__Error_GT__GT__GT_4from17h54c083f413b93682E
                (param_1,&local_e0);
      return;
    }
  }
  *(uint *)(param_1 + 1) = local_a8;
  *param_1 = 0xd;
  return;
}