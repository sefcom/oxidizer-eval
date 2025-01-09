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
  undefined8 local_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 uStack_380;
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
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
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
  (*(code *)PTR_uu_app_002235e8)(puVar9);
  clap_builder::builder::command::Command::try_get_matches_from(&local_340,puVar9,param_1,param_2);
  if (CONCAT44(uStack_33c,local_340) == -0x8000000000000000) {
    auVar10 = (*(code *)PTR_from_002235f0)();
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
                    /* try { // try from 00166a6c to 00166b21 has its CatchHandler @ 00166d47 */
  uVar4 = (*(code *)PTR_get_flag_002235f8)(local_378,&DAT_0010b3b3,6);
  uVar5 = (*(code *)PTR_get_flag_002235f8)(local_378,&DAT_0010b3b9,0x11);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&local_2e8,local_378);
  clap_builder::parser::error::MatchesError::unwrap(&local_340,"file",4,&local_2e8);
  if (CONCAT44(uStack_33c,local_340) == 0) {
    local_390 = 0;
    uStack_388 = 8;
    uStack_384 = 0;
    uStack_380 = 0;
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
    uStack_388 = local_2f8;
    uStack_384 = uStack_2f4;
    uStack_380 = CONCAT44(uStack_2ec,uStack_2f0);
    local_390 = local_300;
  }
                    /* try { // try from 00166b59 to 00166c43 has its CatchHandler @ 00166d38 */
  cVar6 = (*(code *)PTR_get_flag_002235f8)(local_378,&DAT_0010b3ca,0x12);
  if (cVar6 == '\0') {
    cVar6 = (*(code *)PTR_contains_id_00223600)(local_378,&DAT_0010b391,0xc);
    uVar8 = 4;
    if (cVar6 == '\0') goto LAB_00166c4e;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&local_2e8,local_378);
    lVar7 = clap_builder::parser::error::MatchesError::unwrap(&DAT_0010b391,0xc,&local_2e8);
    if (lVar7 != 0) {
      uVar1 = *(undefined8 *)(lVar7 + 8);
      puVar9 = *(undefined4 **)(lVar7 + 0x10);
      cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,puVar9,&DAT_0010aaf4);
      if (cVar6 == '\0') {
        cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar1,puVar9,&DAT_0010b39d,0xb);
        uVar8 = 1;
        if (cVar6 == '\0') {
          cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (uVar1,puVar9,
                             "exitERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG"
                             ,4);
          uVar8 = 2;
          if (cVar6 == '\0') {
            cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (uVar1,puVar9,&DAT_0010b3a8,0xb);
            uVar8 = 3;
            if (cVar6 == '\0') {
                    /* try { // try from 00166cdd to 00166cf5 has its CatchHandler @ 00166d38 */
              (*(code *)PTR_panic_00223618)
                        ("internal error: entered unreachable codeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE"
                         ,0x28,&PTR_DAT_0021d090);
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
      goto LAB_00166c4e;
    }
  }
  uVar8 = 1;
LAB_00166c4e:
  uVar3 = uStack_2d0;
  local_2e8 = (undefined4)local_390;
  uStack_2e4 = local_390._4_4_;
  uStack_2e0 = uStack_388;
  uStack_2dc = uStack_384;
  local_2d8 = uStack_380;
  uStack_2d0._3_1_ = SUB41(uVar3,3);
  uStack_2d0._0_3_ = CONCAT12(uVar8,CONCAT11(uVar5,uVar4));
                    /* try { // try from 00166c7e to 00166c8b has its CatchHandler @ 00166d26 */
  lVar7 = (*(code *)PTR_tee_00223608)(&local_2e8);
  if (lVar7 == 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = puVar9;
    auVar10 = auVar10 << 0x40;
  }
  else {
                    /* try { // try from 00166c94 to 00166c9e has its CatchHandler @ 00166cf8 */
    auVar10 = (*(code *)PTR_from_00223610)(1);
  }
                    /* try { // try from 00166caa to 00166cb6 has its CatchHandler @ 00166d0f */
  core::ptr::drop_in_place<uu_tee::Options>(&local_2e8);
                    /* try { // try from 00166cb7 to 00166cc0 has its CatchHandler @ 00166d0a */
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_378);
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(lVar7);
  return auVar10;
}