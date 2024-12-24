undefined  [16] __rustcall uu_numfmt::uumain::uumain(ulong param_1,undefined8 param_2)

{
  uint extraout_EAX;
  undefined8 uVar1;
  undefined4 extraout_var;
  long lVar2;
  undefined extraout_DL;
  undefined auVar3 [16];
  undefined auVar4 [16];
  uint local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  long local_450 [2];
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined8 local_420;
  uint local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  long local_3f8;
  uint local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  long local_328 [8];
  long local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined local_2c0 [680];
  
  (*(code *)PTR_uu_app_0023a3f0)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3f8,&local_2e8,param_1,param_2);
  if (local_3f8 == -0x8000000000000000) {
    auVar3 = (*(code *)PTR_from_0023a3f8)();
    return auVar3;
  }
  local_420 = local_3c8;
  local_430 = uStack_3d8;
  uStack_42c = uStack_3d4;
  uStack_428 = uStack_3d0;
  uStack_424 = uStack_3cc;
  local_440 = uStack_3e8;
  uStack_43c = uStack_3e4;
  uStack_438 = uStack_3e0;
  uStack_434 = uStack_3dc;
  local_450[0] = local_3f8;
                    /* try { // try from 00171daa to 00171e0a has its CatchHandler @ 00171fcb */
  (*(code *)PTR_parse_options_0023a400)(&local_2e8,local_450);
  lVar2 = local_2e8;
  if (local_2e8 != 2) {
    local_468 = uStack_2d0;
    uStack_464 = uStack_2cc;
    uStack_460 = uStack_2c8;
    uStack_45c = uStack_2c4;
    local_478 = uStack_2e0;
    uStack_474 = uStack_2dc;
    uStack_470 = local_2d8;
    uStack_46c = uStack_2d4;
    (*(code *)PTR_memcpy_0023a358)(&uStack_3d0,local_2c0,0xa8);
    local_418 = local_478;
    uStack_414 = uStack_474;
    uStack_410 = uStack_470;
    uStack_40c = uStack_46c;
    local_3f0 = local_478;
    uStack_3ec = uStack_474;
    uStack_3e8 = uStack_470;
    uStack_3e4 = uStack_46c;
    uStack_3e0 = local_468;
    uStack_3dc = uStack_464;
    uStack_3d8 = uStack_460;
    uStack_3d4 = uStack_45c;
    local_3f8 = lVar2;
                    /* try { // try from 00171e75 to 00171ef7 has its CatchHandler @ 00171fb9 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2e8,local_450,"NUMBER",6);
    clap_builder::parser::error::MatchesError::unwrap(local_328,"NUMBER",6,&local_2e8);
    if (local_328[0] == 0) {
      (*(code *)PTR_stdin_0023a408)();
      local_478 = extraout_EAX;
      uStack_474 = extraout_var;
      local_2e8 = (*(code *)PTR_lock_0023a410)(&local_478);
      uStack_2e0 = CONCAT31(uStack_2e0._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 00171f0a to 00171f1e has its CatchHandler @ 00171f90 */
      auVar4 = handle_buffer(&local_2e8,&local_3f8);
      param_1 = auVar4._8_8_;
      lVar2 = auVar4._0_8_;
                    /* try { // try from 00171f34 to 00171f38 has its CatchHandler @ 00171fb9 */
      core::ptr::drop_in_place<std::io::stdio::StdinLock>(local_2e8,uStack_2e0);
    }
    else {
      auVar4 = handle_args(local_328,&local_3f8);
      lVar2 = auVar4._0_8_;
    }
    if (lVar2 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1;
      auVar4 = auVar4 << 0x40;
    }
    else {
                    /* try { // try from 00171f3e to 00171f61 has its CatchHandler @ 00171fa9 */
      local_2e8 = (*(code *)PTR_stdout_0023a418)();
      uVar1 = (*(code *)PTR_flush_0023a420)(&local_2e8);
      core::result::Result<T,E>::expect(uVar1);
    }
                    /* try { // try from 00171f66 to 00171f72 has its CatchHandler @ 00171fcb */
    core::ptr::drop_in_place<uu_numfmt::options::NumfmtOptions>(&local_3f8);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_450);
    return auVar4;
  }
  core::ops::function::FnOnce::call_once(&local_478);
  local_418 = local_478;
  uStack_414 = uStack_474;
  uStack_410 = uStack_470;
  uStack_40c = uStack_46c;
  local_408 = local_468;
  uStack_404 = uStack_464;
  uStack_400 = uStack_460;
  uStack_3fc = uStack_45c;
  local_2d8 = local_468;
  uStack_2d4 = uStack_464;
  uStack_2d0 = uStack_460;
  uStack_2cc = uStack_45c;
  uStack_2e0 = uStack_470;
  uStack_2dc = uStack_46c;
  uVar1 = ::alloc::boxed::Box<T>::new(&local_2e8);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_450);
  auVar3._8_8_ = &PTR_drop_in_place<uu_numfmt_errors_NumfmtError>_00233480;
  auVar3._0_8_ = uVar1;
  return auVar3;
}