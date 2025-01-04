undefined  [16] __rustcall uu_printenv::uumain::uumain(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined *puVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  undefined auVar8 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  char **local_448;
  long local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  long local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  char *local_3b8;
  code *pcStack_3b0;
  char **local_3a8;
  code *pcStack_3a0;
  char **local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  char *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  char **local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined local_330 [56];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  char **local_2e8;
  code *pcStack_2e0;
  char **local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR_uu_app_00206468)(&local_2f8);
  clap_builder::builder::command::Command::get_matches_from(local_330,&local_2f8,param_1,param_2);
  uVar1 = *(undefined8 *)PTR_ARG_VARIABLES_00206470;
  uVar2 = *(undefined8 *)(PTR_ARG_VARIABLES_00206470 + 8);
                    /* try { // try from 00157caf to 00157d3c has its CatchHandler @ 00158185 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2f8,local_330,uVar1,uVar2);
  clap_builder::parser::error::MatchesError::unwrap(&local_3b8,uVar1,uVar2,&local_2f8);
  if (local_3b8 != (char *)0x0) {
    local_2c8 = local_388;
    uStack_2c4 = uStack_384;
    uStack_2c0 = uStack_380;
    uStack_2bc = uStack_37c;
    local_2d8 = local_398;
    uStack_2d0 = (code *)CONCAT44(uStack_38c,uStack_390);
    local_2e8 = local_3a8;
    pcStack_2e0 = pcStack_3a0;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_408,&local_2f8);
    local_2f8 = (char *)CONCAT44(uStack_3fc,uStack_400);
    uStack_2f0 = (code *)CONCAT44(uStack_3f4,uStack_3f8);
    if (local_408 != -0x8000000000000000) {
      local_438 = CONCAT44(uStack_3fc,uStack_400);
      uStack_430 = CONCAT44(uStack_3f4,uStack_3f8);
      local_440 = local_408;
      goto LAB_00157d8d;
    }
  }
  local_440 = 0;
  local_438 = 8;
  uStack_430 = 0;
LAB_00157d8d:
                    /* try { // try from 00157d9b to 00157da8 has its CatchHandler @ 0015815a */
  cVar5 = (*(code *)PTR_get_flag_00206480)
                    (local_330,*(undefined8 *)PTR_OPT_NULL_00206478,
                     *(undefined8 *)(PTR_OPT_NULL_00206478 + 8));
  local_378 = "\n";
  if (cVar5 != '\0') {
    local_378 = "";
  }
  local_370 = 1;
  if (uStack_430 == 0) {
                    /* try { // try from 00157f9c to 00157fa9 has its CatchHandler @ 0015815a */
    (*(code *)PTR_vars_00206490)(&local_350);
    puVar4 = PTR__print_00206488;
    local_3c8 = local_340;
    uStack_3c0 = uStack_338;
    local_3d8 = local_350;
    uStack_3d4 = uStack_34c;
    uStack_3d0 = uStack_348;
    uStack_3cc = uStack_344;
                    /* try { // try from 00157ff0 to 00158002 has its CatchHandler @ 001581c7 */
    while ((*(code *)PTR_next_00206498)(&local_408,&local_3d8), local_408 != -0x8000000000000000) {
      local_458 = (char *)local_408;
      local_418 = local_3e0;
      local_428._0_4_ = local_3f0;
      local_428._4_4_ = uStack_3ec;
      uStack_420 = uStack_3e8;
      uStack_41c = uStack_3e4;
      uStack_2f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      pcStack_2e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_2d8 = &local_378;
      uStack_2d0 = _<&T_as_core::fmt::Display>::fmt;
      local_3b8 = "\x01";
      pcStack_3b0 = (code *)0x3;
      local_398 = (char **)0x0;
      local_3a8 = (char **)&local_2f8;
      pcStack_3a0 = (code *)0x3;
      local_2f8 = (char *)&local_458;
      local_2e8 = (char **)&local_428;
                    /* try { // try from 001580bf to 001580c3 has its CatchHandler @ 001581ab */
      (*(code *)puVar4)(&local_3b8);
                    /* try { // try from 001580c4 to 001580cb has its CatchHandler @ 001581ba */
      core::ptr::drop_in_place<alloc::string::String>(&local_428);
                    /* try { // try from 001580cc to 001580d3 has its CatchHandler @ 001581c7 */
      core::ptr::drop_in_place<alloc::string::String>(&local_458);
    }
                    /* try { // try from 001580d9 to 001580e5 has its CatchHandler @ 0015815a */
    core::ptr::drop_in_place<std::env::Vars>(&local_3d8);
                    /* try { // try from 001580e6 to 001580ef has its CatchHandler @ 00158185 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_440);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_330);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = &local_3f0;
    auVar8 = auVar3 << 0x40;
  }
  else {
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (&local_3d8,&local_440);
    _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
              (&local_368,&local_3d8);
    bVar7 = true;
    if (CONCAT44(uStack_364,local_368) != -0x8000000000000000) {
      uVar6 = 0;
      do {
        local_458 = (char *)CONCAT44(uStack_364,local_368);
        uStack_450 = (code *)CONCAT44(uStack_35c,uStack_360);
        local_448 = local_358;
                    /* try { // try from 00157e8c to 00157e90 has its CatchHandler @ 00158191 */
        cVar5 = _<char_as_core::str::pattern::Pattern>::is_contained_in(uStack_450);
        if (cVar5 == '\0') {
          local_2e8 = local_448;
          local_2f8 = local_458;
          uStack_2f0 = uStack_450;
                    /* try { // try from 00157ec9 to 00157ed3 has its CatchHandler @ 0015818c */
          std::env::var(&local_408,&local_2f8);
          param_1 = CONCAT71((int7)(param_1 >> 8),1);
          if (local_408 == 0) {
            local_428._0_4_ = uStack_400;
            local_428._4_4_ = uStack_3fc;
            uStack_420 = uStack_3f8;
            uStack_41c = uStack_3f4;
            pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_3a8 = &local_378;
            pcStack_3a0 = _<&T_as_core::fmt::Display>::fmt;
            local_2f8 = "\x01";
            uStack_2f0 = (code *)0x2;
            local_2d8 = (char **)0x0;
            local_2e8 = &local_3b8;
            pcStack_2e0 = (code *)0x2;
            local_3b8 = (char *)&local_428;
                    /* try { // try from 00157f77 to 00157f7f has its CatchHandler @ 00158164 */
            (*(code *)PTR__print_00206488)(&local_2f8);
                    /* try { // try from 00157f80 to 00157f87 has its CatchHandler @ 0015815f */
            core::ptr::drop_in_place<alloc::string::String>(&local_428);
            param_1 = uVar6;
            if (local_408 == 0) goto LAB_00157e4b;
          }
                    /* try { // try from 00157e40 to 00157e47 has its CatchHandler @ 0015818c */
          core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                    (&local_408);
          uVar6 = param_1 & 0xffffffff;
        }
        else {
                    /* try { // try from 00157e95 to 00157e9c has its CatchHandler @ 0015818a */
          core::ptr::drop_in_place<alloc::string::String>(&local_458);
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        }
LAB_00157e4b:
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_368,&local_3d8);
      } while (CONCAT44(uStack_364,local_368) != -0x8000000000000000);
      bVar7 = (char)uVar6 == '\0';
    }
                    /* try { // try from 00158107 to 00158126 has its CatchHandler @ 00158152 */
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&local_3d8);
    if (bVar7) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_1;
      auVar8 = auVar8 << 0x40;
    }
    else {
      auVar8 = (*(code *)PTR_from_002064a0)(1);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_330);
  }
  return auVar8;
}