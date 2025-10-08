void _ZN5uu_ls6colors10color_name17hafb991a3ed925fc5E
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
               undefined8 param_5,long param_6,undefined param_7)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long local_240 [22];
  long local_190 [22];
  int local_e0 [2];
  undefined8 local_d8;
  
                    /* try { // try from 002908c3 to 002908f1 has its CatchHandler @ 00290acb */
  lVar2 = (*(code *)PTR__ZN8lscolors8LsColors19style_for_indicator17h56051c223b964973E_0048fd08)
                    (*param_4,0x11);
  if (lVar2 != 0) {
    _ZN5xattr4list17h98bb10efc77fe3e7E
              (local_240,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
    cVar1 = _ZN4core6result19Result_LT_T_C_E_GT_9is_ok_and17h84dfcb59db6f5993E(local_240);
    if (cVar1 != '\0') {
      _ZN5uu_ls6colors12StyleManager11apply_style17ha4cfaac237ebf5d9E
                (param_1,param_4,lVar2,param_2,param_7);
      return;
    }
  }
  if ((*(char *)(param_3 + 0x128) == '\0') && (*(long *)(param_3 + 0x100) != 0)) {
    _ZN5uu_ls6colors12StyleManager30apply_style_based_on_dir_entry17h94fb2fdae0c89512E
              (param_1,param_4,param_3 + 0x100,param_2,param_7);
    return;
  }
  if (param_6 == 0) {
    plVar3 = (long *)_ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_3,param_5);
    _ZN3std2fs16symlink_metadata17h7b40b87fa5e11ee0E
              (local_240,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
    if ((int)local_240[0] == 2) {
      local_190[0] = 2;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
                (local_240);
      plVar4 = (long *)0x0;
    }
    else {
      (*(code *)PTR_memcpy_0048f8f8)(local_190,local_240,0xb0);
      plVar4 = (long *)0x0;
      if (local_190[0] != 2) {
        plVar4 = local_190;
      }
    }
    if (plVar3 != (long *)0x0) {
      plVar4 = plVar3;
    }
  }
  else {
                    /* try { // try from 00290974 to 00290a17 has its CatchHandler @ 00290acb */
    _ZN5uu_ls27get_metadata_with_deref_opt17h6fbf7688ce069f5fE
              (local_e0,*(undefined8 *)(param_6 + 0x20),*(undefined8 *)(param_6 + 0x28),
               *(char *)(param_3 + 0x128));
    if (local_e0[0] == 2) {
      _ZN5uu_ls6colors10color_name28__u7b__u7b_closure_u7d__u7d_17hf77c4a2806dda2c8E
                (local_190,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28),local_d8)
      ;
    }
    else {
      (*(code *)PTR_memcpy_0048f8f8)(local_190,local_e0,0xb0);
    }
    if (local_190[0] == 2) {
      local_240[0] = 2;
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h4d6173845b848954E
                (local_190);
      plVar4 = (long *)0x0;
    }
    else {
      (*(code *)PTR_memcpy_0048f8f8)(local_240,local_190,0xb0);
      plVar4 = (long *)0x0;
      if (local_240[0] != 2) {
        plVar4 = local_240;
      }
    }
  }
  _ZN5uu_ls6colors12StyleManager29apply_style_based_on_metadata17hcad306b9426f25fdE
            (param_1,param_4,param_3,plVar4,param_2,param_7);
  return;
}