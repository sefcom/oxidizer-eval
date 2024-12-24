long __rustcall
uu_mv::rename_with_fallback
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  long local_278 [3];
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 *local_1f8;
  code *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 **local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b0;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 **local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined local_e8 [24];
  undefined local_d0 [24];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_218 = param_1;
  local_210 = param_2;
  local_208 = param_3;
  local_200 = param_4;
  lVar3 = std::fs::rename();
  local_1e8 = (undefined *)lVar3;
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_1e8);
  if (lVar3 == 0) {
    return 0;
  }
  std::fs::symlink_metadata(&local_1e8,param_1,param_2);
  if ((int)local_1e8 == 2) {
    return uStack_1e0;
  }
  if ((local_1b0 & 0xf000) != 0x4000) {
    if ((local_1b0 & 0xf000) == 0xa000) {
      lVar3 = rename_symlink_fallback(param_1,param_2,param_3,param_4);
      return lVar3;
    }
    cVar2 = std::path::Path::is_symlink(param_3,param_4);
    if ((cVar2 != '\0') &&
       (lVar3 = std::fs::remove_file(param_3,param_4), local_108 = param_3, local_100 = param_4,
       local_f8 = param_1, local_f0 = param_2, lVar3 != 0)) {
      lVar3 = rename_with_fallback::___closure__(&local_108,lVar3);
      return lVar3;
    }
    auVar5 = std::fs::copy(param_1,param_2,param_3,param_4);
    if (auVar5._0_8_ != 0) {
      return auVar5._8_8_;
    }
    lVar3 = uucore::features::fsxattr::copy_xattrs(&local_218,&local_208);
    if (lVar3 == 0) {
      lVar3 = std::fs::remove_file(param_1,param_2);
      return lVar3;
    }
    return lVar3;
  }
  std::fs::metadata(&local_1e8,param_3,param_4);
  iVar1 = (int)local_1e8;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
            (&local_1e8);
  if ((iVar1 != 2) && (lVar3 = std::fs::remove_dir_all(param_3,param_4), lVar3 != 0)) {
    return lVar3;
  }
  local_220 = 0x10000;
  local_230 = 64000;
  local_228 = 0;
  fs_extra::dir::get_size(&local_1e8,param_1,param_2);
  if (local_1e8 == (undefined *)0x8000000000000000) {
    if (param_5 != 0) {
      indicatif::progress_bar::ProgressBar::new(&local_260,uStack_1e0);
                    /* try { // try from 001ead4e to 001ead83 has its CatchHandler @ 001eb09a */
      indicatif::style::ProgressStyle::with_template
                (&local_1e8,"{msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}",0x40)
      ;
      core::result::Result<T,E>::unwrap(&local_b8,&local_1e8,&PTR_s_src_uu_mv_src_mv_rs_002874c0);
      indicatif::progress_bar::ProgressBar::with_style(local_e8,&local_260,&local_b8);
      indicatif::multi::MultiProgress::add(local_278,param_5,local_e8);
      goto LAB_001eae43;
    }
  }
  else {
    core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&local_1e8);
  }
  local_278[0] = 0;
LAB_001eae43:
                    /* try { // try from 001eae43 to 001eae55 has its CatchHandler @ 001eb0cd */
  uucore::features::fsxattr::retrieve_xattrs(&local_1e8,param_1,param_2);
  if (local_1e8 == (undefined *)0x0) {
                    /* try { // try from 001eaecc to 001eaed8 has its CatchHandler @ 001eb0cd */
    rename_with_fallback::___closure__(&local_138,uStack_1e0);
  }
  else {
    uStack_110 = CONCAT44(uStack_1bc,uStack_1c0);
    local_118 = local_1c8;
    local_128 = local_1d8;
    uStack_120 = uStack_1d0;
    local_138 = (int)local_1e8;
    uStack_134 = local_1e8._4_4_;
    uStack_130 = (undefined4)uStack_1e0;
    uStack_12c = uStack_1e0._4_4_;
  }
  if (local_278[0] == 0) {
    fs_extra::dir::move_dir(&local_260,param_1,param_2,param_3,param_4,&local_230);
  }
  else {
                    /* try { // try from 001eaee1 to 001eaf21 has its CatchHandler @ 001eb0bb */
    fs_extra::dir::move_dir_with_progress
              (&local_260,param_1,param_2,param_3,param_4,&local_230,local_278);
  }
  local_1c8 = local_118;
  uStack_1c0 = (undefined4)uStack_110;
  uStack_1bc = uStack_110._4_4_;
  local_1d8 = local_128;
  uStack_1d0 = uStack_120;
  local_1e8 = (undefined *)CONCAT44(uStack_134,local_138);
  uStack_1e0 = CONCAT44(uStack_12c,uStack_130);
                    /* try { // try from 001eaf52 to 001eaf6c has its CatchHandler @ 001eb0d2 */
  uVar4 = uucore::features::fsxattr::apply_xattrs(param_3,param_4,&local_1e8);
  core::result::Result<T,E>::unwrap(uVar4);
  if (CONCAT44(uStack_25c,local_260) == -0x8000000000000000) {
                    /* try { // try from 001eaf74 to 001eaf7d has its CatchHandler @ 001eb098 */
    core::ptr::drop_in_place<core::result::Result<u64,fs_extra::error::Error>>(&local_260);
    core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(local_278);
    return 0;
  }
  local_a8 = local_250;
  uStack_a4 = uStack_24c;
  uStack_a0 = uStack_248;
  uStack_9c = uStack_244;
  local_98 = local_240;
  uStack_94 = uStack_23c;
  uStack_90 = uStack_238;
  uStack_8c = uStack_234;
  local_b8 = local_260;
  uStack_b4 = uStack_25c;
  uStack_b0 = uStack_258;
  uStack_ac = uStack_254;
  if (CONCAT44(uStack_244,uStack_248) == -0x7fffffffffffffff) {
                    /* try { // try from 001eafd3 to 001eb076 has its CatchHandler @ 001eb0a9 */
    lVar3 = std::io::error::Error::new
                      (1,
                       "Permission deniedinter-device move failed: \'\' to \'\'; unable to remove target: NoSuchFileCannotStatNotADirectorySelfTargetSubdirectoryDirectoryToNonDirectoryNonDirectoryToDirectoryNotADirectoryTargetNotADirectoryFailedToAccessNotADirectory"
                       ,0x11);
  }
  else {
    local_1f8 = &local_b8;
    local_1f0 = _<fs_extra::error::Error_as_core::fmt::Debug>::fmt;
    local_1e8 = &DAT_0011c050;
    uStack_1e0 = 1;
    local_1c8 = 0;
    local_1d8 = &local_1f8;
    uStack_1d0 = 1;
    core::option::Option<T>::map_or_else(local_d0,&local_1e8);
    lVar3 = std::io::error::Error::new(0x27,local_d0);
  }
                    /* try { // try from 001eb07a to 001eb086 has its CatchHandler @ 001eb096 */
  core::ptr::drop_in_place<fs_extra::error::Error>(&local_b8);
  core::ptr::drop_in_place<core::option::Option<indicatif::progress_bar::ProgressBar>>(local_278);
  return lVar3;
}