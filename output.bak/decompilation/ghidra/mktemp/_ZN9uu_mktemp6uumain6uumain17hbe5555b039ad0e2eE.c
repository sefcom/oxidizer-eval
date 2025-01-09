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
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  long local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  undefined uStack_3e0;
  char cStack_3df;
  char cStack_3de;
  long local_3d8;
  long lStack_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_390;
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
  undefined8 uStack_340;
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
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  long local_2e8;
  undefined8 uStack_2e0;
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
                    /* try { // try from 0017297b to 001729a0 has its CatchHandler @ 00172f06 */
  (*(code *)PTR_uu_app_0023ae60)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from(&local_3d8,&local_2e8,auStack_478);
  if (local_3d8 == -0x8000000000000000) {
    if (*(char *)(lStack_3d0 + 0xd5) == '\x05') {
      clap_builder::util::flat_map::FlatMap<K,V>::iter(&local_2e8,lStack_3d0 + 0x20);
      local_418 = (undefined4)local_2d8;
      uStack_414 = local_2d8._4_4_;
      uStack_410 = (undefined4)uStack_2d0;
      uStack_40c = uStack_2d0._4_4_;
      local_428 = local_2e8;
      uStack_420 = uStack_2e0;
                    /* try { // try from 001729fc to 00172a5f has its CatchHandler @ 00172ed6 */
      uVar2 = core::iter::traits::iterator::Iterator::try_fold(&local_428);
      cVar3 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar2);
      if (cVar3 != '\0') {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_428,"too many templates",0x12);
        local_2d8 = CONCAT44(uStack_414,local_418);
        local_2e8 = local_428;
        uStack_2e0 = uStack_420;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,1);
        uVar4 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 00172a60 to 00172a6a has its CatchHandler @ 00172f06 */
        core::ptr::drop_in_place<clap_builder::error::Error>(lStack_3d0);
        auVar5._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00233eb0;
        auVar5._0_8_ = uVar4;
        goto LAB_00172e09;
      }
    }
                    /* try { // try from 00172aff to 00172b07 has its CatchHandler @ 00172ed4 */
    auVar5 = (*(code *)PTR_from_0023ae70)(lStack_3d0);
    goto LAB_00172e09;
  }
  local_368 = local_3b8;
  uStack_364 = uStack_3b4;
  uStack_360 = uStack_3b0;
  uStack_35c = uStack_3ac;
  local_378 = (undefined4)local_3c8;
  uStack_374 = local_3c8._4_4_;
  uStack_370 = uStack_3c0;
  uStack_36c = uStack_3bc;
  local_388 = local_3d8;
  lStack_380 = lStack_3d0;
                    /* try { // try from 00172ab9 to 00172acb has its CatchHandler @ 00172ee3 */
  (*(code *)PTR_from_0023ae68)(&local_428,&local_388);
                    /* try { // try from 00172acc to 00172afc has its CatchHandler @ 00172eea */
  std::env::var(&local_2e8,"POSIXLY_CORRECT",0xf);
  if (local_2e8 == 0) {
                    /* try { // try from 00172b13 to 00172b6f has its CatchHandler @ 00172eea */
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_2e8);
    cVar3 = (*(code *)PTR_contains_id_0023ae80)
                      (&local_388,*(undefined8 *)PTR_ARG_TEMPLATE_0023ae78,
                       *(undefined8 *)(PTR_ARG_TEMPLATE_0023ae78 + 8));
    if (cVar3 == '\0') goto LAB_00172b78;
    if (local_468 == 0) {
                    /* try { // try from 00172e50 to 00172e5c has its CatchHandler @ 00172eea */
      (*(code *)PTR_unwrap_failed_0023aea0)(&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00233db8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    cVar3 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq
                      (*(undefined8 *)(local_470 + -0x10 + local_468 * 0x18),
                       *(undefined8 *)(local_470 + -8 + local_468 * 0x18),uStack_420,
                       CONCAT44(uStack_414,local_418));
    if (cVar3 != '\0') goto LAB_00172b78;
    uStack_2d0 = 0x8000000000000006;
                    /* try { // try from 00172e31 to 00172e3d has its CatchHandler @ 00172eea */
    uVar4 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 00172e3e to 00172e4a has its CatchHandler @ 00172ee3 */
    core::ptr::drop_in_place<uu_mktemp::Options>(&local_428);
  }
  else {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
              (&local_2e8);
LAB_00172b78:
    local_2a8 = local_3e8;
    local_2b8 = local_3f8;
    uStack_2b4 = uStack_3f4;
    uStack_2b0 = uStack_3f0;
    uStack_2ac = uStack_3ec;
    local_2c8 = local_408;
    uStack_2c4 = uStack_404;
    uStack_2c0 = uStack_400;
    uStack_2bc = uStack_3fc;
    local_2d8 = CONCAT44(uStack_414,local_418);
    uStack_2d0 = CONCAT44(uStack_40c,uStack_410);
    local_2e8 = local_428;
    uStack_2e0 = uStack_420;
                    /* try { // try from 00172bdb to 00172c50 has its CatchHandler @ 00172ee5 */
    (*(code *)PTR_from_0023ae88)(&local_3d8,&local_2e8);
    if (local_3d8 != -0x8000000000000000) {
      local_318 = local_3a0;
      uStack_314 = uStack_39c;
      uStack_310 = uStack_398;
      uStack_30c = uStack_394;
      local_328 = uStack_3b0;
      uStack_324 = uStack_3ac;
      uStack_320 = local_3a8;
      uStack_31c = uStack_3a4;
      local_338 = uStack_3c0;
      uStack_334 = uStack_3bc;
      uStack_330 = local_3b8;
      uStack_32c = uStack_3b4;
      local_348 = lStack_3d0;
      uStack_340 = local_3c8;
      local_458 = lStack_3d0;
      uStack_450 = local_3c8;
      local_448 = uStack_3c0;
      uStack_444 = uStack_3bc;
      uStack_440 = local_3b8;
      uStack_43c = uStack_3b4;
      local_460 = local_3d8;
      if (cStack_3df == '\0') {
        (*(code *)PTR_exec_0023ae98)
                  (&local_2e8,lStack_3d0,local_3c8,CONCAT44(uStack_3b4,local_3b8),
                   CONCAT44(uStack_3ac,uStack_3b0),local_390,CONCAT44(uStack_39c,local_3a0),
                   CONCAT44(uStack_394,uStack_398),uStack_3e0);
      }
      else {
                    /* try { // try from 00172cfe to 00172d62 has its CatchHandler @ 00172eae */
        (*(code *)PTR_dry_exec_0023ae90)(&local_2e8);
      }
      auVar5._8_8_ = local_2d8;
      auVar5._0_8_ = uStack_2e0;
      if (cStack_3de == '\0') {
        if (local_2e8 != -0x8000000000000000) goto LAB_00172daf;
      }
      else {
        if (local_2e8 != -0x8000000000000000) {
LAB_00172daf:
          local_300 = local_2e8;
          local_2f8 = uStack_2e0;
          uStack_2f0 = local_2d8;
                    /* try { // try from 00172dc0 to 00172dd4 has its CatchHandler @ 00172e73 */
          uVar4 = uucore::mods::display::println_verbatim(&local_300);
          auVar5 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                   ::map_err_context(uVar4);
                    /* try { // try from 00172dd5 to 00172de7 has its CatchHandler @ 00172e6e */
          core::ptr::drop_in_place<alloc::string::String>(&local_3d8);
                    /* try { // try from 00172de8 to 00172df1 has its CatchHandler @ 00172e69 */
          core::ptr::drop_in_place<alloc::string::String>(&local_448);
                    /* try { // try from 00172df2 to 00172dfb has its CatchHandler @ 00172e64 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_460);
                    /* try { // try from 00172dfc to 00172e08 has its CatchHandler @ 00172e5f */
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                    (&local_388);
          goto LAB_00172e09;
        }
        auVar5 = uumain::___closure__(uStack_2e0,local_2d8);
      }
                    /* try { // try from 00172d7f to 00172d8b has its CatchHandler @ 00172e6e */
      core::ptr::drop_in_place<alloc::string::String>(&local_3d8);
                    /* try { // try from 00172d8c to 00172d95 has its CatchHandler @ 00172e69 */
      core::ptr::drop_in_place<alloc::string::String>(&local_448);
                    /* try { // try from 00172d96 to 00172d9f has its CatchHandler @ 00172e64 */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_460);
                    /* try { // try from 00172da0 to 00172dac has its CatchHandler @ 00172e5f */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_388);
      goto LAB_00172e09;
    }
    local_328 = uStack_3b0;
    uStack_324 = uStack_3ac;
    uStack_320 = local_3a8;
    uStack_31c = uStack_3a4;
    local_338 = uStack_3c0;
    uStack_334 = uStack_3bc;
    uStack_330 = local_3b8;
    uStack_32c = uStack_3b4;
    local_348 = lStack_3d0;
    uStack_340 = local_3c8;
    local_2c8 = uStack_3b0;
    uStack_2c4 = uStack_3ac;
    uStack_2c0 = local_3a8;
    uStack_2bc = uStack_3a4;
    local_2d8 = CONCAT44(uStack_3bc,uStack_3c0);
    uStack_2d0 = CONCAT44(uStack_3b4,local_3b8);
    local_2e8 = lStack_3d0;
    uStack_2e0 = local_3c8;
    uVar4 = ::alloc::boxed::Box<T>::new(&local_2e8);
  }
                    /* try { // try from 00172c54 to 00172c60 has its CatchHandler @ 00172f06 */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_388);
  auVar5._8_8_ = &PTR_drop_in_place<uu_mktemp_MkTempError>_00233e08;
  auVar5._0_8_ = uVar4;
LAB_00172e09:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(auStack_478);
  return auVar5;
}