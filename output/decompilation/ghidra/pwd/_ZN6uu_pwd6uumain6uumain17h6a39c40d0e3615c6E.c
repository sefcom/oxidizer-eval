long __rustcall uu_pwd::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_370;
  long local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  long local_338;
  long local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  long local_300;
  long local_2f8;
  long local_2e8 [89];
  
  (*(code *)PTR_uu_app_0020d590)(local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_338,local_2e8,param_1,param_2);
  if (local_338 == -0x8000000000000000) {
    lVar2 = (*(code *)PTR_from_0020d598)();
    return lVar2;
  }
  local_340 = local_308;
  local_350 = local_318;
  uStack_34c = uStack_314;
  uStack_348 = uStack_310;
  uStack_344 = uStack_30c;
  local_360 = local_328;
  uStack_35c = uStack_324;
  uStack_358 = uStack_320;
  uStack_354 = uStack_31c;
  local_370 = local_338;
  local_368 = local_330;
                    /* try { // try from 00160224 to 001602f6 has its CatchHandler @ 0016032f */
  cVar1 = (*(code *)PTR_get_flag_0020d5a0)(&local_370,&DAT_00112990,8);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_get_flag_0020d5a0)(&local_370,"logical",7);
    if (cVar1 == '\0') {
      std::env::var(local_2e8);
      if (local_2e8[0] != 0) {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                  (local_2e8);
        goto LAB_0016027f;
      }
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                (local_2e8);
    }
    (*(code *)PTR_logical_path_0020d5b0)(local_2e8);
  }
  else {
LAB_0016027f:
    (*(code *)PTR_physical_path_0020d5a8)(local_2e8);
  }
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(&local_338,local_2e8);
  lVar2 = local_330;
  if (local_338 != -0x8000000000000000) {
    local_300 = local_338;
    local_2f8 = local_330;
    uVar3 = uucore::mods::display::println_verbatim(&local_300);
    lVar2 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
            ::map_err_context(uVar3);
    if (lVar2 == 0) {
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_370);
      return 0;
    }
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_370);
  return lVar2;
}