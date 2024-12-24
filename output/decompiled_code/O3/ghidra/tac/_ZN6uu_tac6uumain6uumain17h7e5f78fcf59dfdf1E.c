undefined  [16] __rustcall uu_tac::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined uVar4;
  undefined uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  undefined auVar10 [16];
  undefined local_3b0 [16];
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
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
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined local_2f8 [8];
  undefined8 local_2f0;
  undefined8 local_2e8;
  
  (*(code *)PTR_uu_app_00406df0)(local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_378,local_2f8,param_1,param_2);
  if (CONCAT44(uStack_374,local_378) == -0x8000000000000000) {
    auVar10 = (*(code *)PTR_from_00406df8)();
    return auVar10;
  }
  local_390 = local_358;
  uStack_38c = uStack_354;
  uStack_388 = uStack_350;
  uStack_384 = uStack_34c;
  local_3a0 = local_368;
  uStack_39c = uStack_364;
  uStack_398 = uStack_360;
  uStack_394 = uStack_35c;
                    /* try { // try from 00254cb1 to 00254e05 has its CatchHandler @ 00254e82 */
  uVar4 = (*(code *)PTR_get_flag_00406e08)
                    (local_3b0,*(undefined8 *)PTR_BEFORE_00406e00,
                     *(undefined8 *)(PTR_BEFORE_00406e00 + 8));
  uVar5 = (*(code *)PTR_get_flag_00406e08)
                    (local_3b0,*(undefined8 *)PTR_REGEX_00406e10,
                     *(undefined8 *)(PTR_REGEX_00406e10 + 8));
  uVar1 = *(undefined8 *)PTR_SEPARATOR_00406e18;
  uVar2 = *(undefined8 *)(PTR_SEPARATOR_00406e18 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (local_2f8,local_3b0,uVar1,uVar2);
  lVar6 = clap_builder::parser::error::MatchesError::unwrap(uVar1,uVar2,local_2f8);
  if (lVar6 == 0) {
    pcVar9 = "\n";
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x10);
    if (lVar8 == 0) {
      pcVar9 = "";
    }
    else {
      pcVar9 = *(char **)(lVar6 + 8);
    }
  }
  uVar1 = *(undefined8 *)PTR_FILE_00406e20;
  uVar2 = *(undefined8 *)(PTR_FILE_00406e20 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (local_2f8,local_3b0,uVar1,uVar2);
  clap_builder::parser::error::MatchesError::unwrap(&local_378,uVar1,uVar2,local_2f8);
  if (CONCAT44(uStack_374,local_378) == 0) {
    puVar7 = (undefined8 *)::alloc::alloc::Global::alloc_impl();
    if (puVar7 == (undefined8 *)0x0) {
                    /* try { // try from 00254e5e to 00254e6d has its CatchHandler @ 00254e82 */
      (*(code *)PTR_handle_alloc_error_00406e30)(8,0x10);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar7 = &DAT_001640a8;
    puVar7[1] = 1;
    ::alloc::slice::hack::into_vec(local_2f8,puVar7,1);
  }
  else {
    local_308 = local_348;
    uStack_304 = uStack_344;
    uStack_300 = uStack_340;
    uStack_2fc = uStack_33c;
    local_318 = local_358;
    uStack_314 = uStack_354;
    uStack_310 = uStack_350;
    uStack_30c = uStack_34c;
    local_328 = local_368;
    uStack_324 = uStack_364;
    uStack_320 = uStack_360;
    uStack_31c = uStack_35c;
    local_338 = local_378;
    uStack_334 = uStack_374;
    uStack_330 = uStack_370;
    uStack_32c = uStack_36c;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (local_2f8,&local_338);
  }
                    /* try { // try from 00254e16 to 00254e28 has its CatchHandler @ 00254e70 */
  auVar10 = (*(code *)PTR_tac_00406e28)
                      (local_2f0,local_2e8,uVar4,uVar5,pcVar9,lVar8 + (ulong)(lVar8 == 0));
                    /* try { // try from 00254e29 to 00254e3b has its CatchHandler @ 00254e82 */
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_2f8);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3b0);
  return auVar10;
}