undefined  [16] __rustcall uu_dir::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined auVar6 [16];
  undefined local_5a0 [56];
  long local_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  long local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
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
  long local_4f8;
  undefined8 uStack_4f0;
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
  long local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined local_3d8 [221];
  undefined local_2fb;
  undefined local_2f9;
  undefined local_2f8;
  undefined local_2f0 [712];
  
  (*(code *)PTR_uu_app_003195b8)(local_2f0);
  clap_builder::builder::command::Command::get_matches_from(local_5a0,local_2f0,param_1,param_2);
                    /* try { // try from 001c4aea to 001c4c43 has its CatchHandler @ 001c4e41 */
  cVar3 = (*(code *)PTR_contains_id_003195c8)
                    (local_5a0,*(undefined8 *)PTR_QUOTING_STYLE_003195c0,
                     *(undefined8 *)(PTR_QUOTING_STYLE_003195c0 + 8));
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR_get_flag_003195d8)
                      (local_5a0,*(undefined8 *)PTR_C_003195d0,*(undefined8 *)(PTR_C_003195d0 + 8));
    if (cVar3 != '\0') goto LAB_001c4b35;
    cVar3 = (*(code *)PTR_get_flag_003195d8)
                      (local_5a0,*(undefined8 *)PTR_ESCAPE_003195e0,
                       *(undefined8 *)(PTR_ESCAPE_003195e0 + 8));
    if (cVar3 != '\0') goto LAB_001c4b35;
                    /* try { // try from 001c4df6 to 001c4e23 has its CatchHandler @ 001c4e41 */
    bVar4 = (*(code *)PTR_get_flag_003195d8)
                      (local_5a0,*(undefined8 *)PTR_LITERAL_00319640,
                       *(undefined8 *)(PTR_LITERAL_00319640 + 8));
    bVar4 = bVar4 ^ 1;
  }
  else {
LAB_001c4b35:
    bVar4 = 0;
  }
  cVar3 = (*(code *)PTR_contains_id_003195c8)
                    (local_5a0,*(undefined8 *)PTR_FORMAT_003195e8,
                     *(undefined8 *)(PTR_FORMAT_003195e8 + 8));
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR_get_flag_003195d8)
                      (local_5a0,*(undefined8 *)PTR_ACROSS_003195f0,
                       *(undefined8 *)(PTR_ACROSS_003195f0 + 8));
    if (cVar3 == '\0') {
      cVar3 = (*(code *)PTR_get_flag_003195d8)
                        (local_5a0,*(undefined8 *)PTR_COLUMNS_003195f8,
                         *(undefined8 *)(PTR_COLUMNS_003195f8 + 8));
      if (cVar3 == '\0') {
        cVar3 = (*(code *)PTR_get_flag_003195d8)
                          (local_5a0,*(undefined8 *)PTR_COMMAS_00319600,
                           *(undefined8 *)(PTR_COMMAS_00319600 + 8));
        if (cVar3 == '\0') {
          cVar3 = (*(code *)PTR_get_flag_003195d8)
                            (local_5a0,*(undefined8 *)PTR_LONG_00319608,
                             *(undefined8 *)(PTR_LONG_00319608 + 8));
          if (cVar3 == '\0') {
            cVar3 = (*(code *)PTR_get_flag_003195d8)
                              (local_5a0,*(undefined8 *)PTR_LONG_NO_GROUP_00319610,
                               *(undefined8 *)(PTR_LONG_NO_GROUP_00319610 + 8));
            if (cVar3 == '\0') {
              cVar3 = (*(code *)PTR_get_flag_003195d8)
                                (local_5a0,*(undefined8 *)PTR_LONG_NO_OWNER_00319618,
                                 *(undefined8 *)(PTR_LONG_NO_OWNER_00319618 + 8));
              if (cVar3 == '\0') {
                cVar3 = (*(code *)PTR_get_flag_003195d8)
                                  (local_5a0,*(undefined8 *)PTR_LONG_NUMERIC_UID_GID_00319620,
                                   *(undefined8 *)(PTR_LONG_NUMERIC_UID_GID_00319620 + 8));
                if (cVar3 == '\0') {
                  bVar5 = (*(code *)PTR_get_flag_003195d8)
                                    (local_5a0,*(undefined8 *)PTR_ONE_LINE_00319648,
                                     *(undefined8 *)(PTR_ONE_LINE_00319648 + 8));
                  bVar5 = bVar5 ^ 1;
                  goto LAB_001c4c31;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar5 = 0;
LAB_001c4c31:
  (*(code *)PTR_from_00319628)(&local_4f8,local_5a0);
  auVar6._8_8_ = local_4e8;
  auVar6._0_8_ = uStack_4f0;
  if (local_4f8 != -0x8000000000000000) {
    (*(code *)PTR_memcpy_00319548)(local_3d8,&uStack_4e0,0xe8);
    local_3f0 = local_4f8;
    local_3e8 = uStack_4f0;
    local_3e0 = local_4e8;
    if (bVar4 != 0) {
      local_2fb = 0;
      local_2f9 = 2;
    }
    if (bVar5 != 0) {
      local_2f8 = 0;
    }
    uVar1 = *(undefined8 *)PTR_PATHS_00319630;
    uVar2 = *(undefined8 *)(PTR_PATHS_00319630 + 8);
                    /* try { // try from 001c4cd1 to 001c4db4 has its CatchHandler @ 001c4e2f */
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
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
                (&local_550,&local_4f8);
      local_560 = local_548;
      uStack_55c = uStack_544;
      uStack_558 = uStack_540;
      uStack_554 = uStack_53c;
      local_568 = local_550;
    }
    local_4e8 = CONCAT44(uStack_554,uStack_558);
    local_4f8 = local_568;
    uStack_4f0 = CONCAT44(uStack_55c,local_560);
    auVar6 = (*(code *)PTR_list_00319638)(&local_4f8,&local_3f0);
                    /* try { // try from 001c4db5 to 001c4dc7 has its CatchHandler @ 001c4e41 */
    core::ptr::drop_in_place<uu_ls::Config>(&local_3f0);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_5a0);
  return auVar6;
}