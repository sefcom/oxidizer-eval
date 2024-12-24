undefined  [16] __rustcall uu_fmt::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  undefined *puVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  char cVar6;
  undefined uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  int extraout_EDX;
  undefined auVar11 [16];
  undefined8 ****local_3d8;
  undefined8 ****local_3d0;
  ulong local_3c8;
  undefined8 ****local_3c0;
  undefined8 ****local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined local_388 [8];
  long local_380;
  ulong local_378;
  undefined8 ****local_370;
  undefined local_368 [16];
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 ****local_320;
  undefined8 ****local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  ulong local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined8 local_2b0;
  
  core::iter::traits::iterator::Iterator::collect(local_388,param_1,param_2);
  if (1 < local_378) {
                    /* try { // try from 0016977a to 00169784 has its CatchHandler @ 00169c23 */
    (*(code *)PTR_to_string_lossy_0022b728)
              (&local_3c0,*(undefined8 *)(local_380 + 0x20),*(undefined8 *)(local_380 + 0x28));
    ppppuVar4 = local_3b8;
    uVar10 = CONCAT44(uStack_3ac,local_3b0);
    local_2f8 = (undefined **)((ulong)local_2f8 & 0xffffffff00000000);
                    /* try { // try from 0016979a to 001697ea has its CatchHandler @ 00169be6 */
    auVar11 = core::char::methods::encode_utf8_raw(&local_2f8);
    cVar6 = core::slice::_<impl[T]>::starts_with(ppppuVar4,uVar10,auVar11._0_8_,auVar11._8_8_);
    if (cVar6 != '\0') {
      uStack_2f0 = (undefined8 *****)(CONCAT44(uStack_3ac,local_3b0) + (long)local_3b8);
      local_2f8 = (undefined **)local_3b8;
      lVar9 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::advance_by
                        (&local_2f8,1);
      if (((lVar9 == 0) && (iVar8 = core::str::validations::next_code_point(&local_2f8), iVar8 != 0)
          ) && (extraout_EDX - 0x30U < 10)) {
        uStack_2f0 = (undefined8 *****)(CONCAT44(uStack_3ac,local_3b0) + (long)local_3b8);
        local_2f8 = (undefined **)local_3b8;
        local_2e8 = (undefined *)0x2;
                    /* try { // try from 00169a61 to 00169b74 has its CatchHandler @ 00169be6 */
        uVar7 = _<core::iter::adapters::skip::Skip<I>as_core::iter::traits::iterator::Iterator>::
                try_fold(&local_2f8);
        cVar6 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar7);
        ppppuVar4 = local_3b8;
        if (cVar6 != '\0') {
          uVar10 = CONCAT44(uStack_3ac,local_3b0);
          local_2f8 = (undefined **)((ulong)local_2f8 & 0xffffffff00000000);
          auVar11 = core::char::methods::encode_utf8_raw(&local_2f8);
          local_368 = _<&str_as_core::str::pattern::Pattern>::strip_prefix_of
                                (auVar11._0_8_,auVar11._8_8_,ppppuVar4,uVar10);
          if (local_368._0_8_ == 0) {
                    /* try { // try from 00169bc8 to 00169bd4 has its CatchHandler @ 00169be6 */
            (*(code *)PTR_unwrap_failed_0022b768)(&DAT_00224d38);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_370 = (undefined8 *****)0x0;
          uStack_358 = CONCAT31(uStack_358._1_3_,1);
          local_3d8 = &local_370;
          local_3d0 = (undefined8 ****)PTR_fmt_0022b760;
          local_2f8 = &PTR_DAT_00224d50;
          uStack_2f0 = (undefined8 *****)0x1;
          uStack_2d8 = 0;
          local_2e0 = 1;
          local_2e8 = (undefined *)&local_3d8;
          core::option::Option<T>::map_or_else(&local_310,&local_2f8);
          local_2e0 = CONCAT44(local_2e0._4_4_,1);
          local_2f8 = (undefined **)CONCAT44(uStack_30c,local_310);
          uStack_2f0 = (undefined8 *****)CONCAT44(uStack_304,uStack_308);
          local_2e8 = (undefined *)local_300;
          uVar10 = ::alloc::boxed::Box<T>::new(&local_2f8);
                    /* try { // try from 00169b75 to 00169b81 has its CatchHandler @ 00169c23 */
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_3c0);
          auVar11._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00224d98;
          auVar11._0_8_ = uVar10;
          goto LAB_001699f5;
        }
      }
    }
                    /* try { // try from 001697f4 to 00169841 has its CatchHandler @ 00169c23 */
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_3c0);
  }
  (*(code *)PTR_uu_app_0022b730)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from(&local_370,&local_2f8,local_388);
  if ((undefined8 *****)local_370 == (undefined8 *****)0x8000000000000000) {
    auVar11 = (*(code *)PTR_from_0022b738)();
  }
  else {
    local_3a0 = local_350;
    uStack_39c = uStack_34c;
    uStack_398 = uStack_348;
    uStack_394 = uStack_344;
    local_3b0 = local_368._8_4_;
    uStack_3ac = local_368._12_4_;
    uStack_3a8 = uStack_358;
    uStack_3a4 = uStack_354;
    local_3c0 = local_370;
    local_3b8 = (undefined8 ****)local_368._0_8_;
                    /* try { // try from 0016987b to 0016988d has its CatchHandler @ 00169be1 */
    (*(code *)PTR_extract_files_0022b740)(&local_2f8,&local_3c0);
    auVar11._8_8_ = local_2e8;
    auVar11._0_8_ = uStack_2f0;
    if ((undefined8 *****)local_2f8 != (undefined8 *****)0x8000000000000000) {
      local_3d8 = (undefined8 ****)local_2f8;
      local_3d0 = uStack_2f0;
      local_3c8 = (ulong)local_2e8;
                    /* try { // try from 001698bd to 001698cf has its CatchHandler @ 00169bdc */
      (*(code *)PTR_from_matches_0022b748)(&local_2f8,&local_3c0);
      puVar5 = local_2e8;
      auVar11._8_8_ = local_2e8;
      auVar11._0_8_ = uStack_2f0;
      if ((undefined8 *****)local_2f8 != (undefined8 *****)0x8000000000000001) {
        local_328 = local_2b0;
        local_338 = local_2c0;
        uStack_334 = uStack_2bc;
        uStack_330 = uStack_2b8;
        uStack_32c = uStack_2b4;
        uStack_348 = local_2d0;
        uStack_344 = uStack_2cc;
        local_340 = uStack_2c8;
        uStack_33c = uStack_2c4;
        uStack_358 = (undefined4)local_2e0;
        uStack_354 = local_2e0._4_4_;
        local_350 = (undefined4)uStack_2d8;
        uStack_34c = uStack_2d8._4_4_;
        local_370 = (undefined8 ****)local_2f8;
        local_368._0_8_ = uStack_2f0;
        local_368._8_8_ = local_2e8;
                    /* try { // try from 00169943 to 0016995d has its CatchHandler @ 00169bd7 */
        uVar10 = (*(code *)PTR_stdout_0022b750)();
        std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&local_2f8,0x2000,uVar10);
        puVar3 = PTR_process_file_0022b758;
        local_318 = local_3d0 + local_3c8 * 3;
        local_320 = local_3d0;
        do {
          lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_320);
          if (lVar9 == 0) {
                    /* try { // try from 00169b8e to 00169b9a has its CatchHandler @ 00169bd7 */
            core::ptr::
            drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
                      (&local_2f8);
                    /* try { // try from 00169b9b to 00169ba4 has its CatchHandler @ 00169bdc */
            core::ptr::drop_in_place<uu_fmt::FmtOptions>(&local_370);
                    /* try { // try from 00169ba5 to 00169bac has its CatchHandler @ 00169be1 */
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3d8);
                    /* try { // try from 00169bad to 00169bb6 has its CatchHandler @ 00169c23 */
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                      (&local_3c0);
            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_388);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = puVar5;
            return auVar2 << 0x40;
          }
                    /* try { // try from 001699b9 to 001699c0 has its CatchHandler @ 00169bf5 */
          auVar11 = (*(code *)puVar3)(*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
                                      &local_370,&local_2f8);
        } while (auVar11._0_8_ == 0);
                    /* try { // try from 001699c9 to 001699d8 has its CatchHandler @ 00169bd7 */
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
                  (&local_2f8);
                    /* try { // try from 001699d9 to 001699e2 has its CatchHandler @ 00169bdc */
        core::ptr::drop_in_place<uu_fmt::FmtOptions>(&local_370);
      }
                    /* try { // try from 001699e3 to 001699ea has its CatchHandler @ 00169be1 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3d8);
    }
                    /* try { // try from 001699eb to 001699f4 has its CatchHandler @ 00169c23 */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3c0);
  }
LAB_001699f5:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_388);
  return auVar11;
}