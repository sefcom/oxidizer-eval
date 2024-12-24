undefined  [16] __rustcall uu_dir::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined auVar6 [16];
  undefined local_5a0 [56];
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined local_3f0 [16];
  undefined8 local_3e0;
  undefined local_3d8 [221];
  undefined local_2fb;
  undefined local_2f9;
  undefined local_2f8;
  undefined local_2f0 [712];
  
  (*(code *)PTR_uu_app_00319618)(local_2f0);
  clap_builder::builder::command::Command::get_matches_from(local_5a0,local_2f0,param_1,param_2);
                    /* try { // try from 001c482a to 001c4983 has its CatchHandler @ 001c4b74 */
  cVar3 = (*(code *)PTR_contains_id_00319628)
                    (local_5a0,*(undefined8 *)PTR_QUOTING_STYLE_00319620,
                     *(undefined8 *)(PTR_QUOTING_STYLE_00319620 + 8));
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR_get_flag_00319638)
                      (local_5a0,*(undefined8 *)PTR_C_00319630,*(undefined8 *)(PTR_C_00319630 + 8));
    if (cVar3 != '\0') goto LAB_001c4875;
    cVar3 = (*(code *)PTR_get_flag_00319638)
                      (local_5a0,*(undefined8 *)PTR_ESCAPE_00319640,
                       *(undefined8 *)(PTR_ESCAPE_00319640 + 8));
    if (cVar3 != '\0') goto LAB_001c4875;
                    /* try { // try from 001c4b29 to 001c4b56 has its CatchHandler @ 001c4b74 */
    bVar4 = (*(code *)PTR_get_flag_00319638)
                      (local_5a0,*(undefined8 *)PTR_LITERAL_003196a0,
                       *(undefined8 *)(PTR_LITERAL_003196a0 + 8));
    bVar4 = bVar4 ^ 1;
  }
  else {
LAB_001c4875:
    bVar4 = 0;
  }
  cVar3 = (*(code *)PTR_contains_id_00319628)
                    (local_5a0,*(undefined8 *)PTR_FORMAT_00319648,
                     *(undefined8 *)(PTR_FORMAT_00319648 + 8));
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR_get_flag_00319638)
                      (local_5a0,*(undefined8 *)PTR_ACROSS_00319650,
                       *(undefined8 *)(PTR_ACROSS_00319650 + 8));
    if (cVar3 == '\0') {
      cVar3 = (*(code *)PTR_get_flag_00319638)
                        (local_5a0,*(undefined8 *)PTR_COLUMNS_00319658,
                         *(undefined8 *)(PTR_COLUMNS_00319658 + 8));
      if (cVar3 == '\0') {
        cVar3 = (*(code *)PTR_get_flag_00319638)
                          (local_5a0,*(undefined8 *)PTR_COMMAS_00319660,
                           *(undefined8 *)(PTR_COMMAS_00319660 + 8));
        if (cVar3 == '\0') {
          cVar3 = (*(code *)PTR_get_flag_00319638)
                            (local_5a0,*(undefined8 *)PTR_LONG_00319668,
                             *(undefined8 *)(PTR_LONG_00319668 + 8));
          if (cVar3 == '\0') {
            cVar3 = (*(code *)PTR_get_flag_00319638)
                              (local_5a0,*(undefined8 *)PTR_LONG_NO_GROUP_00319670,
                               *(undefined8 *)(PTR_LONG_NO_GROUP_00319670 + 8));
            if (cVar3 == '\0') {
              cVar3 = (*(code *)PTR_get_flag_00319638)
                                (local_5a0,*(undefined8 *)PTR_LONG_NO_OWNER_00319678,
                                 *(undefined8 *)(PTR_LONG_NO_OWNER_00319678 + 8));
              if (cVar3 == '\0') {
                cVar3 = (*(code *)PTR_get_flag_00319638)
                                  (local_5a0,*(undefined8 *)PTR_LONG_NUMERIC_UID_GID_00319680,
                                   *(undefined8 *)(PTR_LONG_NUMERIC_UID_GID_00319680 + 8));
                if (cVar3 == '\0') {
                  bVar5 = (*(code *)PTR_get_flag_00319638)
                                    (local_5a0,*(undefined8 *)PTR_ONE_LINE_003196a8,
                                     *(undefined8 *)(PTR_ONE_LINE_003196a8 + 8));
                  bVar5 = bVar5 ^ 1;
                  goto LAB_001c4971;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar5 = 0;
LAB_001c4971:
  (*(code *)PTR_from_00319688)(&local_4f8,local_5a0);
  auVar6._4_4_ = uStack_4ec;
  auVar6._0_4_ = uStack_4f0;
  auVar6._8_8_ = local_4e8;
  if (CONCAT44(uStack_4f4,local_4f8) != -0x8000000000000000) {
    (*(code *)PTR_memcpy_00319590)(local_3d8,&uStack_4e0,0xe8);
    local_3e0 = local_4e8;
    if (bVar4 != 0) {
      local_2fb = 0;
      local_2f9 = 2;
    }
    if (bVar5 != 0) {
      local_2f8 = 0;
    }
    uVar1 = *(undefined8 *)PTR_PATHS_00319690;
    uVar2 = *(undefined8 *)(PTR_PATHS_00319690 + 8);
                    /* try { // try from 001c4a11 to 001c4ae7 has its CatchHandler @ 001c4b62 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_4f8,local_5a0,uVar1,uVar2);
    clap_builder::parser::error::MatchesError::unwrap(&local_538,uVar1,uVar2,&local_4f8);
    if (CONCAT44(uStack_534,local_538) == 0) {
      uumain::___closure__(&local_568);
    }
    else {
      local_4c8 = local_508;
      uStack_4c4 = uStack_504;
      uStack_4c0 = uStack_500;
      uStack_4bc = uStack_4fc;
      local_4d8 = local_518;
      uStack_4d4 = uStack_514;
      uStack_4d0 = uStack_510;
      uStack_4cc = uStack_50c;
      uStack_4e0 = uStack_520;
      uStack_4dc = uStack_51c;
      local_4f8 = local_538;
      uStack_4f4 = uStack_534;
      uStack_4f0 = uStack_530;
      uStack_4ec = uStack_52c;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
                (&local_550,&local_4f8);
      local_568 = local_550;
      uStack_560 = uStack_548;
      local_558 = local_540;
    }
    local_4e8 = local_558;
    local_4f8 = (undefined4)local_568;
    uStack_4f4 = local_568._4_4_;
    uStack_4f0 = (undefined4)uStack_560;
    uStack_4ec = uStack_560._4_4_;
    auVar6 = (*(code *)PTR_list_00319698)(&local_4f8,local_3f0);
                    /* try { // try from 001c4ae8 to 001c4afa has its CatchHandler @ 001c4b74 */
    core::ptr::drop_in_place<uu_ls::Config>(local_3f0);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_5a0);
  return auVar6;
}