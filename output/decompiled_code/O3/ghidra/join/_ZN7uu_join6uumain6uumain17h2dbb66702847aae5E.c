undefined  [16] __rustcall uu_join::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined auVar10 [16];
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 local_518;
  undefined local_510 [8];
  undefined local_508;
  undefined7 uStack_507;
  undefined local_500;
  undefined7 uStack_4ff;
  undefined local_4f8 [16];
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  
  (*(code *)PTR_uu_app_00239fb8)(&local_460);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_180,&local_460,param_1,param_2);
  if (CONCAT44(uStack_17c,local_180) == -0x8000000000000000) {
    auVar10 = (*(code *)PTR_from_00239fc0)();
  }
  else {
    local_4c8 = local_150;
    local_4d8 = local_160;
    uStack_4d4 = uStack_15c;
    uStack_4d0 = uStack_158;
    uStack_4cc = uStack_154;
    local_4e8 = local_170;
    uStack_4e4 = uStack_16c;
    uStack_4e0 = uStack_168;
    uStack_4dc = uStack_164;
                    /* try { // try from 00175325 to 0017533a has its CatchHandler @ 001757b4 */
    (*(code *)PTR_parse_settings_00239fc8)(&local_460,local_4f8);
    local_570 = CONCAT44(uStack_45c,local_460);
    uStack_568 = CONCAT44(uStack_454,uStack_458);
    local_560 = CONCAT44(uStack_44c,uStack_450);
    auVar10._8_8_ = local_560;
    auVar10._0_8_ = uStack_568;
    if (local_570 != -0x8000000000000000) {
      local_518 = local_408;
      local_528 = (undefined4)local_418;
      uStack_524 = local_418._4_4_;
      uStack_520 = (undefined4)uStack_410;
      uStack_51c = uStack_410._4_4_;
      local_538 = local_428;
      uStack_534 = uStack_424;
      uStack_530 = (undefined4)uStack_420;
      uStack_52c = uStack_420._4_4_;
      uStack_548 = local_438;
      uStack_544 = uStack_434;
      uStack_540 = uStack_430;
      uStack_53c = uStack_42c;
      uStack_558 = uStack_448;
      uStack_554 = uStack_444;
      uStack_550 = uStack_440;
      uStack_54c = uStack_43c;
                    /* try { // try from 001753ac to 001754bc has its CatchHandler @ 001757b9 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_460,local_4f8,"file1",5);
      lVar6 = clap_builder::parser::error::MatchesError::unwrap("file1",5,&local_460);
      if (lVar6 == 0) {
        ppuVar9 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00233360;
LAB_00175786:
                    /* try { // try from 00175786 to 0017578b has its CatchHandler @ 001757b9 */
        (*(code *)PTR_unwrap_failed_00239ee8)(ppuVar9);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_460,local_4f8,"file2",5);
      lVar7 = clap_builder::parser::error::MatchesError::unwrap("file2",5,&local_460);
      if (lVar7 == 0) {
        ppuVar9 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00233378;
        goto LAB_00175786;
      }
      uVar8 = *(undefined8 *)(lVar6 + 8);
      uVar1 = *(undefined8 *)(lVar6 + 0x10);
      cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar8,uVar1,"-",1);
      if ((cVar5 == '\0') ||
         (cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),"-",1),
         cVar5 == '\0')) {
        switch(CONCAT44(uStack_53c,uStack_540) ^ 0x8000000000000000) {
        case 0:
          uStack_410 = CONCAT44(uStack_51c,uStack_520);
          local_408 = local_518;
          uStack_420 = CONCAT44(uStack_52c,uStack_530);
          local_418 = CONCAT44(uStack_524,local_528);
          uStack_430 = uStack_540;
          uStack_42c = uStack_53c;
          local_428 = local_538;
          uStack_424 = uStack_534;
          uStack_440 = uStack_550;
          uStack_43c = uStack_54c;
          local_438 = uStack_548;
          uStack_434 = uStack_544;
          uStack_450 = (undefined4)local_560;
          uStack_44c = local_560._4_4_;
          uStack_448 = uStack_558;
          uStack_444 = uStack_554;
          local_460 = (undefined4)local_570;
          uStack_45c = local_570._4_4_;
          uStack_458 = (undefined4)uStack_568;
          uStack_454 = uStack_568._4_4_;
                    /* try { // try from 00175553 to 0017563e has its CatchHandler @ 001757af */
          auVar10 = exec(uVar8,uVar1,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),
                         &local_460,local_538);
          break;
        default:
                    /* try { // try from 0017564a to 0017565b has its CatchHandler @ 001757b9 */
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_460,&uStack_540);
          uStack_4ff = (undefined7)(CONCAT44(uStack_44c,uStack_450) >> 8);
          uStack_507 = CONCAT43(uStack_454,uStack_458._1_3_);
          local_500 = (undefined)uStack_450;
          local_508 = (undefined)uStack_458;
          uVar2 = *(undefined8 *)(lVar7 + 8);
          uVar3 = *(undefined8 *)(lVar7 + 0x10);
          local_470 = CONCAT44(uStack_51c,uStack_520);
          uStack_468 = local_518;
          local_480 = CONCAT44(uStack_52c,uStack_530);
          uStack_478 = CONCAT44(uStack_524,local_528);
          local_490 = uStack_540;
          uStack_48c = uStack_53c;
          uStack_488 = local_538;
          uStack_484 = uStack_534;
          local_4a0 = uStack_550;
          uStack_49c = uStack_54c;
          uStack_498 = uStack_548;
          uStack_494 = uStack_544;
          local_4b0 = (undefined4)local_560;
          uStack_4ac = local_560._4_4_;
          uStack_4a8 = uStack_558;
          uStack_4a4 = uStack_554;
          local_4c0 = (undefined4)local_570;
          uStack_4bc = local_570._4_4_;
          uStack_4b8 = (undefined4)uStack_568;
          uStack_4b4 = uStack_568._4_4_;
          local_180 = CONCAT31(local_180._1_3_,1);
                    /* try { // try from 001756f0 to 00175709 has its CatchHandler @ 00175793 */
          memchr::memmem::FinderBuilder::build_forward_with_ranker(&local_460,&local_180,local_510);
          (*(code *)PTR_memcpy_00239e70)(&local_180,&local_460,0x120);
                    /* try { // try from 00175728 to 00175743 has its CatchHandler @ 0017578e */
          auVar10 = exec(uVar8,uVar1,uVar2,uVar3,&local_4c0,&local_180);
                    /* try { // try from 00175744 to 00175753 has its CatchHandler @ 001757af */
          core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_510);
          break;
        case 2:
          uStack_410 = CONCAT44(uStack_51c,uStack_520);
          local_408 = local_518;
          uStack_420 = CONCAT44(uStack_52c,uStack_530);
          local_418 = CONCAT44(uStack_524,local_528);
          uStack_430 = uStack_540;
          uStack_42c = uStack_53c;
          local_428 = local_538;
          uStack_424 = uStack_534;
          uStack_440 = uStack_550;
          uStack_43c = uStack_54c;
          local_438 = uStack_548;
          uStack_434 = uStack_544;
          uStack_450 = (undefined4)local_560;
          uStack_44c = local_560._4_4_;
          uStack_448 = uStack_558;
          uStack_444 = uStack_554;
          local_460 = (undefined4)local_570;
          uStack_45c = local_570._4_4_;
          uStack_458 = (undefined4)uStack_568;
          uStack_454 = uStack_568._4_4_;
          auVar10 = exec(uVar8,uVar1,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),
                         &local_460);
          break;
        case 3:
          uStack_410 = CONCAT44(uStack_51c,uStack_520);
          local_408 = local_518;
          uStack_420 = CONCAT44(uStack_52c,uStack_530);
          local_418 = CONCAT44(uStack_524,local_528);
          uStack_430 = uStack_540;
          uStack_42c = uStack_53c;
          local_428 = local_538;
          uStack_424 = uStack_534;
          uStack_440 = uStack_550;
          uStack_43c = uStack_54c;
          local_438 = uStack_548;
          uStack_434 = uStack_544;
          uStack_450 = (undefined4)local_560;
          uStack_44c = local_560._4_4_;
          uStack_448 = uStack_558;
          uStack_444 = uStack_554;
          local_460 = (undefined4)local_570;
          uStack_45c = local_570._4_4_;
          uStack_458 = (undefined4)uStack_568;
          uStack_454 = uStack_568._4_4_;
          auVar10 = exec(uVar8,uVar1,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),
                         &local_460);
        }
      }
      else {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_180);
        uStack_450 = local_170;
        uStack_44c = uStack_16c;
        local_460 = local_180;
        uStack_45c = uStack_17c;
        uStack_458 = uStack_178;
        uStack_454 = uStack_174;
        uStack_448 = 1;
        uVar8 = ::alloc::boxed::Box<T>::new(&local_460);
                    /* try { // try from 001754bd to 001754c9 has its CatchHandler @ 001757b4 */
        core::ptr::drop_in_place<uu_join::Settings>(&local_570);
        auVar10._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002333c8;
        auVar10._0_8_ = uVar8;
      }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_4f8);
  }
  return auVar10;
}