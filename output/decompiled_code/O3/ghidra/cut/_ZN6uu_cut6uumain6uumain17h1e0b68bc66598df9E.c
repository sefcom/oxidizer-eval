/* WARNING: Removing unreachable block (ram,0x0016e376) */
/* WARNING: Removing unreachable block (ram,0x0016e421) */
/* WARNING: Removing unreachable block (ram,0x0016e8c0) */

long __rustcall uu_cut::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  byte bVar13;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  long local_4e8;
  long lStack_4e0;
  long local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  long local_468;
  long lStack_460;
  long local_450;
  long local_448;
  long local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined *local_3d8;
  undefined8 local_3d0;
  long local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  long local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  long local_370;
  long local_368;
  long local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  long local_340;
  code *local_338;
  undefined *local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  long local_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  long local_2b8;
  long lStack_2b0;
  
  core::iter::traits::iterator::Iterator::collect(&local_3c0,param_1,param_2);
  uVar2 = local_3b0;
  uVar1 = CONCAT44(uStack_3b4,uStack_3b8);
                    /* try { // try from 0016df24 to 0016df3d has its CatchHandler @ 0016ea14 */
  (*(code *)PTR_to_owned_0022de28)(&local_2f8,"-d=",3);
  local_498 = local_2e8;
  local_4a8 = local_2f8;
  uStack_4a0._0_4_ = (undefined4)uStack_2f0;
  uStack_4a0._4_4_ = uStack_2f0._4_4_;
                    /* try { // try from 0016df58 to 0016df67 has its CatchHandler @ 0016ea05 */
  uVar3 = _<T_as_core::slice::cmp::SliceContains>::slice_contains(&local_4a8,uVar1,uVar2);
                    /* try { // try from 0016df68 to 0016df82 has its CatchHandler @ 0016ea14 */
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_4a8);
  (*(code *)PTR_uu_app_0022de30)(&local_2f8);
  local_4e8 = local_3b0;
  local_4f8 = CONCAT44(uStack_3bc,local_3c0);
  uStack_4f0 = CONCAT44(uStack_3b4,uStack_3b8);
  clap_builder::builder::command::Command::try_get_matches_from(&local_4a8,&local_2f8,&local_4f8);
  if (local_4a8 == -0x8000000000000000) {
    lVar7 = (*(code *)PTR_from_0022de38)();
    return lVar7;
  }
  local_410 = local_478;
  local_420 = (undefined4)local_488;
  uStack_41c = local_488._4_4_;
  uStack_418 = (undefined4)uStack_480;
  uStack_414 = uStack_480._4_4_;
  local_430 = (undefined4)local_498;
  uStack_42c = local_498._4_4_;
  uStack_428 = (undefined4)uStack_490;
  uStack_424 = uStack_490._4_4_;
  local_440 = local_4a8;
  local_438 = (undefined4)uStack_4a0;
  uStack_434 = uStack_4a0._4_4_;
                    /* try { // try from 0016e015 to 0016e068 has its CatchHandler @ 0016ea26 */
  uVar4 = (*(code *)PTR_get_flag_0022de40)(&local_440,"complement",10);
  uVar5 = (*(code *)PTR_get_flag_0022de40)(&local_440,"only-delimited",0xe);
  (*(code *)PTR_get_delimiters_0022de48)(&local_2f8,&local_440,uVar3);
  lVar7 = uStack_2f0;
  if (local_2f8 != 0) {
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_440);
    return uStack_2f0;
  }
  local_3c8 = local_2e8;
  local_450 = lStack_2e0;
  local_448 = lStack_2d8;
                    /* try { // try from 0016e0cc to 0016e447 has its CatchHandler @ 0016ea26 */
  cVar6 = (*(code *)PTR_get_flag_0022de40)(&local_440,"zero-terminated",0xf);
  uVar3 = 10;
  if (cVar6 != '\0') {
    uVar3 = 0;
  }
  (*(code *)PTR_indices_of_0022de50)(&local_408,&local_440,"bytes",5);
  (*(code *)PTR_indices_of_0022de50)(&local_4f8,&local_440,"characters",10);
  (*(code *)PTR_indices_of_0022de50)(&local_4a8,&local_440,"fields",6);
  local_2e8 = local_3f8;
  local_2f8 = CONCAT44(uStack_404,local_408);
  uStack_2f0 = CONCAT44(uStack_3fc,uStack_400);
  lStack_2e0 = local_4f8;
  lStack_2d8 = uStack_4f0;
  uStack_2d0 = local_4e8;
  local_2c8 = (int)local_4a8;
  uStack_2c4 = local_4a8._4_4_;
  uStack_2c0 = (undefined4)uStack_4a0;
  uStack_2bc = uStack_4a0._4_4_;
  local_2b8 = local_498;
  local_380 = local_408;
  uStack_37c = uStack_404;
  uStack_378 = uStack_400;
  uStack_374 = uStack_3fc;
  local_350 = (int)local_4a8;
  uStack_34c = local_4a8._4_4_;
  uStack_348 = (undefined4)uStack_4a0;
  uStack_344 = uStack_4a0._4_4_;
  local_340 = local_498;
  local_370 = local_3f8;
  local_368 = local_4f8;
  local_360 = uStack_4f0;
  local_358 = local_4e8;
  local_390 = 0;
  local_388 = 3;
  lVar8 = _<core::array::iter::IntoIter<T,_>as_core::iter::traits::iterator::Iterator>::fold
                    (&local_390);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,&local_440,"bytes",5);
  lVar9 = clap_builder::parser::error::MatchesError::unwrap("bytes",5,&local_2f8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,&local_440,"characters",10);
  lVar10 = clap_builder::parser::error::MatchesError::unwrap("characters",10,&local_2f8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,&local_440,"fields",6);
  lVar11 = clap_builder::parser::error::MatchesError::unwrap("fields",6,&local_2f8);
  if (lVar8 == 0) goto LAB_0016e541;
  if (lVar8 == 1) {
    if (lVar9 != 0) {
      if (lVar10 == 0 && lVar11 == 0) {
        (*(code *)PTR_list_to_ranges_0022de58)
                  (&local_2f8,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),uVar4);
        if (local_2f8 != 0) goto LAB_0016e45f;
        lStack_4b0 = lStack_2e0;
        uStack_4c0 = uStack_2f0;
        lStack_4b8 = local_2e8;
        uStack_4d0 = CONCAT31(uStack_4d0._1_3_,2);
        local_4c8 = CONCAT31(local_4c8._1_3_,uVar3);
        local_4f8 = 0;
LAB_0016e483:
        local_2f8 = local_4f8;
        uStack_2f0 = local_450;
        local_2b8 = lStack_4b8;
        lStack_2b0 = lStack_4b0;
        local_2c8 = local_4c8;
        uStack_2c4 = uStack_4c4;
        uStack_2c0 = (undefined4)uStack_4c0;
        uStack_2bc = uStack_4c0._4_4_;
        lStack_2d8 = local_4d8;
        uStack_2d0 = CONCAT44(uStack_4cc,uStack_4d0);
        local_2e8 = local_448;
        lStack_2e0 = lStack_4e0;
        uStack_4f0 = local_450;
        local_4e8 = local_448;
        if (local_4f8 == 0) {
                    /* try { // try from 0016e7e6 to 0016e8fb has its CatchHandler @ 0016e988 */
          cVar6 = (*(code *)PTR_contains_id_0022de60)(&local_440,"delimiter",9);
          if (cVar6 == '\0') {
            cVar6 = (*(code *)PTR_get_flag_0022de40)(&local_440,"whitespace-delimited",0x14);
            if (cVar6 == '\0') {
              cVar6 = (*(code *)PTR_get_flag_0022de40)(&local_440,"only-delimited",0xe);
              goto LAB_0016e8df;
            }
LAB_0016e844:
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                      (&local_408,
                       "invalid input: The \'-w\' option only usable if printing a sequence of fields"
                       ,0x4b);
          }
          else {
LAB_0016e804:
            _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                      (&local_408,
                       "invalid input: The \'--delimiter\' (\'-d\') option only usable if printing a sequence of fields"
                       ,0x5b);
          }
LAB_0016e8fc:
          uStack_490 = local_3f8;
          uStack_4a0 = CONCAT44(uStack_404,local_408);
          local_498 = CONCAT44(uStack_3fc,uStack_400);
          local_4a8 = 3;
                    /* try { // try from 0016e91f to 0016e92b has its CatchHandler @ 0016e983 */
          core::ptr::drop_in_place<uu_cut::Mode>(&local_2f8);
        }
        else {
          if ((int)local_4f8 == 1) {
                    /* try { // try from 0016e4de to 0016e53b has its CatchHandler @ 0016e988 */
            cVar6 = (*(code *)PTR_contains_id_0022de60)(&local_440,"delimiter",9);
            if (cVar6 != '\0') goto LAB_0016e804;
            cVar6 = (*(code *)PTR_get_flag_0022de40)(&local_440,"whitespace-delimited",0x14);
            if (cVar6 != '\0') goto LAB_0016e844;
            cVar6 = (*(code *)PTR_get_flag_0022de40)(&local_440,"only-delimited",0xe);
LAB_0016e8df:
            if (cVar6 != '\0') {
              _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                        (&local_408,
                         "invalid input: The \'--only-delimited\' (\'-s\') option only usable if printing a sequence of fields"
                         ,0x60);
              goto LAB_0016e8fc;
            }
          }
          local_468 = local_2b8;
          lStack_460 = lStack_2b0;
          local_478 = CONCAT44(uStack_2c4,local_2c8);
          uStack_470 = CONCAT44(uStack_2bc,uStack_2c0);
          local_488 = lStack_2d8;
          uStack_480 = uStack_2d0;
          local_498 = local_2e8;
          uStack_490 = lStack_2e0;
          local_4a8 = local_2f8;
          uStack_4a0 = uStack_2f0;
        }
        bVar13 = 1;
        goto LAB_0016e5d1;
      }
LAB_0016e541:
                    /* try { // try from 0016e541 to 0016e559 has its CatchHandler @ 0016ea26 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                (&local_2f8,
                 "invalid usage: expects one of --fields (-f), --chars (-c) or --bytes (-b)",0x49);
      goto LAB_0016e55a;
    }
    if (lVar10 == 0) {
      if (lVar11 != 0) {
        (*(code *)PTR_list_to_ranges_0022de58)
                  (&local_2f8,*(undefined8 *)(lVar11 + 8),*(undefined8 *)(lVar11 + 0x10),uVar4);
        if (local_2f8 != 0) goto LAB_0016e45f;
        lStack_4b0 = lStack_2e0;
        uStack_4c0 = uStack_2f0;
        lStack_4b8 = local_2e8;
        local_4d8 = local_3c8;
        uStack_4d0 = CONCAT31(uStack_4d0._1_3_,uVar5);
        local_4c8 = CONCAT31(local_4c8._1_3_,uVar3);
        local_4f8 = 2;
        lStack_4e0 = lVar7;
        goto LAB_0016e483;
      }
      goto LAB_0016e541;
    }
    if (lVar11 != 0) goto LAB_0016e541;
    (*(code *)PTR_list_to_ranges_0022de58)
              (&local_2f8,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),uVar4);
    if (local_2f8 == 0) {
      lStack_4b0 = lStack_2e0;
      uStack_4c0 = uStack_2f0;
      lStack_4b8 = local_2e8;
      uStack_4d0 = CONCAT31(uStack_4d0._1_3_,2);
      local_4c8 = CONCAT31(local_4c8._1_3_,uVar3);
      local_4f8 = 1;
      goto LAB_0016e483;
    }
LAB_0016e45f:
    lStack_4e0 = lStack_2e0;
    uStack_4f0 = uStack_2f0;
    local_4e8 = local_2e8;
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (&local_2f8,
               "invalid usage: expects no more than one of --fields (-f), --chars (-c) or --bytes (-b)"
               ,0x56);
LAB_0016e55a:
    lStack_4e0 = local_2e8;
    uStack_4f0 = local_2f8;
    local_4e8 = uStack_2f0;
  }
  local_4f8 = 3;
  local_468 = lStack_4b8;
  lStack_460 = lStack_4b0;
  local_478 = CONCAT44(uStack_4c4,local_4c8);
  uStack_470 = uStack_4c0;
  local_488 = local_4d8;
  uStack_480 = CONCAT44(uStack_4cc,uStack_4d0);
  local_498 = local_4e8;
  uStack_490 = lStack_4e0;
  local_4a8 = 3;
  uStack_4a0 = uStack_4f0;
  bVar13 = 0;
LAB_0016e5d1:
                    /* try { // try from 0016e5d4 to 0016e6b2 has its CatchHandler @ 0016e9c6 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2f8,&local_440,&DAT_00114b54,4);
  puVar12 = &DAT_00114b54;
  clap_builder::parser::error::MatchesError::unwrap(&local_408,&DAT_00114b54,4,&local_2f8);
  local_338 = (code *)CONCAT44(uStack_404,local_408);
  if (local_338 == (code *)0x0) {
    local_3e8 = 0;
    uStack_3e4 = 0;
    uStack_3e0 = 0;
    uStack_3dc = 0;
    local_328 = SUB84(PTR_EMPTY_0022de68,0);
    uStack_324 = (undefined4)((ulong)PTR_EMPTY_0022de68 >> 0x20);
    uStack_3f0 = 0;
    uStack_3ec = 0;
    local_338 = core::ops::function::FnOnce::call_once;
    local_3d0 = 0;
    local_330 = PTR_EMPTY_0022de68;
  }
  else {
    local_330 = (undefined *)CONCAT44(uStack_3fc,uStack_400);
    puVar12 = local_3d8;
    local_328 = (undefined4)local_3f8;
    uStack_324 = local_3f8._4_4_;
  }
  uStack_320 = uStack_3f0;
  uStack_31c = uStack_3ec;
  local_318 = local_3e8;
  uStack_314 = uStack_3e4;
  uStack_310 = uStack_3e0;
  uStack_30c = uStack_3dc;
  local_308 = puVar12;
  local_300 = local_3d0;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_3a8,&local_338);
  if ((int)local_4a8 == 3) {
    local_2e8 = uStack_490;
    local_2f8 = uStack_4a0;
    uStack_2f0 = local_498;
    lStack_2e0 = CONCAT44(lStack_2e0._4_4_,1);
                    /* try { // try from 0016e6df to 0016e6eb has its CatchHandler @ 0016e9b4 */
    lVar7 = ::alloc::boxed::Box<T>::new(&local_2f8);
                    /* try { // try from 0016e6f2 to 0016e6fe has its CatchHandler @ 0016e9c6 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3a8);
  }
  else {
    local_2b8 = local_468;
    lStack_2b0 = lStack_460;
    local_2c8 = (undefined4)local_478;
    uStack_2c4 = local_478._4_4_;
    uStack_2c0 = (undefined4)uStack_470;
    uStack_2bc = uStack_470._4_4_;
    lStack_2d8 = local_488;
    uStack_2d0 = uStack_480;
    local_2e8 = local_498;
    lStack_2e0 = uStack_490;
    local_2f8 = local_4a8;
    uStack_2f0 = uStack_4a0;
    local_3f8 = local_398;
    local_408 = local_3a8;
    uStack_404 = uStack_3a4;
    uStack_400 = uStack_3a0;
    uStack_3fc = uStack_39c;
                    /* try { // try from 0016e780 to 0016e795 has its CatchHandler @ 0016e9a2 */
    (*(code *)PTR_cut_files_0022de70)(&local_408,&local_2f8);
                    /* try { // try from 0016e796 to 0016e7a2 has its CatchHandler @ 0016e99d */
    core::ptr::drop_in_place<uu_cut::Mode>(&local_2f8);
    lVar7 = 0;
  }
  if ((bool)(bVar13 & local_4f8 == 3)) {
                    /* try { // try from 0016e7b3 to 0016e7bc has its CatchHandler @ 0016ea26 */
    core::ptr::drop_in_place<core::result::Result<uu_cut::Mode,alloc::string::String>>(&local_4f8);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_440);
  return lVar7;
}