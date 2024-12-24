undefined  [16] __rustcall uu_unexpand::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_380 [8];
  undefined8 local_378;
  undefined8 local_370;
  undefined local_368 [8];
  undefined8 uStack_360;
  undefined8 local_358;
  long local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  long local_310 [2];
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  
  uucore::Args::collect_ignore(local_380,param_1,param_2);
                    /* try { // try from 001675aa to 001675b7 has its CatchHandler @ 001677ae */
  (*(code *)PTR_uu_app_00222890)(&local_2d8);
                    /* try { // try from 001675c2 to 001675cc has its CatchHandler @ 0016779c */
  (*(code *)PTR_expand_shortcuts_00222898)(local_368,local_378,local_370);
                    /* try { // try from 001675cd to 001675e3 has its CatchHandler @ 0016779a */
  clap_builder::builder::command::Command::try_get_matches_from(&local_348,&local_2d8,local_368);
  if (local_348 == -0x8000000000000000) {
                    /* try { // try from 001675fd to 00167602 has its CatchHandler @ 001677ae */
    auVar2 = (*(code *)PTR_from_002228a0)();
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_380);
  }
  else {
    local_2e0 = local_318;
    local_2f0 = (undefined4)local_328;
    uStack_2ec = local_328._4_4_;
    uStack_2e8 = (undefined4)uStack_320;
    uStack_2e4 = uStack_320._4_4_;
    local_300 = uStack_338;
    uStack_2fc = uStack_334;
    uStack_2f8 = (undefined4)uStack_330;
    uStack_2f4 = uStack_330._4_4_;
    local_310[0] = local_348;
                    /* try { // try from 0016764c to 0016765e has its CatchHandler @ 0016778b */
    (*(code *)PTR_new_002228a8)(&local_2d8,local_310);
    uStack_360 = uStack_2c8;
    uVar1 = uStack_360;
    local_358 = local_2c0;
    uStack_360._0_4_ = (undefined4)uStack_2c8;
    uStack_360._4_4_ = (undefined4)((ulong)uStack_2c8 >> 0x20);
    uStack_360 = uVar1;
    if (CONCAT44(uStack_2d4,local_2d8) == -0x8000000000000000) {
      uStack_2c8 = local_2c0;
      local_2d8 = uStack_2d0;
      uStack_2d4 = uStack_2cc;
      uStack_2d0 = (undefined4)uStack_360;
      uStack_2cc = uStack_360._4_4_;
                    /* try { // try from 001676a0 to 001676ac has its CatchHandler @ 00167772 */
      uVar1 = ::alloc::boxed::Box<T>::new(&local_2d8);
                    /* try { // try from 001676ad to 001676b9 has its CatchHandler @ 0016774a */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_310);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_380);
      auVar2._8_8_ = &PTR_drop_in_place<uu_unexpand_ParseError>_0021c210;
      auVar2._0_8_ = uVar1;
    }
    else {
      local_318 = local_2a8;
      local_328 = local_2b8;
      uStack_320 = uStack_2b0;
      local_340 = uStack_2d0;
      uStack_33c = uStack_2cc;
      uStack_338 = (undefined4)uStack_360;
      uStack_334 = uStack_360._4_4_;
      uStack_330 = local_2c0;
                    /* try { // try from 00167700 to 0016770a has its CatchHandler @ 0016774f */
      auVar2 = (*(code *)PTR_unexpand_002228b0)(&local_348);
                    /* try { // try from 0016770b to 0016771a has its CatchHandler @ 00167745 */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_310);
                    /* try { // try from 0016771b to 00167724 has its CatchHandler @ 00167740 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_380);
      core::ptr::drop_in_place<uu_unexpand::Options>(&local_348);
    }
  }
  return auVar2;
}