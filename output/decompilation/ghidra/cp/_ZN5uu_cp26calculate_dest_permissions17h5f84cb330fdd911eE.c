void _ZN5uu_cp26calculate_dest_permissions17h5f84cb330fdd911eE
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
  
  _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(&local_e0);
  iVar1 = (int)local_e0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
            (&local_e0);
  if (iVar1 == 2) {
    uVar2 = _ZN5uu_cp23handle_no_preserve_mode17h796a58434a5cfa44E(param_5,param_6,param_4);
    uVar3 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_00267b08)();
    local_a8 = ~uVar3 & uVar2;
  }
  else {
    _ZN3std2fs16symlink_metadata17h814bc3976f7d40c5E(&local_e0,param_2,param_3);
    local_d0 = local_d8;
    if ((int)local_e0 == 2) {
      local_e0 = param_7;
      local_d8 = param_8;
      (*(code *)
        PTR__ZN119__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT_quick_error__Context_LT__RF_str_C_std__io__error__Error_GT__GT__GT_4from17hda2d8848c156368bE_00267b40
      )(param_1,&local_e0);
      return;
    }
  }
  *(uint *)(param_1 + 1) = local_a8;
  *param_1 = 0x800000000000000c;
  return;
}