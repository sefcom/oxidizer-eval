undefined  [16] __rustcall uu_fold::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined8 local_428;
  undefined local_418 [8];
  undefined8 local_410;
  undefined8 local_408;
  char local_400;
  undefined uStack_3ff;
  undefined2 uStack_3fe;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined local_3c0 [16];
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined8 local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined local_338 [4];
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
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  
  uucore::Args::collect_lossy(local_418,param_1,param_2);
                    /* try { // try from 0016508b to 00165098 has its CatchHandler @ 00165479 */
  (*(code *)PTR_handle_obsolete_0021f740)(&local_2f8,local_410,local_408);
  local_378 = CONCAT44(uStack_2e4,local_2e8);
  uStack_380 = uStack_2f0;
  uStack_37c = uStack_2ec;
  local_388 = local_2f8;
  local_428 = local_2d0;
  local_438 = local_2e0;
  uStack_434 = uStack_2dc;
  uStack_430 = uStack_2d8;
  uStack_42c = uStack_2d4;
                    /* try { // try from 001650d7 to 00165149 has its CatchHandler @ 0016547e */
  (*(code *)PTR_uu_app_0021f748)(&local_2f8);
  local_358 = local_378;
  local_368 = (undefined4)local_388;
  uStack_364 = local_388._4_4_;
  uStack_360 = uStack_380;
  uStack_35c = uStack_37c;
  clap_builder::builder::command::Command::try_get_matches_from(&local_400,&local_2f8,&local_368);
  if (CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,CONCAT11(uStack_3ff,local_400))) ==
      -0x8000000000000000) {
    auVar9 = (*(code *)PTR_from_0021f750)();
LAB_001652bf:
                    /* try { // try from 001652bf to 001652c6 has its CatchHandler @ 00165477 */
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_438);
    auVar10 = auVar9;
  }
  else {
    local_3a0 = local_3e0;
    uStack_39c = uStack_3dc;
    uStack_398 = uStack_3d8;
    uStack_394 = uStack_3d4;
    local_3b0 = local_3f0;
    uStack_3ac = uStack_3ec;
    uStack_3a8 = uStack_3e8;
    uStack_3a4 = uStack_3e4;
                    /* try { // try from 0016518c to 00165201 has its CatchHandler @ 00165483 */
    uVar3 = (*(code *)PTR_get_flag_0021f758)(local_3c0,"bytes",5);
    uVar4 = (*(code *)PTR_get_flag_0021f758)(local_3c0,"spaces",6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_2f8,local_3c0);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap
                      ("widthillegal width value (): ",5,&local_2f8);
    if (lVar5 == 0) {
      lVar6 = CONCAT44(uStack_434,local_438);
      local_348 = CONCAT44(uStack_42c,uStack_430);
      uStack_340 = local_428;
      uVar7 = 0x50;
      bVar2 = false;
      if (lVar6 != -0x8000000000000000) goto LAB_00165242;
    }
    else {
      (*(code *)PTR_clone_0021f760)(&local_2f8,lVar5);
      local_348 = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_340 = CONCAT44(uStack_2e4,local_2e8);
      bVar2 = true;
      lVar6 = local_2f8;
LAB_00165242:
      uStack_2f0 = (undefined4)local_348;
      uStack_2ec = local_348._4_4_;
      local_2e8 = (undefined4)uStack_340;
      uStack_2e4 = uStack_340._4_4_;
                    /* try { // try from 0016526a to 00165295 has its CatchHandler @ 00165465 */
      local_2f8 = lVar6;
      (*(code *)PTR_from_str_0021f768)(&local_400,local_348,uStack_340);
      if (local_400 != '\0') {
        uVar7 = uumain::___closure__
                          (CONCAT44(uStack_2ec,uStack_2f0),CONCAT44(uStack_2e4,local_2e8),uStack_3ff
                          );
                    /* try { // try from 00165296 to 001652a5 has its CatchHandler @ 00165483 */
        core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
                    /* try { // try from 001652a9 to 001652b2 has its CatchHandler @ 0016547e */
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3c0);
        auVar10._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00219288;
        auVar10._0_8_ = uVar7;
        auVar9._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00219288;
        auVar9._0_8_ = uVar7;
        if (lVar5 == 0) goto LAB_001652c7;
        goto LAB_001652bf;
      }
      uVar7 = CONCAT44(uStack_3f4,uStack_3f8);
                    /* try { // try from 001652ee to 0016537b has its CatchHandler @ 00165483 */
      core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&local_2f8,local_3c0);
    clap_builder::parser::error::MatchesError::unwrap(&local_400,&DAT_00114214,4,&local_2f8);
    if (CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,CONCAT11(uStack_3ff,local_400))) == 0) {
      puVar8 = (undefined4 *)::alloc::alloc::Global::alloc_impl(0x18);
      if (puVar8 == (undefined4 *)0x0) {
                    /* try { // try from 00165434 to 00165443 has its CatchHandler @ 00165483 */
        (*(code *)PTR_handle_alloc_error_0021f6f0)(8,0x18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
                    /* try { // try from 00165391 to 001653a0 has its CatchHandler @ 00165446 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_2f8);
      local_358 = CONCAT44(uStack_2e4,local_2e8);
      local_368 = (undefined4)local_2f8;
      uStack_364 = local_2f8._4_4_;
      uStack_360 = uStack_2f0;
      uStack_35c = uStack_2ec;
      *(undefined8 *)(puVar8 + 4) = local_358;
      *puVar8 = (undefined4)local_2f8;
      puVar8[1] = local_2f8._4_4_;
      puVar8[2] = uStack_2f0;
      puVar8[3] = uStack_2ec;
                    /* try { // try from 001653c9 to 001653dd has its CatchHandler @ 00165483 */
      ::alloc::slice::hack::into_vec(&local_2f8,puVar8,1);
    }
    else {
      local_308 = local_3d0;
      uStack_304 = uStack_3cc;
      uStack_300 = uStack_3c8;
      uStack_2fc = uStack_3c4;
      local_318 = local_3e0;
      uStack_314 = uStack_3dc;
      uStack_310 = uStack_3d8;
      uStack_30c = uStack_3d4;
      local_328 = local_3f0;
      uStack_324 = uStack_3ec;
      uStack_320 = uStack_3e8;
      uStack_31c = uStack_3e4;
      uStack_334 = uStack_3fc;
      uStack_330 = uStack_3f8;
      uStack_32c = uStack_3f4;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_2f8,local_338);
    }
                    /* try { // try from 001653ee to 001653fd has its CatchHandler @ 00165453 */
    auVar10 = (*(code *)PTR_fold_0021f770)
                        (CONCAT44(uStack_2ec,uStack_2f0),CONCAT44(uStack_2e4,local_2e8),uVar3,uVar4,
                         uVar7);
                    /* try { // try from 001653fe to 00165410 has its CatchHandler @ 00165483 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_2f8);
                    /* try { // try from 00165414 to 0016541d has its CatchHandler @ 0016547e */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3c0);
    if (bVar2) {
                    /* try { // try from 00165427 to 0016542e has its CatchHandler @ 00165477 */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_438);
    }
  }
LAB_001652c7:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_418);
  return auVar10;
}