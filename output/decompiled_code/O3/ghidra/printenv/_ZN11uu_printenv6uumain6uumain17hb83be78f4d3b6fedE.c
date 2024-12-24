undefined  [16] __rustcall uu_printenv::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined auVar7 [16];
  undefined8 local_468;
  undefined8 uStack_460;
  char **local_458;
  undefined8 local_448;
  undefined8 uStack_440;
  long local_438;
  undefined8 local_428;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
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
  char *local_2f8;
  code *pcStack_2f0;
  char **local_2e8;
  code *pcStack_2e0;
  char **local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR_uu_app_00206b20)(&local_2f8);
  clap_builder::builder::command::Command::get_matches_from(local_330,&local_2f8,param_1,param_2);
  uVar1 = *(undefined8 *)PTR_ARG_VARIABLES_00206b28;
  uVar2 = *(undefined8 *)(PTR_ARG_VARIABLES_00206b28 + 8);
                    /* try { // try from 00157ebf to 00157f4c has its CatchHandler @ 00158375 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2f8,local_330,uVar1,uVar2);
  clap_builder::parser::error::MatchesError::unwrap(&local_3b8,uVar1,uVar2,&local_2f8);
  if (local_3b8 == (char *)0x0) {
    local_448 = 0;
    uStack_440 = 8;
    local_438 = 0;
  }
  else {
    local_2c8 = local_388;
    uStack_2c4 = uStack_384;
    uStack_2c0 = uStack_380;
    uStack_2bc = uStack_37c;
    local_2d8 = local_398;
    uStack_2d0 = (code *)CONCAT44(uStack_38c,uStack_390);
    local_2e8 = local_3a8;
    pcStack_2e0 = pcStack_3a0;
    local_2f8 = local_3b8;
    pcStack_2f0 = pcStack_3b0;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_408,&local_2f8);
    local_448 = CONCAT44(uStack_404,local_408);
    uStack_440 = CONCAT44(uStack_3fc,uStack_400);
    local_438 = CONCAT44(uStack_3f4,local_3f8);
  }
                    /* try { // try from 00157f8c to 00157f99 has its CatchHandler @ 0015834a */
  cVar5 = (*(code *)PTR_get_flag_00206b38)
                    (local_330,*(undefined8 *)PTR_OPT_NULL_00206b30,
                     *(undefined8 *)(PTR_OPT_NULL_00206b30 + 8));
  local_378 = "\n";
  if (cVar5 != '\0') {
    local_378 = "";
  }
  local_370 = 1;
  if (local_438 == 0) {
                    /* try { // try from 00158185 to 00158192 has its CatchHandler @ 0015834a */
    (*(code *)PTR_vars_00206b48)(&local_350);
    puVar3 = PTR__print_00206b40;
    local_3c8 = local_340;
    uStack_3c0 = uStack_338;
    local_3d8 = local_350;
    uStack_3d4 = uStack_34c;
    uStack_3d0 = uStack_348;
    uStack_3cc = uStack_344;
                    /* try { // try from 001581e0 to 001581f2 has its CatchHandler @ 001583b7 */
    while ((*(code *)PTR_next_00206b50)(&local_408,&local_3d8),
          CONCAT44(uStack_404,local_408) != -0x8000000000000000) {
      local_418 = local_3e0;
      local_428._0_4_ = local_3f0;
      local_428._4_4_ = uStack_3ec;
      uStack_420 = uStack_3e8;
      uStack_41c = uStack_3e4;
      pcStack_2f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      pcStack_2e0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_2d8 = &local_378;
      uStack_2d0 = _<&T_as_core::fmt::Display>::fmt;
      local_3b8 = "\x01";
      pcStack_3b0 = (code *)0x3;
      local_398 = (char **)0x0;
      local_3a8 = &local_2f8;
      pcStack_3a0 = (code *)0x3;
      local_2f8 = (char *)&local_468;
      local_2e8 = (char **)&local_428;
                    /* try { // try from 001582af to 001582b3 has its CatchHandler @ 0015839b */
      (*(code *)puVar3)(&local_3b8);
                    /* try { // try from 001582b4 to 001582bb has its CatchHandler @ 001583aa */
      core::ptr::drop_in_place<alloc::string::String>(&local_428);
                    /* try { // try from 001582bc to 001582c3 has its CatchHandler @ 001583b7 */
      core::ptr::drop_in_place<alloc::string::String>(&local_468);
    }
                    /* try { // try from 001582c9 to 001582d5 has its CatchHandler @ 0015834a */
    core::ptr::drop_in_place<std::env::Vars>(&local_3d8);
                    /* try { // try from 001582d6 to 001582df has its CatchHandler @ 00158375 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_448);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_330);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = &local_3f0;
    auVar7 = auVar7 << 0x40;
  }
  else {
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (&local_3d8,&local_448);
    _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
              (&local_368,&local_3d8);
    bVar6 = true;
    if (CONCAT44(uStack_364,local_368) != -0x8000000000000000) {
      bVar6 = false;
      do {
        local_468 = (char *)CONCAT44(uStack_364,local_368);
        uStack_460 = (code *)CONCAT44(uStack_35c,uStack_360);
        local_458 = local_358;
                    /* try { // try from 00158071 to 00158075 has its CatchHandler @ 00158381 */
        cVar5 = _<char_as_core::str::pattern::Pattern>::is_contained_in(uStack_460);
        if (cVar5 == '\0') {
          local_2e8 = local_458;
          local_2f8 = local_468;
          pcStack_2f0 = uStack_460;
                    /* try { // try from 001580a9 to 001580b8 has its CatchHandler @ 0015837c */
          std::env::var(&local_408,&local_2f8);
          bVar4 = true;
          if (CONCAT44(uStack_404,local_408) == 0) {
            local_428._0_4_ = uStack_400;
            local_428._4_4_ = uStack_3fc;
            uStack_420 = local_3f8;
            uStack_41c = uStack_3f4;
            pcStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_3a8 = &local_378;
            pcStack_3a0 = _<&T_as_core::fmt::Display>::fmt;
            local_2f8 = "\x01";
            pcStack_2f0 = (code *)0x2;
            local_2d8 = (char **)0x0;
            local_2e8 = &local_3b8;
            pcStack_2e0 = (code *)0x2;
                    /* try { // try from 0015815c to 00158169 has its CatchHandler @ 00158354 */
            local_3b8 = (char *)&local_428;
            (*(code *)PTR__print_00206b40)(&local_2f8);
                    /* try { // try from 0015816a to 00158171 has its CatchHandler @ 0015834f */
            core::ptr::drop_in_place<alloc::string::String>(&local_428);
            bVar4 = bVar6;
            if (CONCAT44(uStack_404,local_408) == 0) goto LAB_0015803a;
          }
                    /* try { // try from 00158030 to 00158037 has its CatchHandler @ 0015837c */
          bVar6 = bVar4;
          core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                    (&local_408);
        }
        else {
                    /* try { // try from 0015807a to 00158081 has its CatchHandler @ 0015837a */
          core::ptr::drop_in_place<alloc::string::String>(&local_468);
          bVar6 = true;
        }
LAB_0015803a:
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_368,&local_3d8);
      } while (CONCAT44(uStack_364,local_368) != -0x8000000000000000);
      bVar6 = !bVar6;
    }
                    /* try { // try from 001582f7 to 00158316 has its CatchHandler @ 00158342 */
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&local_3d8);
    if (bVar6) {
      auVar7 = ZEXT816(0x8000000000000000) << 0x40;
    }
    else {
      auVar7 = (*(code *)PTR_from_00206b58)(1);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_330);
  }
  return auVar7;
}