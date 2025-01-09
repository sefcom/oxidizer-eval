undefined  [16] __rustcall uu_more::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  char cVar7;
  undefined uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined **ppuVar13;
  long *unaff_R12;
  long lVar14;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined8 local_4d0;
  undefined **local_4c8;
  undefined8 *local_4c0;
  undefined local_4b8 [16];
  code *local_4a8;
  undefined local_4a0 [16];
  undefined8 *local_490;
  undefined *local_488;
  undefined8 local_480;
  undefined8 local_478;
  long local_470;
  undefined8 local_468;
  undefined8 local_460;
  ulong local_458;
  undefined8 local_450;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  int local_3f8;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined local_3a8 [40];
  undefined local_380 [16];
  undefined8 local_370;
  undefined local_368 [16];
  undefined8 local_358;
  undefined local_350 [16];
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined **local_2f8;
  undefined8 uStack_2f0;
  undefined8 **local_2e8;
  ulong local_2e0;
  undefined8 local_2d8;
  
  uVar10 = ::alloc::boxed::Box<T>::new();
  (*(code *)PTR_set_hook_002679f0)(uVar10,&DAT_0025f3e8);
  (*(code *)PTR_uu_app_002679f8)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_450,&local_2f8,param_1,param_2);
  if (local_450 == (undefined **)0x8000000000000000) {
    auVar15 = (*(code *)PTR_from_00267a00)(CONCAT44(uStack_444,uStack_448));
  }
  else {
    local_3b8 = local_420;
    local_3c8 = local_430;
    uStack_3c4 = uStack_42c;
    uStack_3c0 = (undefined4)uStack_428;
    uStack_3bc = uStack_428._4_4_;
    local_3d8 = local_440;
    uStack_3d4 = uStack_43c;
    uStack_3d0 = uStack_438;
    uStack_3cc = uStack_434;
    local_3e8 = (undefined4)local_450;
    uStack_3e4 = local_450._4_4_;
    uStack_3e0 = uStack_448;
    uStack_3dc = uStack_444;
                    /* try { // try from 00184510 to 00184525 has its CatchHandler @ 00184e78 */
    (*(code *)PTR_from_00267a08)(local_3a8,&local_3e8);
    local_480 = 0;
    local_478 = 1;
    local_470 = 0;
                    /* try { // try from 00184541 to 001845b7 has its CatchHandler @ 00184e7d */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,&local_3e8,&DAT_0010eaa3,5);
    clap_builder::parser::error::MatchesError::unwrap(&local_338,&DAT_0010eaa3,5,&local_2f8);
    if (CONCAT44(uStack_334,local_338) == 0) {
                    /* try { // try from 00184d38 to 00184e21 has its CatchHandler @ 00184e7d */
      local_2f8 = (undefined **)(*(code *)PTR_stdin_00267a60)();
      auVar15 = (*(code *)PTR_read_to_string_00267a68)(&local_2f8,&local_480);
      core::result::Result<T,E>::unwrap(auVar15._0_8_,auVar15._8_8_,&PTR_DAT_0025f5f8);
      if (local_470 == 0) {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_450);
        local_2e8 = (undefined8 **)CONCAT44(uStack_43c,local_440);
        local_2f8 = local_450;
        uStack_2f0 = CONCAT44(uStack_444,uStack_448);
        local_2e0 = CONCAT44(local_2e0._4_4_,1);
        uVar10 = ::alloc::boxed::Box<T>::new(&local_2f8);
        auVar15._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_0025f570;
        auVar15._0_8_ = uVar10;
      }
      else {
        local_2f8 = (undefined **)(*(code *)PTR_setup_term_00267a10)();
        auVar15 = (*(code *)PTR_more_00267a50)(local_478,local_470,&local_2f8,0,0);
        if (auVar15._0_8_ == 0) {
          (*(code *)PTR_reset_term_00267a58)(&local_2f8);
LAB_00184d0d:
                    /* try { // try from 00184d0d to 00184d16 has its CatchHandler @ 00184e73 */
          core::ptr::drop_in_place<alloc::string::String>(&local_480);
                    /* try { // try from 00184d17 to 00184d23 has its CatchHandler @ 00184e78 */
          core::ptr::drop_in_place<uu_more::Options>(local_3a8);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                    (&local_3e8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = unaff_R12;
          return auVar3 << 0x40;
        }
      }
    }
    else {
      local_468 = (*(code *)PTR_setup_term_00267a10)();
      local_458 = core::iter::traits::exact_size::ExactSizeIterator::len(local_300);
      local_408 = local_308;
      local_418 = local_318;
      uStack_410 = uStack_310;
      uStack_428 = local_328;
      local_420 = uStack_320;
      uStack_438 = local_338;
      uStack_434 = uStack_334;
      local_430 = uStack_330;
      uStack_42c = uStack_32c;
      local_400 = local_300;
      ppuVar13 = (undefined **)0x0;
LAB_00184627:
      while( true ) {
        auVar16._4_4_ = uStack_444;
        auVar16._0_4_ = uStack_448;
        uVar1 = CONCAT44(uStack_43c,local_440);
        auVar16._8_8_ = uVar1;
        local_450 = (undefined **)0x0;
        if (ppuVar13 == (undefined **)0x0) {
          lVar11 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
                   ::next(&uStack_438);
          if (lVar11 == 0) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar1;
            auVar16 = auVar2 << 0x40;
          }
          else {
            auVar16 = core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::
                      call_once(*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
          }
        }
        uVar10 = auVar16._8_8_;
        lVar11 = auVar16._0_8_;
        plVar12 = (long *)core::option::Option<T>::get_or_insert_with(&local_450,&uStack_438);
        if (lVar11 == 0) {
                    /* try { // try from 00184cff to 00184d0c has its CatchHandler @ 00184e7d */
          (*(code *)PTR_reset_term_00267a58)(&local_468);
          goto LAB_00184d0d;
        }
        lVar14 = *plVar12;
        cVar7 = (*(code *)PTR_is_dir_00267a18)(lVar11,uVar10);
        unaff_R12 = plVar12;
        local_4b8 = auVar16;
        if (cVar7 == '\0') break;
        uVar10 = (*(code *)PTR_disable_raw_mode_00267a20)();
        core::result::Result<T,E>::unwrap(uVar10,&PTR_DAT_0025f520);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        local_4a0._8_8_ = PTR_fmt_00267a28;
        local_2f8 = (undefined **)&DAT_0025f358;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 1;
        local_4a0._0_8_ = &local_4c0;
        core::option::Option<T>::map_or_else(local_380,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_370;
        local_4d0 = ::alloc::boxed::Box<T>::new(&local_2f8);
        local_4c8 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_0025f570;
        uVar9 = _<uucore::mods::error::UUsageError_as_uucore::mods::error::UError>::code(local_4d0);
                    /* try { // try from 0018479c to 00184828 has its CatchHandler @ 00184ecb */
        (*(code *)PTR_set_exit_code_00267a30)(uVar9);
        local_4a0 = (*(code *)PTR_util_name_002679d0)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_2f8 = (undefined **)&DAT_0025f378;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__eprint_002679d8)(&local_2f8);
                    /* try { // try from 00184833 to 00184948 has its CatchHandler @ 00184edf */
        core::ptr::
        drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR_enable_raw_mode_00267a38)();
        ppuVar13 = &PTR_DAT_0025f5e0;
LAB_00184617:
                    /* try { // try from 00184617 to 00184782 has its CatchHandler @ 00184edf */
        core::result::Result<T,E>::unwrap(uVar10,ppuVar13);
        ppuVar13 = local_450;
      }
      std::fs::metadata(&local_2f8,lVar11,uVar10);
      if ((int)local_2f8 == 2) {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (&local_2f8);
        uVar10 = (*(code *)PTR_disable_raw_mode_00267a20)();
        core::result::Result<T,E>::unwrap(uVar10,&PTR_DAT_0025f4f0);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        local_4a0._8_8_ = PTR_fmt_00267a28;
        local_2f8 = &PTR_DAT_0025f3a8;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 1;
        local_4a0._0_8_ = &local_4c0;
        core::option::Option<T>::map_or_else(local_368,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_358;
        local_4d0 = ::alloc::boxed::Box<T>::new(&local_2f8);
        local_4c8 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_0025f468;
        uVar9 = _<uucore::mods::error::UUsageError_as_uucore::mods::error::UError>::code(local_4d0);
                    /* try { // try from 00184962 to 001849ee has its CatchHandler @ 00184ea5 */
        (*(code *)PTR_set_exit_code_00267a30)(uVar9);
        local_4a0 = (*(code *)PTR_util_name_002679d0)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_2f8 = (undefined **)&DAT_0025f378;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__eprint_002679d8)(&local_2f8);
                    /* try { // try from 001849f9 to 00184a2f has its CatchHandler @ 00184edf */
        core::ptr::
        drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR_enable_raw_mode_00267a38)();
        ppuVar13 = &PTR_DAT_0025f508;
        goto LAB_00184617;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_2f8);
      std::fs::File::open(&local_3f8,lVar11,uVar10);
      uVar5 = local_3f0;
      if (local_3f8 != 0) {
        local_460 = local_3f0;
                    /* try { // try from 00184a4e to 00184b3a has its CatchHandler @ 00184eb9 */
        uVar10 = (*(code *)PTR_disable_raw_mode_00267a20)();
        core::result::Result<T,E>::unwrap(uVar10,&PTR_DAT_0025f430);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        uVar8 = std::io::error::Error::kind(uVar5);
        local_4d0 = CONCAT71(local_4d0._1_7_,uVar8);
        local_4a0._8_8_ = PTR_fmt_00267a28;
        local_490 = &local_4d0;
        local_488 = PTR_fmt_00267a40;
        local_2f8 = &PTR_DAT_0025f3c8;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 2;
        local_4a0._0_8_ = &local_4c0;
        core::option::Option<T>::map_or_else(local_350,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_340;
        local_4d0 = ::alloc::boxed::Box<T>::new(&local_2f8);
        local_4c8 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_0025f468;
        uVar9 = _<uucore::mods::error::UUsageError_as_uucore::mods::error::UError>::code(local_4d0);
                    /* try { // try from 00184b54 to 00184be0 has its CatchHandler @ 00184e91 */
        (*(code *)PTR_set_exit_code_00267a30)(uVar9);
        local_4a0 = (*(code *)PTR_util_name_002679d0)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_2f8 = (undefined **)&DAT_0025f378;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__eprint_002679d8)(&local_2f8);
                    /* try { // try from 00184beb to 00184c04 has its CatchHandler @ 00184eb9 */
        core::ptr::
        drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR_enable_raw_mode_00267a38)();
        core::result::Result<T,E>::unwrap(uVar10,&PTR_DAT_0025f4d8);
                    /* try { // try from 00184c05 to 00184c2f has its CatchHandler @ 00184edf */
        core::ptr::drop_in_place<std::io::error::Error>(&local_460);
        ppuVar13 = local_450;
        goto LAB_00184627;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_2f8,0x2000,local_3f4);
                    /* try { // try from 00184c30 to 00184cd2 has its CatchHandler @ 00184e7f */
      auVar15 = _<std::io::buffered::bufreader::BufReader<R>as_std::io::Read>::read_to_string
                          (&local_2f8,&local_480);
      core::result::Result<T,E>::unwrap(auVar15._0_8_,auVar15._8_8_,&PTR_DAT_0025f418);
      lVar6 = local_470;
      uVar5 = local_478;
      (*(code *)PTR_try_from_00267a48)(&local_4c0,lVar11,uVar10);
      pcVar4 = (code *)local_4b8._0_8_;
      if (local_4c0 != (undefined8 *)0x0) {
        pcVar4 = (code *)0x0;
      }
      if (lVar14 != 0) {
        lVar14 = *plVar12;
      }
      auVar15 = (*(code *)PTR_more_00267a50)
                          (uVar5,lVar6,&local_468,1 < local_458,pcVar4,local_4b8._8_8_,lVar14,
                           plVar12[1],local_3a8);
      if (auVar15._0_8_ == 0) {
        local_470 = 0;
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&local_2f8)
        ;
        ppuVar13 = local_450;
        goto LAB_00184627;
      }
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&local_2f8);
    }
                    /* try { // try from 00184e37 to 00184e40 has its CatchHandler @ 00184e73 */
    core::ptr::drop_in_place<alloc::string::String>(&local_480);
                    /* try { // try from 00184e41 to 00184e4d has its CatchHandler @ 00184e78 */
    core::ptr::drop_in_place<uu_more::Options>(local_3a8);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3e8);
  }
  return auVar15;
}