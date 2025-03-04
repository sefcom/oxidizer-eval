void _ZN5uu_cp20handle_existing_dest17h1a418223b4b32809E
               (long *param_1,undefined8 **param_2,long param_3,undefined8 param_4,long param_5,
               long param_6,byte param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 **ppuVar2;
  char cVar3;
  undefined8 local_128;
  undefined8 uStack_120;
  long local_118;
  undefined local_110;
  undefined **local_108;
  long local_100;
  undefined8 **ppuStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 **ppuStack_c0;
  long local_b8;
  undefined local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 *local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  ulong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_68 = (ulong)param_7;
  cVar3 = _ZN5uu_cp33is_forbidden_to_copy_to_same_file17h3bc6a23799758404E
                    (param_2,param_3,param_4,param_5,param_6);
  if (cVar3 != '\0') {
    local_c8 = 1;
    local_b0 = 1;
    local_128 = 1;
    local_110 = 1;
    local_88 = &local_c8;
    local_80 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_78 = &local_128;
    local_70 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_108 = (undefined **)&DAT_002b5ea8;
    local_100 = 3;
    lStack_e8 = 0;
    ppuStack_f8 = &local_88;
    local_f0 = 2;
    uStack_120 = (undefined8 **)param_4;
    local_118 = param_5;
    ppuStack_c0 = param_2;
    local_b8 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(param_1 + 1,&local_108);
    *param_1 = 4;
    return;
  }
  if ((*(char *)(param_6 + 0x4d) == '\x02') ||
     (_ZN5uu_cp13OverwriteMode6verify17h15b46a9de23bd96aE
                (&local_108,*(undefined4 *)(param_6 + 0x3c),param_4,param_5,
                 *(undefined *)(param_6 + 0x47)), local_108 == (undefined **)0xd)) {
    _ZN6uucore8features14backup_control15get_backup_path17hb28e229807111f9dE
              (&local_60,*(undefined4 *)(param_6 + 0x4c),param_4,param_5,
               *(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x10));
    if (CONCAT44(uStack_5c,local_60) != -0x8000000000000000) {
      local_a8 = local_60;
      uStack_a4 = uStack_5c;
      uStack_a0 = uStack_58;
      uStack_9c = uStack_54;
      local_98 = local_50;
                    /* try { // try from 00205d77 to 00205ed4 has its CatchHandler @ 00205f38 */
      cVar3 = _ZN6uucore8features2fs24paths_refer_to_same_file17hbd4c553d00ffcef7E
                        (param_2,param_3,CONCAT44(uStack_54,uStack_58),local_50,1);
      if (cVar3 != '\0') {
        local_c8 = 1;
        local_b0 = 1;
        local_128 = 1;
        local_110 = 1;
        local_88 = &local_c8;
        local_80 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_78 = &local_128;
        local_70 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_108 = &PTR_s_backing_up_might_destroy_source__002b5ed8;
        local_100 = 3;
        lStack_e8 = 0;
        ppuStack_f8 = &local_88;
        local_f0 = 2;
        uStack_120 = param_2;
        local_118 = param_3;
        ppuStack_c0 = (undefined8 **)param_4;
        local_b8 = param_5;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_48,&local_108);
        param_1[3] = local_38;
        *(undefined4 *)(param_1 + 1) = local_48;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
        *(undefined4 *)(param_1 + 2) = uStack_40;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
        *param_1 = 4;
LAB_00205f19:
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_a8);
        return;
      }
      cVar3 = _ZN3std4path4Path10is_symlink17h6ab8b58756c51c6bE(param_4,param_5);
      _ZN5uu_cp11backup_dest17hb9d2dd191dda7572E
                (&local_108,param_4,param_5,CONCAT44(uStack_9c,uStack_a0),local_98,cVar3);
      local_128 = local_100;
      lVar1 = local_128;
      uStack_120 = ppuStack_f8;
      ppuVar2 = uStack_120;
      local_118 = local_f0;
      local_128._0_4_ = (undefined4)local_100;
      local_128._4_4_ = (undefined4)((ulong)local_100 >> 0x20);
      uStack_120._0_4_ = SUB84(ppuStack_f8,0);
      uStack_120._4_4_ = (undefined4)((ulong)ppuStack_f8 >> 0x20);
      local_128 = lVar1;
      uStack_120 = ppuVar2;
      if (local_108 != (undefined **)0xd) {
        param_1[6] = lStack_d8;
        param_1[7] = local_d0;
        param_1[4] = lStack_e8;
        param_1[5] = local_e0;
        param_1[3] = local_f0;
        *(undefined4 *)(param_1 + 1) = (undefined4)local_128;
        *(undefined4 *)((long)param_1 + 0xc) = local_128._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_120;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_120._4_4_;
        *param_1 = (long)local_108;
        goto LAB_00205f19;
      }
      local_b8 = local_f0;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_c8);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_a8);
      if (cVar3 != '\0') goto LAB_00205d17;
    }
    _ZN5uu_cp33delete_dest_if_needed_and_allowed17h6af23b073bf255d0E
              (&local_108,param_2,param_3,param_4,param_5,param_6,local_68,param_8);
    if (local_108 == (undefined **)0xd) {
LAB_00205d17:
      *param_1 = 0xd;
      return;
    }
  }
  param_1[7] = local_d0;
  param_1[5] = local_e0;
  param_1[6] = lStack_d8;
  param_1[3] = local_f0;
  param_1[4] = lStack_e8;
  param_1[1] = local_100;
  param_1[2] = (long)ppuStack_f8;
  *param_1 = (long)local_108;
  return;
}