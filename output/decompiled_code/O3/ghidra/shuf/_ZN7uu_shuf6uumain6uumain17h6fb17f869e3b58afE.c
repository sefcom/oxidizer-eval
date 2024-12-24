undefined  [16] __rustcall uu_shuf::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined auVar3 [16];
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined uVar9;
  undefined uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  code *pcVar14;
  bool bVar15;
  undefined auVar16 [16];
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  code *local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  code *local_468;
  long local_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  code *local_440;
  code *local_438;
  code *pcStack_430;
  code *local_428;
  code *pcStack_420;
  code *pcStack_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f0;
  code *local_3e8;
  code *local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  code *local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  code *local_3a0;
  code *local_398;
  code *local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  code *local_368;
  undefined8 local_360;
  code *local_358;
  code *local_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  code *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  code *local_308;
  code *pcStack_300;
  code *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined local_48 [24];
  
  (*(code *)PTR_uu_app_0023bde0)(&local_318);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_4b8,&local_318,param_1,param_2);
  if (local_4b8 == (code *)0x8000000000000000) {
    auVar16 = (*(code *)PTR_from_0023bde8)();
    return auVar16;
  }
  local_3b8 = local_488;
  local_3c8 = local_498;
  uStack_3c4 = uStack_494;
  uStack_3c0 = uStack_490;
  uStack_3bc = uStack_48c;
  local_3d8 = (undefined4)local_4a8;
  uStack_3d4 = local_4a8._4_4_;
  uStack_3d0 = uStack_4a0;
  uStack_3cc = uStack_49c;
  local_3e8 = local_4b8;
  local_3e0 = uStack_4b0;
                    /* try { // try from 0016fb2a to 0016fcaf has its CatchHandler @ 0017083f */
  cVar8 = (*(code *)PTR_get_flag_0023bdf8)
                    (&local_3e8,*(undefined8 *)PTR_ECHO_0023bdf0,
                     *(undefined8 *)(PTR_ECHO_0023bdf0 + 8));
  if (cVar8 == '\0') {
    uVar12 = *(undefined8 *)PTR_INPUT_RANGE_0023be08;
    uVar1 = *(undefined8 *)(PTR_INPUT_RANGE_0023be08 + 8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_318,&local_3e8,uVar12,uVar1);
    lVar11 = clap_builder::parser::error::MatchesError::unwrap(uVar12,uVar1,&local_318);
    if (lVar11 == 0) {
      uVar12 = *(undefined8 *)PTR_FILE_OR_ARGS_0023be00;
      uVar1 = *(undefined8 *)(PTR_FILE_OR_ARGS_0023be00 + 8);
                    /* try { // try from 0016fea2 to 0016fed7 has its CatchHandler @ 0017083f */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_318,&local_3e8,uVar12,uVar1);
      clap_builder::parser::error::MatchesError::unwrap(&local_4b8,uVar12,uVar1,&local_318);
      if (local_4b8 == (code *)0x0) {
        local_438 = core::ops::function::FnOnce::call_once;
        pcStack_430 = (code *)PTR_EMPTY_0023be18;
        local_428 = (code *)PTR_EMPTY_0023be18;
        pcStack_420 = (code *)0x0;
        uStack_410 = (code *)0x0;
        uStack_400 = 0;
      }
      else {
        pcStack_420 = (code *)CONCAT44(uStack_49c,uStack_4a0);
        pcStack_418 = (code *)CONCAT44(uStack_494,local_498);
        uStack_410 = (code *)CONCAT44(uStack_48c,uStack_490);
        local_408 = local_488;
        uStack_400 = uStack_480;
        local_428 = local_4a8;
        local_438 = local_4b8;
        pcStack_430 = uStack_4b0;
      }
                    /* try { // try from 00170364 to 00170386 has its CatchHandler @ 0017083f */
      lVar11 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
               ::next(&local_438);
      if (lVar11 == 0) {
        local_4d8 = (code *)0x8000000000000000;
      }
      else {
        (*(code *)PTR_clone_0023be60)(&local_318,lVar11);
        local_4c8 = local_308;
        local_4d8 = (code *)local_318;
        uStack_4d0 = uStack_310;
      }
                    /* try { // try from 001703a6 to 001703be has its CatchHandler @ 00170777 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_318,&DAT_001163c7,1);
      local_4a8 = local_308;
      local_4b8 = (code *)local_318;
      pcVar14 = local_4b8;
      uStack_4b0 = uStack_310;
      pcVar4 = uStack_4b0;
      if (local_4d8 == (code *)0x8000000000000000) {
        local_468 = local_308;
        local_4b8._0_4_ = SUB84(local_318,0);
        local_4b8._4_4_ = (undefined4)((ulong)local_318 >> 0x20);
        uStack_4b0._0_4_ = SUB84(uStack_310,0);
        uStack_4b0._4_4_ = (undefined4)((ulong)uStack_310 >> 0x20);
        local_478 = (undefined4)local_4b8;
        uStack_474 = local_4b8._4_4_;
        uStack_470 = (undefined4)uStack_4b0;
        uStack_46c = uStack_4b0._4_4_;
        local_4b8 = pcVar14;
        uStack_4b0 = pcVar4;
      }
      else {
        local_468 = local_4c8;
        local_478 = (undefined4)local_4d8;
        uStack_474 = local_4d8._4_4_;
        uStack_470 = (undefined4)uStack_4d0;
        uStack_46c = uStack_4d0._4_4_;
                    /* try { // try from 00170408 to 00170411 has its CatchHandler @ 00170710 */
        core::ptr::drop_in_place<alloc::string::String>(&local_4b8);
      }
                    /* try { // try from 00170412 to 001704c7 has its CatchHandler @ 001707ce */
      pcVar14 = (code *)_<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
                        ::next(&local_438);
      if (pcVar14 != (code *)0x0) {
        uStack_4b0 = _<&T_as_core::fmt::Display>::fmt;
        local_318 = &PTR_DAT_00234ed0;
        uStack_310 = (code *)0x2;
        local_2f8 = (code *)0x0;
        pcStack_300 = (code *)0x1;
        local_4d8 = pcVar14;
        local_4b8 = (code *)&local_4d8;
        local_308 = (code *)&local_4b8;
        core::option::Option<T>::map_or_else(&local_3b0,&local_318);
        pcStack_300 = (code *)CONCAT44(pcStack_300._4_4_,1);
        local_318 = (undefined **)CONCAT44(uStack_3ac,local_3b0);
        uStack_310 = (code *)CONCAT44(uStack_3a4,uStack_3a8);
        local_308 = local_3a0;
        uVar12 = ::alloc::boxed::Box<T>::new(&local_318);
                    /* try { // try from 001704c8 to 001704d4 has its CatchHandler @ 0017083f */
        core::ptr::drop_in_place<alloc::string::String>(&local_478);
        auVar16._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00234f28;
        auVar16._0_8_ = uVar12;
        goto LAB_00170673;
      }
      local_440 = local_468;
      local_450 = local_478;
      uStack_44c = uStack_474;
      uStack_448 = uStack_470;
      uStack_444 = uStack_46c;
      local_458 = 0;
    }
    else {
      (*(code *)PTR_parse_range_0023be10)
                (&local_4b8,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10));
      if (local_4b8 != (code *)0x0) {
        local_308 = (code *)CONCAT44(uStack_49c,uStack_4a0);
        local_318 = (undefined **)uStack_4b0;
        uStack_310 = local_4a8;
        pcStack_300 = (code *)CONCAT44(pcStack_300._4_4_,1);
        uVar12 = ::alloc::boxed::Box<T>::new(&local_318);
        auVar16._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00234e60;
        auVar16._0_8_ = uVar12;
        goto LAB_00170673;
      }
      local_440 = (code *)CONCAT44(uStack_49c,uStack_4a0);
      local_450 = (undefined4)uStack_4b0;
      uStack_44c = uStack_4b0._4_4_;
      uStack_448 = (undefined4)local_4a8;
      uStack_444 = local_4a8._4_4_;
      local_458 = 2;
    }
  }
  else {
    pcVar14 = *(code **)PTR_FILE_OR_ARGS_0023be00;
    uVar12 = *(undefined8 *)(PTR_FILE_OR_ARGS_0023be00 + 8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_318,&local_3e8,pcVar14,uVar12);
    clap_builder::parser::error::MatchesError::unwrap(&local_4b8,pcVar14,uVar12,&local_318);
    if (local_4b8 == (code *)0x0) {
      local_378 = 0;
      uStack_374 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      local_388 = SUB84(PTR_EMPTY_0023be18,0);
      uStack_384 = (undefined4)((ulong)PTR_EMPTY_0023be18 >> 0x20);
      uStack_380 = 0;
      uStack_37c = 0;
      local_398 = core::ops::function::FnOnce::call_once;
      local_360 = 0;
      local_390 = (code *)PTR_EMPTY_0023be18;
    }
    else {
      local_398 = local_4b8;
      local_390 = uStack_4b0;
      local_360 = uStack_480;
      pcVar14 = local_488;
      local_378 = local_498;
      uStack_374 = uStack_494;
      uStack_370 = uStack_490;
      uStack_36c = uStack_48c;
      local_388 = (undefined4)local_4a8;
      uStack_384 = local_4a8._4_4_;
      uStack_380 = uStack_4a0;
      uStack_37c = uStack_49c;
    }
    local_368 = pcVar14;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_318,&local_398);
    local_440 = local_308;
    local_450 = (undefined4)local_318;
    uStack_44c = local_318._4_4_;
    uStack_448 = (undefined4)uStack_310;
    uStack_444 = uStack_310._4_4_;
    local_458 = 1;
  }
  pcVar14 = *(code **)PTR_HEAD_COUNT_0023be20;
  uVar12 = *(undefined8 *)(PTR_HEAD_COUNT_0023be20 + 8);
                    /* try { // try from 0016fcea to 0016fe81 has its CatchHandler @ 001707ff */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_318,&local_3e8,pcVar14,uVar12);
  clap_builder::parser::error::MatchesError::unwrap(&local_4b8,pcVar14,uVar12,&local_318);
  if (local_4b8 == (code *)0x0) {
    local_498 = 0;
    uStack_494 = 0;
    uStack_490 = 0;
    uStack_48c = 0;
    local_348 = SUB84(PTR_EMPTY_0023be18,0);
    uStack_344 = (undefined4)((ulong)PTR_EMPTY_0023be18 >> 0x20);
    uStack_4a0 = 0;
    uStack_49c = 0;
    local_358 = core::ops::function::FnOnce::call_once;
    uStack_480 = 0;
    local_350 = (code *)PTR_EMPTY_0023be18;
  }
  else {
    local_358 = local_4b8;
    local_350 = uStack_4b0;
    pcVar14 = local_488;
    local_348 = (undefined4)local_4a8;
    uStack_344 = local_4a8._4_4_;
  }
  uStack_340 = uStack_4a0;
  uStack_33c = uStack_49c;
  local_338 = local_498;
  uStack_334 = uStack_494;
  uStack_330 = uStack_490;
  uStack_32c = uStack_48c;
  local_328 = pcVar14;
  local_320 = uStack_480;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_48,&local_358);
  (*(code *)PTR_parse_head_count_0023be28)(&local_478,local_48);
  uVar6 = uStack_46c;
  uVar5 = uStack_470;
  if (CONCAT44(uStack_474,local_478) == -0x8000000000000000) {
    pcVar14 = (code *)CONCAT44(uStack_46c,uStack_470);
    uVar12 = *(undefined8 *)PTR_OUTPUT_0023be30;
    uVar1 = *(undefined8 *)(PTR_OUTPUT_0023be30 + 8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_318,&local_3e8,uVar12,uVar1);
    lVar11 = clap_builder::parser::error::MatchesError::unwrap(uVar12,uVar1,&local_318);
    if (lVar11 == 0) {
      local_4d8 = (code *)0x8000000000000000;
    }
    else {
      core::ops::function::FnOnce::call_once(&local_318,lVar11);
      local_4c8 = local_308;
      local_4d8 = (code *)local_318;
      uStack_4d0 = uStack_310;
    }
    uVar12 = *(undefined8 *)PTR_RANDOM_SOURCE_0023be38;
    uVar1 = *(undefined8 *)(PTR_RANDOM_SOURCE_0023be38 + 8);
                    /* try { // try from 0016ff2f to 0016ff71 has its CatchHandler @ 001707ec */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_318,&local_3e8,uVar12);
    lVar11 = clap_builder::parser::error::MatchesError::unwrap(uVar12,uVar1,&local_318);
    if (lVar11 == 0) {
      local_4b8 = (code *)0x8000000000000000;
    }
    else {
      core::ops::function::FnOnce::call_once(&local_318,lVar11);
      local_4a8 = local_308;
      local_4b8 = (code *)local_318;
      uStack_4b0 = uStack_310;
    }
                    /* try { // try from 0016ffa1 to 0016ffcc has its CatchHandler @ 001707dd */
    uVar9 = (*(code *)PTR_get_flag_0023bdf8)
                      (&local_3e8,*(undefined8 *)PTR_REPEAT_0023be40,
                       *(undefined8 *)(PTR_REPEAT_0023be40 + 8));
    cVar8 = (*(code *)PTR_get_flag_0023bdf8)
                      (&local_3e8,*(undefined8 *)PTR_ZERO_TERMINATED_0023be48,
                       *(undefined8 *)(PTR_ZERO_TERMINATED_0023be48 + 8));
    uVar1 = uStack_400;
    pcVar4 = local_4a8;
    uVar10 = 10;
    if (cVar8 != '\0') {
      uVar10 = 0;
    }
    local_438 = local_4d8;
    pcStack_430 = uStack_4d0;
    local_428 = local_4c8;
    pcStack_420 = local_4b8;
    pcStack_418 = uStack_4b0;
    uStack_410 = local_4a8;
    uStack_400._0_2_ = CONCAT11(uVar10,uVar9);
    uVar7 = uStack_400;
    local_408 = pcVar14;
    if (pcVar14 == (code *)0x0) {
      if (local_4d8 == (code *)0x8000000000000000) {
        bVar15 = true;
        cVar8 = '\0';
        auVar16 = ZEXT816(0) << 0x40;
        goto LAB_001705b7;
      }
      local_308 = local_4c8;
      local_318 = (undefined **)local_4d8;
      uStack_310 = uStack_4d0;
                    /* try { // try from 00170534 to 00170552 has its CatchHandler @ 0017073a */
      std::fs::File::create(&local_4b8,uStack_4d0);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(&local_4d8,&local_4b8,&local_318);
      auVar16._8_8_ = uStack_4d0;
      auVar16._0_8_ = local_4d8;
      if (local_4d8 == (code *)0x0) {
        local_478 = (undefined4)uStack_4d0;
        core::ptr::drop_in_place<std::fs::File>(&local_478);
        core::ptr::drop_in_place<alloc::string::String>(&local_318);
        bVar15 = true;
        auVar16 = ZEXT816(0) << 0x40;
      }
      else {
                    /* try { // try from 0017056b to 001705a1 has its CatchHandler @ 00170787 */
        core::ptr::drop_in_place<alloc::string::String>(&local_318);
        bVar15 = true;
      }
LAB_0017062d:
                    /* try { // try from 0017062d to 00170639 has its CatchHandler @ 001707ff */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&pcStack_420);
      goto LAB_0017063a;
    }
    if (local_458 == 0) {
      local_468 = local_440;
      local_478 = local_450;
      uStack_474 = uStack_44c;
      uStack_470 = uStack_448;
      uStack_46c = uStack_444;
                    /* try { // try from 0017017f to 0017018c has its CatchHandler @ 00170722 */
      (*(code *)PTR_read_input_file_0023be58)(&local_318,CONCAT44(uStack_444,uStack_448));
      pcVar14 = local_308;
      auVar16._8_8_ = local_308;
      auVar16._0_8_ = uStack_310;
      bVar15 = local_318 != (undefined **)0x8000000000000000;
      if (bVar15) {
        local_4d8 = (code *)local_318;
        uStack_4d0 = uStack_310;
        local_4c8 = local_308;
        puVar13 = (undefined4 *)::alloc::alloc::Global::alloc_impl(8,0x10);
        if (puVar13 == (undefined4 *)0x0) {
                    /* try { // try from 001706d7 to 001706e6 has its CatchHandler @ 00170715 */
          (*(code *)PTR_handle_alloc_error_0023bd78)(8,0x10);
                    /* WARNING: Does not return */
          pcVar14 = (code *)invalidInstructionException();
          (*pcVar14)();
        }
        *puVar13 = (undefined4)uStack_4d0;
        puVar13[1] = uStack_4d0._4_4_;
        puVar13[2] = (undefined4)local_4c8;
        puVar13[3] = local_4c8._4_4_;
                    /* try { // try from 001701e2 to 001701f3 has its CatchHandler @ 00170715 */
        ::alloc::slice::hack::into_vec(&local_4b8,puVar13,1);
                    /* try { // try from 001701ff to 0017025d has its CatchHandler @ 00170701 */
        (*(code *)PTR_find_seps_0023be50)(&local_4b8,uStack_400._1_1_);
        local_2e8 = (undefined4)local_408;
        uStack_2e4 = local_408._4_4_;
        uStack_2e0 = (undefined4)uStack_400;
        uStack_2dc = uStack_400._4_4_;
        local_2f8 = pcStack_418;
        uStack_2f0 = (undefined4)uStack_410;
        uStack_2ec = uStack_410._4_4_;
        local_308 = local_428;
        pcStack_300 = pcStack_420;
        local_318 = (undefined **)local_438;
        uStack_310 = pcStack_430;
        auVar16 = shuf_exec(&local_4b8,&local_318);
        if (auVar16._0_8_ == 0) {
                    /* try { // try from 0017069a to 001706a3 has its CatchHandler @ 00170715 */
          core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(&local_4b8);
                    /* try { // try from 001706a6 to 001706ad has its CatchHandler @ 00170722 */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_4d8);
                    /* try { // try from 001706b2 to 001706c1 has its CatchHandler @ 00170787 */
          core::ptr::drop_in_place<alloc::string::String>(&local_478);
          goto LAB_001706c2;
        }
                    /* try { // try from 0017026f to 00170278 has its CatchHandler @ 00170715 */
        core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(&local_4b8);
                    /* try { // try from 0017027b to 00170282 has its CatchHandler @ 00170722 */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_4d8);
      }
      local_3f0 = CONCAT71((int7)((ulong)uVar12 >> 8),bVar15);
      core::ptr::drop_in_place<alloc::string::String>(&local_478);
      bVar15 = false;
      cVar8 = (char)local_3f0;
LAB_001705b7:
      if ((cVar8 == '\0') && (local_438 != (code *)0x8000000000000000)) {
                    /* try { // try from 001705c5 to 001705d1 has its CatchHandler @ 001706e9 */
        core::ptr::drop_in_place<alloc::string::String>(&local_438);
      }
      else if (cVar8 != '\0') goto LAB_0017063a;
      goto LAB_0017062d;
    }
    if ((int)local_458 != 1) {
      local_4a8 = local_440;
      uStack_410._0_4_ = SUB84(pcVar4,0);
      uStack_410._4_4_ = (undefined4)((ulong)pcVar4 >> 0x20);
      uStack_400._4_4_ = SUB84(uVar1,4);
      local_2e8 = uVar5;
      uStack_2e4 = uVar6;
      uStack_2e0 = (undefined4)uStack_400;
      uStack_2dc = uStack_400._4_4_;
      local_2f8 = uStack_4b0;
      uStack_2f0 = (undefined4)uStack_410;
      uStack_2ec = uStack_410._4_4_;
      local_308 = local_4c8;
      pcStack_300 = local_4b8;
      local_318 = (undefined **)local_4d8;
      uStack_310 = uStack_4d0;
                    /* try { // try from 001702ee to 00170305 has its CatchHandler @ 00170787 */
      local_4b8 = (code *)CONCAT44(uStack_44c,local_450);
      uStack_4b0 = (code *)CONCAT44(uStack_444,uStack_448);
      uStack_410 = pcVar4;
      uStack_400 = uVar7;
      auVar16 = shuf_exec(&local_4b8,&local_318);
      if (auVar16._0_8_ == 0) goto LAB_001706c2;
      goto LAB_0016fe8c;
    }
    local_4c8 = local_440;
    local_4d8 = (code *)CONCAT44(uStack_44c,local_450);
    uStack_4d0 = (code *)CONCAT44(uStack_444,uStack_448);
                    /* try { // try from 0017006f to 00170078 has its CatchHandler @ 00170752 */
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_4b8,uStack_4d0,uStack_4d0 + (long)local_440 * 0x18);
                    /* try { // try from 00170084 to 001700e2 has its CatchHandler @ 00170757 */
    (*(code *)PTR_find_seps_0023be50)(&local_4b8,uStack_400._1_1_);
    local_2e8 = (undefined4)local_408;
    uStack_2e4 = local_408._4_4_;
    uStack_2e0 = (undefined4)uStack_400;
    uStack_2dc = uStack_400._4_4_;
    local_2f8 = pcStack_418;
    uStack_2f0 = (undefined4)uStack_410;
    uStack_2ec = uStack_410._4_4_;
    local_308 = local_428;
    pcStack_300 = pcStack_420;
    local_318 = (undefined **)local_438;
    uStack_310 = pcStack_430;
    auVar16 = shuf_exec(&local_4b8,&local_318);
    if (auVar16._0_8_ == 0) {
                    /* try { // try from 001705dc to 001705e5 has its CatchHandler @ 00170752 */
      core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(&local_4b8);
                    /* try { // try from 001705eb to 00170626 has its CatchHandler @ 00170787 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_4d8);
LAB_001706c2:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3e8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = pcVar14;
      return auVar3 << 0x40;
    }
                    /* try { // try from 001700f4 to 001700fd has its CatchHandler @ 00170752 */
    core::ptr::drop_in_place<alloc::vec::Vec<&[u8]>>(&local_4b8);
                    /* try { // try from 00170103 to 0017010f has its CatchHandler @ 00170787 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_4d8);
    bVar2 = true;
    bVar15 = true;
  }
  else {
    local_308 = local_468;
    local_318 = (undefined **)CONCAT44(uStack_474,local_478);
    uStack_310 = (code *)CONCAT44(uStack_46c,uStack_470);
    pcStack_300 = (code *)CONCAT44(pcStack_300._4_4_,1);
    uVar12 = ::alloc::boxed::Box<T>::new(&local_318);
    auVar16._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00234e60;
    auVar16._0_8_ = uVar12;
LAB_0016fe8c:
    bVar15 = true;
LAB_0017063a:
    bVar2 = false;
  }
  if (local_458 == 0) {
    if (bVar15) {
      core::ptr::drop_in_place<alloc::string::String>(&local_450);
    }
  }
  else if (((int)local_458 == 1) && (!bVar2)) {
                    /* try { // try from 0017065a to 00170672 has its CatchHandler @ 0017083f */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_450);
  }
LAB_00170673:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3e8);
  return auVar16;
}