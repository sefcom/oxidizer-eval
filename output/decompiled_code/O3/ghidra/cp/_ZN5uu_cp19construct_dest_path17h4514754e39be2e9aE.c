void __rustcall
uu_cp::construct_dest_path
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,char param_6,char param_7,char param_8)

{
  undefined auVar1 [16];
  char cVar2;
  bool bVar3;
  undefined auVar4 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined local_90;
  undefined8 *local_88;
  code *pcStack_80;
  long local_78;
  undefined **local_70;
  undefined8 *local_68;
  undefined8 **ppuStack_60;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined2 uStack_38;
  char cStack_36;
  undefined5 uStack_35;
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  if ((param_7 != '\0') && (cVar2 = std::path::Path::is_dir(param_4,param_5), cVar2 != '\0')) {
    local_a8 = 1;
    local_90 = 1;
    local_88 = &local_a8;
    pcStack_80 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_70 = &PTR_s_cannot_overwrite_directory_with_n_002b56e8;
    local_68 = (undefined8 *)0x2;
    local_50 = 0;
    ppuStack_60 = &local_88;
    local_58 = 1;
    uStack_a0 = param_4;
    local_98 = param_5;
    core::option::Option<T>::map_or_else(param_1 + 1,&local_70);
    *param_1 = 4;
    return;
  }
  if (param_8 == '\0') {
    if (param_6 == '\0') {
      auVar4 = std::path::Path::parent(param_2,param_3);
      if (auVar4._0_8_ == 0) {
        auVar4 = auVar1;
      }
      goto LAB_00203618;
    }
  }
  else {
    cVar2 = std::path::Path::is_dir(param_4,param_5);
    if (cVar2 == '\0') {
      _<uu_cp::Error_as_core::convert::From<&str>>::from
                (param_1,"with --parents, the destination must be a directory",0x33);
      return;
    }
    if (param_6 == '\0') {
      std::path::Path::components(&local_70,param_2,param_3);
      if (cStack_36 == '\0') {
        bVar3 = (byte)ppuStack_60 < 5;
        auVar4._9_7_ = 0;
        auVar4[8] = bVar3;
        auVar4._0_8_ = 1;
        if (bVar3) {
          auVar4._0_8_ = "/";
          auVar4._9_7_ = 0;
        }
      }
      else {
        auVar4._8_8_ = 1;
        auVar4._0_8_ = "/";
      }
LAB_00203618:
      localize_to_target(&local_70,auVar4._0_8_,auVar4._8_8_,param_2,param_3,param_4,param_5);
      if (local_70 != (undefined **)0xd) {
        param_1[6] = local_40;
        param_1[7] = CONCAT53(uStack_35,CONCAT12(cStack_36,uStack_38));
        param_1[4] = local_50;
        param_1[5] = lStack_48;
        param_1[3] = local_58;
        param_1[1] = (long)local_68;
        param_1[2] = (long)ppuStack_60;
        *param_1 = (long)local_70;
        return;
      }
      local_88 = local_68;
      pcStack_80 = (code *)ppuStack_60;
      local_78 = local_58;
      goto LAB_00203662;
    }
  }
  std::sys::pal::unix::os::split_paths::bytes_to_path(&local_88,param_4,param_5);
LAB_00203662:
  param_1[3] = local_78;
  param_1[1] = (long)local_88;
  param_1[2] = (long)pcStack_80;
  *param_1 = 0xd;
  return;
}