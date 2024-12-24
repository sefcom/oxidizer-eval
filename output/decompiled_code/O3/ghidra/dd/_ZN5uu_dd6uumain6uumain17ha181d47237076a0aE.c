undefined  [16] __rustcall uu_dd::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined auVar7 [16];
  undefined auStack_578 [8];
  undefined8 local_570;
  undefined8 local_568;
  long local_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  long local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined4 local_490;
  undefined3 uStack_48c;
  undefined uStack_489;
  long local_448;
  long local_440;
  undefined8 local_438;
  long lStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  long local_410;
  long local_408;
  undefined8 uStack_400;
  long lStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  code *local_368;
  undefined *local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  char *local_338;
  undefined8 local_330;
  code *local_328;
  undefined *local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  char *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  long local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 local_260;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined local_218;
  
  (*(code *)PTR_uu_app_00266f58)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_410,&local_2e8,param_1,param_2);
  if (local_410 == -0x8000000000000000) {
    auVar7 = (*(code *)PTR_from_00266f60)();
    return auVar7;
  }
  local_418 = local_3e0;
  local_428 = uStack_3f0;
  uStack_424 = uStack_3ec;
  uStack_420 = uStack_3e8;
  uStack_41c = uStack_3e4;
  local_438 = uStack_400;
  lStack_430 = lStack_3f8;
  local_448 = local_410;
  local_440 = local_408;
  local_278 = 0x8000000000000000;
  local_260 = 0x8000000000000000;
  local_2e8 = 0;
  local_2d8 = 0;
  local_2c8 = 0;
  local_2b8 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 2;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 3;
                    /* try { // try from 001855fa to 001856cd has its CatchHandler @ 00185a2e */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_490,&local_448,"operandsESTRPIPENotFoundTimedOut",8);
  pcVar6 = "operandsESTRPIPENotFoundTimedOut";
  clap_builder::parser::error::MatchesError::unwrap
            (&local_328,"operandsESTRPIPENotFoundTimedOut",8,&local_490);
  local_360 = local_320;
  if (local_328 == (code *)0x0) {
    local_308 = 0;
    uStack_304 = 0;
    uStack_300 = 0;
    uStack_2fc = 0;
    local_318 = SUB84(PTR_EMPTY_00266f68,0);
    uStack_314 = (undefined4)((ulong)PTR_EMPTY_00266f68 >> 0x20);
    uStack_310 = 0;
    uStack_30c = 0;
    local_328 = core::ops::function::FnOnce::call_once;
    local_2f0 = 0;
    local_360 = PTR_EMPTY_00266f68;
    local_2f8 = pcVar6;
  }
  local_368 = local_328;
  local_358 = local_318;
  uStack_354 = uStack_314;
  uStack_350 = uStack_310;
  uStack_34c = uStack_30c;
  local_348 = local_308;
  uStack_344 = uStack_304;
  uStack_340 = uStack_300;
  uStack_33c = uStack_2fc;
  local_338 = local_2f8;
  local_330 = local_2f0;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (auStack_578,&local_368);
                    /* try { // try from 001856d8 to 00185748 has its CatchHandler @ 00185a21 */
  (*(code *)PTR_parse_00266f70)(&local_410,&local_2e8,local_570,local_568);
  local_4b8 = local_408;
  lVar1 = local_4b8;
  uStack_4b0 = uStack_400;
  uVar4 = uStack_4b0;
  local_4a8 = lStack_3f8;
  lVar5 = local_4a8;
  local_4b8._0_4_ = (undefined4)local_408;
  local_4b8._4_4_ = (undefined4)((ulong)local_408 >> 0x20);
  uStack_4b0._0_4_ = (undefined4)uStack_400;
  uStack_4b0._4_4_ = (undefined4)((ulong)uStack_400 >> 0x20);
  local_4a8._0_4_ = (undefined4)lStack_3f8;
  local_4a8._4_4_ = (undefined4)((ulong)lStack_3f8 >> 0x20);
  local_4b8 = lVar1;
  uStack_4b0 = uVar4;
  local_4a8 = lVar5;
  if (local_410 == 3) {
    local_2d8 = lStack_3f8;
    uStack_2d0 = uStack_3f0;
    uStack_2cc = uStack_3ec;
    local_2e8 = local_408;
    uStack_2e0 = (undefined4)uStack_4b0;
    uStack_2dc = uStack_4b0._4_4_;
    uVar4 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 00185749 to 00185753 has its CatchHandler @ 00185a0d */
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(auStack_578);
    auVar7._8_8_ = &PTR_drop_in_place<uu_dd_parseargs_ParseError>_0025e698;
    auVar7._0_8_ = uVar4;
  }
  else {
    local_4c8 = local_378;
    uStack_4c0 = uStack_370;
    local_4d8 = local_388;
    uStack_4d0 = uStack_380;
    local_4e8 = local_398;
    uStack_4e0 = uStack_390;
    local_4f8 = local_3a8;
    uStack_4f0 = uStack_3a0;
    local_538 = CONCAT44(uStack_3e4,uStack_3e8);
    local_508 = local_3b8;
    uStack_504 = uStack_3b4;
    uStack_500 = uStack_3b0;
    uStack_4fc = uStack_3ac;
    local_518 = local_3c8;
    uStack_514 = uStack_3c4;
    uStack_510 = uStack_3c0;
    uStack_50c = uStack_3bc;
    local_528 = local_3d8;
    uStack_520 = uStack_3d0;
    uStack_530 = local_3e0;
    local_558 = (undefined4)local_4b8;
    uStack_554 = local_4b8._4_4_;
    uStack_550 = (undefined4)uStack_4b0;
    uStack_54c = uStack_4b0._4_4_;
    local_548 = (undefined4)local_4a8;
    uStack_544 = local_4a8._4_4_;
    uStack_540 = uStack_3f0;
    uStack_53c = uStack_3ec;
    local_560 = local_410;
                    /* try { // try from 001857f3 to 00185866 has its CatchHandler @ 00185a12 */
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(auStack_578);
    if (CONCAT44(uStack_54c,uStack_550) == -0x8000000000000000) {
      (*(code *)PTR_new_stdin_00266f78)(&local_2e8,&local_560);
    }
    else {
      cVar3 = (*(code *)PTR_is_fifo_00266f80)
                        (CONCAT44(uStack_544,local_548),CONCAT44(uStack_53c,uStack_540));
      if (cVar3 == '\0') {
        (*(code *)PTR_new_file_00266f90)
                  (&local_2e8,CONCAT44(uStack_544,local_548),CONCAT44(uStack_53c,uStack_540),
                   &local_560);
      }
      else {
        (*(code *)PTR_new_fifo_00266f88)
                  (&local_2e8,CONCAT44(uStack_544,local_548),CONCAT44(uStack_53c,uStack_540),
                   &local_560);
      }
    }
    lVar1 = local_2d8;
    uVar2 = uStack_2dc;
    uVar4 = CONCAT44(uStack_2dc,uStack_2e0);
    lVar5 = local_2d8;
    if (local_2e8 == 0) {
      if (local_538 == -0x8000000000000000) {
                    /* try { // try from 00185890 to 00185913 has its CatchHandler @ 001859fc */
        cVar3 = (*(code *)PTR_is_stdout_redirected_to_seekable_file_00266f98)();
        if (cVar3 == '\0') {
          (*(code *)PTR_new_stdout_00266fb0)(&local_2e8,&local_560);
        }
        else {
          (*(code *)PTR_new_file_from_stdout_00266fa0)(&local_2e8,&local_560);
        }
      }
      else {
        cVar3 = (*(code *)PTR_is_fifo_00266f80)(uStack_530,local_528);
        if (cVar3 == '\0') {
          (*(code *)PTR_new_file_00266fb8)(&local_2e8,uStack_530,local_528,&local_560);
        }
        else {
          (*(code *)PTR_new_fifo_00266fa8)(&local_2e8,uStack_530,local_528,&local_560);
        }
      }
      lVar5 = local_2d8;
      if ((char)local_2e8 != '\x04') {
        uStack_48c = (undefined3)((ulong)local_2e8 >> 0x28);
        local_490 = local_2e8._1_4_;
        local_408 = lVar1;
                    /* try { // try from 001859c7 to 001859e4 has its CatchHandler @ 001859fa */
        uVar4 = (*(code *)PTR_dd_copy_00266fc0)(&local_410,&local_2e8);
        auVar7 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                 ::map_err_context(uVar4);
                    /* try { // try from 001859e5 to 001859f4 has its CatchHandler @ 00185a0d */
        core::ptr::drop_in_place<uu_dd::Settings>(&local_560);
        goto LAB_00185946;
      }
      uVar4 = CONCAT44(uStack_2dc,uStack_2e0);
      core::ptr::drop_in_place<uu_dd::Input>(uVar2);
    }
                    /* try { // try from 0018593c to 00185945 has its CatchHandler @ 00185a0d */
    auVar7._8_8_ = lVar5;
    auVar7._0_8_ = uVar4;
    core::ptr::drop_in_place<uu_dd::Settings>(&local_560);
  }
LAB_00185946:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_448);
  return auVar7;
}