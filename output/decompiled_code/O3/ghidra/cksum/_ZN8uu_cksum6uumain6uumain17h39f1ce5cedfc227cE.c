undefined  [16] __rustcall uu_cksum::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined *puVar3;
  undefined uVar4;
  long lVar5;
  undefined uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 extraout_RDX;
  long unaff_R12;
  undefined uVar17;
  undefined *puVar18;
  undefined auVar19 [16];
  undefined *local_3d8;
  undefined *puStack_3d0;
  long local_3c8;
  undefined local_3c0 [16];
  long local_3b0;
  long local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  long local_378;
  long local_370;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  long local_338;
  undefined8 local_330;
  long local_328;
  undefined8 local_320;
  undefined auStack_318 [16];
  ulong local_308;
  undefined local_300;
  undefined local_2ff;
  char local_2fe;
  undefined local_2fd;
  long local_70 [8];
  
  (*(code *)PTR_uu_app_00496fb0)(&local_338);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_378,&local_338,param_1,param_2);
  if (local_378 == -0x8000000000000000) {
    auVar19 = (*(code *)PTR_from_00496fb8)();
    return auVar19;
  }
  local_380 = local_348;
  local_390 = local_358;
  uStack_38c = uStack_354;
  uStack_388 = uStack_350;
  uStack_384 = uStack_34c;
  local_3a0 = (undefined4)local_368;
  uStack_39c = local_368._4_4_;
  uStack_398 = uStack_360;
  uStack_394 = uStack_35c;
  local_3b0 = local_378;
  local_3a8 = local_370;
                    /* try { // try from 002806c6 to 00280913 has its CatchHandler @ 00280d22 */
  bVar7 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"check",5);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_338,&local_3b0,"algorithm",9);
  lVar14 = clap_builder::parser::error::MatchesError::unwrap("algorithm",9,&local_338);
  if (lVar14 == 0) {
    if (bVar7 == 0) {
      local_3d8 = &DAT_0015577c;
      puStack_3d0 = (undefined *)0x3;
      _<T_as_core::slice::cmp::SliceContains>::slice_contains(&local_3d8,&PTR_DAT_00453608,3);
    }
    else {
      local_3d8 = (undefined *)0x1;
      puStack_3d0 = (undefined *)0x0;
      cVar9 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                        (&local_3d8,&PTR_DAT_00453608,3);
      uVar16 = 0xc;
      if (cVar9 != '\0') goto LAB_0028090c;
    }
LAB_002807a9:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_338,&local_3b0,"length",6);
    puVar15 = (undefined8 *)clap_builder::parser::error::MatchesError::unwrap("length",6,&local_338)
    ;
    if (puVar15 == (undefined8 *)0x0) {
      lVar14 = 0;
      local_3c8 = unaff_R12;
    }
    else {
      cVar9 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_3d8,puStack_3d0,"blake2b",7)
      ;
      uVar16 = 10;
      if (cVar9 == '\0') goto LAB_0028090c;
      (*(code *)PTR_calculate_blake2b_length_00496fc8)(&local_338,*puVar15,extraout_RDX,10);
      auVar19._8_8_ = local_328;
      auVar19._0_8_ = local_330;
      lVar14 = local_330;
      local_3c8 = local_328;
      if (local_338 != 0) goto LAB_0028091e;
    }
    if (bVar7 == 0) {
                    /* try { // try from 00280940 to 002809d0 has its CatchHandler @ 00280d22 */
      (*(code *)PTR_handle_tag_text_binary_flags_00496fd0)(&local_338,&local_3b0);
      auVar19._8_8_ = local_330;
      auVar19._0_8_ = local_338;
      if (local_338 == 0) {
        uVar4 = (undefined)local_330;
        uVar6 = local_330._1_1_;
        (*(code *)PTR_detect_algo_00496fd8)(&local_338,local_3d8,puStack_3d0,lVar14,local_3c8);
        lVar5 = local_330;
        auVar19._8_8_ = local_328;
        auVar19._0_8_ = local_330;
        if (local_338 != 0) {
          uStack_360 = (undefined4)local_320;
          uStack_35c = local_320._4_4_;
          local_358 = auStack_318._0_4_;
          uStack_354 = auStack_318._4_4_;
          local_378 = local_338;
          local_370 = local_330;
          local_368 = local_328;
                    /* try { // try from 00280ac6 to 00280b3b has its CatchHandler @ 00280d08 */
          cVar9 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"zero",4);
          uVar17 = 10;
          if (cVar9 != '\0') {
            uVar17 = 0;
          }
          cVar10 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"raw",3);
          cVar9 = '\x01';
          if (cVar10 == '\0') {
            cVar9 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"base64",6);
            cVar9 = cVar9 * '\x02';
          }
          local_3c0 = _<alloc::boxed::Box<F,A>as_core::ops::function::Fn<Args>>::call(&local_368);
          uVar1 = CONCAT44(uStack_354,local_358);
                    /* try { // try from 00280b44 to 00280b82 has its CatchHandler @ 00280ce2 */
          clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                    (&local_338,&local_3b0,"filemode",4);
          clap_builder::parser::error::MatchesError::unwrap(local_70,"filemode",4,&local_338);
          local_308 = uVar1;
          local_2fe = cVar9;
          local_2fd = uVar17;
          auStack_318 = local_3c0;
          if (local_70[0] == 0) {
            local_330 = local_3c8;
            local_328 = local_338;
            local_320 = lVar5;
            local_300 = uVar4;
            local_2ff = uVar6;
            local_338 = lVar14;
            auVar19 = cksum(&local_338);
          }
          else {
            local_330 = local_3c8;
            local_328 = local_338;
            local_320 = lVar5;
            local_300 = uVar4;
            local_2ff = uVar6;
                    /* try { // try from 00280c01 to 00280c93 has its CatchHandler @ 00280ce0 */
            local_338 = lVar14;
            auVar19 = cksum(&local_338,local_70);
          }
          if (auVar19._0_8_ == 0) {
            core::ptr::drop_in_place<uu_cksum::Options>(local_368,CONCAT44(uStack_35c,uStack_360));
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                      (&local_3b0);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar1;
            return auVar2 << 0x40;
          }
                    /* try { // try from 00280caf to 00280ccd has its CatchHandler @ 00280d22 */
          core::ptr::drop_in_place<uu_cksum::Options>(local_368,CONCAT44(uStack_35c,uStack_360));
        }
      }
      goto LAB_0028091e;
    }
    cVar9 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"text",4);
    cVar10 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"binary",6);
    bVar7 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"strict",6);
    bVar8 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"status",6);
    uVar11 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"warnZeroV",4);
    uVar12 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"ignore-missing",0xe);
    uVar13 = (*(code *)PTR_get_flag_00496fc0)(&local_3b0,"quiet",5);
    puVar3 = puStack_3d0;
    uVar16 = 0xb;
    if (cVar9 == '\0' && cVar10 == '\0') {
      puVar18 = puStack_3d0;
      if (puStack_3d0 != (undefined *)0x0) {
        puVar18 = local_3d8;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_338,&local_3b0,"filemode",4);
      clap_builder::parser::error::MatchesError::unwrap(&local_378,"filemode",4,&local_338);
      core::option::Option<T>::map_or_else(&local_338,&local_378);
                    /* try { // try from 00280a1c to 00280a32 has its CatchHandler @ 00280cf6 */
      auVar19 = uucore::features::checksum::perform_checksum_validation
                          (local_330,local_328 * 0x10 + local_330,puVar18,puVar3,lVar14,local_3c8,
                           ((ulong)uVar11 & 0xff) << 0x28 |
                           (ulong)bVar7 << 0x20 | (ulong)bVar8 << 0x18 |
                           (ulong)((uVar12 & 0xff) << 8) | (ulong)((uVar13 & 0xff) << 0x10));
                    /* try { // try from 00280a33 to 00280a82 has its CatchHandler @ 00280d22 */
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_338);
      goto LAB_0028091e;
    }
  }
  else {
    local_3d8 = *(undefined **)(lVar14 + 8);
    puStack_3d0 = *(undefined **)(lVar14 + 0x10);
    bVar8 = _<T_as_core::slice::cmp::SliceContains>::slice_contains(&local_3d8,&PTR_DAT_00453608,3);
    uVar16 = 0xc;
    if ((bVar7 & bVar8) == 0) goto LAB_002807a9;
  }
LAB_0028090c:
  uVar16 = ::alloc::boxed::Box<T>::new(uVar16);
  auVar19._8_8_ = &DAT_004531a8;
  auVar19._0_8_ = uVar16;
LAB_0028091e:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3b0);
  return auVar19;
}