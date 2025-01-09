undefined  [16] __rustcall uu_ptx::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined local_4e0 [8];
  long local_4d8;
  long local_4d0;
  undefined8 local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 local_4a0;
  long local_490;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined local_458 [24];
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined8 local_400;
  long local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  long local_370 [2];
  undefined8 local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined local_340 [24];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  
  (*(code *)PTR_uu_app_0042c2f8)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3f0,&local_2e8,param_1,param_2);
  if (local_3f0 == -0x8000000000000000) {
    auVar5 = (*(code *)PTR_from_0042c300)();
    return auVar5;
  }
  local_470 = local_3d0;
  uStack_46c = uStack_3cc;
  uStack_468 = uStack_3c8;
  uStack_464 = uStack_3c4;
  local_480 = local_3e0;
  uStack_47c = uStack_3dc;
  uStack_478 = uStack_3d8;
  uStack_474 = uStack_3d4;
  local_490 = local_3f0;
  local_488 = local_3e8;
  uVar3 = *(undefined8 *)PTR_FILE_0042c308;
  uVar4 = *(undefined8 *)(PTR_FILE_0042c308 + 8);
                    /* try { // try from 0026307d to 00263131 has its CatchHandler @ 00263549 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2e8,&local_490,uVar3,uVar4);
  clap_builder::parser::error::MatchesError::unwrap(&local_3f0,uVar3,uVar4,&local_2e8);
  if (local_3f0 == 0) {
    puVar2 = (undefined4 *)::alloc::alloc::Global::alloc_impl(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR_handle_alloc_error_0042c2b0)(8,0x18);
      goto LAB_002634d4;
    }
                    /* try { // try from 00263147 to 00263156 has its CatchHandler @ 00263509 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_2e8);
    *(ulong *)(puVar2 + 4) = CONCAT44(uStack_2d4,local_2d8);
    *puVar2 = local_2e8;
    puVar2[1] = uStack_2e4;
    puVar2[2] = uStack_2e0;
    puVar2[3] = uStack_2dc;
                    /* try { // try from 0026317f to 00263190 has its CatchHandler @ 00263549 */
    ::alloc::slice::hack::into_vec(local_4e0,puVar2,1);
  }
  else {
    _<core::iter::adapters::map::Map<I,F>as_core::clone::Clone>::clone(&local_2e8,&local_3f0);
    local_328 = local_2e8;
    uStack_324 = uStack_2e4;
    uStack_320 = uStack_2e0;
    uStack_31c = uStack_2dc;
    local_318 = local_2d8;
    uStack_314 = uStack_2d4;
    uStack_310 = uStack_2d0;
    uStack_30c = uStack_2cc;
    local_308 = local_2c8;
    uStack_304 = uStack_2c4;
    uStack_300 = uStack_2c0;
    uStack_2fc = uStack_2bc;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (local_4e0,&local_328);
  }
                    /* try { // try from 00263191 to 002631a3 has its CatchHandler @ 0026353a */
  (*(code *)PTR_get_config_0042c310)(&local_2e8,&local_490);
  uVar3 = CONCAT44(uStack_2dc,uStack_2e0);
  uVar4 = CONCAT44(uStack_2d4,local_2d8);
  if (CONCAT44(uStack_2e4,local_2e8) != -0x8000000000000000) {
    local_400 = local_290;
    local_410 = local_2a0;
    uStack_40c = uStack_29c;
    uStack_408 = uStack_298;
    uStack_404 = uStack_294;
    local_420 = local_2b0;
    uStack_41c = uStack_2ac;
    uStack_418 = uStack_2a8;
    uStack_414 = uStack_2a4;
    local_430 = uStack_2c0;
    uStack_42c = uStack_2bc;
    uStack_428 = local_2b8;
    uStack_424 = uStack_2b4;
    local_440 = uStack_2d0;
    uStack_43c = uStack_2cc;
    uStack_438 = local_2c8;
    uStack_434 = uStack_2c4;
                    /* try { // try from 0026322d to 00263247 has its CatchHandler @ 00263528 */
    (*(code *)PTR_new_0042c318)(&local_2e8,&local_490,local_458);
    uVar3 = CONCAT44(uStack_2dc,uStack_2e0);
    uVar4 = CONCAT44(uStack_2d4,local_2d8);
    if (CONCAT44(uStack_2e4,local_2e8) != -0x8000000000000000) {
      local_378 = local_270;
      local_388 = local_280;
      uStack_380 = uStack_278;
      local_398 = local_290;
      uStack_390 = uStack_288;
      local_3a8 = local_2a0;
      uStack_3a4 = uStack_29c;
      uStack_3a0 = uStack_298;
      uStack_39c = uStack_294;
      local_3b8 = local_2b0;
      uStack_3b4 = uStack_2ac;
      uStack_3b0 = uStack_2a8;
      uStack_3ac = uStack_2a4;
      uStack_3c8 = uStack_2c0;
      uStack_3c4 = uStack_2bc;
      local_3c0 = local_2b8;
      uStack_3bc = uStack_2b4;
      uStack_3d8 = uStack_2d0;
      uStack_3d4 = uStack_2cc;
      local_3d0 = local_2c8;
      uStack_3cc = uStack_2c4;
                    /* try { // try from 002632fb to 00263322 has its CatchHandler @ 00263516 */
      (*(code *)PTR_read_input_0042c320)(&local_2e8,local_4d8,local_4d0,local_458);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(&local_4c8,&local_2e8);
      uVar4 = uStack_4b8;
      uVar3 = CONCAT44(uStack_4bc,uStack_4c0);
      if (local_4c8 != 0) {
        local_348 = local_4a0;
        local_358 = local_4b0;
        uStack_354 = uStack_4ac;
        uStack_350 = uStack_4a8;
        uStack_34c = uStack_4a4;
        local_370[0] = local_4c8;
        local_360 = uStack_4b8;
                    /* try { // try from 0026336d to 00263392 has its CatchHandler @ 002634f7 */
        (*(code *)PTR_create_word_set_0042c328)(local_340,local_458,&local_3f0,local_370);
        if (((char)local_400 == '\0') && (local_4d0 == 2)) {
          local_4d0 = 1;
          local_4c8 = *(long *)(local_4d8 + 0x18);
          if (local_4c8 == -0x8000000000000000) {
                    /* try { // try from 002634c7 to 002634d3 has its CatchHandler @ 002634e5 */
            (*(code *)PTR_unwrap_failed_0042c338)(&DAT_003eadf0);
LAB_002634d4:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uStack_4c0 = *(undefined4 *)(local_4d8 + 0x20);
          uStack_4bc = *(undefined4 *)(local_4d8 + 0x24);
          uStack_4b8 = *(undefined8 *)(local_4d8 + 0x28);
        }
        else {
                    /* try { // try from 00263413 to 0026341f has its CatchHandler @ 002634e5 */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_2e8);
          uStack_4b8 = CONCAT44(uStack_2d4,local_2d8);
          local_4c8 = CONCAT44(uStack_2e4,local_2e8);
          uStack_4c0 = uStack_2e0;
          uStack_4bc = uStack_2dc;
        }
                    /* try { // try from 00263444 to 00263461 has its CatchHandler @ 002634d6 */
        auVar5 = (*(code *)PTR_write_traditional_output_0042c330)
                           (local_458,local_370,local_340,CONCAT44(uStack_4bc,uStack_4c0),uStack_4b8
                           );
                    /* try { // try from 00263462 to 00263471 has its CatchHandler @ 002634e5 */
        core::ptr::drop_in_place<alloc::string::String>(&local_4c8);
                    /* try { // try from 00263472 to 0026347e has its CatchHandler @ 002634f7 */
        core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<uu_ptx::WordRef>>
                  (local_340);
                    /* try { // try from 0026347f to 0026348b has its CatchHandler @ 00263516 */
        core::ptr::
        drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>
                  (local_370);
                    /* try { // try from 0026348c to 00263498 has its CatchHandler @ 00263528 */
        core::ptr::drop_in_place<uu_ptx::WordFilter>(&local_3f0);
                    /* try { // try from 00263499 to 002634a5 has its CatchHandler @ 0026353a */
        core::ptr::drop_in_place<uu_ptx::Config>(local_458);
                    /* try { // try from 002634a6 to 002634c4 has its CatchHandler @ 00263549 */
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_4e0);
        goto LAB_002633f4;
      }
                    /* try { // try from 002633d0 to 002633dc has its CatchHandler @ 00263528 */
      core::ptr::drop_in_place<uu_ptx::WordFilter>(&local_3f0);
    }
                    /* try { // try from 002633dd to 002633e9 has its CatchHandler @ 0026353a */
    core::ptr::drop_in_place<uu_ptx::Config>(local_458);
  }
                    /* try { // try from 002633ea to 002633f3 has its CatchHandler @ 00263549 */
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(local_4e0);
LAB_002633f4:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_490);
  return auVar5;
}