undefined  [16] __rustcall uu_mktemp::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auStack_478 [8];
  long local_470;
  long local_468;
  long local_460;
  long local_458;
  long lStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  long local_428;
  long lStack_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  long local_3d8;
  long lStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined uStack_390;
  char cStack_38f;
  char cStack_38e;
  long local_388;
  long lStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long local_348;
  long lStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  long local_300;
  long local_2f8;
  long lStack_2f0;
  long local_2e8;
  long lStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  
  core::iter::traits::iterator::Iterator::collect(auStack_478,param_1,param_2);
                    /* try { // try from 00173adb to 00173afd has its CatchHandler @ 00174067 */
  (*(code *)PTR_uu_app_0023a660)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from(&local_428,&local_2e8,auStack_478);
  if (local_428 == -0x8000000000000000) {
    if (*(char *)(lStack_420 + 0xd5) == '\x05') {
      local_2e8 = *(long *)(lStack_420 + 0x28);
      local_2d8 = *(long *)(lStack_420 + 0x40);
      lStack_2e0 = *(long *)(lStack_420 + 0x30) + local_2e8;
      uStack_2d0 = *(long *)(lStack_420 + 0x48) * 0x20 + local_2d8;
                    /* try { // try from 00173b60 to 00173bcf has its CatchHandler @ 00174034 */
      uVar2 = core::iter::traits::iterator::Iterator::try_fold(&local_2e8);
      cVar3 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar2);
      if (cVar3 != '\0') {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3d8,&DAT_0011683c,0x12);
        local_2d8 = CONCAT44(uStack_3c4,local_3c8);
        local_2e8 = local_3d8;
        lStack_2e0 = lStack_3d0;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,1);
        uVar4 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 00173bd0 to 00173bda has its CatchHandler @ 00174067 */
        core::ptr::drop_in_place<clap_builder::error::Error>(lStack_420);
        auVar5._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00233898;
        auVar5._0_8_ = uVar4;
        goto LAB_00173f6a;
      }
    }
                    /* try { // try from 00173c69 to 00173c71 has its CatchHandler @ 00174032 */
    auVar5 = (*(code *)PTR_from_0023a670)(lStack_420);
    goto LAB_00173f6a;
  }
  local_368 = local_408;
  uStack_364 = uStack_404;
  uStack_360 = uStack_400;
  uStack_35c = uStack_3fc;
  local_378 = (undefined4)local_418;
  uStack_374 = local_418._4_4_;
  uStack_370 = uStack_410;
  uStack_36c = uStack_40c;
  local_388 = local_428;
  lStack_380 = lStack_420;
                    /* try { // try from 00173c20 to 00173c35 has its CatchHandler @ 00174041 */
  (*(code *)PTR_from_0023a668)(&local_3d8,&local_388);
                    /* try { // try from 00173c36 to 00173c66 has its CatchHandler @ 00174048 */
  std::env::var(&local_2e8,&DAT_0011682d,0xf);
  if (local_2e8 == 0) {
                    /* try { // try from 00173c7d to 00173cdf has its CatchHandler @ 00174048 */
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_2e8);
    cVar3 = (*(code *)PTR_contains_id_0023a680)
                      (&local_388,*(undefined8 *)PTR_ARG_TEMPLATE_0023a678,
                       *(undefined8 *)(PTR_ARG_TEMPLATE_0023a678 + 8));
    if (cVar3 == '\0') goto LAB_00173ce8;
    if (local_468 == 0) {
                    /* try { // try from 00173fb4 to 00173fc0 has its CatchHandler @ 00174048 */
      (*(code *)PTR_unwrap_failed_0023a578)(&PTR_DAT_002337a0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar3 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq
                      (*(undefined8 *)(local_470 + -0x10 + local_468 * 0x18),
                       *(undefined8 *)(local_470 + -8 + local_468 * 0x18),lStack_3d0,
                       CONCAT44(uStack_3c4,local_3c8));
    if (cVar3 != '\0') goto LAB_00173ce8;
    uStack_2d0 = -0x7ffffffffffffffa;
                    /* try { // try from 00173f92 to 00173f9e has its CatchHandler @ 00174048 */
    uVar4 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 00173f9f to 00173fae has its CatchHandler @ 00174041 */
    core::ptr::drop_in_place<uu_mktemp::Options>(&local_3d8);
  }
  else {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_2e8);
LAB_00173ce8:
    local_2a8 = local_398;
    local_2b8 = local_3a8;
    uStack_2b4 = uStack_3a4;
    uStack_2b0 = uStack_3a0;
    uStack_2ac = uStack_39c;
    local_2c8 = local_3b8;
    uStack_2c4 = uStack_3b4;
    uStack_2c0 = uStack_3b0;
    uStack_2bc = uStack_3ac;
    local_2d8 = CONCAT44(uStack_3c4,local_3c8);
    uStack_2d0 = CONCAT44(uStack_3bc,uStack_3c0);
    local_2e8 = local_3d8;
    lStack_2e0 = lStack_3d0;
                    /* try { // try from 00173d54 to 00173dc0 has its CatchHandler @ 00174043 */
    (*(code *)PTR_from_0023a688)(&local_428,&local_2e8);
    if (local_428 != -0x8000000000000000) {
      local_318 = local_3f0;
      uStack_314 = uStack_3ec;
      uStack_310 = uStack_3e8;
      uStack_30c = uStack_3e4;
      local_328 = uStack_400;
      uStack_324 = uStack_3fc;
      uStack_320 = local_3f8;
      uStack_31c = uStack_3f4;
      local_338 = uStack_410;
      uStack_334 = uStack_40c;
      uStack_330 = local_408;
      uStack_32c = uStack_404;
      local_348 = lStack_420;
      lStack_340 = local_418;
      local_458 = lStack_420;
      lStack_450 = local_418;
      local_448 = uStack_410;
      uStack_444 = uStack_40c;
      uStack_440 = local_408;
      uStack_43c = uStack_404;
      local_460 = local_428;
      if (cStack_38f == '\0') {
        (*(code *)PTR_exec_0023a698)
                  (&local_2e8,lStack_420,local_418,CONCAT44(uStack_404,local_408),
                   CONCAT44(uStack_3fc,uStack_400),local_3e0,CONCAT44(uStack_3ec,local_3f0),
                   CONCAT44(uStack_3e4,uStack_3e8),uStack_390);
      }
      else {
                    /* try { // try from 00173e65 to 00173ec9 has its CatchHandler @ 0017400f */
        (*(code *)PTR_dry_exec_0023a690)(&local_2e8);
      }
      auVar5._8_8_ = local_2d8;
      auVar5._0_8_ = lStack_2e0;
      if (cStack_38e == '\0') {
        if (local_2e8 != -0x8000000000000000) goto LAB_00173f13;
      }
      else {
        if (local_2e8 != -0x8000000000000000) {
LAB_00173f13:
          local_300 = local_2e8;
          local_2f8 = lStack_2e0;
          lStack_2f0 = local_2d8;
                    /* try { // try from 00173f24 to 00173f38 has its CatchHandler @ 00173fd7 */
          uVar4 = uucore::mods::display::println_verbatim(&local_300);
          auVar5 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                   ::map_err_context(uVar4);
                    /* try { // try from 00173f39 to 00173f48 has its CatchHandler @ 00173fd2 */
          core::ptr::drop_in_place<alloc::string::String>(&local_428);
                    /* try { // try from 00173f49 to 00173f52 has its CatchHandler @ 00173fcd */
          core::ptr::drop_in_place<alloc::string::String>(&local_448);
                    /* try { // try from 00173f53 to 00173f5c has its CatchHandler @ 00173fc8 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_460);
                    /* try { // try from 00173f5d to 00173f69 has its CatchHandler @ 00173fc3 */
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                    (&local_388);
          goto LAB_00173f6a;
        }
        auVar5 = uumain::___closure__(lStack_2e0,local_2d8);
      }
                    /* try { // try from 00173ee6 to 00173eef has its CatchHandler @ 00173fd2 */
      core::ptr::drop_in_place<alloc::string::String>(&local_428);
                    /* try { // try from 00173ef0 to 00173ef9 has its CatchHandler @ 00173fcd */
      core::ptr::drop_in_place<alloc::string::String>(&local_448);
                    /* try { // try from 00173efa to 00173f03 has its CatchHandler @ 00173fc8 */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_460);
                    /* try { // try from 00173f04 to 00173f10 has its CatchHandler @ 00173fc3 */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_388);
      goto LAB_00173f6a;
    }
    local_328 = uStack_400;
    uStack_324 = uStack_3fc;
    uStack_320 = local_3f8;
    uStack_31c = uStack_3f4;
    local_338 = uStack_410;
    uStack_334 = uStack_40c;
    uStack_330 = local_408;
    uStack_32c = uStack_404;
    local_348 = lStack_420;
    lStack_340 = local_418;
    local_2c8 = uStack_400;
    uStack_2c4 = uStack_3fc;
    uStack_2c0 = local_3f8;
    uStack_2bc = uStack_3f4;
    local_2d8 = CONCAT44(uStack_40c,uStack_410);
    uStack_2d0 = CONCAT44(uStack_404,local_408);
    local_2e8 = lStack_420;
    lStack_2e0 = local_418;
    uVar4 = ::alloc::boxed::Box<T>::new(&local_2e8);
  }
                    /* try { // try from 00173dc4 to 00173dd0 has its CatchHandler @ 00174067 */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_388);
  auVar5._8_8_ = &PTR_drop_in_place<uu_mktemp_MkTempError>_002337f0;
  auVar5._0_8_ = uVar4;
LAB_00173f6a:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(auStack_478);
  return auVar5;
}