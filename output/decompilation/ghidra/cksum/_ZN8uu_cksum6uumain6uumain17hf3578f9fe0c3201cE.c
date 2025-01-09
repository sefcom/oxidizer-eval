undefined  [16] __rustcall uu_cksum::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  char *pcVar3;
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
  char *pcVar18;
  undefined auVar19 [16];
  char *local_3d8;
  char *pcStack_3d0;
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
  
  (*(code *)PTR_uu_app_004961a8)(&local_338);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_378,&local_338,param_1,param_2);
  if (local_378 == -0x8000000000000000) {
    auVar19 = (*(code *)PTR_from_004961b0)();
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
                    /* try { // try from 00280786 to 002809d3 has its CatchHandler @ 00280de2 */
  bVar7 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"check",5);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_338,&local_3b0,"algorithm",9);
  lVar14 = clap_builder::parser::error::MatchesError::unwrap("algorithm",9,&local_338);
  if (lVar14 == 0) {
    if (bVar7 == 0) {
      local_3d8 = "crc";
      pcStack_3d0 = (char *)0x3;
      _<T_as_core::slice::cmp::SliceContains>::slice_contains(&local_3d8,&PTR_s_bsd_00452958,3);
    }
    else {
      local_3d8 = (char *)0x1;
      pcStack_3d0 = (char *)0x0;
      cVar9 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                        (&local_3d8,&PTR_s_bsd_00452958,3);
      uVar16 = 0xc;
      if (cVar9 != '\0') goto LAB_002809cc;
    }
LAB_00280869:
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_338,&local_3b0,"length",6);
    puVar15 = (undefined8 *)clap_builder::parser::error::MatchesError::unwrap("length",6,&local_338)
    ;
    if (puVar15 == (undefined8 *)0x0) {
      lVar14 = 0;
      local_3c8 = unaff_R12;
    }
    else {
      cVar9 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_3d8,pcStack_3d0,"blake2b",7)
      ;
      uVar16 = 10;
      if (cVar9 == '\0') goto LAB_002809cc;
      (*(code *)PTR_calculate_blake2b_length_004961c0)(&local_338,*puVar15,extraout_RDX,10);
      auVar19._8_8_ = local_328;
      auVar19._0_8_ = local_330;
      lVar14 = local_330;
      local_3c8 = local_328;
      if (local_338 != 0) goto LAB_002809de;
    }
    if (bVar7 == 0) {
                    /* try { // try from 00280a00 to 00280a90 has its CatchHandler @ 00280de2 */
      (*(code *)PTR_handle_tag_text_binary_flags_004961c8)(&local_338,&local_3b0);
      auVar19._8_8_ = local_330;
      auVar19._0_8_ = local_338;
      if (local_338 == 0) {
        uVar4 = (undefined)local_330;
        uVar6 = local_330._1_1_;
        (*(code *)PTR_detect_algo_004961d0)(&local_338,local_3d8,pcStack_3d0,lVar14,local_3c8);
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
                    /* try { // try from 00280b86 to 00280bfb has its CatchHandler @ 00280dc8 */
          cVar9 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"zero",4);
          uVar17 = 10;
          if (cVar9 != '\0') {
            uVar17 = 0;
          }
          cVar10 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"raw",3);
          cVar9 = '\x01';
          if (cVar10 == '\0') {
            cVar9 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"base64",6);
            cVar9 = cVar9 * '\x02';
          }
          local_3c0 = _<alloc::boxed::Box<F,A>as_core::ops::function::Fn<Args>>::call(&local_368);
          uVar1 = CONCAT44(uStack_354,local_358);
                    /* try { // try from 00280c04 to 00280c42 has its CatchHandler @ 00280da2 */
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
                    /* try { // try from 00280cc1 to 00280d53 has its CatchHandler @ 00280da0 */
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
                    /* try { // try from 00280d6f to 00280d8d has its CatchHandler @ 00280de2 */
          core::ptr::drop_in_place<uu_cksum::Options>(local_368,CONCAT44(uStack_35c,uStack_360));
        }
      }
      goto LAB_002809de;
    }
    cVar9 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"text",4);
    cVar10 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"binary",6);
    bVar7 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"strict",6);
    bVar8 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"status",6);
    uVar11 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"warnZeroV",4);
    uVar12 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"ignore-missing",0xe);
    uVar13 = (*(code *)PTR_get_flag_004961b8)(&local_3b0,"quiet",5);
    pcVar3 = pcStack_3d0;
    uVar16 = 0xb;
    if (cVar9 == '\0' && cVar10 == '\0') {
      pcVar18 = pcStack_3d0;
      if (pcStack_3d0 != (char *)0x0) {
        pcVar18 = local_3d8;
      }
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
                (&local_338,&local_3b0,"filemode",4);
      clap_builder::parser::error::MatchesError::unwrap(&local_378,"filemode",4,&local_338);
      core::option::Option<T>::map_or_else(&local_338,&local_378);
                    /* try { // try from 00280adc to 00280af2 has its CatchHandler @ 00280db6 */
      auVar19 = uucore::features::checksum::perform_checksum_validation
                          (local_330,local_328 * 0x10 + local_330,pcVar18,pcVar3,lVar14,local_3c8,
                           ((ulong)uVar11 & 0xff) << 0x28 |
                           (ulong)bVar7 << 0x20 | (ulong)bVar8 << 0x18 |
                           (ulong)((uVar12 & 0xff) << 8) | (ulong)((uVar13 & 0xff) << 0x10));
                    /* try { // try from 00280af3 to 00280b42 has its CatchHandler @ 00280de2 */
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&local_338);
      goto LAB_002809de;
    }
  }
  else {
    local_3d8 = *(char **)(lVar14 + 8);
    pcStack_3d0 = *(char **)(lVar14 + 0x10);
    bVar8 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                      (&local_3d8,&PTR_s_bsd_00452958,3);
    uVar16 = 0xc;
    if ((bVar7 & bVar8) == 0) goto LAB_00280869;
  }
LAB_002809cc:
  uVar16 = ::alloc::boxed::Box<T>::new(uVar16);
  auVar19._8_8_ = &DAT_004525e8;
  auVar19._0_8_ = uVar16;
LAB_002809de:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3b0);
  return auVar19;
}