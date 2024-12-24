void __rustcall uu_true::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_3a8;
  undefined *local_3a0;
  undefined local_398 [16];
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 **local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 *local_350;
  code *local_348;
  undefined *local_340;
  undefined *local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 **local_320;
  long local_318;
  long local_310;
  undefined local_2e0 [712];
  
  (*(code *)PTR_uu_app_001fb508)(local_2e0);
                    /* try { // try from 00159000 to 0015905a has its CatchHandler @ 0015925e */
  core::iter::traits::iterator::Iterator::collect(&local_330,param_1,param_2);
  if ((undefined8 **)0x2 < local_320) {
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_330);
    goto LAB_001591fe;
  }
  local_378 = local_320;
  local_388 = (undefined *)CONCAT44(uStack_32c,local_330);
  uStack_380 = CONCAT44(uStack_324,uStack_328);
  clap_builder::builder::command::Command::try_get_matches_from_mut(&local_318,local_2e0,&local_388)
  ;
  if (local_318 == -0x8000000000000000) {
    if (*(char *)(local_310 + 0xd5) == '\f') {
      lVar3 = (*(code *)PTR_print_help_001fb520)(local_2e0);
      auVar1._8_8_ = local_398._8_8_;
      auVar1._0_8_ = local_398._0_8_;
      lVar2 = local_3a8;
joined_r0x00159132:
      local_3a8 = lVar3;
      if (local_3a8 != 0) {
        local_3a0 = PTR_INSTANCE_001fb528;
                    /* try { // try from 00159148 to 001591d5 has its CatchHandler @ 0015922c */
        local_398 = (*(code *)PTR_util_name_001fb530)();
        local_350 = (undefined8 *)local_398;
        local_348 = _<&T_as_core::fmt::Display>::fmt;
        local_338 = PTR_fmt_001fb4d8;
        local_388 = &DAT_001f6900;
        uStack_380 = 3;
        local_368 = 0;
        local_378 = &local_350;
        local_370 = 2;
        local_340 = (undefined *)&local_3a8;
        uVar4 = (*(code *)PTR_write_fmt_001fb538)(&local_3a0,&local_388);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(uVar4);
        (*(code *)PTR_set_exit_code_001fb540)(1);
                    /* try { // try from 001591da to 001591de has its CatchHandler @ 0015923a */
        core::ptr::drop_in_place<std::io::error::Error>(local_3a8);
        lVar2 = local_3a8;
        auVar1 = local_398;
      }
    }
    else {
      lVar2 = local_3a8;
      auVar1 = local_398;
      if (*(char *)(local_310 + 0xd5) == '\x0e') {
                    /* try { // try from 00159094 to 001590b4 has its CatchHandler @ 0015923a */
        local_3a0 = (undefined *)(*(code *)PTR_stdout_001fb4c8)();
        (*(code *)PTR_render_version_001fb510)(&local_350,local_2e0);
        local_398._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_388 = &DAT_001f68e0;
        uStack_380 = 2;
        local_368 = 0;
        local_378 = (undefined8 **)local_398;
        local_370 = 1;
                    /* try { // try from 001590f7 to 00159106 has its CatchHandler @ 00159218 */
        local_398._0_8_ = &local_350;
        lVar3 = (*(code *)PTR_write_fmt_001fb518)(&local_3a0,&local_388);
                    /* try { // try from 00159107 to 0015912b has its CatchHandler @ 0015923a */
        core::ptr::drop_in_place<alloc::string::String>(&local_350);
        auVar1._8_8_ = local_398._8_8_;
        auVar1._0_8_ = local_398._0_8_;
        lVar2 = local_3a8;
        goto joined_r0x00159132;
      }
    }
                    /* try { // try from 001591df to 001591e6 has its CatchHandler @ 00159227 */
    local_3a8 = lVar2;
    local_398 = auVar1;
    core::ptr::drop_in_place<clap_builder::error::Error>(local_310);
    if (local_318 == -0x8000000000000000) goto LAB_001591fe;
  }
                    /* try { // try from 001591f1 to 001591fd has its CatchHandler @ 0015925e */
  core::ptr::
  drop_in_place<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error>>
            (&local_318);
LAB_001591fe:
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(local_2e0);
  return;
}