undefined8 __rustcall uu_shred::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  code *pcVar2;
  char cVar3;
  undefined uVar4;
  byte bVar5;
  undefined uVar6;
  undefined uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined **ppuVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined local_3f8 [8];
  undefined local_3f0 [16];
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined local_3a0 [16];
  undefined *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined **local_348;
  code *local_340;
  undefined *local_338;
  code *local_330;
  undefined8 local_328;
  undefined *puStack_320;
  undefined local_310 [16];
  undefined ***local_300;
  undefined **local_2f8;
  undefined8 uStack_2f0;
  undefined ***local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  
  (*(code *)PTR_uu_app_0023c030)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3e0,&local_2f8,param_1,param_2);
  if (local_3e0 == (undefined *)0x8000000000000000) {
    uVar9 = (*(code *)PTR_from_0023c038)();
    return uVar9;
  }
  local_360 = local_3b0;
  local_370 = (undefined4)local_3c0;
  uStack_36c = local_3c0._4_4_;
  uStack_368 = uStack_3b8;
  uStack_364 = uStack_3b4;
  local_380 = (undefined4)local_3d0;
  uStack_37c = local_3d0._4_4_;
  uStack_378 = (undefined4)uStack_3c8;
  uStack_374 = uStack_3c8._4_4_;
  local_390 = local_3e0;
  local_388 = uStack_3d8;
                    /* try { // try from 001706a6 to 0017082f has its CatchHandler @ 00170c87 */
  cVar3 = (*(code *)PTR_contains_id_0023c040)(&local_390,&DAT_00115708,4);
  if (cVar3 == '\0') {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3e0);
    local_2e8 = local_3d0;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    uVar9 = ::alloc::boxed::Box<T>::new(&local_2f8);
LAB_0017083a:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_390);
    return uVar9;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,&local_390,"iterations",10);
  lVar10 = clap_builder::parser::error::MatchesError::unwrap("iterations",10,&local_2f8);
  if (lVar10 == 0) {
                    /* try { // try from 00170c5d to 00170c84 has its CatchHandler @ 00170c87 */
    (*(code *)PTR_panic_0023c088)("internal error: entered unreachable code",0x28,&DAT_00235270);
    goto LAB_00170c85;
  }
  uVar9 = *(undefined8 *)(lVar10 + 8);
  pppuVar1 = *(undefined ****)(lVar10 + 0x10);
  (*(code *)PTR_from_str_0023c048)(local_3a0,uVar9,pppuVar1);
  if (local_3a0[0] != '\0') {
    local_3e0 = (undefined *)0x0;
    uStack_3c8 = CONCAT71(uStack_3c8._1_7_,1);
    local_340 = (code *)PTR_fmt_0023c050;
    local_2f8 = &PTR_s_invalid_number_of_passes__002352f8;
    uStack_2f0 = 1;
    uStack_2d8 = 0;
    local_2e8 = &local_348;
    uStack_2e0 = 1;
    uStack_3d8 = uVar9;
    local_3d0 = pppuVar1;
    local_348 = &local_3e0;
    core::option::Option<T>::map_or_else(local_310,&local_2f8);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    local_2e8 = local_300;
    uVar9 = ::alloc::boxed::Box<T>::new(&local_2f8);
    goto LAB_0017083a;
  }
  local_350 = local_3a0._8_8_;
                    /* try { // try from 00170869 to 00170aec has its CatchHandler @ 00170c87 */
  cVar3 = (*(code *)PTR_get_flag_0023c058)(&local_390,"u",1);
  uVar11 = 3;
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR_contains_id_0023c040)(&local_390,"remove",6);
    if (cVar3 != '\0') {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_2f8,&local_390,"remove",6);
      lVar10 = clap_builder::parser::error::MatchesError::unwrap("remove",6,&local_2f8);
      if (lVar10 != 0) {
        auVar13 = core::ops::function::FnOnce::call_once
                            (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
        uVar9 = auVar13._8_8_;
        lVar10 = auVar13._0_8_;
        if (lVar10 != 0) {
          cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar10,uVar9,"unlink",6);
          uVar11 = 1;
          if (cVar3 == '\0') {
            cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (lVar10,uVar9,&DAT_001156c0,4);
            uVar11 = 2;
            if (cVar3 == '\0') {
              cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar10,uVar9,"wipesync",8)
              ;
              uVar11 = 3;
              if (cVar3 == '\0') goto LAB_0017095c;
            }
          }
          goto LAB_001709ac;
        }
      }
LAB_0017095c:
      local_2f8 = &PTR_s_internal_error__entered_unreacha_00235288;
      uStack_2f0 = 1;
      local_2e8 = (undefined ***)local_3f8;
      uStack_2e0 = 0;
      uStack_2d8 = 0;
      (*(code *)PTR_panic_fmt_0023c060)(&local_2f8,&DAT_00235298);
      goto LAB_00170c85;
    }
    uVar11 = 0;
  }
LAB_001709ac:
  uVar4 = (*(code *)PTR_get_flag_0023c058)(&local_390,"force",5);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,&local_390,&DAT_0011570c,4);
  lVar10 = clap_builder::parser::error::MatchesError::unwrap(&DAT_0011570c,4,&local_2f8);
  ppuVar12 = (undefined **)0x8000000000000000;
  if (lVar10 != 0) {
    (*(code *)PTR_clone_0023c068)(&local_2f8,lVar10);
    local_328 = uStack_2f0;
    puStack_320 = (undefined *)local_2e8;
    ppuVar12 = local_2f8;
  }
  uStack_2f0 = local_328;
  local_2e8 = (undefined ***)puStack_320;
  local_2f8 = ppuVar12;
  auVar13 = (*(code *)PTR_get_size_0023c070)(&local_2f8);
  local_358 = auVar13._8_8_;
  bVar5 = (*(code *)PTR_get_flag_0023c058)(&local_390,"exact",5);
  uVar6 = (*(code *)PTR_get_flag_0023c058)(&local_390,&DAT_001156cc,4);
  uVar7 = (*(code *)PTR_get_flag_0023c058)(&local_390,"verbose",7);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2f8,&local_390,&DAT_00115708,4);
  clap_builder::parser::error::MatchesError::unwrap(&local_3e0,&DAT_00115708,4,&local_2f8);
  if (local_3e0 != (undefined *)0x0) {
    local_2c8 = local_3b0;
    uStack_2c0 = uStack_3a8;
    uStack_2d8 = local_3c0;
    local_2e8 = local_3d0;
    uStack_2e0 = uStack_3c8;
    while( true ) {
                    /* try { // try from 00170b50 to 00170b93 has its CatchHandler @ 00170c9d */
      lVar10 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
               ::next(&local_2f8);
      if (lVar10 == 0) break;
      auVar14 = (*(code *)PTR_wipe_file_0023c078)
                          (*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),local_350,
                           uVar11,auVar13._0_8_,local_358,bVar5 | auVar13._0_8_ == 1,uVar6,uVar7,
                           uVar4);
      if (auVar14._0_8_ != 0) {
                    /* try { // try from 00170ba3 to 00170c37 has its CatchHandler @ 00170c89 */
        local_3f0 = auVar14;
        uVar8 = (**(code **)(auVar14._8_8_ + 0x60))(auVar14._0_8_);
        (*(code *)PTR_set_exit_code_0023c080)(uVar8);
        auVar14 = (*(code *)PTR_util_name_0023c010)();
        local_348 = (undefined **)local_3a0;
        local_340 = _<&T_as_core::fmt::Display>::fmt;
        local_338 = local_3f0;
        local_330 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_3e0 = &DAT_002352c8;
        uStack_3d8 = 3;
        local_3c0 = 0;
        local_3d0 = &local_348;
        uStack_3c8 = 2;
        local_3a0 = auVar14;
        (*(code *)PTR__eprint_0023c018)(&local_3e0);
                    /* try { // try from 00170c42 to 00170c46 has its CatchHandler @ 00170c9d */
        core::ptr::drop_in_place<alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  (local_3f0._0_8_,local_3f0._8_8_);
      }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_390);
    return 0;
  }
  (*(code *)PTR_unwrap_failed_0023c090)(&DAT_002352b0);
LAB_00170c85:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}