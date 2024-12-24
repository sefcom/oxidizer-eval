undefined  [16] __rustcall
uu_tail::follow::watch::WatcherRx::watch_with_parent
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 **ppuVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 *local_50;
  code *local_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  std::sys::pal::unix::os::split_paths::bytes_to_path(&local_b8,param_3,param_4);
                    /* try { // try from 002159df to 00215a2c has its CatchHandler @ 00215c1d */
  cVar2 = std::path::Path::is_file(uStack_b0,local_a8);
  if (cVar2 == '\0') {
LAB_00215b20:
                    /* try { // try from 00215b2a to 00215b6c has its CatchHandler @ 00215c1d */
    cVar2 = std::path::Path::is_absolute(uStack_b0,local_a8);
    if (cVar2 != '\0') {
LAB_00215b99:
                    /* try { // try from 00215b99 to 00215ba3 has its CatchHandler @ 00215c1d */
      lVar3 = watch(param_1,param_2,uStack_b0,local_a8);
      if (lVar3 == 0) {
        core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
        uVar4 = 0;
        goto LAB_00215bc7;
      }
      goto LAB_00215bac;
    }
    std::fs::canonicalize(&local_98,uStack_b0,local_a8);
    ppuVar1 = local_88;
    if (local_98 != (undefined **)0x8000000000000000) {
                    /* try { // try from 00215b7d to 00215b84 has its CatchHandler @ 00215c0a */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
      local_b8 = (long)local_98;
      uStack_b0 = uStack_90;
      local_a8 = ppuVar1;
      goto LAB_00215b99;
    }
    auVar9 = uucore::mods::error::
             _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
             ::from();
  }
  else {
    auVar9 = std::path::Path::parent(uStack_b0,local_a8);
    lVar3 = auVar9._0_8_;
    if (lVar3 != 0) {
      cVar2 = std::path::Path::is_dir(lVar3,auVar9._8_8_);
      if (cVar2 == '\0') {
        std::sys::os_str::bytes::Slice::to_owned(&local_98,".",1);
        local_58 = local_88;
        local_68 = (undefined4)local_98;
        uStack_64 = local_98._4_4_;
        uStack_60 = (undefined4)uStack_90;
        uStack_5c = uStack_90._4_4_;
                    /* try { // try from 00215b05 to 00215b0c has its CatchHandler @ 00215bde */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
        local_a8 = local_58;
        uVar5 = local_68;
        uVar6 = uStack_64;
        uVar7 = uStack_60;
        uVar8 = uStack_5c;
      }
      else {
        std::sys::pal::unix::os::split_paths::bytes_to_path(&local_98,lVar3,auVar9._8_8_);
                    /* try { // try from 00215a2d to 00215a34 has its CatchHandler @ 00215bf2 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
        local_a8 = local_88;
        uVar5 = (undefined4)local_98;
        uVar6 = local_98._4_4_;
        uVar7 = (undefined4)uStack_90;
        uVar8 = uStack_90._4_4_;
      }
      local_b8 = CONCAT44(uVar6,uVar5);
      uStack_b0 = CONCAT44(uVar8,uVar7);
      goto LAB_00215b20;
    }
    local_68 = (undefined4)uStack_b0;
    uStack_64 = uStack_b0._4_4_;
    uStack_60 = (undefined4)local_a8;
    uStack_5c = local_a8._4_4_;
    local_50 = &local_68;
    local_48 = _<std::path::Display_as_core::fmt::Display>::fmt;
    local_98 = &PTR_s_cannot_watch_parent_directory_of_002be9e0;
    uStack_90 = 1;
    local_78 = 0;
    local_88 = &local_50;
    local_80 = 1;
                    /* try { // try from 00215a9a to 00215af0 has its CatchHandler @ 00215c1d */
    core::option::Option<T>::map_or_else(local_40,&local_98);
    local_80 = CONCAT44(local_80._4_4_,1);
    local_88 = (undefined4 **)local_30;
    lVar3 = ::alloc::boxed::Box<T>::new(&local_98);
LAB_00215bac:
    auVar9._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002bea28;
    auVar9._0_8_ = lVar3;
  }
  param_1 = auVar9._8_8_;
  uVar4 = auVar9._0_8_;
  core::ptr::drop_in_place<std::path::PathBuf>(&local_b8);
LAB_00215bc7:
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = uVar4;
  return auVar10;
}