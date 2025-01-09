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
                    /* try { // try from 00166c1a to 00166c27 has its CatchHandler @ 00166e1e */
  (*(code *)PTR_uu_app_00220d10)(&local_2d8);
                    /* try { // try from 00166c32 to 00166c3c has its CatchHandler @ 00166e0c */
  (*(code *)PTR_expand_shortcuts_00220d18)(local_368,local_378,local_370);
                    /* try { // try from 00166c3d to 00166c53 has its CatchHandler @ 00166e0a */
  clap_builder::builder::command::Command::try_get_matches_from(&local_348,&local_2d8,local_368);
  if (local_348 == -0x8000000000000000) {
                    /* try { // try from 00166c6d to 00166c72 has its CatchHandler @ 00166e1e */
    auVar2 = (*(code *)PTR_from_00220d20)();
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
                    /* try { // try from 00166cbc to 00166cce has its CatchHandler @ 00166dfb */
    (*(code *)PTR_new_00220d28)(&local_2d8,local_310);
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
                    /* try { // try from 00166d10 to 00166d1c has its CatchHandler @ 00166de2 */
      uVar1 = ::alloc::boxed::Box<T>::new(&local_2d8);
                    /* try { // try from 00166d1d to 00166d29 has its CatchHandler @ 00166dba */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_310);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_380);
      auVar2._8_8_ = &PTR_drop_in_place<uu_unexpand_ParseError>_0021a6b0;
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
                    /* try { // try from 00166d70 to 00166d7a has its CatchHandler @ 00166dbf */
      auVar2 = (*(code *)PTR_unexpand_00220d30)(&local_348);
                    /* try { // try from 00166d7b to 00166d8a has its CatchHandler @ 00166db5 */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_310);
                    /* try { // try from 00166d8b to 00166d94 has its CatchHandler @ 00166db0 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_380);
      core::ptr::drop_in_place<uu_unexpand::Options>(&local_348);
    }
  }
  return auVar2;
}