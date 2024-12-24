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
  
  (*(code *)PTR_uu_app_002261e8)(&local_338);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_460,&local_338,param_1,param_2);
  if (local_460 == -0x8000000000000000) {
    auVar12 = (*(code *)PTR_from_002261f0)();
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
                    /* try { // try from 0016785e to 00167897 has its CatchHandler @ 001682bf */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_338,&local_3b8,&DAT_0011466c,4);
  local_4b0 = clap_builder::parser::error::MatchesError::unwrap(&DAT_0011466c,4,&local_338);
  if (local_4b0 == 0) {
                    /* try { // try from 001681d9 to 001681f1 has its CatchHandler @ 001682bf */
    (*(code *)PTR_expect_failed_00226230)("Value is required by clap",0x19,&DAT_0021f8c8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* try { // try from 001678b1 to 00167905 has its CatchHandler @ 001682c4 */
  cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                    (*(undefined8 *)(local_4b0 + 8),*(undefined8 *)(local_4b0 + 0x10),
                     "-: read error: Is a directory",1);
  if (cVar5 == '\0') {
    uVar9 = *(undefined8 *)(local_4b0 + 8);
    uVar1 = *(undefined8 *)(local_4b0 + 0x10);
                    /* try { // try from 0016796c to 00167a67 has its CatchHandler @ 001682c4 */
    cVar6 = (*(code *)PTR_is_dir_00226208)(uVar9,uVar1);
    if (cVar6 != '\0') {
      local_4f8 = &local_4b0;
      uStack_4f0 = _<&T_as_core::fmt::Display>::fmt;
      local_338 = &DAT_0021f938;
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
      auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0021f990;
      auVar12._0_8_ = uVar9;
      goto LAB_00167d26;
    }
    std::fs::File::open(&local_338,uVar9,uVar1);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_4f8,&local_338,local_4b0);
    auVar12._8_8_ = uStack_4f0;
    auVar12._0_8_ = local_4f8;
    if (local_4f8 != (long *)0x0) goto LAB_00167d26;
    local_4fc = (undefined  [4])(undefined4)uStack_4f0;
    puVar11 = (undefined8 *)local_4fc;
    ppuVar10 = &PTR_drop_in_place<std_fs_File>_0021f8e0;
  }
  else {
    local_428 = (*(code *)PTR_stdin_002261f8)();
    puVar11 = &local_428;
    ppuVar10 = (undefined **)&DAT_0021fa00;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_460,0x2000,puVar11,ppuVar10);
  local_478 = 0;
  local_470 = 1;
  local_468 = 0;
                    /* try { // try from 0016792a to 00167950 has its CatchHandler @ 001682ba */
  auVar12 = _<std::io::buffered::bufreader::BufReader<R>as_std::io::Read>::read_to_string
                      (&local_460,&local_478);
  if (auVar12._0_8_ == 0) {
                    /* try { // try from 00167a80 to 00167a99 has its CatchHandler @ 001682ba */
    std::thread::local::LocalKey<T>::try_with(&local_338);
    local_3c8 = core::result::Result<T,E>::expect(&local_338);
    uVar9 = local_468;
    local_3e8 = PTR_DAT_0021fa70;
    uStack_3e0 = _UNK_0021fa78;
    local_3d8 = _DAT_0021fa80;
    uStack_3d4 = _UNK_0021fa84;
    uStack_3d0 = _UNK_0021fa88;
    uStack_3cc = _UNK_0021fa8c;
                    /* try { // try from 00167ad8 to 00167ae4 has its CatchHandler @ 0016823c */
    _<char_as_core::str::pattern::Pattern>::into_searcher(&local_4f8,local_470,local_468);
    puVar4 = PTR_add_edge_00226210;
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
                    /* try { // try from 00167b46 to 00167bb2 has its CatchHandler @ 0016824c */
      lVar8 = core::str::iter::SplitInternal<P>::next_inclusive(&local_338);
      if (lVar8 == 0) {
LAB_00167d71:
        (*(code *)PTR_run_tsort_00226220)(&local_408,&local_3e8);
        if (local_408 == 0) {
          local_498 = CONCAT71(uStack_3ef,local_3f0);
          local_4a8._12_4_ = uStack_3f4;
          local_4a8._8_4_ = uStack_3f8;
                    /* try { // try from 001680d1 to 001680ea has its CatchHandler @ 00168212 */
          ::alloc::str::join_generic_copy(&local_338,local_4a8._8_8_,local_498,"\n",1);
          local_4e8 = local_328;
          local_4f8._0_4_ = SUB84(local_338,0);
          local_4f8._4_4_ = local_338._4_4_;
          uStack_4f0._0_4_ = (undefined4)uStack_330;
          uStack_4f0._4_4_ = uStack_330._4_4_;
          local_4c8 = &local_4f8;
          uStack_4c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_338 = &DAT_0021f888;
          uStack_330 = 2;
          local_318 = 0;
          local_328 = &local_4c8;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 0016815b to 00168168 has its CatchHandler @ 001681f4 */
          (*(code *)PTR__print_00226228)(&local_338);
                    /* try { // try from 00168169 to 00168172 has its CatchHandler @ 00168212 */
          core::ptr::drop_in_place<alloc::string::String>(&local_4f8);
                    /* try { // try from 00168173 to 0016817c has its CatchHandler @ 0016822b */
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_4a8);
          uVar9 = 0;
        }
        else {
          local_4b8 = CONCAT71(uStack_3ef,local_3f0);
          local_4c8 = (undefined8 *)CONCAT44(uStack_3fc,local_400);
          uStack_4c0 = (code *)CONCAT44(uStack_3f4,uStack_3f8);
                    /* try { // try from 00167daf to 00167e3a has its CatchHandler @ 00168230 */
          local_4a8 = (*(code *)PTR_util_name_002261c8)();
          uStack_4f0 = _<&T_as_core::fmt::Display>::fmt;
          local_4e8 = &local_4b0;
          pcStack_4e0 = _<&T_as_core::fmt::Display>::fmt;
          local_338 = &DAT_0021fa90;
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
                    /* try { // try from 00167eb8 to 00167f44 has its CatchHandler @ 00168254 */
              auVar12 = (*(code *)PTR_util_name_002261c8)();
              local_4f8 = (long *)local_488;
              uStack_4f0 = _<&T_as_core::fmt::Display>::fmt;
              local_4e8 = &local_410;
              pcStack_4e0 = _<&T_as_core::fmt::Display>::fmt;
              local_338 = &DAT_0021fac0;
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
          local_338 = &DAT_00114cf0;
          uStack_330 = 1;
          local_318 = 0;
          local_328 = &local_4f8;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 00167fa7 to 00167fd8 has its CatchHandler @ 00168235 */
          local_4f8 = (long *)local_4a8;
          (*(code *)PTR__eprint_002261d0)(&local_338);
          ::alloc::str::join_generic_copy(&local_338,uStack_4c0,local_4b8,"\n",1);
          local_4e8 = local_328;
          local_4f8._0_4_ = SUB84(local_338,0);
          local_4f8._4_4_ = local_338._4_4_;
          uStack_4f0._0_4_ = (undefined4)uStack_330;
          uStack_4f0._4_4_ = uStack_330._4_4_;
          local_488._0_8_ = &local_4f8;
          local_488._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_338 = &DAT_0021f888;
          uStack_330 = 2;
          local_318 = 0;
          local_328 = (long *)local_488;
          pcStack_320 = (code *)0x1;
                    /* try { // try from 0016804b to 00168058 has its CatchHandler @ 00168203 */
          (*(code *)PTR__print_00226228)(&local_338);
                    /* try { // try from 00168059 to 0016809e has its CatchHandler @ 00168235 */
          core::ptr::drop_in_place<alloc::string::String>(&local_4f8);
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_4f8);
          local_328 = local_4e8;
          local_338 = (undefined *)CONCAT44(local_4f8._4_4_,(undefined4)local_4f8);
          uStack_330 = CONCAT44(uStack_4f0._4_4_,(undefined4)uStack_4f0);
          pcStack_320 = (code *)CONCAT44(pcStack_320._4_4_,1);
          uVar9 = ::alloc::boxed::Box<T>::new(&local_338);
                    /* try { // try from 0016809f to 001680ab has its CatchHandler @ 00168230 */
          core::ptr::drop_in_place<alloc::string::String>(local_4a8);
                    /* try { // try from 001680ac to 001680b5 has its CatchHandler @ 0016822b */
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_4c8);
        }
                    /* try { // try from 00168180 to 0016818c has its CatchHandler @ 00168226 */
        core::ptr::drop_in_place<uu_tsort::Graph>(&local_3e8);
                    /* try { // try from 0016818d to 00168199 has its CatchHandler @ 00168221 */
        core::ptr::drop_in_place<alloc::string::String>(&local_478);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_dyn_std::io::Read>>
                  (local_460,local_458);
        if (cVar5 == '\0') {
          core::ptr::drop_in_place<std::fs::File>(local_4fc);
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3b8)
        ;
        auVar3._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0021f990;
        auVar3._0_8_ = uVar9;
        return auVar3;
      }
      auVar12 = core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::
                call_once(local_2f0,lVar8);
      if (auVar12._0_8_ == 0) goto LAB_00167d71;
      _<core::str::pattern::MultiCharEqPattern<C>as_core::str::pattern::Pattern>::into_searcher
                (local_60,auVar12._0_8_);
      local_70 = 0;
      local_38 = 1;
      local_68 = auVar12._8_8_;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_4c8,&local_70);
      if (local_4b8 == 0) {
                    /* try { // try from 00167d67 to 00167d86 has its CatchHandler @ 0016823c */
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_4c8);
        goto LAB_00167d71;
      }
      local_4a8._0_8_ = uStack_4c0;
      local_4a8._8_8_ = local_4b8;
      local_498 = 2;
      while( true ) {
                    /* try { // try from 00167be0 to 00167c07 has its CatchHandler @ 001682c9 */
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
          local_488._8_8_ = PTR_fmt_00226218;
          local_4f8 = (long *)&DAT_0021fb08;
          uStack_4f0 = (code *)0x2;
          local_4d8 = 0;
          local_4e8 = (long *)local_488;
          pcStack_4e0 = (code *)0x1;
                    /* try { // try from 00167c94 to 00167cd1 has its CatchHandler @ 00168237 */
          core::option::Option<T>::map_or_else(&local_368,&local_4f8);
          pcStack_4e0 = (code *)CONCAT44(pcStack_4e0._4_4_,1);
          local_4f8 = (long *)CONCAT44(uStack_364,local_368);
          uStack_4f0 = (code *)CONCAT44(uStack_35c,uStack_360);
          local_4e8 = (long *)local_358;
          uVar9 = ::alloc::boxed::Box<T>::new(&local_4f8);
                    /* try { // try from 00167cd2 to 00167cde has its CatchHandler @ 0016823c */
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_4c8);
                    /* try { // try from 00167cdf to 00167ceb has its CatchHandler @ 001682ba */
          core::ptr::drop_in_place<uu_tsort::Graph>(&local_3e8);
          auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0021f990;
          auVar12._0_8_ = uVar9;
          goto LAB_00167cf3;
        }
        (*(code *)puVar4)(&local_3e8,*puVar11,puVar11[1],puVar11[2],puVar11[3]);
      }
                    /* try { // try from 00167c0a to 00167c13 has its CatchHandler @ 0016824c */
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_4c8);
    } while( true );
  }
  auVar12 = (*(code *)PTR_from_00226200)(auVar12._8_8_);
LAB_00167cf3:
                    /* try { // try from 00167cf3 to 00167cff has its CatchHandler @ 00168244 */
  core::ptr::drop_in_place<alloc::string::String>(&local_478);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_dyn_std::io::Read>>
            (local_460,local_458);
  if (cVar5 == '\0') {
    core::ptr::drop_in_place<std::fs::File>(local_4fc);
  }
LAB_00167d26:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3b8);
  return auVar12;
}