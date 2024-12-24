void __rustcall
uu_cp::handle_existing_dest
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
  long lStack_100;
  undefined8 **ppuStack_f8;
  long lStack_f0;
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
  cVar3 = is_forbidden_to_copy_to_same_file(param_2,param_3,param_4,param_5,param_6);
  if (cVar3 != '\0') {
    local_c8 = 1;
    local_b0 = 1;
    local_128 = 1;
    local_110 = 1;
    local_88 = &local_c8;
    local_80 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_78 = &local_128;
    local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_108 = (undefined **)&DAT_002b5808;
    lStack_100 = 3;
    lStack_e8 = 0;
    ppuStack_f8 = &local_88;
    lStack_f0 = 2;
    uStack_120 = (undefined8 **)param_4;
    local_118 = param_5;
    ppuStack_c0 = param_2;
    local_b8 = param_3;
    core::option::Option<T>::map_or_else(param_1 + 1,&local_108);
    *param_1 = 4;
    return;
  }
  if (*(char *)(param_6 + 0x4d) != '\x02') {
    OverwriteMode::verify
              (&local_108,*(undefined4 *)(param_6 + 0x3c),param_4,param_5,
               *(undefined *)(param_6 + 0x47));
    if ((int)local_108 != 0xd) {
      param_1[6] = lStack_d8;
      param_1[7] = local_d0;
      param_1[4] = lStack_e8;
      param_1[5] = local_e0;
      param_1[2] = (long)ppuStack_f8;
      param_1[3] = lStack_f0;
      *param_1 = (long)local_108;
      param_1[1] = lStack_100;
      return;
    }
  }
  uucore::features::backup_control::get_backup_path
            (&local_60,*(undefined4 *)(param_6 + 0x4c),param_4,param_5,*(undefined8 *)(param_6 + 8),
             *(undefined8 *)(param_6 + 0x10));
  if (CONCAT44(uStack_5c,local_60) == -0x8000000000000000) {
LAB_00205351:
    delete_dest_if_needed_and_allowed
              (&local_108,param_2,param_3,param_4,param_5,param_6,local_68,param_8);
    if (local_108 != (undefined **)0xd) {
      param_1[7] = local_d0;
      param_1[5] = local_e0;
      param_1[6] = lStack_d8;
      param_1[3] = lStack_f0;
      param_1[4] = lStack_e8;
      param_1[1] = lStack_100;
      param_1[2] = (long)ppuStack_f8;
      *param_1 = (long)local_108;
      return;
    }
LAB_0020538b:
    *param_1 = 0xd;
  }
  else {
    local_a8 = local_60;
    uStack_a4 = uStack_5c;
    uStack_a0 = uStack_58;
    uStack_9c = uStack_54;
    local_98 = local_50;
                    /* try { // try from 002053bf to 00205570 has its CatchHandler @ 002055d4 */
    cVar3 = uucore::features::fs::paths_refer_to_same_file
                      (param_2,param_3,CONCAT44(uStack_54,uStack_58),local_50,1);
    if (cVar3 == '\0') {
      cVar3 = std::path::Path::is_symlink(param_4,param_5);
      backup_dest(&local_108,param_4,param_5,CONCAT44(uStack_9c,uStack_a0),local_98,cVar3);
      local_128 = lStack_100;
      lVar1 = local_128;
      uStack_120 = ppuStack_f8;
      ppuVar2 = uStack_120;
      local_118 = lStack_f0;
      local_128._0_4_ = (undefined4)lStack_100;
      local_128._4_4_ = (undefined4)((ulong)lStack_100 >> 0x20);
      uStack_120._0_4_ = SUB84(ppuStack_f8,0);
      uStack_120._4_4_ = (undefined4)((ulong)ppuStack_f8 >> 0x20);
      local_128 = lVar1;
      uStack_120 = ppuVar2;
      if (local_108 == (undefined **)0xd) {
        local_b8 = lStack_f0;
        core::ptr::drop_in_place<std::path::PathBuf>(&local_c8);
        core::ptr::drop_in_place<std::path::PathBuf>(&local_a8);
        if (cVar3 == '\0') goto LAB_00205351;
        goto LAB_0020538b;
      }
      param_1[6] = lStack_d8;
      param_1[7] = local_d0;
      param_1[4] = lStack_e8;
      param_1[5] = local_e0;
      param_1[3] = lStack_f0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_128;
      *(undefined4 *)((long)param_1 + 0xc) = local_128._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_120;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_120._4_4_;
      *param_1 = (long)local_108;
    }
    else {
      local_c8 = 1;
      local_b0 = 1;
      local_128 = 1;
      local_110 = 1;
      local_88 = &local_c8;
      local_80 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_78 = &local_128;
      local_70 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_108 = &PTR_s_backing_up_might_destroy_source__002b57d8;
      lStack_100 = 3;
      lStack_e8 = 0;
      ppuStack_f8 = &local_88;
      lStack_f0 = 2;
      uStack_120 = param_2;
      local_118 = param_3;
      ppuStack_c0 = (undefined8 **)param_4;
      local_b8 = param_5;
      core::option::Option<T>::map_or_else(&local_48,&local_108);
      param_1[3] = local_38;
      *(undefined4 *)(param_1 + 1) = local_48;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
      *(undefined4 *)(param_1 + 2) = uStack_40;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
      *param_1 = 4;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&local_a8);
  }
  return;
}