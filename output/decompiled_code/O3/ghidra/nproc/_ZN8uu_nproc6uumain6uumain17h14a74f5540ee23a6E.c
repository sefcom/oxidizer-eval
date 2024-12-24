undefined8 __rustcall uu_nproc::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_410;
  ulong *local_408;
  undefined *puStack_400;
  undefined8 local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  char local_3c8;
  undefined local_3c7;
  ulong local_3c0;
  ulong **local_3b8;
  undefined *puStack_3b0;
  ulong *local_3a8;
  undefined *local_3a0;
  ulong *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined local_358 [16];
  undefined8 local_348;
  undefined8 local_340 [2];
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined2 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  
  (*(code *)PTR_uu_app_00214b58)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_408,&local_2f8,param_1,param_2);
  if (local_408 == (ulong *)0x8000000000000000) {
    uVar4 = (*(code *)PTR_from_00214b60)();
    return uVar4;
  }
  local_360 = local_3d8;
  local_370 = local_3e8;
  uStack_36c = uStack_3e4;
  uStack_368 = uStack_3e0;
  uStack_364 = uStack_3dc;
  local_380 = (undefined4)local_3f8;
  uStack_37c = local_3f8._4_4_;
  uStack_378 = uStack_3f0;
  uStack_374 = uStack_3ec;
  local_390 = local_408;
  local_388 = puStack_400;
  uVar4 = *(undefined8 *)PTR_OPT_IGNORE_00214b68;
  uVar1 = *(undefined8 *)(PTR_OPT_IGNORE_00214b68 + 8);
                    /* try { // try from 00163fe5 to 0016411c has its CatchHandler @ 00164440 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,&local_390,uVar4,uVar1);
  lVar5 = clap_builder::parser::error::MatchesError::unwrap(uVar4,uVar1,&local_2f8);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 8);
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = core::str::_<impl_str>::trim_matches(uVar4,uVar1);
    (*(code *)PTR_from_str_00214b70)(&local_3c8,uVar6);
    uVar7 = local_3c0;
    if (local_3c8 != '\0') {
      local_410 = CONCAT71(local_410._1_7_,local_3c7);
      local_408 = (ulong *)0x0;
      uStack_3f0 = CONCAT31(uStack_3f0._1_3_,1);
      puStack_3b0 = PTR_fmt_00214b78;
      local_3a8 = &local_410;
      local_3a0 = PTR_fmt_00214b80;
      local_2f8 = &DAT_0020eba8;
      uStack_2f0 = (ulong *)0x2;
      local_2d8 = 0;
      local_2e8 = &local_3b8;
      uStack_2e0 = 2;
      puStack_400 = (undefined *)uVar4;
      local_3f8 = uVar1;
      local_3b8 = &local_408;
      core::option::Option<T>::map_or_else(local_358,&local_2f8);
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
      local_2e8 = (ulong ***)local_348;
      uVar4 = ::alloc::boxed::Box<T>::new(&local_2f8);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_390);
      return uVar4;
    }
  }
                    /* try { // try from 00164146 to 0016415e has its CatchHandler @ 00164440 */
  std::env::var(&local_2f8,&DAT_00113a90,0x10);
  uVar8 = 0xffffffffffffffff;
  if (local_2f8 == (undefined *)0x0) {
    local_3f8 = uStack_2e0;
    local_408 = uStack_2f0;
                    /* try { // try from 00164190 to 0016419a has its CatchHandler @ 001643f3 */
    (*(code *)PTR_from_str_00214b70)(&local_3b8,local_2e8);
    puVar2 = puStack_3b0;
                    /* try { // try from 001641a5 to 001641ae has its CatchHandler @ 001643ee */
    core::ptr::drop_in_place<alloc::string::String>(&local_408);
    uVar8 = -(ulong)((char)local_3b8 != '\0') | -(ulong)(puVar2 == (undefined *)0x0) | (ulong)puVar2
    ;
    if (local_2f8 == (undefined *)0x0) goto LAB_001641e2;
  }
                    /* try { // try from 001641d5 to 00164225 has its CatchHandler @ 00164440 */
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
            (&local_2f8);
LAB_001641e2:
  cVar3 = (*(code *)PTR_get_flag_00214b90)
                    (&local_390,*(undefined8 *)PTR_OPT_ALL_00214b88,
                     *(undefined8 *)(PTR_OPT_ALL_00214b88 + 8));
  if (cVar3 == '\0') {
    std::env::var(&local_408,"OMP_NUM_THREADS is not a valid number: ",0xf);
    if (local_408 == (ulong *)0x0) {
      puStack_3b0 = (undefined *)local_3f8;
                    /* try { // try from 0016425a to 001642cc has its CatchHandler @ 0016441f */
      _<char_as_core::str::pattern::Pattern>::into_searcher
                (&local_2f8,local_3f8,CONCAT44(uStack_3ec,uStack_3f0));
      local_310 = (undefined4)local_2d8;
      uStack_30c = local_2d8._4_4_;
      uStack_308 = uStack_2d0;
      uStack_304 = uStack_2cc;
      local_320 = (undefined4)local_2e8;
      uStack_31c = local_2e8._4_4_;
      uStack_318 = (undefined4)uStack_2e0;
      uStack_314 = uStack_2e0._4_4_;
      local_330 = (undefined4)local_2f8;
      uStack_32c = local_2f8._4_4_;
      uStack_328 = (undefined4)uStack_2f0;
      uStack_324 = uStack_2f0._4_4_;
      local_340[0] = 0;
      local_300 = 0;
      _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                (&local_2f8,local_340);
      if (local_2e8 == (ulong ***)0x0) {
        local_3c0 = (*(code *)PTR_available_parallelism_00214ba0)();
      }
      else {
                    /* try { // try from 001642e7 to 00164310 has its CatchHandler @ 001643dc */
        (*(code *)PTR_from_str_00214b70)(&local_3c8,*uStack_2f0,uStack_2f0[1]);
        if ((local_3c8 != '\0') || (local_3c0 == 0)) {
          local_3c0 = (*(code *)PTR_available_parallelism_00214ba0)();
        }
      }
                    /* try { // try from 00164319 to 00164325 has its CatchHandler @ 0016441f */
      local_410 = local_3c0;
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_2f8);
                    /* try { // try from 00164326 to 0016432f has its CatchHandler @ 0016441a */
      core::ptr::drop_in_place<alloc::string::String>(&local_3b8);
    }
    else {
                    /* try { // try from 0016422e to 00164233 has its CatchHandler @ 0016441a */
      local_3c0 = (*(code *)PTR_available_parallelism_00214ba0)();
      local_410 = local_3c0;
    }
    if (local_408 != (ulong *)0x0) {
                    /* try { // try from 00164338 to 001643bc has its CatchHandler @ 00164440 */
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
                (&local_408);
    }
  }
  else {
    local_3c0 = (*(code *)PTR_num_cpus_all_00214b98)();
  }
  uVar8 = core::cmp::min_by(uVar8,local_3c0);
  local_410 = 1;
  if (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
    local_410 = uVar8 - uVar7;
  }
  local_408 = &local_410;
  puStack_400 = PTR_fmt_00214aa0;
  local_2f8 = &DAT_0020eb68;
  uStack_2f0 = (ulong *)0x2;
  local_2d8 = 0;
  uStack_2e0 = 1;
  local_2e8 = (ulong ***)&local_408;
  (*(code *)PTR__print_00214ba8)(&local_2f8);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_390);
  return 0;
}