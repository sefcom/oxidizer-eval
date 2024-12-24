undefined  [16] __rustcall uu_head::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_350;
  int local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined local_310 [16];
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  int local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  (*(code *)PTR_uu_app_00231438)(&local_2d8);
                    /* try { // try from 0016cb6e to 0016cb7b has its CatchHandler @ 0016cce3 */
  arg_iterate(&local_368,param_1,param_2);
  auVar2._8_8_ = local_358;
  auVar2._0_8_ = CONCAT44(uStack_35c,uStack_360);
  if (CONCAT44(uStack_364,local_368) == 0) {
    clap_builder::builder::command::Command::try_get_matches_from
              (&local_348,&local_2d8,CONCAT44(uStack_35c,uStack_360),local_358);
    if (CONCAT44(uStack_344,local_348) == -0x8000000000000000) {
      auVar2 = (*(code *)PTR_from_00231440)();
    }
    else {
      local_2e0 = local_318;
      local_2f0 = local_328;
      uStack_2ec = uStack_324;
      uStack_2e8 = uStack_320;
      uStack_2e4 = uStack_31c;
      local_300 = local_338;
      uStack_2fc = uStack_334;
      uStack_2f8 = uStack_330;
      uStack_2f4 = uStack_32c;
                    /* try { // try from 0016cc0c to 0016cc51 has its CatchHandler @ 0016ccd4 */
      (*(code *)PTR_get_from_00231448)(&local_2d8,local_310);
      if (local_2d8 == 4) {
        local_368 = uStack_2d0;
        uStack_364 = uStack_2cc;
        uStack_360 = uStack_2c8;
        uStack_35c = uStack_2c4;
        local_350 = 1;
        uVar1 = ::alloc::boxed::Box<T>::new(&local_368);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_310);
        auVar2._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0022acb0;
        auVar2._0_8_ = uVar1;
      }
      else {
        local_328 = local_2b8;
        uStack_324 = uStack_2b4;
        uStack_320 = uStack_2b0;
        uStack_31c = uStack_2ac;
        local_338 = uStack_2c8;
        uStack_334 = uStack_2c4;
        uStack_330 = uStack_2c0;
        uStack_32c = uStack_2bc;
        local_348 = local_2d8;
        uStack_344 = uStack_2d4;
        uStack_340 = uStack_2d0;
        uStack_33c = uStack_2cc;
                    /* try { // try from 0016cc8f to 0016cc99 has its CatchHandler @ 0016ccc5 */
        auVar2 = (*(code *)PTR_uu_head_00231450)(&local_348);
                    /* try { // try from 0016cc9a to 0016cca9 has its CatchHandler @ 0016ccd4 */
        core::ptr::drop_in_place<uu_head::HeadOptions>(&local_348);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_310);
      }
    }
  }
  else {
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&local_2d8);
  }
  return auVar2;
}