void _ZN5uu_cp20handle_existing_dest17h73cbfdf242938a56E
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,byte param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  char cVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined local_e8;
  undefined8 *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined local_c8;
  long *local_c0;
  undefined8 **local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  ulong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined4 local_48 [6];
  
  local_70 = (ulong)param_7;
  local_c0 = param_1;
  cVar5 = _ZN5uu_cp33is_forbidden_to_copy_to_same_file17h5b788622660e3e62E
                    (param_2,param_3,param_4,param_5,param_6);
  plVar4 = local_c0;
  if (cVar5 != '\0') {
    local_e0 = (undefined8 *)0x1;
    local_c8 = 1;
    local_100 = 1;
    local_e8 = 1;
    local_b8 = &local_e0;
    local_b0 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    local_a8 = &local_100;
    local_a0 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
    ;
    local_138 = (undefined **)&DAT_0025ebd8;
    local_130 = 3;
    lStack_118 = 0;
    uStack_128 = &local_b8;
    local_120 = 2;
    local_f8 = param_4;
    local_f0 = param_5;
    local_d8 = (undefined *)param_2;
    local_d0 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(local_c0 + 1,&local_138);
    *plVar4 = -0x7ffffffffffffffd;
    return;
  }
  if (*(char *)(param_6 + 0x66) == '\x01') {
    if (*(char *)(param_6 + 0x5f) != '\0') {
      local_100 = 1;
      local_e8 = 1;
      local_e0 = &local_100;
      local_d8 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
      ;
      local_138 = &PTR_s_skipped_0025eb08;
      local_130 = 2;
      lStack_118 = 0;
      uStack_128 = (undefined8 ***)&local_e0;
      local_120 = 1;
      local_f8 = param_4;
      local_f0 = param_5;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00267658)(&local_138);
    }
    *plVar4 = -0x7ffffffffffffff9;
    *(undefined *)(plVar4 + 1) = 0;
    return;
  }
  if ((*(char *)(param_6 + 0x66) == '\x02') ||
     (_ZN5uu_cp13OverwriteMode6verify17hcf2d8eaa11706b21E
                (&local_138,*(undefined4 *)(param_6 + 0x54),param_4,param_5,
                 *(undefined *)(param_6 + 0x5f)), local_138 == (undefined **)0x800000000000000c)) {
    (*(code *)PTR__ZN6uucore8features14backup_control15get_backup_path17hd1136aea6807a071E_00267c60)
              (&local_98,*(undefined *)(param_6 + 0x65),param_4,param_5,*(undefined8 *)(param_6 + 8)
               ,*(undefined8 *)(param_6 + 0x10));
    if (local_98 != -0x8000000000000000) {
                    /* try { // try from 001a2ab1 to 001a2bba has its CatchHandler @ 001a2c6e */
      local_78 = local_88;
      local_80 = param_6;
      cVar5 = _ZN6uucore8features2fs24paths_refer_to_same_file17h63765c86a5a0b9e6E
                        (param_2,param_3,local_90,local_88,1);
      if (cVar5 != '\0') {
        local_e0 = (undefined8 *)0x1;
        local_c8 = 1;
        local_100 = 1;
        local_e8 = 1;
        local_b8 = &local_e0;
        local_b0 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
        ;
        local_a8 = &local_100;
        local_a0 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00267af0
        ;
        local_138 = &PTR_s_backing_up_might_destroy_source__0025ec08;
        local_130 = 3;
        lStack_118 = 0;
        uStack_128 = &local_b8;
        local_120 = 2;
        puVar7 = local_48;
        local_f8 = param_2;
        local_f0 = param_3;
        local_d8 = (undefined *)param_4;
        local_d0 = param_5;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(puVar7,&local_138);
        ppuVar6 = (undefined **)0x8000000000000003;
LAB_001a2c3c:
        plVar4[3] = *(long *)(puVar7 + 4);
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        uVar3 = puVar7[3];
        *(undefined4 *)(plVar4 + 1) = *puVar7;
        *(undefined4 *)((long)plVar4 + 0xc) = uVar1;
        *(undefined4 *)(plVar4 + 2) = uVar2;
        *(undefined4 *)((long)plVar4 + 0x14) = uVar3;
        *plVar4 = (long)ppuVar6;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_98);
        return;
      }
      cVar5 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0)
                        (param_4,param_5);
      _ZN5uu_cp11backup_dest17hdc34a5fbd97a8cc7E(&local_138,param_4,param_5,local_90,local_78,cVar5)
      ;
      local_68 = (undefined4)local_130;
      uStack_64 = local_130._4_4_;
      uStack_60 = (undefined4)uStack_128;
      uStack_5c = uStack_128._4_4_;
      local_58 = local_120;
      if (local_138 != (undefined **)0x800000000000000c) {
        plVar4[6] = lStack_108;
        plVar4[4] = lStack_118;
        plVar4[5] = local_110;
        puVar7 = &local_68;
        ppuVar6 = local_138;
        goto LAB_001a2c3c;
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_68);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_98);
      param_6 = local_80;
      if (cVar5 != '\0') goto LAB_001a29e7;
    }
    _ZN5uu_cp33delete_dest_if_needed_and_allowed17h89467f703e519cebE
              (&local_138,param_2,param_3,param_4,param_5,param_6,local_70,param_8);
    if (local_138 == (undefined **)0x800000000000000c) {
LAB_001a29e7:
      *plVar4 = -0x7ffffffffffffff4;
      return;
    }
  }
  plVar4[5] = local_110;
  plVar4[6] = lStack_108;
  plVar4[3] = local_120;
  plVar4[4] = lStack_118;
  plVar4[1] = local_130;
  plVar4[2] = (long)uStack_128;
  *plVar4 = (long)local_138;
  return;
}