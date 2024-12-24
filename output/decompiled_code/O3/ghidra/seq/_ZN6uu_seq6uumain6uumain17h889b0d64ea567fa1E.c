undefined  [16] __rustcall uu_seq::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined auVar13 [16];
  undefined local_550 [8];
  long *local_548;
  ulong local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  long local_4a8;
  long lStack_4a0;
  long local_498;
  long lStack_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  long local_478;
  long lStack_470;
  long local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_448;
  undefined8 uStack_440;
  long local_438;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  long local_420;
  long local_418;
  undefined8 local_410;
  undefined local_408;
  long local_400;
  long local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  long local_3b8;
  long lStack_3b0;
  long local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  long local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  long local_310;
  long lStack_308;
  long local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (*(code *)PTR_uu_app_0024b450)(&local_348);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_538,&local_348,param_1,param_2);
  if (local_538 == -0x8000000000000000) {
    auVar13 = (*(code *)PTR_from_0024b458)();
    return auVar13;
  }
  local_3d0 = local_508;
  local_3e0 = (undefined4)local_518;
  uStack_3dc = local_518._4_4_;
  uStack_3d8 = (undefined4)uStack_510;
  uStack_3d4 = uStack_510._4_4_;
  local_3f0 = (undefined4)local_528;
  uStack_3ec = local_528._4_4_;
  uStack_3e8 = (undefined4)uStack_520;
  uStack_3e4 = uStack_520._4_4_;
  local_400 = local_538;
  local_3f8 = uStack_530;
                    /* try { // try from 0017a60f to 0017a6b1 has its CatchHandler @ 0017af57 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_348,&local_400,"numbers",7);
  clap_builder::parser::error::MatchesError::unwrap(&local_388,"numbers",7,&local_348);
  if (CONCAT44(uStack_384,local_388) == 0) {
    local_348 = -0x7fffffffffffffff;
                    /* try { // try from 0017a706 to 0017a712 has its CatchHandler @ 0017af57 */
    uVar6 = ::alloc::boxed::Box<T>::new(&local_348);
    ppuVar11 = &PTR_drop_in_place<uu_seq_error_SeqError>_002437e0;
    goto LAB_0017abcf;
  }
  local_78 = local_388;
  uStack_74 = uStack_384;
  uStack_70 = uStack_380;
  uStack_6c = uStack_37c;
  local_68 = local_378;
  uStack_64 = uStack_374;
  uStack_60 = uStack_370;
  uStack_5c = uStack_36c;
  local_58 = local_368;
  uStack_54 = uStack_364;
  uStack_50 = uStack_360;
  uStack_4c = uStack_35c;
  local_48 = local_358;
  uStack_44 = uStack_354;
  uStack_40 = uStack_350;
  uStack_3c = uStack_34c;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_550,&local_78);
                    /* try { // try from 0017a6b2 to 0017a6eb has its CatchHandler @ 0017af48 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_348,&local_400,"separator",9);
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("separator",9,&local_348);
  if (lVar5 == 0) {
    pcVar9 = (char *)0x0;
    uVar6 = 0;
  }
  else {
    pcVar9 = *(char **)(lVar5 + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x10);
  }
  uVar7 = 1;
  if (pcVar9 != (char *)0x0) {
    uVar7 = uVar6;
  }
  if (pcVar9 == (char *)0x0) {
    pcVar9 = "\n";
  }
                    /* try { // try from 0017a73b to 0017a747 has its CatchHandler @ 0017af48 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,pcVar9,uVar7);
  local_4d8 = local_338;
  local_4e8 = (undefined4)local_348;
  uStack_4e4 = local_348._4_4_;
  uStack_4e0 = (undefined4)uStack_340;
  uStack_4dc = uStack_340._4_4_;
                    /* try { // try from 0017a765 to 0017a7cf has its CatchHandler @ 0017af39 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_348,&local_400,"terminator");
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("terminator",10,&local_348);
  if (lVar5 == 0) {
    pcVar9 = (char *)0x0;
    uVar6 = 0;
  }
  else {
    pcVar9 = *(char **)(lVar5 + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x10);
  }
  pcVar10 = "\n";
  uVar7 = 1;
  if (pcVar9 != (char *)0x0) {
    pcVar10 = pcVar9;
    uVar7 = uVar6;
  }
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,pcVar10,uVar7);
  local_528 = local_338;
  local_538 = local_348;
  uStack_530 = uStack_340;
                    /* try { // try from 0017a7ea to 0017a83f has its CatchHandler @ 0017af2a */
  uVar3 = (*(code *)PTR_get_flag_0024b460)(&local_400,"equal-width",0xb);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_348,&local_400,"format");
  lVar5 = clap_builder::parser::error::MatchesError::unwrap("format",6,&local_348);
  if (lVar5 == 0) {
    local_418 = 0;
    local_410 = 0;
  }
  else {
    local_418 = *(long *)(lVar5 + 8);
    local_410 = *(undefined8 *)(lVar5 + 0x10);
  }
  local_438 = local_4d8;
  local_448 = CONCAT44(uStack_4e4,local_4e8);
  uStack_440 = CONCAT44(uStack_4dc,uStack_4e0);
  local_430 = (undefined4)local_538;
  uStack_42c = local_538._4_4_;
  uStack_428 = (undefined4)uStack_530;
  uStack_424 = uStack_530._4_4_;
  local_420 = local_528;
  local_408 = uVar3;
  if (local_540 < 2) {
    (*(code *)PTR_one_0024b478)(&local_3c8);
    if (local_540 < 3) goto LAB_0017aa2d;
LAB_0017a951:
                    /* try { // try from 0017a962 to 0017aa3a has its CatchHandler @ 0017aef4 */
    (*(code *)PTR_from_str_0024b468)
              (&local_348,*(undefined8 *)(local_548[1] + 8),*(undefined8 *)(local_548[1] + 0x10));
    if (local_348 != -0x7ffffffffffffffc) {
      local_458 = local_318;
      local_468 = local_328;
      uStack_460 = uStack_320;
      local_478 = local_338;
      lStack_470 = uStack_330;
      local_488 = (undefined4)local_348;
      uStack_484 = local_348._4_4_;
      uStack_480 = (undefined4)uStack_340;
      uStack_47c = uStack_340._4_4_;
      goto LAB_0017aa7d;
    }
    if (local_540 < 2) {
                    /* try { // try from 0017aeac to 0017aebd has its CatchHandler @ 0017aef4 */
      (*(code *)PTR_panic_bounds_check_0024b2f8)(1,local_540,&DAT_002439d0);
      goto LAB_0017aed0;
    }
    (*(code *)PTR_clone_0024b470)(&local_4e8,local_548[1]);
    local_528 = local_4d8;
    local_538 = CONCAT44(uStack_4e4,local_4e8);
    uStack_530 = CONCAT44(uStack_4dc,uStack_4e0);
    uStack_520 = CONCAT71(uStack_520._1_7_,(undefined)uStack_340);
    uVar6 = ::alloc::boxed::Box<T>::new(&local_538);
    ppuVar11 = &PTR_drop_in_place<uu_seq_error_SeqError>_002437e0;
LAB_0017abab:
                    /* try { // try from 0017abab to 0017abb7 has its CatchHandler @ 0017af18 */
    core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&local_3c8);
  }
  else {
                    /* try { // try from 0017a8bc to 0017a944 has its CatchHandler @ 0017af18 */
    (*(code *)PTR_from_str_0024b468)
              (&local_348,*(undefined8 *)(*local_548 + 8),*(undefined8 *)(*local_548 + 0x10));
    if (local_348 != -0x7ffffffffffffffc) {
      local_398 = local_318;
      local_3c8 = (undefined4)local_348;
      uStack_3c4 = local_348._4_4_;
      uStack_3c0 = (undefined4)uStack_340;
      uStack_3bc = uStack_340._4_4_;
      local_3b8 = local_338;
      lStack_3b0 = uStack_330;
      local_3a8 = local_328;
      uStack_3a0 = uStack_320;
      if (2 < local_540) goto LAB_0017a951;
LAB_0017aa2d:
      (*(code *)PTR_one_0024b478)(&local_488);
LAB_0017aa7d:
      lVar5 = 0;
      if (CONCAT44(uStack_484,local_488) < -0x7ffffffffffffffc) {
        lVar5 = CONCAT44(uStack_484,local_488) + -0x7fffffffffffffff;
      }
      if (lVar5 == 0) {
        if ((char)lStack_470 != '\x01') goto LAB_0017ab03;
LAB_0017aaa2:
        if (1 < local_540) {
                    /* try { // try from 0017aaba to 0017ab93 has its CatchHandler @ 0017aef9 */
          (*(code *)PTR_clone_0024b470)(&local_538,local_548[1]);
          uStack_330 = local_528;
          local_348 = -0x8000000000000000;
          uVar6 = ::alloc::boxed::Box<T>::new(&local_348);
LAB_0017ab94:
          ppuVar11 = &PTR_drop_in_place<uu_seq_error_SeqError>_002437e0;
LAB_0017ab9e:
                    /* try { // try from 0017ab9e to 0017abaa has its CatchHandler @ 0017aef4 */
          core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&local_488);
          goto LAB_0017abab;
        }
        puVar8 = &DAT_00243790;
        uVar12 = 1;
      }
      else {
        if (lVar5 == 3) goto LAB_0017aaa2;
LAB_0017ab03:
        uVar12 = local_540 - 1;
        if (local_540 != 0) {
          (*(code *)PTR_from_str_0024b468)
                    (&local_348,*(undefined8 *)(local_548[uVar12] + 8),
                     *(undefined8 *)(local_548[uVar12] + 0x10));
          if (local_348 == -0x7ffffffffffffffc) {
            if (local_540 <= uVar12) {
              puVar8 = &DAT_002439b8;
              goto LAB_0017aec7;
            }
            (*(code *)PTR_clone_0024b470)(&local_4a8,local_548[uVar12]);
            local_528 = local_498;
            local_538 = local_4a8;
            uStack_530 = lStack_4a0;
            uStack_520 = CONCAT71(uStack_520._1_7_,(undefined)uStack_340);
            uVar6 = ::alloc::boxed::Box<T>::new(&local_538);
            goto LAB_0017ab94;
          }
          local_4b8 = local_318;
          local_4c8 = (undefined4)local_328;
          uStack_4c4 = local_328._4_4_;
          uStack_4c0 = (undefined4)uStack_320;
          uStack_4bc = uStack_320._4_4_;
          local_4d8 = local_338;
          uStack_4d0 = (undefined4)uStack_330;
          uStack_4cc = uStack_330._4_4_;
          local_4e8 = (undefined4)local_348;
          uStack_4e4 = local_348._4_4_;
          uStack_4e0 = (undefined4)uStack_340;
          uStack_4dc = uStack_340._4_4_;
          uVar6 = core::cmp::max_by(uStack_3a0,uStack_460);
          uVar6 = core::cmp::max_by(uVar6,CONCAT44(uStack_4bc,uStack_4c0));
          uVar7 = core::cmp::max_by(local_398,local_458);
          if (local_418 == 0) {
            local_348 = -0x8000000000000000;
LAB_0017ad43:
            local_328 = local_3a8;
            uStack_340 = CONCAT44(uStack_3bc,uStack_3c0);
            local_338 = local_3b8;
            uStack_330 = lStack_3b0;
            uStack_320 = CONCAT44(uStack_484,local_488);
            local_318 = CONCAT44(uStack_47c,uStack_480);
            local_310 = local_478;
            lStack_308 = lStack_470;
            local_300 = local_468;
            local_2f8 = local_4e8;
            uStack_2f4 = uStack_4e4;
            uStack_2f0 = uStack_4e0;
            uStack_2ec = uStack_4dc;
            local_2e8 = (undefined4)local_4d8;
            uStack_2e4 = local_4d8._4_4_;
            uStack_2e0 = uStack_4d0;
            uStack_2dc = uStack_4cc;
            local_2d8 = CONCAT44(uStack_4c4,local_4c8);
                    /* try { // try from 0017adfd to 0017ae19 has its CatchHandler @ 0017aed6 */
            local_538 = local_348;
            local_348 = CONCAT44(uStack_3c4,local_3c8);
            lVar5 = (*(code *)PTR_print_seq_0024b480)
                              (&local_348,uVar7,uStack_440,local_438,CONCAT44(uStack_424,uStack_428)
                               ,local_420,local_408,uVar6,&local_538);
            if (lVar5 != 0) {
              cVar4 = std::io::error::Error::kind(lVar5);
              if (cVar4 != '\v') {
                uVar6 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                        ::map_err_context(lVar5);
                goto LAB_0017ae45;
              }
                    /* try { // try from 0017ae2e to 0017ae41 has its CatchHandler @ 0017aed2 */
              core::ptr::drop_in_place<std::io::error::Error>(lVar5);
            }
            uVar6 = 0;
LAB_0017ae45:
                    /* try { // try from 0017ae45 to 0017ae4e has its CatchHandler @ 0017aed4 */
            core::ptr::
            drop_in_place<core::option::Option<uucore::features::format::Format<uucore::features::format::num_format::Float>>>
                      (&local_538);
                    /* try { // try from 0017ae4f to 0017ae5b has its CatchHandler @ 0017af48 */
            core::ptr::drop_in_place<uu_seq::SeqOptions>(&local_448);
                    /* try { // try from 0017ae5c to 0017ae65 has its CatchHandler @ 0017af57 */
            core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(local_550);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                      (&local_400);
            auVar13._8_8_ = &PTR_drop_in_place<uucore_mods_error_UIoError>_002438a0;
            auVar13._0_8_ = uVar6;
            return auVar13;
          }
                    /* try { // try from 0017ac8a to 0017acf0 has its CatchHandler @ 0017aee5 */
          uucore::features::format::Format<F>::parse(&local_348,local_418,local_410);
          local_4a8 = uStack_340;
          lStack_4a0 = local_338;
          local_498 = uStack_330;
          lStack_490 = local_328;
          if (local_348 != -0x8000000000000000) {
            local_500 = local_310;
            uStack_4f8 = lStack_308;
            uStack_510 = uStack_320;
            local_508 = local_318;
            uStack_530 = uStack_340;
            local_528 = local_338;
            uStack_520 = uStack_330;
            local_518 = local_328;
            goto LAB_0017ad43;
          }
          uStack_330 = local_328;
          local_348 = uStack_340;
          uVar6 = ::alloc::boxed::Box<T>::new(&local_348);
                    /* try { // try from 0017acf1 to 0017acfd has its CatchHandler @ 0017aef9 */
          core::ptr::drop_in_place<uu_seq::number::PreciseNumber>(&local_4e8);
          ppuVar11 = &PTR_drop_in_place<uucore_features_format_FormatError>_00243948;
          goto LAB_0017ab9e;
        }
        local_540 = 0;
        puVar8 = &DAT_00243850;
      }
LAB_0017aec7:
                    /* try { // try from 0017aec7 to 0017aecf has its CatchHandler @ 0017aef9 */
      (*(code *)PTR_panic_bounds_check_0024b2f8)(uVar12,local_540,puVar8);
LAB_0017aed0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_540 == 0) {
                    /* try { // try from 0017ae99 to 0017aea9 has its CatchHandler @ 0017af18 */
      (*(code *)PTR_panic_bounds_check_0024b2f8)(0,0,&DAT_002439e8);
      goto LAB_0017aed0;
    }
    (*(code *)PTR_clone_0024b470)(&local_4e8,*local_548);
    local_528 = local_4d8;
    local_538 = CONCAT44(uStack_4e4,local_4e8);
    uStack_530 = CONCAT44(uStack_4dc,uStack_4e0);
    uStack_520 = CONCAT71(uStack_520._1_7_,(undefined)uStack_340);
    uVar6 = ::alloc::boxed::Box<T>::new(&local_538);
    ppuVar11 = &PTR_drop_in_place<uu_seq_error_SeqError>_002437e0;
  }
                    /* try { // try from 0017abb8 to 0017abc4 has its CatchHandler @ 0017af48 */
  core::ptr::drop_in_place<uu_seq::SeqOptions>(&local_448);
                    /* try { // try from 0017abc5 to 0017abce has its CatchHandler @ 0017af57 */
  core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(local_550);
LAB_0017abcf:
  auVar2._8_8_ = ppuVar11;
  auVar2._0_8_ = uVar6;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_400);
  return auVar2;
}