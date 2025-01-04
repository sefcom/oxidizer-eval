void __rustcall uu_whoami::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_370;
  undefined8 local_368;
  undefined8 local_360;
  long local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  long local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  
  (*(code *)PTR_uu_app_0020b718)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_320,&local_2e8,param_1,param_2);
  if (local_320 == -0x8000000000000000) {
    (*(code *)PTR_from_0020b720)();
  }
  else {
    local_328 = local_2f0;
    local_338 = local_300;
    uStack_334 = uStack_2fc;
    uStack_330 = uStack_2f8;
    uStack_32c = uStack_2f4;
    local_348 = local_310;
    uStack_344 = uStack_30c;
    uStack_340 = uStack_308;
    uStack_33c = uStack_304;
    local_358 = local_320;
    local_350 = local_318;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_358);
    (*(code *)PTR_whoami_0020b728)(&local_2e8);
    if (local_2e8 != -0x8000000000000000) {
      local_370 = local_2e8;
      local_368 = local_2e0;
      local_360 = local_2d8;
      uVar1 = uucore::mods::display::println_verbatim(&local_370);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(uVar1);
    }
  }
  return;
}