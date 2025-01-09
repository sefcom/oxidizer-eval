/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16] __rustcall uu_tsort::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined auVar3 [16];
  undefined *puVar4;
  char cVar5;
  char cVar6;
  undefined uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined auVar12 [16];
  undefined local_4fc [4];
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  long *local_4e8;
  code *pcStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  long local_4b8;
  long local_4b0;
  undefined local_4a8 [16];
  undefined8 local_498;
  undefined local_488 [16];
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  long local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 local_430;
  undefined8 local_428;
  code *local_420;
  code *local_418;
  long local_410;
  long local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined local_3f0;
  undefined7 uStack_3ef;
  undefined *local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined local_3c8 [16];
  long local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  long *local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined local_350 [16];
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  long *local_328;
  code *pcStack_320;
  undefined8 local_318;
  code *pcStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined2 local_2f8;
  undefined local_2f0 [640];
  undefined8 local_70;
  undefined8 local_68;
  undefined local_60 [40];
  undefined2 local_38;
  
  (*(code *)PTR_uu_app_00225088)(&local_338);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_460,&local_338,param_1,param_2);
  if (local_460 == -0x8000000000000000) {
    auVar12 = (*(code *)PTR_from_00225090)();
    return auVar12;
  }
  local_388 = local_430;
  local_398 = local_440;
  uStack_394 = uStack_43c;
  uStack_390 = uStack_438;
  uStack_38c = uStack_434;
  local_3a8 = local_450;
  uStack_3a4 = uStack_44c;
  uStack_3a0 = uStack_448;
  uStack_39c = uStack_444;
  local_3b8 = local_460;
  local_3b0 = local_458;
                    /* try { // try from 0016734e to 00167387 has its CatchHandler @ 00167daf */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_338,&local_3b8,&DAT_001144ec,4);
  local_4b0 = clap_builder::parser::error::MatchesError::unwrap(&DAT_001144ec,4,&local_338);
  if (local_4b0 == 0) {
                    /* try { // try from 00167cc9 to 00167ce1 has its CatchHandler @ 00167daf */
    (*(code *)PTR_expect_failed_002250d0)(&DAT_00114d45,0x19,&PTR_DAT_0021e828);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* try { // try from 001673a1 to 001673f5 has its CatchHandler @ 00167db4 */
  cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                    (*(undefined8 *)(local_4b0 + 8),*(undefined8 *)(local_4b0 + 0x10),&DAT_00114dbb,
                     1);
  if (cVar5 == '\0') {
    uVar9 = *(undefined8 *)(local_4b0 + 8);
    uVar1 = *(undefined8 *)(local_4b0 + 0x10);
                    /* try { // try from 0016745c to 00167557 has its CatchHandler @ 00167db4 */
    cVar6 = (*(code *)PTR_is_dir_002250a8)(uVar9,uVar1);
    if (cVar6 != '\0') {
      local_4f8 = &local_4b0;
      uStack_4f0 = _<&T_as_core::fmt::Display>::fmt;
      local_338 = &DAT_0021e788;
      uStack_330 = 2;
      local_318 = 0;
      local_328 = &local_4f8;
      pcStack_320 = (code *)0x1;
      core::option::Option<T>::map_or_else(&local_380,&local_338);
      pcStack_320 = (code *)CONCAT44(pcStack_320._4_4_,1);
      local_338 = (undefined *)CONCAT44(uStack_37c,local_380);
      uStack_330 = CONCAT44(uStack_374,uStack_378);
      local_328 = local_370;
      uVar9 = ::alloc::boxed::Box<T>::new(&local_338);
      auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0021e8d0;
      auVar12._0_8_ = uVar9;
      goto LAB_00167816;
    }
    std::fs::File::open(&local_338,uVar9,uVar1);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_4f8,&local_338,local_4b0);
    auVar12._8_8_ = uStack_4f0;
    auVar12._0_8_ = local_4f8;
    if (local_4f8 != (long *)0x0) goto LAB_00167816;
    local_4fc = (undefined  [4])(undefined4)uStack_4f0;
    ppuVar10 = &PTR_drop_in_place<std_fs_File>_0021e840;
    puVar11 = (undefined8 *)local_4fc;
  }
  else {
    local_428 = (*(code *)PTR_stdin_00225098)();
    ppuVar10 = (undefined **)&DAT_0021e940;
    puVar11 = &local_428;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_460,0x2000,puVar11,ppuVar10);
  local_478 = 0;
  local_470 = 1;
  local_468 = 0;
                    /* try { // try from 0016741a to 00167440 has its CatchHandler @ 00167daa */
  auVar12 = _<std::io::buffered::bufreader::BufReader<R>as_std::io::Read>::read_to_string
                      (&local_460,&local_478);
  if (auVar12._0_8_ == 0) {
                    /* try { // try from 00167570 to 00167589 has its CatchHandler @ 00167daa */
    std::thread::local::LocalKey<T>::try_with(&local_338);
    local_3c8 = core::result::Result<T,E>::expect(&local_338);
    uVar9 = local_468;
    local_3e8 = PTR_DAT_0021e9b0;
    uStack_3e0 = _UNK_0021e9b8;
    local_3d8 = _DAT_0021e9c0;
    uStack_3d4 = _UNK_0021e9c4;
    uStack_3d0 = _UNK_0021e9c8;
    uStack_3cc = _UNK_0021e9cc;
                    /* try { // try from 001675c8 to 001675d4 has its CatchHandler @ 00167d2c */
    _<char_as_core::str::pattern::Pattern>::into_searcher(&local_4f8,local_470,local_468);
    puVar4 = PTR_add_edge_002250b0;
    local_308 = local_4d8;
    uStack_300 = uStack_4d0;
    local_318 = local_4e8;
    pcStack_310 = pcStack_4e0;
    local_328 = local_4f8;
    pcStack_320 = uStack_4f0;
    local_338 = (undefined *)0x0;
    uStack_330 = uVar9;
    local_2f8 = 0;
    do {
                    /* try { // try from 00167636 to 001676a2 has its CatchHandler @ 00167d3c */
      lVar8 = core::str::iter::SplitInternal<P>::next_inclusive(&local_338);
      if (lVar8 == 0) {
LAB_00167861:
        (*(code *)PTR_run_tsort_002250c0)(&local_408,&local_3e8);
        if (local_408 == 0) {
          local_498 = CONCAT71(uStack_3ef,local_3f0);
          local_4a8._12_4_ = uStack_3f4;
          local_4a8._8_4_ = uStack_3f8;
                    /* try { // try from 00167bc1 to 00167bda has its CatchHandler @ 00167d02 */
          ::alloc::str::join_generic_copy(&local_338,local_4a8._8_8_,local_498,&DAT_00114ca2,1);
          local_4e8 = local_328;
          local_4f8._0_4_ = SUB84(local_338,0);
          local_4f8._4_4_ = local_338._4_4_;
          uStack_4f0._0_4_ = (undefined4)uStack_330;
          uStack_4f0._4_4_ = uStack_330._4_4_;
          local_4c8 = &local_4f8;
          uStack_4c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_338 = &DAT_0021e730;
          uStack_330 = 2;
          local_318 = 0;
          local_328 = &local_4c8;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 00167c4b to 00167c58 has its CatchHandler @ 00167ce4 */
          (*(code *)PTR__print_002250c8)(&local_338);
                    /* try { // try from 00167c59 to 00167c62 has its CatchHandler @ 00167d02 */
          core::ptr::drop_in_place<alloc::string::String>(&local_4f8);
                    /* try { // try from 00167c63 to 00167c6c has its CatchHandler @ 00167d1b */
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_4a8);
          uVar9 = 0;
        }
        else {
          local_4b8 = CONCAT71(uStack_3ef,local_3f0);
          local_4c8 = (undefined8 *)CONCAT44(uStack_3fc,local_400);
          uStack_4c0 = (code *)CONCAT44(uStack_3f4,uStack_3f8);
                    /* try { // try from 0016789f to 0016792a has its CatchHandler @ 00167d20 */
          local_4a8 = (*(code *)PTR_util_name_00225068)();
          uStack_4f0 = _<&T_as_core::fmt::Display>::fmt;
          local_4e8 = &local_4b0;
          pcStack_4e0 = _<&T_as_core::fmt::Display>::fmt;
          local_338 = &DAT_0021e7c8;
          uStack_330 = 3;
          local_318 = 0;
          local_328 = &local_4f8;
          pcStack_320 = (code *)0x2;
          local_4f8 = (long *)local_4a8;
          core::option::Option<T>::map_or_else(local_350,&local_338);
          local_498 = local_340;
          local_418 = uStack_4c0 + local_4b8 * 0x10;
          local_420 = uStack_4c0;
          lVar8 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_420);
          if (lVar8 != 0) {
            do {
              local_410 = lVar8;
                    /* try { // try from 001679a8 to 00167a34 has its CatchHandler @ 00167d44 */
              auVar12 = (*(code *)PTR_util_name_00225068)();
              local_4f8 = (long *)local_488;
              uStack_4f0 = _<&T_as_core::fmt::Display>::fmt;
              local_4e8 = &local_410;
              pcStack_4e0 = _<&T_as_core::fmt::Display>::fmt;
              local_338 = &DAT_0021e7f8;
              uStack_330 = 3;
              local_318 = 0;
              local_328 = &local_4f8;
              pcStack_320 = (code *)0x2;
              local_488 = auVar12;
              uVar7 = _<&mut_W_as_core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt
                                (local_4a8,&local_338);
              core::result::Result<T,E>::unwrap(uVar7);
              lVar8 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                (&local_420);
            } while (lVar8 != 0);
          }
          uStack_4f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_338 = &DAT_00114af0;
          uStack_330 = 1;
          local_318 = 0;
          local_328 = &local_4f8;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 00167a97 to 00167ac8 has its CatchHandler @ 00167d25 */
          local_4f8 = (long *)local_4a8;
          (*(code *)PTR__eprint_00225070)(&local_338);
          ::alloc::str::join_generic_copy(&local_338,uStack_4c0,local_4b8,&DAT_00114ca2,1);
          local_4e8 = local_328;
          local_4f8._0_4_ = SUB84(local_338,0);
          local_4f8._4_4_ = local_338._4_4_;
          uStack_4f0._0_4_ = (undefined4)uStack_330;
          uStack_4f0._4_4_ = uStack_330._4_4_;
          local_488._0_8_ = &local_4f8;
          local_488._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_338 = &DAT_0021e730;
          uStack_330 = 2;
          local_318 = 0;
          local_328 = (long *)local_488;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 00167b3b to 00167b48 has its CatchHandler @ 00167cf3 */
          (*(code *)PTR__print_002250c8)(&local_338);
                    /* try { // try from 00167b49 to 00167b8e has its CatchHandler @ 00167d25 */
          core::ptr::drop_in_place<alloc::string::String>(&local_4f8);
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_4f8);
          local_328 = local_4e8;
          local_338 = (undefined *)CONCAT44(local_4f8._4_4_,(undefined4)local_4f8);
          uStack_330 = CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
          pcStack_320 = (code *)CONCAT44(pcStack_320._4_4_,1);
          uVar9 = ::alloc::boxed::Box<T>::new(&local_338);
                    /* try { // try from 00167b8f to 00167b9b has its CatchHandler @ 00167d20 */
          core::ptr::drop_in_place<alloc::string::String>(local_4a8);
                    /* try { // try from 00167b9c to 00167ba5 has its CatchHandler @ 00167d1b */
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_4c8);
        }
                    /* try { // try from 00167c70 to 00167c7c has its CatchHandler @ 00167d16 */
        core::ptr::drop_in_place<uu_tsort::Graph>(&local_3e8);
                    /* try { // try from 00167c7d to 00167c89 has its CatchHandler @ 00167d11 */
        core::ptr::drop_in_place<alloc::string::String>(&local_478);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_dyn_std::io::Read>>
                  (local_460,local_458);
        if (cVar5 == '\0') {
          core::ptr::drop_in_place<std::fs::File>(local_4fc);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3b8)
        ;
        auVar3._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0021e8d0;
        auVar3._0_8_ = uVar9;
        return auVar3;
      }
      auVar12 = core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::
                call_once(local_2f0,lVar8);
      if (auVar12._0_8_ == 0) goto LAB_00167861;
      _<core::str::pattern::MultiCharEqPattern<C>as_core::str::pattern::Pattern>::into_searcher
                (local_60,auVar12._0_8_);
      local_70 = 0;
      local_38 = 1;
      local_68 = auVar12._8_8_;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_4c8,&local_70);
      if (local_4b8 == 0) {
                    /* try { // try from 00167857 to 00167876 has its CatchHandler @ 00167d2c */
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_4c8);
        goto LAB_00167861;
      }
      local_4a8._0_8_ = uStack_4c0;
      local_4a8._8_8_ = local_4b8;
      local_498 = 2;
      while( true ) {
                    /* try { // try from 001676d0 to 001676f7 has its CatchHandler @ 00167db9 */
        auVar12 = _<core::slice::iter::Chunks<T>as_core::iter::traits::iterator::Iterator>::next
                            (local_4a8);
        puVar11 = auVar12._0_8_;
        if (puVar11 == (undefined8 *)0x0) break;
        if (auVar12._8_8_ != 2) {
          local_400 = *(undefined4 *)(local_4b0 + 8);
          uStack_3fc = *(undefined4 *)(local_4b0 + 0xc);
          uStack_3f8 = *(undefined4 *)(local_4b0 + 0x10);
          uStack_3f4 = *(undefined4 *)(local_4b0 + 0x14);
          local_408 = 0;
          local_3f0 = 0;
          local_488._0_8_ = &local_408;
          local_488._8_8_ = PTR_fmt_002250b8;
          local_4f8 = (long *)&DAT_0021e7a8;
          uStack_4f0 = (code *)0x2;
          local_4d8 = 0;
          local_4e8 = (long *)local_488;
          pcStack_4e0 = (code *)0x1;
                    /* try { // try from 00167784 to 001677c1 has its CatchHandler @ 00167d27 */
          core::option::Option<T>::map_or_else(&local_368,&local_4f8);
          pcStack_4e0 = (code *)CONCAT44(pcStack_4e0._4_4_,1);
          local_4f8 = (long *)CONCAT44(uStack_364,local_368);
          uStack_4f0 = (code *)CONCAT44(uStack_35c,uStack_360);
          local_4e8 = (long *)local_358;
          uVar9 = ::alloc::boxed::Box<T>::new(&local_4f8);
                    /* try { // try from 001677c2 to 001677ce has its CatchHandler @ 00167d2c */
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_4c8);
                    /* try { // try from 001677cf to 001677db has its CatchHandler @ 00167daa */
          core::ptr::drop_in_place<uu_tsort::Graph>(&local_3e8);
          auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0021e8d0;
          auVar12._0_8_ = uVar9;
          goto LAB_001677e3;
        }
        (*(code *)puVar4)(&local_3e8,*puVar11,puVar11[1],puVar11[2],puVar11[3]);
      }
                    /* try { // try from 001676fa to 00167703 has its CatchHandler @ 00167d3c */
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_4c8);
    } while( true );
  }
  auVar12 = (*(code *)PTR_from_002250a0)(auVar12._8_8_);
LAB_001677e3:
                    /* try { // try from 001677e3 to 001677ef has its CatchHandler @ 00167d34 */
  core::ptr::drop_in_place<alloc::string::String>(&local_478);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_dyn_std::io::Read>>
            (local_460,local_458);
  if (cVar5 == '\0') {
    core::ptr::drop_in_place<std::fs::File>(local_4fc);
  }
LAB_00167816:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3b8);
  return auVar12;
}