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
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  long *unaff_R12;
  long lVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
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
  (*(code *)PTR_set_hook_002689c8)(uVar10,&DAT_002602a8);
  (*(code *)PTR_uu_app_002689d0)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_450,&local_2f8,param_1,param_2);
  if (local_450 == (undefined **)0x8000000000000000) {
    auVar16 = (*(code *)PTR_from_002689d8)(CONCAT44(uStack_444,uStack_448));
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
                    /* try { // try from 00184890 to 001848a5 has its CatchHandler @ 001851f8 */
    (*(code *)PTR_from_002689e0)(local_3a8,&local_3e8);
    local_480 = 0;
    local_478 = 1;
    local_470 = 0;
                    /* try { // try from 001848c1 to 00184937 has its CatchHandler @ 001851fd */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,&local_3e8,"files",5);
    clap_builder::parser::error::MatchesError::unwrap(&local_338,"files",5,&local_2f8);
    if (CONCAT44(uStack_334,local_338) == 0) {
                    /* try { // try from 001850b8 to 001851a1 has its CatchHandler @ 001851fd */
      local_2f8 = (undefined **)(*(code *)PTR_stdin_00268a38)();
      auVar16 = (*(code *)PTR_read_to_string_00268a40)(&local_2f8,&local_480);
      core::result::Result<T,E>::unwrap(auVar16._0_8_,auVar16._8_8_,&DAT_00260548);
      if (local_470 == 0) {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_450);
        local_2e8 = (undefined8 **)CONCAT44(uStack_43c,local_440);
        local_2f8 = local_450;
        uStack_2f0 = CONCAT44(uStack_444,uStack_448);
        local_2e0 = CONCAT44(local_2e0._4_4_,1);
        uVar10 = ::alloc::boxed::Box<T>::new(&local_2f8);
        auVar16._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002604c0;
        auVar16._0_8_ = uVar10;
      }
      else {
        local_2f8 = (undefined **)(*(code *)PTR_setup_term_002689e8)();
        auVar16 = (*(code *)PTR_more_00268a28)(local_478,local_470,&local_2f8,0,0);
        if (auVar16._0_8_ == 0) {
          (*(code *)PTR_reset_term_00268a30)(&local_2f8);
LAB_0018508d:
                    /* try { // try from 0018508d to 00185096 has its CatchHandler @ 001851f3 */
          core::ptr::drop_in_place<alloc::string::String>(&local_480);
                    /* try { // try from 00185097 to 001850a3 has its CatchHandler @ 001851f8 */
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
      local_468 = (*(code *)PTR_setup_term_002689e8)();
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
      ppuVar11 = (undefined **)0x0;
LAB_001849a7:
      while( true ) {
        auVar17._4_4_ = uStack_444;
        auVar17._0_4_ = uStack_448;
        uVar1 = CONCAT44(uStack_43c,local_440);
        auVar17._8_8_ = uVar1;
        local_450 = (undefined **)0x0;
        if (ppuVar11 == (undefined **)0x0) {
          lVar12 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
                   ::next(&uStack_438);
          if (lVar12 == 0) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar1;
            auVar17 = auVar2 << 0x40;
          }
          else {
            auVar17 = core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::
                      call_once(*(undefined8 *)(lVar12 + 8),*(undefined8 *)(lVar12 + 0x10));
          }
        }
        uVar10 = auVar17._8_8_;
        lVar12 = auVar17._0_8_;
        plVar13 = (long *)core::option::Option<T>::get_or_insert_with(&local_450,&uStack_438);
        if (lVar12 == 0) {
                    /* try { // try from 0018507f to 0018508c has its CatchHandler @ 001851fd */
          (*(code *)PTR_reset_term_00268a30)(&local_468);
          goto LAB_0018508d;
        }
        lVar15 = *plVar13;
        cVar7 = (*(code *)PTR_is_dir_002689f0)(lVar12,uVar10);
        unaff_R12 = plVar13;
        local_4b8 = auVar17;
        if (cVar7 == '\0') break;
        uVar10 = (*(code *)PTR_disable_raw_mode_002689f8)();
        core::result::Result<T,E>::unwrap(uVar10,&DAT_00260450);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        local_4a0._8_8_ = PTR_fmt_00268a00;
        local_2f8 = (undefined **)&DAT_00260468;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 1;
        local_4a0._0_8_ = &local_4c0;
        core::option::Option<T>::map_or_else(local_380,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_370;
        local_4d0 = ::alloc::boxed::Box<T>::new(&local_2f8);
        local_4c8 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_002604c0;
        uVar9 = _<uucore::mods::error::UUsageError_as_uucore::mods::error::UError>::code(local_4d0);
                    /* try { // try from 00184b1c to 00184ba8 has its CatchHandler @ 0018524b */
        (*(code *)PTR_set_exit_code_00268a08)(uVar9);
        local_4a0 = (*(code *)PTR_util_name_002689a8)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_2f8 = (undefined **)&DAT_002603b8;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__eprint_002689b0)(&local_2f8);
                    /* try { // try from 00184bb3 to 00184cc8 has its CatchHandler @ 0018525f */
        core::ptr::
        drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR_enable_raw_mode_00268a10)();
        puVar14 = &DAT_00260530;
LAB_00184997:
                    /* try { // try from 00184997 to 00184b02 has its CatchHandler @ 0018525f */
        core::result::Result<T,E>::unwrap(uVar10,puVar14);
        ppuVar11 = local_450;
      }
      std::fs::metadata(&local_2f8,lVar12,uVar10);
      if ((int)local_2f8 == 2) {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (&local_2f8);
        uVar10 = (*(code *)PTR_disable_raw_mode_002689f8)();
        core::result::Result<T,E>::unwrap(uVar10,&DAT_00260400);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        local_4a0._8_8_ = PTR_fmt_00268a00;
        local_2f8 = &PTR_s_cannot_open___No_such_file_or_di_00260418;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 1;
        local_4a0._0_8_ = &local_4c0;
        core::option::Option<T>::map_or_else(local_368,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_358;
        local_4d0 = ::alloc::boxed::Box<T>::new(&local_2f8);
        local_4c8 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00260348;
        uVar9 = _<uucore::mods::error::UUsageError_as_uucore::mods::error::UError>::code(local_4d0);
                    /* try { // try from 00184ce2 to 00184d6e has its CatchHandler @ 00185225 */
        (*(code *)PTR_set_exit_code_00268a08)(uVar9);
        local_4a0 = (*(code *)PTR_util_name_002689a8)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_2f8 = (undefined **)&DAT_002603b8;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__eprint_002689b0)(&local_2f8);
                    /* try { // try from 00184d79 to 00184daf has its CatchHandler @ 0018525f */
        core::ptr::
        drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR_enable_raw_mode_00268a10)();
        puVar14 = &DAT_00260438;
        goto LAB_00184997;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_2f8);
      std::fs::File::open(&local_3f8,lVar12,uVar10);
      uVar5 = local_3f0;
      if (local_3f8 != 0) {
        local_460 = local_3f0;
                    /* try { // try from 00184dce to 00184eba has its CatchHandler @ 00185239 */
        uVar10 = (*(code *)PTR_disable_raw_mode_002689f8)();
        core::result::Result<T,E>::unwrap(uVar10,&DAT_002602f0);
        local_4c0 = (undefined8 *)0x1;
        local_4a8 = (code *)CONCAT71(local_4a8._1_7_,1);
        uVar8 = std::io::error::Error::kind(uVar5);
        local_4d0 = CONCAT71(local_4d0._1_7_,uVar8);
        local_4a0._8_8_ = PTR_fmt_00268a00;
        local_490 = &local_4d0;
        local_488 = PTR_fmt_00268a18;
        local_2f8 = &PTR_s_cannot_open___No_such_file_or_di_00260308;
        uStack_2f0 = 2;
        local_2d8 = 0;
        local_2e8 = (undefined8 **)local_4a0;
        local_2e0 = 2;
        local_4a0._0_8_ = &local_4c0;
        core::option::Option<T>::map_or_else(local_350,&local_2f8);
        local_2e0 = local_2e0 & 0xffffffff00000000;
        local_2e8 = (undefined8 **)local_340;
        local_4d0 = ::alloc::boxed::Box<T>::new(&local_2f8);
        local_4c8 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00260348;
        uVar9 = _<uucore::mods::error::UUsageError_as_uucore::mods::error::UError>::code(local_4d0);
                    /* try { // try from 00184ed4 to 00184f60 has its CatchHandler @ 00185211 */
        (*(code *)PTR_set_exit_code_00268a08)(uVar9);
        local_4a0 = (*(code *)PTR_util_name_002689a8)();
        local_4c0 = (undefined8 *)local_4a0;
        local_4b8._0_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_4b8._8_8_ = &local_4d0;
        local_4a8 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_2f8 = (undefined **)&DAT_002603b8;
        uStack_2f0 = 3;
        local_2d8 = 0;
        local_2e0 = 2;
        local_2e8 = &local_4c0;
        (*(code *)PTR__eprint_002689b0)(&local_2f8);
                    /* try { // try from 00184f6b to 00184f84 has its CatchHandler @ 00185239 */
        core::ptr::
        drop_in_place<alloc::boxed::Box<dyn_core::error::Error_core::marker::Sync_core::marker::Send>>
                  (local_4d0,local_4c8);
        uVar10 = (*(code *)PTR_enable_raw_mode_00268a10)();
        core::result::Result<T,E>::unwrap(uVar10,&DAT_002603e8);
                    /* try { // try from 00184f85 to 00184faf has its CatchHandler @ 0018525f */
        core::ptr::drop_in_place<std::io::error::Error>(&local_460);
        ppuVar11 = local_450;
        goto LAB_001849a7;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_2f8,0x2000,local_3f4);
                    /* try { // try from 00184fb0 to 00185052 has its CatchHandler @ 001851ff */
      auVar16 = _<std::io::buffered::bufreader::BufReader<R>as_std::io::Read>::read_to_string
                          (&local_2f8,&local_480);
      core::result::Result<T,E>::unwrap(auVar16._0_8_,auVar16._8_8_,&DAT_002602d8);
      lVar6 = local_470;
      uVar5 = local_478;
      (*(code *)PTR_try_from_00268a20)(&local_4c0,lVar12,uVar10);
      pcVar4 = (code *)local_4b8._0_8_;
      if (local_4c0 != (undefined8 *)0x0) {
        pcVar4 = (code *)0x0;
      }
      if (lVar15 != 0) {
        lVar15 = *plVar13;
      }
      auVar16 = (*(code *)PTR_more_00268a28)
                          (uVar5,lVar6,&local_468,1 < local_458,pcVar4,local_4b8._8_8_,lVar15,
                           plVar13[1],local_3a8);
      if (auVar16._0_8_ == 0) {
        local_470 = 0;
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&local_2f8)
        ;
        ppuVar11 = local_450;
        goto LAB_001849a7;
      }
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&local_2f8);
    }
                    /* try { // try from 001851b7 to 001851c0 has its CatchHandler @ 001851f3 */
    core::ptr::drop_in_place<alloc::string::String>(&local_480);
                    /* try { // try from 001851c1 to 001851cd has its CatchHandler @ 001851f8 */
    core::ptr::drop_in_place<uu_more::Options>(local_3a8);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3e8);
  }
  return auVar16;
}