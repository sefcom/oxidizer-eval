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
                    /* try { // try from 0016923a to 00169244 has its CatchHandler @ 001696e3 */
    (*(code *)PTR_to_string_lossy_0022a418)
              (&local_3c0,*(undefined8 *)(local_380 + 0x20),*(undefined8 *)(local_380 + 0x28));
    ppppuVar4 = local_3b8;
    uVar10 = CONCAT44(uStack_3ac,local_3b0);
    local_2f8 = (undefined **)((ulong)local_2f8 & 0xffffffff00000000);
                    /* try { // try from 0016925a to 001692aa has its CatchHandler @ 001696a6 */
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
                    /* try { // try from 00169521 to 00169634 has its CatchHandler @ 001696a6 */
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
                    /* try { // try from 00169688 to 00169694 has its CatchHandler @ 001696a6 */
            (*(code *)PTR_unwrap_failed_0022a458)(&PTR_DAT_00223a58);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_370 = (undefined8 *****)0x0;
          uStack_358 = CONCAT31(uStack_358._1_3_,1);
          local_3d8 = &local_370;
          local_3d0 = (undefined8 ****)PTR_fmt_0022a450;
          local_2f8 = &PTR_DAT_00223a48;
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
                    /* try { // try from 00169635 to 00169641 has its CatchHandler @ 001696e3 */
          core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_3c0);
          auVar11._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00223aa8;
          auVar11._0_8_ = uVar10;
          goto LAB_001694b5;
        }
      }
    }
                    /* try { // try from 001692b4 to 00169301 has its CatchHandler @ 001696e3 */
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_3c0);
  }
  (*(code *)PTR_uu_app_0022a420)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from(&local_370,&local_2f8,local_388);
  if ((undefined8 *****)local_370 == (undefined8 *****)0x8000000000000000) {
    auVar11 = (*(code *)PTR_from_0022a428)();
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
                    /* try { // try from 0016933b to 0016934d has its CatchHandler @ 001696a1 */
    (*(code *)PTR_extract_files_0022a430)(&local_2f8,&local_3c0);
    auVar11._8_8_ = local_2e8;
    auVar11._0_8_ = uStack_2f0;
    if ((undefined8 *****)local_2f8 != (undefined8 *****)0x8000000000000000) {
      local_3d8 = (undefined8 ****)local_2f8;
      local_3d0 = uStack_2f0;
      local_3c8 = (ulong)local_2e8;
                    /* try { // try from 0016937d to 0016938f has its CatchHandler @ 0016969c */
      (*(code *)PTR_from_matches_0022a438)(&local_2f8,&local_3c0);
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
                    /* try { // try from 00169403 to 0016941d has its CatchHandler @ 00169697 */
        uVar10 = (*(code *)PTR_stdout_0022a440)();
        std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&local_2f8,0x2000,uVar10);
        puVar3 = PTR_process_file_0022a448;
        local_318 = local_3d0 + local_3c8 * 3;
        local_320 = local_3d0;
        do {
          lVar9 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_320);
          if (lVar9 == 0) {
                    /* try { // try from 0016964e to 0016965a has its CatchHandler @ 00169697 */
            core::ptr::
            drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
                      (&local_2f8);
                    /* try { // try from 0016965b to 00169664 has its CatchHandler @ 0016969c */
            core::ptr::drop_in_place<uu_fmt::FmtOptions>(&local_370);
                    /* try { // try from 00169665 to 0016966c has its CatchHandler @ 001696a1 */
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3d8);
                    /* try { // try from 0016966d to 00169676 has its CatchHandler @ 001696e3 */
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>
                      (&local_3c0);
            core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_388);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = puVar5;
            return auVar2 << 0x40;
          }
                    /* try { // try from 00169479 to 00169480 has its CatchHandler @ 001696b5 */
          auVar11 = (*(code *)puVar3)(*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10),
                                      &local_370,&local_2f8);
        } while (auVar11._0_8_ == 0);
                    /* try { // try from 00169489 to 00169498 has its CatchHandler @ 00169697 */
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
                  (&local_2f8);
                    /* try { // try from 00169499 to 001694a2 has its CatchHandler @ 0016969c */
        core::ptr::drop_in_place<uu_fmt::FmtOptions>(&local_370);
      }
                    /* try { // try from 001694a3 to 001694aa has its CatchHandler @ 001696a1 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3d8);
    }
                    /* try { // try from 001694ab to 001694b4 has its CatchHandler @ 001696e3 */
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3c0);
  }
LAB_001694b5:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_388);
  return auVar11;
}