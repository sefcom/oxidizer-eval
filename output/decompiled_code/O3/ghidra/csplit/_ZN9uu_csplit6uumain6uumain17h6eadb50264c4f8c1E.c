undefined  [16] __rustcall uu_csplit::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  byte extraout_DL;
  undefined **ppuVar7;
  undefined auVar8 [16];
  ulong local_4a0;
  undefined local_498 [8];
  ulong local_490;
  undefined8 local_488;
  undefined local_480 [16];
  int local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  int local_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  int local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  uint uStack_410;
  undefined4 uStack_40c;
  int local_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  int local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  uint uStack_360;
  undefined4 uStack_35c;
  undefined local_350 [104];
  undefined8 local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  int local_2d8;
  undefined4 uStack_2d4;
  
  (*(code *)PTR_uu_app_0041f900)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_448,&local_2e8,param_1,param_2);
  if (CONCAT44(uStack_444,local_448) == -0x8000000000000000) {
    auVar8 = (*(code *)PTR_from_0041f908)();
    return auVar8;
  }
  local_460 = local_428;
  uStack_45c = uStack_424;
  uStack_458 = uStack_420;
  uStack_454 = uStack_41c;
  local_470 = local_438;
  uStack_46c = uStack_434;
  uStack_468 = uStack_430;
  uStack_464 = uStack_42c;
                    /* try { // try from 002613be to 00261494 has its CatchHandler @ 00261768 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2e8,local_480,"filemode",4);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap("filemode",4,&local_2e8);
  if (lVar4 == 0) {
    ppuVar7 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003deca8;
LAB_0026172f:
                    /* try { // try from 0026172f to 00261734 has its CatchHandler @ 00261768 */
    (*(code *)PTR_unwrap_failed_0041f938)(ppuVar7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2e8,local_480,"pattern",7);
  clap_builder::parser::error::MatchesError::unwrap(&local_448,"pattern",7,&local_2e8);
  if (CONCAT44(uStack_444,local_448) == 0) {
    ppuVar7 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003decc0;
    goto LAB_0026172f;
  }
  local_368 = local_418;
  uStack_364 = uStack_414;
  uStack_360 = uStack_410;
  uStack_35c = uStack_40c;
  local_378 = local_428;
  uStack_374 = uStack_424;
  uStack_370 = uStack_420;
  uStack_36c = uStack_41c;
  local_388 = local_438;
  uStack_384 = uStack_434;
  uStack_380 = uStack_430;
  uStack_37c = uStack_42c;
  local_398 = local_448;
  uStack_394 = uStack_444;
  iStack_390 = iStack_440;
  uStack_38c = uStack_43c;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_498,&local_398);
                    /* try { // try from 00261495 to 002614a7 has its CatchHandler @ 00261747 */
  (*(code *)PTR_new_0041f910)(local_350,local_480);
                    /* try { // try from 002614b0 to 00261507 has its CatchHandler @ 0026174c */
  cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                    (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),"-",1);
  if (cVar3 == '\0') {
                    /* try { // try from 00261538 to 002615a7 has its CatchHandler @ 0026174c */
    std::fs::File::open(&local_2e8,lVar4);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_448,&local_2e8,lVar4);
    lVar6 = CONCAT44(uStack_444,local_448);
    if (lVar6 != 0) {
      ppuVar7 = (undefined **)CONCAT44(uStack_43c,iStack_440);
      goto LAB_002616eb;
    }
    local_4a0 = CONCAT44(local_4a0._4_4_,iStack_440);
                    /* try { // try from 002615bf to 002615e6 has its CatchHandler @ 00261739 */
    (*(code *)PTR_metadata_0041f928)(&local_2e8,&local_4a0);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_448,&local_2e8,lVar4);
    if (local_448 == 2) {
      lVar6 = CONCAT44(uStack_43c,iStack_440);
      ppuVar7 = (undefined **)CONCAT44(uStack_434,local_438);
    }
    else {
      if ((uStack_410 & 0xf000) == 0x8000) {
                    /* try { // try from 00261622 to 00261653 has its CatchHandler @ 00261737 */
        std::io::buffered::bufreader::BufReader<R>::with_capacity
                  (&local_2e8,0x2000,local_4a0 & 0xffffffff);
        csplit(&local_448,local_350,local_490,local_488,&local_2e8);
        local_2e8 = CONCAT44(uStack_444,local_448);
        if (local_2e8 == 0xc) goto LAB_0026150f;
        iStack_2e0 = iStack_440;
        uStack_2dc = uStack_43c;
        local_2d8 = local_438;
        uStack_2d4 = uStack_434;
                    /* try { // try from 00261685 to 00261691 has its CatchHandler @ 0026174c */
        lVar6 = ::alloc::boxed::Box<T>::new(&local_2e8);
        goto LAB_002615a8;
      }
                    /* try { // try from 00261697 to 002616d7 has its CatchHandler @ 00261739 */
      (*(code *)PTR_clone_0041f930)(&local_448,lVar4);
      iStack_2e0 = local_448;
      uStack_2dc = uStack_444;
      local_2d8 = iStack_440;
      uStack_2d4 = uStack_43c;
      local_2e8 = 0xb;
      lVar6 = ::alloc::boxed::Box<T>::new(&local_2e8);
      ppuVar7 = &PTR_drop_in_place<uu_csplit_csplit_error_CsplitError>_003ded10;
    }
    core::ptr::drop_in_place<std::fs::File>(local_4a0 & 0xffffffff);
  }
  else {
    local_4a0 = (*(code *)PTR_stdin_0041f918)();
    uVar5 = (*(code *)PTR_lock_0041f920)(&local_4a0);
    csplit(&local_448,local_350,local_490,local_488,uVar5,extraout_DL & 1);
    if (local_448 == 0xc) {
LAB_0026150f:
                    /* try { // try from 0026150f to 0026151b has its CatchHandler @ 00261747 */
      core::ptr::drop_in_place<uu_csplit::CsplitOptions>(local_350);
                    /* try { // try from 0026151c to 00261525 has its CatchHandler @ 00261768 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_498);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_480);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_490;
      return auVar8 << 0x40;
    }
    local_2d8 = local_438;
    uStack_2d4 = uStack_434;
    local_2e8 = CONCAT44(uStack_444,local_448);
    iStack_2e0 = iStack_440;
    uStack_2dc = uStack_43c;
    lVar6 = ::alloc::boxed::Box<T>::new(&local_2e8);
LAB_002615a8:
    ppuVar7 = &PTR_drop_in_place<uu_csplit_csplit_error_CsplitError>_003ded10;
  }
LAB_002616eb:
                    /* try { // try from 002616eb to 002616f7 has its CatchHandler @ 00261747 */
  auVar2._8_8_ = ppuVar7;
  auVar2._0_8_ = lVar6;
  core::ptr::drop_in_place<uu_csplit::CsplitOptions>(local_350);
                    /* try { // try from 002616f8 to 00261701 has its CatchHandler @ 00261768 */
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_498);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_480);
  return auVar2;
}