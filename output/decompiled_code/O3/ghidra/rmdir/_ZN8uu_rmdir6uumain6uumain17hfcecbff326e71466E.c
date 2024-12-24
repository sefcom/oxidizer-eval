undefined8 __rustcall uu_rmdir::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  long local_3e8;
  undefined8 local_3e0;
  undefined *local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined local_3a0 [16];
  long local_390;
  undefined local_388;
  undefined8 *local_380;
  code *local_378;
  undefined *local_370;
  code *local_368;
  code *local_360;
  undefined *local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  long local_328;
  undefined8 local_320;
  long local_318;
  undefined local_310 [24];
  code *local_2f8;
  undefined *local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined local_2b8 [648];
  
  (*(code *)PTR_uu_app_00212750)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3e0,&local_2f8,param_1,param_2);
  if (local_3e0 == (code *)0x8000000000000000) {
    uVar6 = (*(code *)PTR_from_00212758)();
  }
  else {
    local_330 = local_3b0;
    local_340 = (undefined4)local_3c0;
    uStack_33c = local_3c0._4_4_;
    uStack_338 = uStack_3b8;
    uStack_334 = uStack_3b4;
    local_350 = (undefined4)local_3d0;
    uStack_34c = local_3d0._4_4_;
    uStack_348 = (undefined4)uStack_3c8;
    uStack_344 = uStack_3c8._4_4_;
    local_360 = local_3e0;
    local_358 = local_3d8;
                    /* try { // try from 00162744 to 001627d2 has its CatchHandler @ 00162bb2 */
    bVar2 = (*(code *)PTR_get_flag_00212768)
                      (&local_360,*(undefined8 *)PTR_OPT_IGNORE_FAIL_NON_EMPTY_00212760,
                       *(undefined8 *)(PTR_OPT_IGNORE_FAIL_NON_EMPTY_00212760 + 8));
    uVar4 = (*(code *)PTR_get_flag_00212768)
                      (&local_360,*(undefined8 *)PTR_OPT_PARENTS_00212770,
                       *(undefined8 *)(PTR_OPT_PARENTS_00212770 + 8));
    uVar5 = (*(code *)PTR_get_flag_00212768)
                      (&local_360,*(undefined8 *)PTR_OPT_VERBOSE_00212778,
                       *(undefined8 *)(PTR_OPT_VERBOSE_00212778 + 8));
    uVar6 = *(undefined8 *)PTR_ARG_DIRS_00212780;
    uVar1 = *(undefined8 *)(PTR_ARG_DIRS_00212780 + 8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
              (&local_2f8,&local_360,uVar6,uVar1);
    clap_builder::parser::error::MatchesError::unwrap(&local_3e0,uVar6,uVar1,&local_2f8);
    if (local_3e0 == (code *)0x0) {
      local_2d8 = 0;
      uStack_2d4 = 0;
      uStack_3b8 = 0;
      uStack_3b4 = 0;
      local_2e8 = SUB84(PTR_EMPTY_00212788,0);
      uStack_2e4 = (undefined4)((ulong)PTR_EMPTY_00212788 >> 0x20);
      uStack_2e0 = 0;
      uStack_2dc = 0;
      local_2f8 = core::ops::function::FnOnce::call_once;
      local_3a8 = 0;
      local_2f0 = PTR_EMPTY_00212788;
    }
    else {
      local_2f8 = local_3e0;
      local_2f0 = local_3d8;
      uVar6 = local_3b0;
      local_2d8 = (undefined4)local_3c0;
      uStack_2d4 = local_3c0._4_4_;
      local_2e8 = (undefined4)local_3d0;
      uStack_2e4 = local_3d0._4_4_;
      uStack_2e0 = (undefined4)uStack_3c8;
      uStack_2dc = uStack_3c8._4_4_;
    }
    uStack_2d0 = uStack_3b8;
    uStack_2cc = uStack_3b4;
    local_2c8 = uVar6;
    local_2c0 = local_3a8;
    while( true ) {
      lVar7 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
              ::next(&local_2f8);
      if (lVar7 == 0) break;
      auVar8 = core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::
               call_once(local_2b8,lVar7);
      (*(code *)PTR_remove_00212790)
                (&local_328,auVar8._0_8_,auVar8._8_8_,
                 (uVar5 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 | (uint)bVar2);
      lVar7 = local_318;
      uVar6 = local_320;
      if (local_328 != 0) {
        local_3e8 = local_328;
        if (bVar2 == 0) {
LAB_001628f5:
          (*(code *)PTR_set_exit_code_002127a0)(1);
          std::io::error::repr_bitpacked::decode_repr(&local_3e0,local_3e8);
          if (((char)local_3e0 == '\0') && (local_3e0._4_4_ == 0x14)) {
            cVar3 = core::slice::_<impl[T]>::ends_with
                              (uVar6,lVar7,
                               "/failed to remove : Symbolic link not followed\n/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rs"
                               ,1);
            if (cVar3 != '\0') {
              auVar8 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::
                       index(lVar7 + -1,uVar6,lVar7);
              cVar3 = (*(code *)PTR_is_symlink_002127a8)(auVar8._0_8_,auVar8._8_8_);
              if (cVar3 != '\0') {
                (*(code *)PTR_points_to_directory_002127b0)(&local_3e0,auVar8._0_8_,auVar8._8_8_);
                if ((char)local_3e0 == '\0') {
                  if (local_3e0._1_1_ == '\0') goto LAB_00162a80;
                }
                else {
                  core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>
                            ((ulong)local_3e0 & 0xff,local_3d8);
                }
                local_3a0 = (*(code *)PTR_util_name_00212738)();
                local_380 = (undefined8 *)local_3a0;
                local_378 = _<&T_as_core::fmt::Display>::fmt;
                local_3e0 = (code *)&DAT_0020c680;
                local_3d8 = (undefined *)0x2;
                local_3c0 = 0;
                local_3d0 = &local_380;
                uStack_3c8 = 1;
                (*(code *)PTR__eprint_00212678)(&local_3e0);
                local_3a0._0_8_ = 1;
                local_3a0._8_8_ = uVar6;
                local_390 = lVar7;
                local_388 = 1;
                local_380 = (undefined8 *)local_3a0;
                local_378 = (code *)PTR_fmt_002127b8;
                local_3e0 = (code *)&DAT_0020c728;
                local_3d8 = (undefined *)0x2;
                local_3c0 = 0;
                local_3d0 = &local_380;
                uStack_3c8 = 1;
                (*(code *)PTR__eprint_00212678)(&local_3e0);
                goto LAB_00162870;
              }
            }
          }
LAB_00162a80:
          local_3a0 = (*(code *)PTR_util_name_00212738)();
          local_380 = (undefined8 *)local_3a0;
          local_378 = _<&T_as_core::fmt::Display>::fmt;
          local_3e0 = (code *)&DAT_0020c680;
          local_3d8 = (undefined *)0x2;
          local_3c0 = 0;
          local_3d0 = &local_380;
          uStack_3c8 = 1;
          (*(code *)PTR__eprint_00212678)(&local_3e0);
          local_3a0._0_8_ = 1;
          local_3a0._8_8_ = uVar6;
          local_390 = lVar7;
          local_388 = 1;
          (*(code *)PTR_strip_errno_002127c0)(local_310,&local_3e8);
          local_380 = (undefined8 *)local_3a0;
          local_378 = (code *)PTR_fmt_002127b8;
          local_368 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_3e0 = (code *)&DAT_0020c6f8;
          local_3d8 = (undefined *)0x3;
          local_3c0 = 0;
          local_3d0 = &local_380;
          uStack_3c8 = 2;
                    /* try { // try from 00162b6f to 00162b79 has its CatchHandler @ 00162bb4 */
          local_370 = local_310;
          (*(code *)PTR__eprint_00212678)(&local_3e0);
                    /* try { // try from 00162b7a to 00162b81 has its CatchHandler @ 00162bc6 */
          core::ptr::drop_in_place<alloc::string::String>(local_310);
                    /* try { // try from 00162b87 to 00162b8b has its CatchHandler @ 00162bd5 */
          core::ptr::drop_in_place<std::io::error::Error>(local_3e8);
        }
        else {
                    /* try { // try from 001628dc to 00162b0a has its CatchHandler @ 00162bc6 */
          cVar3 = (*(code *)PTR_dir_not_empty_00212798)(&local_3e8,local_320,local_318);
          if (cVar3 == '\0') goto LAB_001628f5;
LAB_00162870:
                    /* try { // try from 00162875 to 001628b2 has its CatchHandler @ 00162bd5 */
          core::ptr::drop_in_place<std::io::error::Error>(local_3e8);
        }
      }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_360);
    uVar6 = 0;
  }
  return uVar6;
}