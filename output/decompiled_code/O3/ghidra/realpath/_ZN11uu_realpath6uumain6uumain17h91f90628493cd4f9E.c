undefined  [16] __rustcall uu_realpath::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined auVar14 [16];
  undefined *local_430;
  undefined8 local_428;
  undefined **local_420;
  undefined local_418 [16];
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined *local_3e8;
  undefined *local_3e0;
  undefined8 *local_3d8;
  code *local_3d0;
  undefined4 local_3c8;
  undefined4 local_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 local_3a4;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 local_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined local_360 [8];
  undefined *local_358;
  long local_350;
  undefined local_348 [16];
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
  undefined *local_2f8;
  undefined8 local_2f0;
  undefined **local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  
  (*(code *)PTR_uu_app_00228038)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3a0,&local_2f8,param_1,param_2);
  if (local_3a0 == (undefined8 *)0x8000000000000000) {
    local_2f0 = ::alloc::boxed::Box<T>::new(uStack_398,1);
    ppuVar12 = &PTR_drop_in_place<uucore_mods_error_ClapErrorWrapper>_00222038;
  }
  else {
    local_3b4 = uStack_37c;
    uStack_3b0 = uStack_378;
    uStack_3ac = uStack_374;
    uStack_3a8 = uStack_370;
    local_3a4 = local_36c;
    local_3d8 = local_3a0;
    local_3d0 = uStack_398;
    local_3c8 = (undefined4)local_390;
    uVar13 = *(undefined8 *)PTR_ARG_FILES_00228040;
    uVar11 = *(undefined8 *)(PTR_ARG_FILES_00228040 + 8);
                    /* try { // try from 0016beb4 to 0016bf4a has its CatchHandler @ 0016c311 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,&local_3d8,uVar13,uVar11);
    clap_builder::parser::error::MatchesError::unwrap(&local_3a0,uVar13,uVar11,&local_2f8);
    if (local_3a0 == (undefined8 *)0x0) {
                    /* try { // try from 0016c2fd to 0016c309 has its CatchHandler @ 0016c311 */
      (*(code *)PTR_unwrap_failed_00228088)(&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00221fb8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_308 = uStack_370;
    uStack_304 = local_36c;
    uStack_300 = uStack_368;
    uStack_2fc = uStack_364;
    local_318 = uStack_380;
    uStack_314 = uStack_37c;
    uStack_310 = uStack_378;
    uStack_30c = uStack_374;
    local_328 = (undefined4)local_390;
    uStack_324 = local_390._4_4_;
    uStack_320 = uStack_388;
    uStack_31c = uStack_384;
    local_338 = (undefined4)local_3a0;
    uStack_334 = local_3a0._4_4_;
    uStack_330 = (undefined4)uStack_398;
    uStack_32c = uStack_398._4_4_;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (local_360,&local_338);
                    /* try { // try from 0016bf59 to 0016c026 has its CatchHandler @ 0016c316 */
    cVar3 = (*(code *)PTR_get_flag_00228050)
                      (&local_3d8,*(undefined8 *)PTR_OPT_STRIP_00228048,
                       *(undefined8 *)(PTR_OPT_STRIP_00228048 + 8));
    cVar4 = (*(code *)PTR_get_flag_00228050)
                      (&local_3d8,*(undefined8 *)PTR_OPT_ZERO_00228058,
                       *(undefined8 *)(PTR_OPT_ZERO_00228058 + 8));
    uVar13 = 10;
    if (cVar4 != '\0') {
      uVar13 = 0;
    }
    cVar5 = (*(code *)PTR_get_flag_00228050)
                      (&local_3d8,*(undefined8 *)PTR_OPT_QUIET_00228060,
                       *(undefined8 *)(PTR_OPT_QUIET_00228060 + 8));
    cVar6 = (*(code *)PTR_get_flag_00228050)
                      (&local_3d8,*(undefined8 *)PTR_OPT_LOGICAL_00228068,
                       *(undefined8 *)(PTR_OPT_LOGICAL_00228068 + 8));
    cVar7 = (*(code *)PTR_get_flag_00228050)(&local_3d8,"canonicalize-existing",0x15);
    cVar4 = '\x01';
    if (cVar7 == '\0') {
      cVar4 = (*(code *)PTR_get_flag_00228050)(&local_3d8,"canonicalize-missing",0x14);
      cVar4 = cVar4 * '\x02';
    }
    cVar7 = '\0';
    if (cVar3 == '\0') {
      cVar7 = cVar6 + '\x01';
    }
    (*(code *)PTR_prepare_relative_options_00228070)(&local_2f8,&local_3d8,cVar4,cVar7);
    ppuVar12 = local_2e8;
    if (local_2f8 == (undefined *)0x8000000000000001) {
                    /* try { // try from 0016c051 to 0016c05d has its CatchHandler @ 0016c311 */
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(local_360);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3d8);
    }
    else {
      local_3f8 = local_2d0;
      local_408 = (undefined4)local_2e0;
      uStack_404 = local_2e0._4_4_;
      uStack_400 = (undefined4)uStack_2d8;
      uStack_3fc = uStack_2d8._4_4_;
      local_430 = local_2f8;
      local_428 = local_2f0;
      local_420 = local_2e8;
      local_3e0 = local_358 + local_350 * 0x18;
      local_3e8 = local_358;
      lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_3e8);
      puVar2 = PTR_resolve_path_00228078;
      if (lVar9 != 0) {
        if (cVar5 == '\0') {
          ppuVar12 = &local_3e8;
          do {
            uVar11 = 0;
            if (local_430 != (undefined *)0x8000000000000000) {
              uVar11 = local_428;
            }
            uVar10 = 0;
            if (CONCAT44(uStack_404,local_408) != -0x8000000000000000) {
              uVar10 = CONCAT44(uStack_3fc,uStack_400);
            }
                    /* try { // try from 0016c1f7 to 0016c229 has its CatchHandler @ 0016c331 */
            uVar11 = (*(code *)PTR_resolve_path_00228078)
                               (*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),uVar13,
                                cVar7,cVar4,uVar11,local_420,uVar10,local_3f8);
            auVar14 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                      ::map_err_context(uVar11,lVar9);
            if (auVar14._0_8_ != 0) {
                    /* try { // try from 0016c239 to 0016c2e8 has its CatchHandler @ 0016c31d */
              local_418 = auVar14;
              uVar8 = (**(code **)(auVar14._8_8_ + 0x60))(auVar14._0_8_);
              (*(code *)PTR_set_exit_code_00228080)(uVar8);
              auVar14 = (*(code *)PTR_util_name_00228020)();
              local_3a0 = (undefined8 *)local_348;
              uStack_398 = _<&T_as_core::fmt::Display>::fmt;
              local_390 = local_418;
              uStack_388 = 0x168c60;
              uStack_384 = 0;
              local_2f8 = &DAT_00221fd0;
              local_2f0 = 3;
              uStack_2d8 = 0;
              local_2e8 = (undefined **)&local_3a0;
              local_2e0 = 2;
              local_348 = auVar14;
              (*(code *)PTR__eprint_00227f30)(&local_2f8);
                    /* try { // try from 0016c2f3 to 0016c2f7 has its CatchHandler @ 0016c331 */
              core::ptr::
              drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                        (local_418._0_8_,local_418._8_8_);
            }
            lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                              (ppuVar12);
          } while (lVar9 != 0);
        }
        else {
          ppuVar12 = &local_3e8;
          do {
            uVar11 = 0;
            if (local_430 != (undefined *)0x8000000000000000) {
              uVar11 = local_428;
            }
            uVar10 = 0;
            if (CONCAT44(uStack_404,local_408) != -0x8000000000000000) {
              uVar10 = CONCAT44(uStack_3fc,uStack_400);
            }
                    /* try { // try from 0016c127 to 0016c153 has its CatchHandler @ 0016c31b */
            uVar11 = (*(code *)puVar2)(*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
                                       uVar13,cVar7,cVar4,uVar11,local_420,uVar10,local_3f8);
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(uVar11);
            lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                              (ppuVar12);
          } while (lVar9 != 0);
        }
      }
                    /* try { // try from 0016c164 to 0016c16d has its CatchHandler @ 0016c30c */
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_408);
                    /* try { // try from 0016c16e to 0016c177 has its CatchHandler @ 0016c316 */
      core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&local_430);
                    /* try { // try from 0016c178 to 0016c184 has its CatchHandler @ 0016c311 */
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(local_360);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3d8);
      local_2f0 = 0;
    }
  }
  auVar14._8_8_ = ppuVar12;
  auVar14._0_8_ = local_2f0;
  return auVar14;
}