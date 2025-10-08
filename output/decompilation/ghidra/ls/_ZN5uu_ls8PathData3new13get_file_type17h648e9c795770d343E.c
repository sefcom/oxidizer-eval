undefined  [16]
_ZN5uu_ls8PathData3new13get_file_type17h648e9c795770d343E
          (undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  uint local_c8;
  uint local_c4;
  uint local_90;
  
  if (param_4 == 0) {
LAB_00299755:
    (*(code *)PTR__ZN3std2fs8DirEntry9file_type17h795bcf7de2117d2fE_0048fe40)(&local_c8,param_1);
    if ((local_c8 & 1) != 0) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__FileType_C_std__io__error__Error_GT__GT_17h45938f03de5a95edE
                (&local_c8);
      _ZN3std2fs16symlink_metadata17h7b40b87fa5e11ee0E(&local_c8,param_2,param_3);
      if (local_c8 == 2) {
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
                  (&local_c8);
        uVar1 = 2;
        goto LAB_002997b1;
      }
      goto LAB_00299792;
    }
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__FileType_C_std__io__error__Error_GT__GT_17h45938f03de5a95edE
              (&local_c8);
    local_90 = local_c4;
  }
  else {
    _ZN3std2fs8metadata17h0f528178d24a74c4E(&local_c8,param_2,param_3);
    if (local_c8 == 2) {
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
                (&local_c8);
      goto LAB_00299755;
    }
LAB_00299792:
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
              (&local_c8);
  }
  param_3 = (ulong)local_90;
  uVar1 = 1;
LAB_002997b1:
  auVar2._8_8_ = param_3 & 0xffffffff;
  auVar2._0_8_ = uVar1;
  return auVar2;
}