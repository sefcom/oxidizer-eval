undefined8 __rustcall
uu_mv::handle_two_paths
          (undefined8 ****param_1,undefined8 ****param_2,undefined8 ****param_3,
          undefined8 ****param_4,long param_5)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined local_1a8 [12];
  undefined4 uStack_19c;
  undefined8 ***local_198;
  undefined local_190;
  undefined8 ***local_168;
  undefined8 ***pppuStack_160;
  undefined8 ***local_158;
  undefined local_150;
  undefined8 ***local_148;
  undefined8 ***local_140;
  undefined8 ***local_138;
  undefined8 ***pppuStack_130;
  undefined8 ***local_128;
  undefined8 ***local_120;
  undefined8 uStack_118;
  undefined8 ***local_110;
  code *local_108;
  undefined8 ***local_100;
  undefined8 ***local_f8;
  undefined8 ***local_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***local_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 ***local_c8;
  undefined local_48 [24];
  
  cVar5 = *(char *)(param_5 + 0x36);
  if ((cVar5 == '\x01') &&
     (cVar4 = uucore::features::backup_control::source_is_target_backup
                        (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 8),
                         *(undefined8 *)(param_5 + 0x10)), cVar4 != '\0')) {
    local_168 = (undefined8 ***)&DAT_00000001;
    local_150 = 1;
    local_1a8._0_8_ = &DAT_00000001;
    local_190 = 1;
    local_120 = &local_168;
    uStack_118 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_110 = (undefined8 ***)local_1a8;
    local_108 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_f8 = (undefined8 ***)&PTR_s_backing_up_might_destroy_source__00287050;
    local_f0 = (undefined8 ****)0x3;
    uStack_d8 = 0;
    pppuStack_e8 = &local_120;
    local_e0 = (undefined8 ****)0x2;
    unique0x10000926 = (code *)param_1;
    local_198 = param_2;
    pppuStack_160 = param_3;
    local_158 = param_4;
    core::option::Option<T>::map_or_else(local_48,&local_f8);
    uVar7 = std::io::error::Error::new(0,local_48);
    goto LAB_001e8687;
  }
  local_140 = param_4;
  std::fs::symlink_metadata(&local_f8,param_1,param_2);
  iVar3 = (int)local_f8;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&local_f8)
  ;
  if (iVar3 == 2) {
    cVar5 = uucore::features::fs::path_ends_with_terminator(param_1,param_2);
    if (cVar5 == '\0') {
      local_1a8._0_8_ = &DAT_00000001;
      local_190 = 1;
      unique0x10000906 = (code *)param_1;
      local_198 = param_2;
      _<T_as_alloc::string::ToString>::to_string(&local_f0,local_1a8);
      local_f8 = (undefined8 ***)0x0;
    }
    else {
      local_1a8._0_8_ = &DAT_00000001;
      local_190 = 1;
      unique0x10000916 = (code *)param_1;
      local_198 = param_2;
      _<T_as_alloc::string::ToString>::to_string(&local_f0,local_1a8);
      local_f8 = (undefined8 ***)0x1;
    }
    goto LAB_001e8e5f;
  }
  local_100 = param_2;
  std::path::Path::components(local_1a8,param_1,param_2);
  pppuVar1 = local_140;
  std::path::Path::components(&local_f8,param_3,local_140);
  ppppuVar10 = (undefined8 ****)local_100;
  cVar4 = _<std::path::Components_as_core::cmp::PartialEq>::eq(local_1a8,&local_f8);
  local_148 = param_1;
  if ((cVar4 == '\0') &&
     (cVar4 = uucore::features::fs::are_hardlinks_to_same_file(param_1,ppppuVar10,param_3,pppuVar1),
     cVar4 == '\0')) {
    cVar4 = uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file
                      (param_1,ppppuVar10,param_3,pppuVar1);
    if ((cVar5 == '\0') && (cVar4 != '\0')) {
LAB_001e8929:
      pppuVar1 = local_148;
      std::path::Path::components(local_1a8,local_148,ppppuVar10);
      std::path::Path::components(&local_f8,&DAT_00125d91,1);
      cVar5 = _<std::path::Components_as_core::cmp::PartialEq>::eq(local_1a8,&local_f8);
      if ((cVar5 == '\0') &&
         ((cVar5 = std::path::Path::ends_with(pppuVar1,ppppuVar10,"/.: ",2), cVar5 == '\0' &&
          (cVar5 = std::path::Path::is_file(pppuVar1,ppppuVar10), cVar5 == '\0')))) {
        local_1a8._0_8_ = pppuVar1;
        stack0xfffffffffffffe60 = (code *)ppppuVar10;
        _<T_as_alloc::string::ToString>::to_string(&local_f0,local_1a8);
        local_f8 = (undefined8 ***)0x3;
      }
      else {
        local_168 = (undefined8 ***)&DAT_00000001;
        pppuStack_160 = pppuVar1;
        local_158 = ppppuVar10;
        local_150 = 1;
        _<T_as_alloc::string::ToString>::to_string(&local_138,&local_168);
        local_1a8._0_8_ = &DAT_00000001;
        local_198 = local_140;
        local_190 = 1;
                    /* try { // try from 001e89e9 to 001e89fa has its CatchHandler @ 001e8fc9 */
        unique0x100008b6 = (code *)param_3;
        _<T_as_alloc::string::ToString>::to_string(&local_120,local_1a8);
        local_e0 = local_128;
        local_f0 = local_138;
        pppuStack_e8 = pppuStack_130;
        uStack_d0 = (undefined4)uStack_118;
        uStack_cc = uStack_118._4_4_;
        local_c8 = local_110;
        local_f8 = (undefined8 ***)0x2;
      }
      goto LAB_001e8e5f;
    }
  }
  else if (cVar5 == '\0') goto LAB_001e8929;
  pppuVar2 = local_140;
  cVar5 = std::path::Path::is_dir(param_3,local_140);
  cVar4 = std::path::Path::is_dir(local_148,ppppuVar10);
  cVar6 = uucore::features::fs::path_ends_with_terminator(param_3,pppuVar2);
  pppuVar1 = local_148;
  if (cVar6 == '\0') {
    if (cVar5 == '\0') goto LAB_001e8a4c;
  }
  else if (cVar5 == '\0') {
    if ((cVar4 == '\0' && *(char *)(param_5 + 0x30) == '\0') &&
       (*(char *)(param_5 + 0x37) != '\x02')) {
      local_1a8._0_8_ = &DAT_00000001;
      local_198 = pppuVar2;
      local_190 = 1;
      unique0x100008f6 = (code *)param_3;
      _<T_as_alloc::string::ToString>::to_string(&local_f0,local_1a8);
      local_f8 = (undefined8 ***)0x9;
      goto LAB_001e8e5f;
    }
LAB_001e8a4c:
    std::fs::metadata(&local_f8,param_3,pppuVar2);
    iVar3 = (int)local_f8;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (&local_f8);
    pppuVar1 = local_148;
    if ((iVar3 == 2) ||
       (cVar5 = std::path::Path::is_dir(local_148,ppppuVar10), pppuVar2 = local_140, cVar5 == '\0'))
    {
      lVar9 = rename(pppuVar1,ppppuVar10,param_3,local_140,param_5,0);
      if (lVar9 != 0) {
        uVar7 = handle_two_paths::___closure__(lVar9);
        return uVar7;
      }
      return 0;
    }
    if (*(char *)(param_5 + 0x35) == '\0') {
      return 0;
    }
    if (*(char *)(param_5 + 0x35) != '\x02') {
      _local_1a8 = uucore::util_name();
      pppuStack_160 = (undefined8 ***)_<&T_as_core::fmt::Display>::fmt;
      local_f8 = (undefined8 ***)&DAT_00287128;
      local_f0 = (undefined8 ***)0x2;
      uStack_d8 = 0;
      local_e0 = (undefined8 ***)0x1;
      local_168 = (undefined8 ***)local_1a8;
      pppuStack_e8 = &local_168;
      std::io::stdio::_eprint(&local_f8);
      local_1a8._0_8_ = &DAT_00000001;
      local_198 = pppuVar2;
      local_190 = 1;
      pppuStack_160 = (undefined8 ***)_<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_f8 = (undefined8 ***)&PTR_s_overwrite___00287148;
      local_f0 = (undefined8 ***)0x2;
      uStack_d8 = 0;
      local_e0 = (undefined8 ***)0x1;
      unique0x100008d6 = (code *)param_3;
      local_168 = (undefined8 ***)local_1a8;
      pppuStack_e8 = &local_168;
      std::io::stdio::_eprint(&local_f8);
      local_f8 = (undefined8 ***)&PTR_s__00287168;
      local_f0 = (undefined8 ***)&DAT_00000001;
      pppuStack_e8 = (undefined8 ***)&DAT_00000008;
      local_e0 = (undefined8 ****)0x0;
      uStack_d8 = 0;
      std::io::stdio::_eprint(&local_f8);
      local_138 = (undefined8 ***)std::io::stdio::stderr::INSTANCE;
      pppuVar8 = (undefined8 ***)_<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_138);
      if (pppuVar8 != (undefined8 ***)0x0) {
        local_120 = pppuVar8;
                    /* try { // try from 001e8eb1 to 001e8f83 has its CatchHandler @ 001e8f84 */
        _local_1a8 = uucore::util_name();
        local_168 = (undefined8 ***)local_1a8;
        pppuStack_160 = (undefined8 ***)_<&T_as_core::fmt::Display>::fmt;
        local_f8 = (undefined8 ***)&DAT_00287128;
        local_f0 = (undefined8 ***)0x2;
        uStack_d8 = 0;
        local_e0 = (undefined8 ***)0x1;
        pppuStack_e8 = &local_168;
        std::io::stdio::_eprint(&local_f8);
        local_1a8._0_8_ = &local_120;
        stack0xfffffffffffffe60 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
        local_f8 = (undefined8 ***)&DAT_00287178;
        local_f0 = (undefined8 ***)0x2;
        uStack_d8 = 0;
        pppuStack_e8 = (undefined8 ***)local_1a8;
        local_e0 = (undefined8 ***)0x1;
        std::io::stdio::_eprint(&local_f8);
        uVar7 = std::process::exit(1);
                    /* catch() { ... } // from try @ 001e8eb1 with catch @ 001e8f84 */
                    /* try { // try from 001e8f87 to 001e8fd8 has its CatchHandler @ 001e8fe1 */
        core::ptr::drop_in_place<std::io::error::Error>(&local_120);
        uVar7 = _Unwind_Resume(uVar7);
        return uVar7;
      }
      cVar5 = uucore::read_yes();
      ppppuVar10 = (undefined8 ****)local_100;
      if (cVar5 == '\0') {
        uVar7 = std::io::error::Error::new(0x27,1,0);
LAB_001e8687:
        uVar7 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(uVar7);
        return uVar7;
      }
    }
    local_168 = (undefined8 ***)&DAT_00000001;
    pppuStack_160 = pppuVar1;
    local_150 = 1;
    local_158 = ppppuVar10;
    _<T_as_alloc::string::ToString>::to_string(&local_138,&local_168);
    local_1a8._0_8_ = &DAT_00000001;
    local_198 = pppuVar2;
    local_190 = 1;
                    /* try { // try from 001e8c5c to 001e8c6d has its CatchHandler @ 001e8f96 */
    unique0x100008e6 = (code *)param_3;
    _<T_as_alloc::string::ToString>::to_string(&local_120,local_1a8);
    local_e0 = local_128;
    local_f0 = local_138;
    pppuStack_e8 = pppuStack_130;
    uStack_d0 = (undefined4)uStack_118;
    uStack_cc = uStack_118._4_4_;
    local_c8 = local_110;
    local_f8 = (undefined8 ***)0x6;
    goto LAB_001e8e5f;
  }
  if (*(char *)(param_5 + 0x30) == '\0') {
    cVar5 = std::path::Path::starts_with(param_3,pppuVar2,local_148,ppppuVar10);
    if (cVar5 == '\0') {
      std::sys::pal::unix::os::split_paths::bytes_to_path(&local_f8,pppuVar1,ppppuVar10);
                    /* try { // try from 001e8e03 to 001e8e1a has its CatchHandler @ 001e8fa8 */
      uVar7 = move_files_into_dir(&local_f8,1,param_3,pppuVar2,param_5);
      core::ptr::drop_in_place<[std::path::PathBuf_1]>(&local_f8);
      return uVar7;
    }
    local_138 = pppuVar1;
    pppuStack_130 = ppppuVar10;
    _<T_as_alloc::string::ToString>::to_string(&local_168,&local_138);
    uStack_118 = (code *)pppuVar2;
                    /* try { // try from 001e8d52 to 001e8d63 has its CatchHandler @ 001e8fba */
    local_120 = param_3;
    _<T_as_alloc::string::ToString>::to_string(local_1a8,&local_120);
    local_e0 = local_158;
    local_f0 = local_168;
    pppuStack_e8 = pppuStack_160;
    uStack_d0 = local_1a8._8_4_;
    uStack_cc = uStack_19c;
    local_c8 = local_198;
    local_f8 = (undefined8 ***)0x4;
  }
  else {
    cVar5 = std::path::Path::is_dir(local_148,ppppuVar10);
    if (cVar5 != '\0') {
      uVar7 = rename(pppuVar1,ppppuVar10,param_3,pppuVar2,param_5,0);
      local_f8 = pppuVar1;
      local_f0 = ppppuVar10;
      local_e0 = pppuVar2;
      pppuStack_e8 = param_3;
      uVar7 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
              ::map_err_context(uVar7,&local_f8);
      return uVar7;
    }
    local_1a8._0_8_ = &DAT_00000001;
    local_198 = pppuVar2;
    local_190 = 1;
    unique0x100008c6 = (code *)param_3;
    _<T_as_alloc::string::ToString>::to_string(&local_f0,local_1a8);
    local_f8 = (undefined8 ***)0x5;
  }
LAB_001e8e5f:
  uVar7 = ::alloc::boxed::Box<T>::new(&local_f8);
  return uVar7;
}