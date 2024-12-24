undefined  [16] __rustcall uu_wc::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  long local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  long local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined local_300 [32];
  long local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  
  (*(code *)PTR_uu_app_002360f8)(&local_2e0);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_370,&local_2e0,param_1,param_2);
  if (local_370 == -0x8000000000000000) {
    auVar1 = (*(code *)PTR_from_00236100)();
  }
  else {
    local_308 = local_340;
    local_318 = local_350;
    uStack_314 = uStack_34c;
    uStack_310 = uStack_348;
    uStack_30c = uStack_344;
    local_328 = (undefined4)local_360;
    uStack_324 = local_360._4_4_;
    uStack_320 = (undefined4)uStack_358;
    uStack_31c = uStack_358._4_4_;
    local_338 = local_370;
    local_330 = local_368;
                    /* try { // try from 0016dd28 to 0016dd37 has its CatchHandler @ 0016ddf6 */
    (*(code *)PTR_new_00236108)(local_300,&local_338);
                    /* try { // try from 0016dd38 to 0016dd4a has its CatchHandler @ 0016dde7 */
    (*(code *)PTR_new_00236110)(&local_2e0,&local_338);
    auVar1._8_8_ = local_2d0;
    auVar1._0_8_ = local_2d8;
    if (local_2e0 == 3) {
                    /* try { // try from 0016dd69 to 0016dd72 has its CatchHandler @ 0016ddf6 */
      core::ptr::drop_in_place<uu_wc::Settings>(local_300);
    }
    else {
      local_370 = local_2e0;
      local_368 = local_2d8;
      local_360 = local_2d0;
      uStack_358 = local_2c8;
                    /* try { // try from 0016dd91 to 0016dda0 has its CatchHandler @ 0016ddd8 */
      auVar1 = (*(code *)PTR_wc_00236118)(&local_370,local_300);
                    /* try { // try from 0016dda1 to 0016ddb0 has its CatchHandler @ 0016dde7 */
      core::ptr::drop_in_place<uu_wc::Inputs>(&local_370);
                    /* try { // try from 0016ddb1 to 0016ddba has its CatchHandler @ 0016ddf6 */
      core::ptr::drop_in_place<uu_wc::Settings>(local_300);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_338);
  }
  return auVar1;
}