undefined  [16] __rustcall uu_split::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  int *local_478;
  undefined *local_470;
  int local_468;
  undefined4 uStack_464;
  int iStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  long local_3f8 [2];
  int local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined local_3c0 [16];
  undefined8 local_3b0;
  undefined local_3a8 [16];
  undefined8 local_398;
  long local_390;
  int local_388;
  undefined4 uStack_384;
  int iStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined *local_2e8;
  undefined8 uStack_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  
  handle_obsolete(&local_2e8,param_1,param_2);
  local_408 = local_2d8;
  local_418 = local_2e8;
  uStack_410 = uStack_2e0;
  local_428 = local_2c0;
  local_438 = (undefined4)local_2d0;
  uStack_434 = local_2d0._4_4_;
  uStack_430 = (undefined4)uStack_2c8;
  uStack_42c = uStack_2c8._4_4_;
                    /* try { // try from 00177767 to 001777ce has its CatchHandler @ 00177b31 */
  (*(code *)PTR_uu_app_0024d690)(&local_2e8);
  local_458 = local_408;
  local_468 = (int)local_418;
  uStack_464 = local_418._4_4_;
  iStack_460 = (int)uStack_410;
  uStack_45c = uStack_410._4_4_;
  clap_builder::builder::command::Command::try_get_matches_from(&local_390,&local_2e8,&local_468);
  if (local_390 == -0x8000000000000000) {
    auVar3 = (*(code *)PTR_from_0024d698)();
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_438);
    return auVar3;
  }
  local_3c8 = local_360;
  local_3d8 = uStack_370;
  uStack_3d4 = uStack_36c;
  uStack_3d0 = uStack_368;
  uStack_3cc = uStack_364;
  local_3e8 = iStack_380;
  uStack_3e4 = uStack_37c;
  uStack_3e0 = uStack_378;
  uStack_3dc = uStack_374;
  local_3f8[0] = local_390;
                    /* try { // try from 00177824 to 0017783e has its CatchHandler @ 00177b1d */
  (*(code *)PTR_from_0024d6a0)(&local_390,local_3f8,&local_438);
  if (local_390 != 2) {
    (*(code *)PTR_memcpy_0024d5a8)(&local_2e8,&local_390,0xa8);
                    /* try { // try from 00177982 to 0017798a has its CatchHandler @ 00177ab9 */
    auVar3 = (*(code *)PTR_split_0024d6b0)(&local_2e8);
                    /* try { // try from 00177994 to 001779a0 has its CatchHandler @ 00177ae9 */
    core::ptr::drop_in_place<uu_split::Settings>(&local_2e8);
    goto LAB_00177a7f;
  }
  lVar2 = 0;
  if (CONCAT44(uStack_384,local_388) - 4U < 5) {
    lVar2 = CONCAT44(uStack_384,local_388) + -3;
  }
  local_478 = &local_468;
  if (lVar2 == 0) {
    if (local_388 == 3) goto LAB_00177894;
  }
  else if ((lVar2 == 1) && (iStack_380 == 1)) {
LAB_00177894:
    local_458 = CONCAT44(uStack_374,uStack_378);
    uStack_450 = uStack_370;
    uStack_44c = uStack_36c;
    local_468 = local_388;
    uStack_464 = uStack_384;
    iStack_460 = iStack_380;
    uStack_45c = uStack_37c;
    local_470 = PTR_fmt_0024d6a8;
    local_2e8 = &DAT_001183b0;
    uStack_2e0 = 1;
    uStack_2c8 = 0;
    local_2d0 = 1;
                    /* try { // try from 001778fc to 00177948 has its CatchHandler @ 00177aaa */
    local_2d8 = (undefined *)&local_478;
    core::option::Option<T>::map_or_else(local_3c0,&local_2e8);
    local_2d0 = CONCAT44(local_2d0._4_4_,1);
    local_2d8 = (undefined *)local_3b0;
    uVar1 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 0017794e to 00177957 has its CatchHandler @ 00177ae9 */
    core::ptr::drop_in_place<uu_split::SettingsError>(&local_468);
    auVar3._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00245a58;
    auVar3._0_8_ = uVar1;
    goto LAB_00177a7f;
  }
  local_458 = CONCAT44(uStack_374,uStack_378);
  uStack_450 = uStack_370;
  uStack_44c = uStack_36c;
  local_468 = local_388;
  uStack_464 = uStack_384;
  iStack_460 = iStack_380;
  uStack_45c = uStack_37c;
  local_470 = PTR_fmt_0024d6a8;
  local_2e8 = &DAT_001183b0;
  uStack_2e0 = 1;
  uStack_2c8 = 0;
  local_2d0 = 1;
                    /* try { // try from 00177a1a to 00177a66 has its CatchHandler @ 00177ace */
  local_2d8 = (undefined *)&local_478;
  core::option::Option<T>::map_or_else(local_3a8,&local_2e8);
  local_2d0 = CONCAT44(local_2d0._4_4_,1);
  local_2d8 = (undefined *)local_398;
  uVar1 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 00177a6c to 00177a75 has its CatchHandler @ 00177ae9 */
  core::ptr::drop_in_place<uu_split::SettingsError>(&local_468);
  auVar3._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00245b00;
  auVar3._0_8_ = uVar1;
LAB_00177a7f:
                    /* try { // try from 00177a7f to 00177a8b has its CatchHandler @ 00177ae4 */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3f8);
                    /* try { // try from 00177a8c to 00177a95 has its CatchHandler @ 00177adf */
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_438);
  return auVar3;
}