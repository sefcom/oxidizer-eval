long * __rustcall uu_tail::args::parse_args(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined local_400 [8];
  long local_3f8;
  ulong local_3f0;
  undefined8 local_3e8;
  undefined auStack_3e0 [16];
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  long lStack_3a0;
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
  undefined8 local_368;
  long local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  long local_2e8;
  long local_2e0;
  long local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  long local_2a0;
  
  core::iter::traits::iterator::Iterator::collect(local_400);
                    /* try { // try from 001aa49b to 001aa4a8 has its CatchHandler @ 001aa875 */
  (*(code *)PTR_uu_app_002c2808)(&local_2e8);
                    /* try { // try from 001aa4a9 to 001aa4b7 has its CatchHandler @ 001aa863 */
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_3e8,local_400);
                    /* try { // try from 001aa4b8 to 001aa4d1 has its CatchHandler @ 001aa861 */
  clap_builder::builder::command::Command::try_get_matches_from(&local_320,&local_2e8,&local_3e8);
  if (CONCAT44(uStack_31c,local_320) == -0x8000000000000000) {
                    /* try { // try from 001aa4f1 to 001aa4f6 has its CatchHandler @ 001aa875 */
    auStack_3e0 = (*(code *)PTR_from_002c2810)(CONCAT44(uStack_314,uStack_318));
    local_3e8 = 5;
    lVar1 = local_3f8;
    if ((local_3f0 & 0xfffffffffffffffe) == 2) {
LAB_001aa694:
      lVar4 = 0;
      if (2 < local_3f0) {
        lVar4 = local_3f8 + 0x30;
      }
      (*(code *)PTR_parse_obsolete_002c2828)(&local_2e8,lVar1 + 0x18,lVar4);
      if (local_2e8 == 6) {
        param_1[1] = local_2e0;
        param_1[2] = local_2d8;
        *param_1 = 5;
                    /* try { // try from 001aa6e0 to 001aa6e9 has its CatchHandler @ 001aa822 */
        core::ptr::
        drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                  (&local_3e8);
        goto LAB_001aa7f7;
      }
      local_328 = local_2a0;
      if ((int)local_2e8 != 5) {
        param_1[9] = local_2a0;
        *(undefined4 *)(param_1 + 7) = local_2b0;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_2ac;
        *(undefined4 *)(param_1 + 8) = uStack_2a8;
        *(undefined4 *)((long)param_1 + 0x44) = uStack_2a4;
        *(undefined4 *)(param_1 + 5) = local_2c0;
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_2bc;
        *(undefined4 *)(param_1 + 6) = uStack_2b8;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_2b4;
        *(undefined4 *)(param_1 + 3) = local_2d0;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_2cc;
        *(undefined4 *)(param_1 + 4) = uStack_2c8;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_2c4;
        *param_1 = local_2e8;
        param_1[1] = local_2e0;
        param_1[2] = local_2d8;
                    /* try { // try from 001aa7b2 to 001aa7bb has its CatchHandler @ 001aa813 */
        core::ptr::
        drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>
                  (&local_3e8);
        goto LAB_001aa7f7;
      }
LAB_001aa7cb:
      param_1[8] = CONCAT44(uStack_3a4,local_3a8);
      param_1[9] = lStack_3a0;
      param_1[6] = CONCAT44(uStack_3b4,local_3b8);
      param_1[7] = CONCAT44(uStack_3ac,uStack_3b0);
      param_1[4] = CONCAT44(uStack_3c4,local_3c8);
      param_1[5] = CONCAT44(uStack_3bc,uStack_3c0);
      param_1[2] = auStack_3e0._8_8_;
      param_1[3] = CONCAT44(uStack_3cc,uStack_3d0);
      *(undefined4 *)param_1 = (undefined4)local_3e8;
      *(undefined4 *)((long)param_1 + 4) = local_3e8._4_4_;
      *(undefined4 *)(param_1 + 1) = auStack_3e0._0_4_;
      *(undefined4 *)((long)param_1 + 0xc) = auStack_3e0._4_4_;
      goto LAB_001aa7f7;
    }
  }
  else {
    local_368 = local_2f0;
    local_378 = local_300;
    uStack_374 = uStack_2fc;
    uStack_370 = uStack_2f8;
    uStack_36c = uStack_2f4;
    local_388 = local_310;
    uStack_384 = uStack_30c;
    uStack_380 = uStack_308;
    uStack_37c = uStack_304;
    local_398 = local_320;
    uStack_394 = uStack_31c;
    uStack_390 = uStack_318;
    uStack_38c = uStack_314;
                    /* try { // try from 001aa574 to 001aa586 has its CatchHandler @ 001aa843 */
    (*(code *)PTR_from_002c2818)(&local_2e8,&local_398);
    if (local_2e8 == 5) {
      param_1[1] = local_2e0;
      param_1[2] = local_2d8;
      *param_1 = 5;
                    /* try { // try from 001aa5b4 to 001aa60f has its CatchHandler @ 001aa875 */
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_398);
      goto LAB_001aa7f7;
    }
    lStack_3a0 = local_2a0;
    uStack_3b0 = local_2b0;
    uStack_3ac = uStack_2ac;
    local_3a8 = uStack_2a8;
    uStack_3a4 = uStack_2a4;
    uStack_3c0 = local_2c0;
    uStack_3bc = uStack_2bc;
    local_3b8 = uStack_2b8;
    uStack_3b4 = uStack_2b4;
    uStack_3d0 = local_2d0;
    uStack_3cc = uStack_2cc;
    local_3c8 = uStack_2c8;
    uStack_3c4 = uStack_2c4;
    local_3e8 = local_2e8;
    auStack_3e0._0_8_ = local_2e0;
    auStack_3e0._8_8_ = local_2d8;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_398);
    lVar1 = local_3f8;
    if ((local_3f0 & 0xfffffffffffffffe) == 2) {
                    /* try { // try from 001aa634 to 001aa641 has its CatchHandler @ 001aa852 */
      (*(code *)PTR_to_string_lossy_002c2820)
                (&local_2e8,*(undefined8 *)(local_3f8 + 0x20),*(undefined8 *)(local_3f8 + 0x28));
      lVar2 = local_2d8;
      lVar4 = local_2e0;
      local_398 = 0;
                    /* try { // try from 001aa65a to 001aa674 has its CatchHandler @ 001aa831 */
      auVar5 = core::char::methods::encode_utf8_raw(&local_398);
      cVar3 = core::slice::_<impl[T]>::starts_with(lVar4,lVar2,auVar5._0_8_,auVar5._8_8_);
      if (cVar3 != '\0') {
                    /* try { // try from 001aa67d to 001aa6b2 has its CatchHandler @ 001aa852 */
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_2e8);
        goto LAB_001aa694;
      }
                    /* try { // try from 001aa7be to 001aa7ca has its CatchHandler @ 001aa852 */
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_2e8);
      goto LAB_001aa7cb;
    }
  }
  param_1[8] = CONCAT44(uStack_3a4,local_3a8);
  param_1[9] = lStack_3a0;
  param_1[6] = CONCAT44(uStack_3b4,local_3b8);
  param_1[7] = CONCAT44(uStack_3ac,uStack_3b0);
  *(undefined4 *)(param_1 + 4) = local_3c8;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_3c4;
  *(undefined4 *)(param_1 + 5) = uStack_3c0;
  *(undefined4 *)((long)param_1 + 0x2c) = uStack_3bc;
  param_1[2] = auStack_3e0._8_8_;
  param_1[3] = CONCAT44(uStack_3cc,uStack_3d0);
  *param_1 = local_3e8;
  param_1[1] = auStack_3e0._0_8_;
LAB_001aa7f7:
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(local_400);
  return param_1;
}