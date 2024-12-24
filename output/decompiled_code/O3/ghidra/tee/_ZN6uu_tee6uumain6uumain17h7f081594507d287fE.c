undefined  [16] __rustcall uu_tee::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  long lVar7;
  undefined uVar8;
  undefined4 *puVar9;
  undefined auVar10 [16];
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined local_378 [16];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  puVar9 = &local_2e8;
  (*(code *)PTR_uu_app_00223f38)(puVar9);
  clap_builder::builder::command::Command::try_get_matches_from(&local_340,puVar9,param_1,param_2);
  if (CONCAT44(uStack_33c,local_340) == -0x8000000000000000) {
    auVar10 = (*(code *)PTR_from_00223f40)();
    return auVar10;
  }
  local_358 = local_320;
  uStack_354 = uStack_31c;
  uStack_350 = uStack_318;
  uStack_34c = uStack_314;
  local_368 = local_330;
  uStack_364 = uStack_32c;
  uStack_360 = uStack_328;
  uStack_35c = uStack_324;
                    /* try { // try from 0016915c to 00169211 has its CatchHandler @ 00169432 */
  uVar4 = (*(code *)PTR_get_flag_00223f48)(local_378,"append",6);
  uVar5 = (*(code *)PTR_get_flag_00223f48)(local_378,"ignore-interrupts",0x11);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&local_2e8,local_378);
  clap_builder::parser::error::MatchesError::unwrap(&local_340,&DAT_00114654,4,&local_2e8);
  if (CONCAT44(uStack_33c,local_340) == 0) {
    local_398 = 0;
    uStack_394 = 0;
    uStack_390 = 8;
    uStack_38c = 0;
    local_388 = 0;
  }
  else {
    local_2b8 = local_310;
    uStack_2b4 = uStack_30c;
    uStack_2b0 = uStack_308;
    uStack_2ac = uStack_304;
    local_2c8 = local_320;
    uStack_2c4 = uStack_31c;
    uStack_2c0 = uStack_318;
    uStack_2bc = uStack_314;
    uStack_2d0 = uStack_328;
    uStack_2cc = uStack_324;
    local_2e8 = local_340;
    uStack_2e4 = uStack_33c;
    uStack_2e0 = uStack_338;
    uStack_2dc = uStack_334;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_300,&local_2e8);
    local_398 = local_300;
    uStack_394 = uStack_2fc;
    uStack_390 = uStack_2f8;
    uStack_38c = uStack_2f4;
    local_388 = local_2f0;
  }
                    /* try { // try from 00169247 to 00169331 has its CatchHandler @ 00169425 */
  cVar6 = (*(code *)PTR_get_flag_00223f48)(local_378,"ignore-pipe-errors",0x12);
  if (cVar6 == '\0') {
    cVar6 = (*(code *)PTR_contains_id_00223f50)(local_378,"output-error",0xc);
    uVar8 = 4;
    if (cVar6 == '\0') goto LAB_0016933c;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_2e8,local_378);
    lVar7 = clap_builder::parser::error::MatchesError::unwrap("output-error",0xc,&local_2e8);
    if (lVar7 != 0) {
      uVar1 = *(undefined8 *)(lVar7 + 8);
      puVar9 = *(undefined4 **)(lVar7 + 0x10);
      cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,puVar9,&DAT_0011459c);
      if (cVar6 == '\0') {
        cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,puVar9,"warn-nopipe",0xb);
        uVar8 = 1;
        if (cVar6 == '\0') {
          cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,puVar9,&DAT_00114664,4);
          uVar8 = 2;
          if (cVar6 == '\0') {
            cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (uVar1,puVar9,"exit-nopipe",0xb);
            uVar8 = 3;
            if (cVar6 == '\0') {
                    /* try { // try from 001693ca to 001693e2 has its CatchHandler @ 00169425 */
              (*(code *)PTR_panic_00223f68)
                        ("internal error: entered unreachable codeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG"
                         ,0x28,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0021dad0);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
        }
      }
      else {
        uVar8 = 0;
      }
      goto LAB_0016933c;
    }
  }
  uVar8 = 1;
LAB_0016933c:
  uVar3 = uStack_2d0;
  local_2e8 = local_398;
  uStack_2e4 = uStack_394;
  uStack_2e0 = uStack_390;
  uStack_2dc = uStack_38c;
  local_2d8 = local_388;
  uStack_2d0._3_1_ = SUB41(uVar3,3);
  uStack_2d0._0_3_ = CONCAT12(uVar8,CONCAT11(uVar5,uVar4));
                    /* try { // try from 0016936b to 00169378 has its CatchHandler @ 00169413 */
  lVar7 = (*(code *)PTR_tee_00223f58)(&local_2e8);
  if (lVar7 == 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = puVar9;
    auVar10 = auVar10 << 0x40;
  }
  else {
                    /* try { // try from 00169381 to 0016938b has its CatchHandler @ 001693e5 */
    auVar10 = (*(code *)PTR_from_00223f60)(1);
  }
                    /* try { // try from 00169397 to 001693a3 has its CatchHandler @ 001693fc */
  core::ptr::drop_in_place<uu_tee::Options>(&local_2e8);
                    /* try { // try from 001693a4 to 001693ad has its CatchHandler @ 001693f7 */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_378);
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(lVar7);
  return auVar10;
}