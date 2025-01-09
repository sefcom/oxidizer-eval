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
  
  (*(code *)PTR_uu_app_002350c8)(&local_2e0);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_370,&local_2e0,param_1,param_2);
  if (local_370 == -0x8000000000000000) {
    auVar1 = (*(code *)PTR_from_002350d0)();
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
                    /* try { // try from 0016d918 to 0016d927 has its CatchHandler @ 0016d9e6 */
    (*(code *)PTR_new_002350d8)(local_300,&local_338);
                    /* try { // try from 0016d928 to 0016d93a has its CatchHandler @ 0016d9d7 */
    (*(code *)PTR_new_002350e0)(&local_2e0,&local_338);
    auVar1._8_8_ = local_2d0;
    auVar1._0_8_ = local_2d8;
    if (local_2e0 == 3) {
                    /* try { // try from 0016d959 to 0016d962 has its CatchHandler @ 0016d9e6 */
      core::ptr::drop_in_place<uu_wc::Settings>(local_300);
    }
    else {
      local_370 = local_2e0;
      local_368 = local_2d8;
      local_360 = local_2d0;
      uStack_358 = local_2c8;
                    /* try { // try from 0016d981 to 0016d990 has its CatchHandler @ 0016d9c8 */
      auVar1 = (*(code *)PTR_wc_002350e8)(&local_370,local_300);
                    /* try { // try from 0016d991 to 0016d9a0 has its CatchHandler @ 0016d9d7 */
      core::ptr::drop_in_place<uu_wc::Inputs>(&local_370);
                    /* try { // try from 0016d9a1 to 0016d9aa has its CatchHandler @ 0016d9e6 */
      core::ptr::drop_in_place<uu_wc::Settings>(local_300);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_338);
  }
  return auVar1;
}