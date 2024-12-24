undefined8 __rustcall uu_basename::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined local_411;
  undefined8 ***local_410;
  undefined8 ***local_408;
  undefined8 ***pppuStack_400;
  undefined8 ***local_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined local_3b0 [8];
  long local_3a8;
  long local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 ***local_378;
  undefined8 ***local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined local_328 [16];
  undefined *local_318;
  undefined8 **local_310 [3];
  undefined8 ***local_2f8;
  undefined8 ***pppuStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  
  uucore::Args::collect_lossy(&local_340,param_1,param_2);
                    /* try { // try from 001632e4 to 001632f1 has its CatchHandler @ 0016385d */
  (*(code *)PTR_uu_app_00212858)(&local_2f8);
  local_388 = local_330;
  local_398 = (undefined8 ****)CONCAT44(uStack_33c,local_340);
  uStack_390 = (undefined *)CONCAT44(uStack_334,uStack_338);
  clap_builder::builder::command::Command::try_get_matches_from(&local_3f8,&local_2f8,&local_398);
  if ((undefined8 ****)local_3f8 == (undefined8 ****)0x8000000000000000) {
    uVar5 = (*(code *)PTR_from_00212860)();
    return uVar5;
  }
  local_348 = local_3c8;
  local_358 = local_3d8;
  uStack_354 = uStack_3d4;
  uStack_350 = uStack_3d0;
  uStack_34c = uStack_3cc;
  local_368 = (undefined4)local_3e8;
  uStack_364 = local_3e8._4_4_;
  uStack_360 = (undefined4)uStack_3e0;
  uStack_35c = uStack_3e0._4_4_;
  local_378 = local_3f8;
  local_370 = pppuStack_3f0;
                    /* try { // try from 0016339b to 0016347b has its CatchHandler @ 0016387e */
  cVar4 = (*(code *)PTR_get_flag_00212870)
                    (&local_378,*(undefined8 *)PTR_ZERO_00212868,
                     *(undefined8 *)(PTR_ZERO_00212868 + 8));
  local_411 = 10;
  if (cVar4 != '\0') {
    local_411 = 0;
  }
  uVar5 = *(undefined8 *)PTR_NAME_00212878;
  uVar1 = *(undefined8 *)(PTR_NAME_00212878 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2f8,&local_378,uVar5,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(&local_3f8,uVar5,uVar1,&local_2f8);
  if ((undefined8 ****)local_3f8 == (undefined8 ****)0x0) {
    local_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cc = 0;
    uVar8 = SUB84(PTR_EMPTY_00212880,0);
    uVar9 = (undefined4)((ulong)PTR_EMPTY_00212880 >> 0x20);
    uStack_2e0._0_4_ = 0;
    uStack_2e0._4_4_ = 0;
    pcVar6 = core::ops::function::FnOnce::call_once;
    local_3c0 = 0;
    pppuStack_2f0 = (undefined8 ***)PTR_EMPTY_00212880;
  }
  else {
    pcVar6 = (code *)local_3f8;
    pppuStack_2f0 = pppuStack_3f0;
    uVar5 = local_3c8;
    uVar8 = (undefined4)local_3e8;
    uVar9 = local_3e8._4_4_;
    uStack_2e0._0_4_ = (undefined4)uStack_3e0;
    uStack_2e0._4_4_ = uStack_3e0._4_4_;
  }
  uStack_2e8 = (undefined8 ****)CONCAT44(uVar9,uVar8);
  uStack_2d8 = CONCAT44(uStack_3d4,local_3d8);
  local_2f8 = (undefined8 ***)pcVar6;
  uStack_2d0 = uStack_3d0;
  uStack_2cc = uStack_3cc;
  local_2c8 = uVar5;
  local_2c0 = local_3c0;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_3b0,&local_2f8);
  if (local_3a0 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3f8);
    uStack_2e8 = (undefined8 ****)local_3e8;
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    uVar5 = ::alloc::boxed::Box<T>::new(&local_2f8);
LAB_001635a4:
                    /* try { // try from 001635a7 to 001635b0 has its CatchHandler @ 0016387e */
    core::ptr::drop_in_place<alloc::vec::Vec<&alloc::string::String>>(local_3b0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_378);
    return uVar5;
  }
  uVar5 = *(undefined8 *)PTR_SUFFIX_00212888;
  uVar1 = *(undefined8 *)(PTR_SUFFIX_00212888 + 8);
                    /* try { // try from 00163496 to 001635a3 has its CatchHandler @ 0016386f */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_2f8,&local_378,uVar5,uVar1);
  lVar7 = clap_builder::parser::error::MatchesError::unwrap(uVar5,uVar1,&local_2f8);
  if ((lVar7 == 0) &&
     (cVar4 = (*(code *)PTR_get_flag_00212870)
                        (&local_378,*(undefined8 *)PTR_MULTIPLE_00212890,
                         *(undefined8 *)(PTR_MULTIPLE_00212890 + 8)), cVar4 == '\0')) {
    if (local_3a0 != 1) {
      if (local_3a0 != 2) {
        if (local_3a0 == 0) {
          local_2f8 = (undefined8 ***)&PTR_s_already_checked_0020c908;
          pppuStack_2f0 = (undefined8 ***)0x1;
          uStack_2e8 = (undefined8 ****)0x8;
          uStack_2e0 = 0;
          uStack_2d8 = 0;
          (*(code *)PTR_panic_fmt_00212708)
                    (&local_2f8,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0020c918);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        pppuStack_3f0 = *(undefined8 ****)(*(long *)(local_3a8 + 0x10) + 8);
        local_3e8 = *(undefined **)(*(long *)(local_3a8 + 0x10) + 0x10);
        local_3f8 = (undefined8 ****)0x0;
        uStack_3e0 = (undefined *)CONCAT71(uStack_3e0._1_7_,1);
        local_398 = &local_3f8;
        uStack_390 = PTR_fmt_002128b8;
        local_2f8 = (undefined8 ***)&PTR_s_extra_operand_0020c930;
        pppuStack_2f0 = (undefined8 ***)0x1;
        uStack_2d8 = 0;
        uStack_2e0 = 1;
                    /* try { // try from 00163796 to 00163850 has its CatchHandler @ 0016386f */
        uStack_2e8 = (undefined8 ****)&local_398;
        core::option::Option<T>::map_or_else(local_328,&local_2f8);
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
        uStack_2e8 = (undefined8 ****)local_318;
        uVar5 = ::alloc::boxed::Box<T>::new(&local_2f8);
        goto LAB_001635a4;
      }
      local_3a0 = 1;
      (*(code *)PTR_clone_00212898)(&local_410,*(undefined8 *)(local_3a8 + 8));
      goto LAB_001635d9;
    }
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_2f8,&local_378,uVar5,uVar1);
    lVar7 = clap_builder::parser::error::MatchesError::unwrap(uVar5,uVar1,&local_2f8);
    if (lVar7 != 0) {
      (*(code *)PTR_clone_00212898)(&local_2f8,lVar7);
      local_3f8 = pppuStack_2f0;
      pppuStack_3f0 = uStack_2e8;
      if ((undefined8 ****)local_2f8 != (undefined8 ****)0x8000000000000000) {
        local_408 = pppuStack_2f0;
        pppuStack_400 = uStack_2e8;
        local_410 = local_2f8;
        goto LAB_001635d9;
      }
    }
  }
  local_410 = (undefined8 ****)0x0;
  local_408 = (undefined8 ***)&DAT_00000001;
  pppuStack_400 = (undefined8 ****)0x0;
LAB_001635d9:
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
            (&local_398,local_3b0);
  lVar7 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                    (&local_398);
  puVar3 = PTR__print_002128a8;
  puVar2 = PTR_fmt_002128a0;
  if (lVar7 != 0) {
    do {
                    /* try { // try from 00163642 to 0016364a has its CatchHandler @ 00163895 */
      (*(code *)PTR_basename_002128b0)
                (local_310,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),local_408,
                 pppuStack_400);
      pppuStack_3f0 = (undefined8 ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
      local_3e8 = &local_411;
      uStack_3e0 = puVar2;
      local_2f8 = (undefined8 ***)&DAT_00113868;
      pppuStack_2f0 = (undefined8 ****)0x2;
      uStack_2d8 = 0;
      uStack_2e8 = &local_3f8;
      uStack_2e0._0_4_ = 2;
      uStack_2e0._4_4_ = 0;
      local_3f8 = local_310;
                    /* try { // try from 001636a4 to 001636a8 has its CatchHandler @ 00163883 */
      (*(code *)puVar3)(&local_2f8);
                    /* try { // try from 001636a9 to 001636b0 has its CatchHandler @ 00163895 */
      core::ptr::drop_in_place<alloc::string::String>(local_310);
      lVar7 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                        (&local_398);
    } while (lVar7 != 0);
  }
                    /* try { // try from 001636c2 to 001636ce has its CatchHandler @ 00163858 */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(&local_398);
                    /* try { // try from 001636cf to 001636d8 has its CatchHandler @ 00163853 */
  core::ptr::drop_in_place<alloc::string::String>(&local_410);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_378);
  return 0;
}