undefined  [16] __rustcall uu_expand::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined local_3a8 [40];
  undefined8 uStack_380;
  long local_378 [2];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  long local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined local_2f0 [24];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  
  (*(code *)PTR_uu_app_00222998)(&local_2d8);
                    /* try { // try from 001669ce to 001669ec has its CatchHandler @ 00166ba8 */
  core::iter::traits::iterator::Iterator::collect(local_3a8,param_1,param_2);
  (*(code *)PTR_expand_shortcuts_002229a0)(local_2f0,local_3a8);
  clap_builder::builder::command::Command::try_get_matches_from(&local_340,&local_2d8,local_2f0);
  if (local_340 == -0x8000000000000000) {
    auVar6 = (*(code *)PTR_from_002229a8)();
  }
  else {
    local_358 = uStack_320;
    uStack_354 = uStack_31c;
    uStack_350 = uStack_318;
    uStack_34c = uStack_314;
    local_368 = uStack_330;
    uStack_364 = uStack_32c;
    uStack_360 = uStack_328;
    uStack_35c = uStack_324;
    local_378[0] = local_340;
                    /* try { // try from 00166a5f to 00166a71 has its CatchHandler @ 00166b99 */
    (*(code *)PTR_new_002229b0)(&local_2d8,local_378);
    uVar4 = uStack_2b4;
    uVar3 = uStack_2b8;
    uVar2 = uStack_2c4;
    uVar1 = uStack_2c8;
    uStack_380 = uStack_2a8;
    uVar5 = uStack_380;
    uStack_380._0_4_ = (undefined4)uStack_2a8;
    uStack_380._4_4_ = (undefined4)((ulong)uStack_2a8 >> 0x20);
    uStack_380 = uVar5;
    if (CONCAT44(uStack_2d4,local_2d8) == -0x8000000000000000) {
      uStack_2b8 = local_2b0;
      uStack_2b4 = uStack_2ac;
      local_2b0 = (undefined4)uStack_380;
      uStack_2ac = uStack_380._4_4_;
      uStack_2c8 = local_2c0;
      uStack_2c4 = uStack_2bc;
      local_2c0 = uVar3;
      uStack_2bc = uVar4;
      local_2d8 = uStack_2d0;
      uStack_2d4 = uStack_2cc;
      uStack_2d0 = uVar1;
      uStack_2cc = uVar2;
                    /* try { // try from 00166acb to 00166ad7 has its CatchHandler @ 00166b8a */
      uVar5 = ::alloc::boxed::Box<T>::new(&local_2d8);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_378);
      auVar6._8_8_ = &PTR_drop_in_place<uu_expand_ParseError>_0021c318;
      auVar6._0_8_ = uVar5;
    }
    else {
      local_2f8 = local_290;
      local_308 = local_2a0;
      uStack_300 = uStack_298;
      local_338 = uStack_2d0;
      uStack_334 = uStack_2cc;
      uStack_330 = uStack_2c8;
      uStack_32c = uStack_2c4;
      uStack_328 = local_2c0;
      uStack_324 = uStack_2bc;
      uStack_320 = uStack_2b8;
      uStack_31c = uStack_2b4;
      uStack_318 = local_2b0;
      uStack_314 = uStack_2ac;
      local_310 = (undefined4)uStack_380;
      uStack_30c = uStack_380._4_4_;
                    /* try { // try from 00166b36 to 00166b40 has its CatchHandler @ 00166b71 */
      auVar6 = (*(code *)PTR_expand_002229b8)(&local_340);
                    /* try { // try from 00166b41 to 00166b50 has its CatchHandler @ 00166b6c */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_378);
      core::ptr::drop_in_place<uu_expand::Options>(&local_340);
    }
  }
  return auVar6;
}