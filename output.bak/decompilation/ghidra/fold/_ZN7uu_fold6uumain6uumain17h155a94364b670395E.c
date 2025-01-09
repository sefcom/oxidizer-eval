undefined  [16] __rustcall uu_fold::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
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
                    /* try { // try from 001648bb to 001648c8 has its CatchHandler @ 00164cca */
  (*(code *)PTR_handle_obsolete_0021e440)(&local_2f8,local_410,local_408);
  local_378 = CONCAT44(uStack_2e4,local_2e8);
  uStack_380 = uStack_2f0;
  uStack_37c = uStack_2ec;
  local_388 = local_2f8;
  local_428 = local_2d0;
  local_438 = local_2e0;
  uStack_434 = uStack_2dc;
  uStack_430 = uStack_2d8;
  uStack_42c = uStack_2d4;
                    /* try { // try from 00164907 to 00164979 has its CatchHandler @ 00164ccf */
  (*(code *)PTR_uu_app_0021e448)(&local_2f8);
  local_358 = local_378;
  local_368 = (undefined4)local_388;
  uStack_364 = local_388._4_4_;
  uStack_360 = uStack_380;
  uStack_35c = uStack_37c;
  clap_builder::builder::command::Command::try_get_matches_from(&local_400,&local_2f8,&local_368);
  if (CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,CONCAT11(uStack_3ff,local_400))) ==
      -0x8000000000000000) {
    auVar9 = (*(code *)PTR_from_0021e450)();
LAB_00164980:
                    /* try { // try from 00164980 to 00164987 has its CatchHandler @ 00164cc8 */
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
                    /* try { // try from 001649c4 to 00164a45 has its CatchHandler @ 00164cd4 */
    uVar3 = (*(code *)PTR_get_flag_0021e458)(local_3c0,&DAT_00114848,5);
    uVar4 = (*(code *)PTR_get_flag_0021e458)(local_3c0,&DAT_0011484d,6);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_2f8,local_3c0,&DAT_00114843,5);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap(&DAT_00114843,5,&local_2f8);
    if (lVar5 == 0) {
      lVar6 = CONCAT44(uStack_434,local_438);
      local_348 = CONCAT44(uStack_42c,uStack_430);
      uStack_340 = local_428;
      ppuVar8 = (undefined **)0x50;
      bVar2 = false;
      if (lVar6 != -0x8000000000000000) goto LAB_00164a86;
    }
    else {
      (*(code *)PTR_clone_0021e460)(&local_2f8,lVar5);
      local_348 = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_340 = CONCAT44(uStack_2e4,local_2e8);
      bVar2 = true;
      lVar6 = local_2f8;
LAB_00164a86:
      uStack_2f0 = (undefined4)local_348;
      uStack_2ec = local_348._4_4_;
      local_2e8 = (undefined4)uStack_340;
      uStack_2e4 = uStack_340._4_4_;
                    /* try { // try from 00164aae to 00164ad9 has its CatchHandler @ 00164cb6 */
      local_2f8 = lVar6;
      (*(code *)PTR_from_str_0021e468)(&local_400,local_348,uStack_340);
      if (local_400 == '\0') {
        ppuVar8 = (undefined **)CONCAT44(uStack_3f4,uStack_3f8);
      }
      else {
        lVar6 = uumain::___closure__
                          (CONCAT44(uStack_2ec,uStack_2f0),CONCAT44(uStack_2e4,local_2e8),uStack_3ff
                          );
        if (lVar6 != 0) {
                    /* try { // try from 00164ae2 to 00164aee has its CatchHandler @ 00164cd4 */
          core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
                    /* try { // try from 00164af2 to 00164afb has its CatchHandler @ 00164ccf */
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                    (local_3c0);
          auVar10._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00217fb8;
          auVar10._0_8_ = lVar6;
          auVar9._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00217fb8;
          auVar9._0_8_ = lVar6;
          if (lVar5 == 0) goto LAB_00164c63;
          goto LAB_00164980;
        }
        ppuVar8 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00217fb8;
      }
                    /* try { // try from 00164b1f to 00164bb8 has its CatchHandler @ 00164cd4 */
      core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,local_3c0,"file",4);
    clap_builder::parser::error::MatchesError::unwrap(&local_400,"file",4,&local_2f8);
    if (CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,CONCAT11(uStack_3ff,local_400))) == 0) {
      puVar7 = (undefined4 *)::alloc::alloc::Global::alloc_impl(0x18);
      if (puVar7 == (undefined4 *)0x0) {
                    /* try { // try from 00164c85 to 00164c94 has its CatchHandler @ 00164cd4 */
        (*(code *)PTR_handle_alloc_error_0021e3f0)(8,0x18);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
                    /* try { // try from 00164bce to 00164bdd has its CatchHandler @ 00164c97 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_2f8);
      local_358 = CONCAT44(uStack_2e4,local_2e8);
      local_368 = (undefined4)local_2f8;
      uStack_364 = local_2f8._4_4_;
      uStack_360 = uStack_2f0;
      uStack_35c = uStack_2ec;
      *(undefined8 *)(puVar7 + 4) = local_358;
      *puVar7 = (undefined4)local_2f8;
      puVar7[1] = local_2f8._4_4_;
      puVar7[2] = uStack_2f0;
      puVar7[3] = uStack_2ec;
      ::alloc::slice::hack::into_vec(&local_2f8,puVar7);
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
                    /* try { // try from 00164c26 to 00164c35 has its CatchHandler @ 00164ca4 */
    auVar10 = (*(code *)PTR_fold_0021e470)
                        (CONCAT44(uStack_2ec,uStack_2f0),CONCAT44(uStack_2e4,local_2e8),uVar3,uVar4,
                         ppuVar8);
                    /* try { // try from 00164c36 to 00164c48 has its CatchHandler @ 00164cd4 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_2f8);
                    /* try { // try from 00164c4c to 00164c55 has its CatchHandler @ 00164ccf */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_3c0);
    if (bVar2) {
                    /* try { // try from 00164c5b to 00164c62 has its CatchHandler @ 00164cc8 */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&local_438);
    }
  }
LAB_00164c63:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_418);
  return auVar10;
}