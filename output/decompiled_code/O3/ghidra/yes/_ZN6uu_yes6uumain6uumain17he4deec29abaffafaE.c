undefined8 __rustcall uu_yes::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined *local_378;
  undefined *local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined *local_340;
  undefined *local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined local_300 [16];
  undefined8 local_2f0;
  undefined **local_2e8;
  undefined8 uStack_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  
  (*(code *)PTR_uu_app_0020d178)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_340,&local_2e8,param_1,param_2);
  if (local_340 == (undefined *)0x8000000000000000) {
    uVar3 = (*(code *)PTR_from_0020d180)();
  }
  else {
    local_348 = local_310;
    local_358 = local_320;
    uStack_354 = uStack_31c;
    uStack_350 = uStack_318;
    uStack_34c = uStack_314;
    local_368 = local_330;
    uStack_364 = uStack_32c;
    uStack_360 = uStack_328;
    uStack_35c = uStack_324;
    local_378 = local_340;
    local_370 = local_338;
                    /* try { // try from 0015f159 to 0015f16c has its CatchHandler @ 0015f366 */
    ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_2e8,0x4000,0);
    if (local_2e8 != (undefined **)0x0) {
                    /* try { // try from 0015f319 to 0015f31e has its CatchHandler @ 0015f366 */
      (*(code *)PTR_handle_error_0020d0b8)(uStack_2e0,local_2d8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_390 = uStack_2e0;
    local_388 = local_2d8;
    local_380 = 0;
                    /* try { // try from 0015f19f to 0015f207 has its CatchHandler @ 0015f36b */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2e8,&local_378,"STRING",6);
    clap_builder::parser::error::MatchesError::unwrap(&local_340,"STRING",6,&local_2e8);
    args_into_buffer(&local_390,&local_340);
    (*(code *)PTR_prepare_buffer_0020d188)(&local_390);
    lVar4 = (*(code *)PTR_exec_0020d190)(local_388,local_380);
    if (lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      cVar2 = std::io::error::Error::kind(lVar4);
      if (cVar2 == '\v') {
                    /* try { // try from 0015f21c to 0015f223 has its CatchHandler @ 0015f321 */
        core::ptr::drop_in_place<std::io::error::Error>(lVar4);
        uVar3 = 0;
      }
      else {
        local_338 = PTR_fmt_0020d0f8;
        local_2e8 = &PTR_s_standard_output__00207298;
        uStack_2e0 = 1;
        local_2c8 = 0;
        local_2d0 = 1;
                    /* try { // try from 0015f28a to 0015f2d6 has its CatchHandler @ 0015f326 */
        local_398 = lVar4;
        local_340 = (undefined *)&local_398;
        local_2d8 = &local_340;
        core::option::Option<T>::map_or_else(local_300,&local_2e8);
        local_2d0 = CONCAT44(local_2d0._4_4_,1);
        local_2d8 = (undefined **)local_2f0;
        uVar3 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 0015f2de to 0015f2e2 has its CatchHandler @ 0015f321 */
        core::ptr::drop_in_place<std::io::error::Error>(local_398);
      }
    }
                    /* try { // try from 0015f2e5 to 0015f2ee has its CatchHandler @ 0015f345 */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_390);
                    /* try { // try from 0015f2ef to 0015f2f8 has its CatchHandler @ 0015f340 */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_378);
  }
  return uVar3;
}