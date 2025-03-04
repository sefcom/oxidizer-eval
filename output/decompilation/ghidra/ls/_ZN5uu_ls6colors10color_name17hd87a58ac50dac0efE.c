undefined8
_ZN5uu_ls6colors10color_name17hd87a58ac50dac0efE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,long param_7,undefined param_8)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_240;
  undefined8 local_238;
  undefined local_230 [160];
  long local_190;
  undefined8 local_188;
  undefined local_180 [160];
  int local_e0 [2];
  undefined8 local_d8;
  
  if ((*(char *)(param_4 + 0x128) == '\0') && (*(long *)(param_4 + 0x100) != 0)) {
    _ZN5uu_ls6colors12StyleManager30apply_style_based_on_dir_entry17h5ac81938a1ae285dE
              (param_1,param_5,param_4 + 0x100,param_2,param_3,param_8);
  }
  else {
    if (param_7 == 0) {
      plVar2 = (long *)_ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(param_4,param_6);
      _ZN3std2fs16symlink_metadata17haff3ff196e1dc22bE
                (&local_190,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28));
      if ((int)local_190 == 2) {
        local_240 = 2;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb9b2c6df5be91f44E
                  (local_188);
        plVar3 = (long *)0x0;
      }
      else {
        (*(code *)PTR_memcpy_0031da60)(&local_240,&local_190,0xb0);
        plVar3 = (long *)0x0;
        if (local_240 != 2) {
          plVar3 = &local_240;
        }
      }
      if (plVar2 != (long *)0x0) {
        plVar3 = plVar2;
      }
    }
    else {
      _ZN5uu_ls27get_metadata_with_deref_opt17h471baa3ff4b7ae17E
                (local_e0,*(undefined8 *)(param_7 + 0x20),*(undefined8 *)(param_7 + 0x28),
                 *(char *)(param_4 + 0x128));
      if (local_e0[0] == 2) {
        _ZN5uu_ls6colors10color_name28__u7b__u7b_closure_u7d__u7d_17h930039d09c033de8E
                  (&local_240,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x28),
                   local_d8);
      }
      else {
        (*(code *)PTR_memcpy_0031da60)(&local_240,local_e0,0xb0);
      }
      lVar1 = local_240;
      if (local_240 == 2) {
        local_190 = 2;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hb9b2c6df5be91f44E
                  (local_238);
        plVar3 = (long *)0x0;
      }
      else {
        (*(code *)PTR_memcpy_0031da60)(local_180,local_230,0xa0);
        local_190 = lVar1;
        local_188 = local_238;
        plVar3 = &local_190;
      }
    }
    _ZN5uu_ls6colors12StyleManager29apply_style_based_on_metadata17hd1ec1399cd3d8441E
              (param_1,param_5,param_4,plVar3,param_2,param_3,param_8);
  }
  return param_1;
}