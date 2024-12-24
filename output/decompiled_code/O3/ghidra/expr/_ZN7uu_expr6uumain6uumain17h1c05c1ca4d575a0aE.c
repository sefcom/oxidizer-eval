undefined  [16] __rustcall uu_expr::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  code *local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
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
  undefined local_358 [16];
  undefined8 local_348;
  code *local_340;
  code *local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  code *local_2e8;
  code *pcStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  
  (*(code *)PTR_uu_app_002a75e0)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3b8,&local_2e8,param_1,param_2);
  if (local_3b8 == (code *)0x8000000000000000) {
    auVar6 = (*(code *)PTR_from_002a75e8)();
    return auVar6;
  }
  local_320 = local_398;
  uStack_31c = uStack_394;
  uStack_318 = uStack_390;
  uStack_314 = uStack_38c;
  local_330 = local_3a8;
  uStack_32c = uStack_3a4;
  uStack_328 = uStack_3a0;
  uStack_324 = uStack_39c;
  local_340 = local_3b8;
  local_338 = uStack_3b0;
                    /* try { // try from 001bc869 to 001bc8f5 has its CatchHandler @ 001bcb9e */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2e8,&local_340,"expression",10);
  clap_builder::parser::error::MatchesError::unwrap(&local_3b8,"expression",10,&local_2e8);
  if (local_3b8 == (code *)0x0) {
    local_3f8 = 0;
    uStack_3f0 = 8;
    local_3e8 = 0;
  }
  else {
    local_2b8 = local_388;
    uStack_2b4 = uStack_384;
    uStack_2b0 = uStack_380;
    uStack_2ac = uStack_37c;
    local_2c8 = CONCAT44(uStack_394,local_398);
    uStack_2c0 = uStack_390;
    uStack_2bc = uStack_38c;
    local_2d8 = (code **)CONCAT44(uStack_3a4,local_3a8);
    uStack_2d0 = CONCAT44(uStack_39c,uStack_3a0);
    local_2e8 = local_3b8;
    pcStack_2e0 = uStack_3b0;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_3d8,&local_2e8);
    local_3f8 = local_3d8;
    uStack_3f0 = uStack_3d0;
    local_3e8 = local_3c8;
  }
                    /* try { // try from 001bc931 to 001bc98a has its CatchHandler @ 001bcb91 */
  (*(code *)PTR_parse_002a75f0)(&local_2e8,uStack_3f0,local_3e8);
  local_3d8 = pcStack_2e0;
  pcVar1 = local_3d8;
  uStack_3d0 = local_2d8;
  uVar5 = uStack_3d0;
  local_3c8 = uStack_2d0;
  uVar2 = local_3c8;
  uStack_3c0 = local_2c8;
  uVar3 = uStack_3c0;
  local_3d8._0_4_ = SUB84(pcStack_2e0,0);
  local_3d8._4_4_ = (undefined4)((ulong)pcStack_2e0 >> 0x20);
  uStack_3d0._0_4_ = SUB84(local_2d8,0);
  uStack_3d0._4_4_ = (undefined4)((ulong)local_2d8 >> 0x20);
  local_3c8._0_4_ = (undefined4)uStack_2d0;
  local_3c8._4_4_ = (undefined4)((ulong)uStack_2d0 >> 0x20);
  uStack_3c0._0_4_ = (undefined4)local_2c8;
  uStack_3c0._4_4_ = (undefined4)((ulong)local_2c8 >> 0x20);
  local_3d8 = pcVar1;
  uStack_3d0 = uVar5;
  local_3c8 = uVar2;
  uStack_3c0 = uVar3;
  if (local_2e8 == (code *)0x0) {
    local_368 = (undefined4)local_3c8;
    uStack_364 = local_3c8._4_4_;
    uStack_360 = (undefined4)uStack_3c0;
    uStack_35c = uStack_3c0._4_4_;
    local_378 = (undefined4)local_3d8;
    uStack_374 = local_3d8._4_4_;
    uStack_370 = (undefined4)uStack_3d0;
    uStack_36c = uStack_3d0._4_4_;
                    /* try { // try from 001bc9ad to 001bca11 has its CatchHandler @ 001bcb7f */
    (*(code *)PTR_eval_002a75f8)(&local_3b8,&local_378);
    local_308 = (undefined4)uStack_3b0;
    uStack_304 = uStack_3b0._4_4_;
    uStack_300 = local_3a8;
    uStack_2fc = uStack_3a4;
    local_2f8 = uStack_3a0;
    uStack_2f4 = uStack_39c;
    uStack_2f0 = local_398;
    uStack_2ec = uStack_394;
    if (local_3b8 == (code *)0x0) {
                    /* try { // try from 001bca53 to 001bca6b has its CatchHandler @ 001bcb7f */
      (*(code *)PTR_eval_as_string_002a7600)(local_358,&local_308);
                    /* try { // try from 001bca6c to 001bcad2 has its CatchHandler @ 001bcb6d */
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&local_378);
      uStack_3b0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_2e8 = (code *)&DAT_0029f1e8;
      pcStack_2e0 = (code *)0x2;
      local_2c8 = 0;
      uStack_2d0 = 1;
      local_3b8 = (code *)local_358;
      local_2d8 = &local_3b8;
      (*(code *)PTR__print_002a7608)(&local_2e8);
      uStack_2d0 = local_348;
      local_2e8 = (code *)0x8000000000000000;
                    /* try { // try from 001bcafb to 001bcb08 has its CatchHandler @ 001bcb59 */
      cVar4 = (*(code *)PTR_is_truthy_002a7610)(&local_2e8);
      if (cVar4 != '\0') {
                    /* try { // try from 001bcb0d to 001bcb19 has its CatchHandler @ 001bcb6b */
        core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&local_2e8);
                    /* try { // try from 001bcb1a to 001bcb21 has its CatchHandler @ 001bcb9e */
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_3f8);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_340)
        ;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_358;
        return auVar6 << 0x40;
      }
                    /* try { // try from 001bcb36 to 001bcb4d has its CatchHandler @ 001bcb6b */
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&local_2e8);
      auVar7 = (*(code *)PTR_from_002a7618)(1);
      goto LAB_001bca29;
    }
    uStack_2d0 = CONCAT44(uStack_394,local_398);
    local_2e8 = uStack_3b0;
    uVar5 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 001bca12 to 001bca21 has its CatchHandler @ 001bcb91 */
    core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&local_378);
  }
  else {
    uStack_2d0 = local_2c8;
    local_2e8 = pcStack_2e0;
    uVar5 = ::alloc::boxed::Box<T>::new(&local_2e8);
  }
  auVar7._8_8_ = &PTR_drop_in_place<uu_expr_ExprError>_0029f260;
  auVar7._0_8_ = uVar5;
LAB_001bca29:
                    /* try { // try from 001bca29 to 001bca30 has its CatchHandler @ 001bcb9e */
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_3f8);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_340);
  return auVar7;
}