undefined  [16] __rustcall
uu_ln::link(undefined8 param_1,undefined ****param_2,undefined8 param_3,undefined ****param_4,
           long param_5)

{
  undefined auVar1 [16];
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined auVar6 [16];
  undefined **local_188;
  undefined8 local_180;
  undefined ****ppppuStack_178;
  undefined local_170;
  undefined **local_168;
  undefined8 uStack_160;
  undefined ****local_158;
  undefined local_150;
  undefined **local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined ****local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined ****ppppuStack_118;
  undefined8 local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined ****local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined ***local_58;
  code *local_50;
  undefined ***local_48;
  code *local_40;
  
  local_140 = (undefined **)0x8000000000000000;
  local_110 = param_1;
  if (*(char *)(param_5 + 0x31) == '\0') {
    local_128 = (undefined *)0x8000000000000000;
    local_120 = param_1;
    ppppuStack_118 = param_2;
  }
  else {
                    /* try { // try from 001ba181 to 001ba193 has its CatchHandler @ 001bab1d */
    relative_path(&local_128,param_1,param_2,param_3,param_4);
  }
                    /* try { // try from 001ba1b1 to 001ba215 has its CatchHandler @ 001bab27 */
  cVar2 = std::path::Path::is_symlink(param_3,param_4);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x001ba1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)(&DAT_0011e908 +
                       *(int *)(&DAT_0011e908 + (ulong)*(byte *)(param_5 + 0x37) * 4)))();
    return auVar6;
  }
  std::fs::metadata(&local_108,param_3,param_4);
  if (local_108 != (undefined **)0x2) {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_108,local_100);
                    /* WARNING: Could not recover jumptable at 0x001ba229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (*(code *)(&DAT_0011e908 +
                       *(int *)(&DAT_0011e908 + (ulong)*(byte *)(param_5 + 0x37) * 4)))();
    return auVar6;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
            (2,local_100);
  if (*(char *)(param_5 + 0x30) == '\0') {
    if ((*(char *)(param_5 + 0x32) == '\0') ||
       (cVar2 = std::path::Path::is_symlink(local_120,ppppuStack_118), cVar2 == '\0')) {
      std::sys::pal::unix::os::split_paths::bytes_to_path(&local_168,local_120,ppppuStack_118);
    }
    else {
      std::fs::canonicalize(&local_108,&local_128);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(&local_188,&local_108,&local_128);
      auVar6._8_8_ = ppppuStack_178;
      auVar6._0_8_ = local_180;
      if (local_188 == (undefined **)0x8000000000000000) goto LAB_001ba8bf;
      local_168 = local_188;
      uStack_160 = local_180;
      local_158 = ppppuStack_178;
      param_2 = ppppuStack_178;
    }
    local_f8 = local_158;
    local_108 = local_168;
    local_100 = uStack_160;
    uVar4 = std::fs::hard_link(&local_108,param_3,param_4);
    local_108 = &local_128;
    local_100 = param_3;
    local_f8 = param_4;
    auVar6 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
             ::map_err_context(uVar4,&local_108);
    if (auVar6._0_8_ != 0) goto LAB_001ba8bf;
  }
  else {
    lVar3 = std::os::unix::fs::symlink(&local_128,param_3,param_4);
    if (lVar3 != 0) {
      auVar6 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(lVar3);
LAB_001ba8bf:
                    /* try { // try from 001ba8c2 to 001ba8cb has its CatchHandler @ 001bab1d */
      core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&local_128);
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_140);
      return auVar6;
    }
  }
  if (*(char *)(param_5 + 0x35) != '\0') {
    local_168 = (undefined **)0x1;
    local_150 = 1;
    local_188 = (undefined **)0x1;
    local_180 = local_120;
    ppppuStack_178 = ppppuStack_118;
    local_170 = 1;
    local_58 = &local_168;
    local_50 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_40 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_108 = (undefined **)&DAT_0022d7b0;
    local_100 = 2;
    uStack_e8 = 0;
    local_f0 = 2;
    uStack_160 = param_3;
    local_158 = param_4;
    local_f8 = &local_58;
    local_48 = &local_188;
    std::io::stdio::_print(&local_108);
    if (local_140 != (undefined **)0x8000000000000000) {
      local_158 = local_130;
      local_168 = local_140;
      uStack_160 = CONCAT44(uStack_134,uStack_138);
      local_188 = (undefined **)0x1;
      local_180 = uStack_160;
      ppppuStack_178 = local_130;
      local_170 = 1;
      local_50 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_108 = &PTR_s__backup____0022d7e0;
      local_100 = 2;
      uStack_e8 = 0;
      local_f0 = 1;
                    /* try { // try from 001ba95c to 001ba969 has its CatchHandler @ 001baada */
      local_f8 = &local_58;
      local_58 = &local_188;
      std::io::stdio::_print(&local_108);
                    /* try { // try from 001ba972 to 001ba97b has its CatchHandler @ 001bab27 */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_168);
      bVar5 = 1;
      goto LAB_001ba981;
    }
    local_108 = &PTR_s__0022d7d0;
    local_100 = 1;
    local_f8 = (undefined ****)&DAT_00000008;
    local_f0 = 0;
    uStack_e8 = 0;
    std::io::stdio::_print(&local_108);
  }
  bVar5 = 0;
LAB_001ba981:
                    /* try { // try from 001ba981 to 001ba98a has its CatchHandler @ 001bab1d */
  core::ptr::drop_in_place<alloc::borrow::Cow<std::path::Path>>(&local_128);
  if ((bool)(~bVar5 & local_140 != (undefined **)0x8000000000000000)) {
    core::ptr::drop_in_place<std::path::PathBuf>(&local_140);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}