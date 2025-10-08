void _ZN10uu_install14perform_backup17h71eccbd452695050E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 **local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 **ppuStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  
  _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_e0);
  iVar1 = (int)local_e0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8e5ba91c564dca48E
            (&local_e0);
  if (iVar1 == 2) {
    *param_1 = 0x8000000000000000;
  }
  else {
    if (*(char *)(param_4 + 0x61) != '\0') {
      local_138 = (undefined **)0x1;
      local_120 = 1;
      local_150 = &local_138;
      puStack_148 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209a70
      ;
      local_e0 = &PTR_s_removed_00202498;
      local_d8 = 2;
      uStack_c0 = 0;
      ppuStack_d0 = &local_150;
      local_c8 = 1;
      local_130 = param_2;
      uStack_128 = param_3;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209c10)(&local_e0);
    }
    (*(code *)PTR__ZN6uucore8features14backup_control15get_backup_path17hd1136aea6807a071E_00209c58)
              (&local_150,*(undefined *)(param_4 + 0x67),param_2,param_3,
               *(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
    if (local_150 != (undefined8 *)&DAT_8000000000000000) {
                    /* try { // try from 001688e1 to 00168961 has its CatchHandler @ 001689a6 */
      lVar2 = _ZN3std2fs6rename17hd36dae249ba265a0E(param_2,param_3,&local_150);
      if (lVar2 != 0) {
        local_f8 = param_2;
        local_f0 = param_3;
        local_e8 = &local_150;
        _ZN10uu_install14perform_backup28__u7b__u7b_closure_u7d__u7d_17h202386b539bdbc0fE
                  (&local_138,&local_f8,lVar2);
        local_a8 = local_100;
        local_b8 = local_110;
        uStack_b0 = uStack_108;
        local_c8 = CONCAT71(uStack_11f,local_120);
        uStack_c0 = uStack_118;
        local_d8 = local_130;
        ppuStack_d0 = (undefined8 **)uStack_128;
        local_e0 = local_138;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_e0);
        param_1[1] = uVar3;
        param_1[2] = &
                     PTR__ZN4core3ptr45drop_in_place_LT_uu_install__InstallError_GT_17haca1f059ca4c5a74E_00202208
        ;
        *param_1 = 0x8000000000000001;
        _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h1b9f1de4ce9f7be6E
                  (&local_150);
        return;
      }
    }
    param_1[2] = local_140;
    *param_1 = local_150;
    param_1[1] = puStack_148;
  }
  return;
}