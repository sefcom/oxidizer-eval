undefined  [16] __rustcall uu_test::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined auVar3 [16];
  char cVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  uint uStack_3d8;
  undefined4 uStack_3d4;
  long local_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 local_320;
  undefined4 uStack_31c;
  uint uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined local_308;
  undefined7 uStack_307;
  undefined8 local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined local_2d8;
  undefined4 uStack_2d7;
  undefined4 uStack_2d3;
  undefined3 uStack_2cf;
  undefined4 uStack_2cc;
  
  local_388 = param_1;
  local_380 = param_2;
  _<core::iter::adapters::cloned::Cloned<I>as_core::iter::traits::iterator::Iterator>::next
            (&local_2e8,&local_388);
  if (local_2e8 == -0x8000000000000000) {
    (*(code *)PTR_to_owned_00218658)(&local_378,&DAT_0011349c,4);
  }
  else {
    local_368 = CONCAT35((undefined3)uStack_2d3,CONCAT41(uStack_2d7,local_2d8));
    local_378 = (undefined4)local_2e8;
    uStack_374 = local_2e8._4_4_;
    uStack_370 = uStack_2e0;
    uStack_36c = uStack_2dc;
  }
                    /* try { // try from 001640c2 to 001640e1 has its CatchHandler @ 00164480 */
  auVar6 = (*(code *)PTR_util_name_002186e0)();
  core::iter::traits::iterator::Iterator::collect(&local_3e0,local_388,local_380);
  local_2e8 = (ulong)local_2e8._4_4_ << 0x20;
                    /* try { // try from 001640ed to 00164167 has its CatchHandler @ 00164485 */
  auVar7 = core::char::methods::encode_utf8_raw(&local_2e8);
  cVar4 = core::slice::_<impl[T]>::ends_with(auVar6._0_8_,auVar6._8_8_,auVar7._0_8_,auVar7._8_8_);
  if (cVar4 == '\0') {
LAB_0016423b:
    local_2d8 = (undefined)local_3d0;
    uStack_2d7 = (undefined4)((ulong)local_3d0 >> 8);
    uStack_2d3._0_3_ = (undefined3)((ulong)local_3d0 >> 0x28);
    local_2e8 = CONCAT44(uStack_3dc,local_3e0);
    uStack_2e0 = uStack_3d8;
    uStack_2dc = uStack_3d4;
                    /* try { // try from 00164255 to 001643ba has its CatchHandler @ 0016447b */
    (*(code *)PTR_parse_00218700)(&local_320,&local_2e8);
    if (CONCAT44(uStack_31c,local_320) == 7) {
      local_348 = CONCAT71(uStack_307,local_308);
      local_358 = CONCAT44(uStack_314,uStack_318);
      uStack_350 = uStack_310;
      uStack_34c = uStack_30c;
      uumain::___closure__(&local_2e8,&local_358);
      uVar5 = CONCAT17(local_2d8,CONCAT43(uStack_2dc,uStack_2e0._1_3_));
      uStack_3a0 = uStack_2d7;
      uStack_39c = uStack_2d3;
      local_3a8._0_4_ = (undefined4)CONCAT43(uStack_2dc,uStack_2e0._1_3_);
      local_3a8._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
      local_3c8 = CONCAT44(local_3a8._4_4_,(undefined4)local_3a8);
      uStack_3c0 = uStack_2d7;
      uStack_3bc = uStack_2d3;
      local_3a8 = uVar5;
      if (local_2e8 == 7) {
        if ((uStack_2e0 & 1) == 0) {
          auVar7 = (*(code *)PTR_from_00218708)(1);
        }
        else {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auVar6._8_8_;
          auVar7 = auVar3 << 0x40;
        }
        goto LAB_00164439;
      }
      uVar5 = ::alloc::boxed::Box<T>::new(&local_2e8);
    }
    else {
      local_3c8 = CONCAT17((undefined)uStack_310,CONCAT43(uStack_314,uStack_318._1_3_));
      uStack_3a0 = (undefined4)CONCAT43(uStack_30c,uStack_310._1_3_);
      uStack_39c._0_3_ = (undefined3)((uint)uStack_30c >> 8);
      uStack_39c = CONCAT13(local_308,(undefined3)uStack_39c);
      uStack_3c0 = uStack_3a0;
      uStack_3bc = CONCAT13(local_308,(undefined3)uStack_39c);
      uStack_2cf = (undefined3)uStack_307;
      uStack_2cc = (undefined4)((uint7)uStack_307 >> 0x18);
      uStack_2dc = uStack_314;
      local_2d8 = (undefined)uStack_310;
      uStack_2d7 = uStack_3a0;
      uStack_2d3 = uStack_3bc;
      uStack_2e0 = uStack_318;
      local_3a8 = local_3c8;
      uVar5 = ::alloc::boxed::Box<T>::new(&local_2e8);
    }
    auVar7._8_8_ = &PTR_drop_in_place<uu_test_error_ParseError>_00212aa8;
    auVar7._0_8_ = uVar5;
  }
  else {
    if (local_3d0 == 1) {
      cVar4 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<&str>>::eq
                        (*(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 8),
                         *(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 0x10));
      if (cVar4 != '\0') {
LAB_0016415a:
        (*(code *)PTR_uu_app_002186f8)(&local_2e8);
        _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                  (&local_358,&local_3e0);
        core::iter::traits::iterator::Iterator::chain(&local_320,&local_378,&local_358);
        clap_builder::builder::command::Command::get_matches_from(&local_358,&local_2e8,&local_320);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_358)
        ;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = &local_320;
        return auVar6 << 0x40;
      }
      if (local_3d0 == 0) {
                    /* try { // try from 00164456 to 00164466 has its CatchHandler @ 00164485 */
        (*(code *)PTR_panic_bounds_check_00218710)(0,0,&DAT_00212a58);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      cVar4 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<&str>>::eq
                        (*(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 8),
                         *(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 0x10));
      if (cVar4 != '\0') goto LAB_0016415a;
    }
    if (local_3d0 == 0) {
      local_358 = -0x8000000000000000;
    }
    else {
      local_3d0 = local_3d0 + -1;
      local_348 = *(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 0x10 + local_3d0 * 0x18);
      plVar1 = (long *)(CONCAT44(uStack_3d4,uStack_3d8) + local_3d0 * 0x18);
      local_358 = *plVar1;
      uStack_350 = *(undefined4 *)(plVar1 + 1);
      uStack_34c = *(undefined4 *)((long)plVar1 + 0xc);
                    /* try { // try from 00164215 to 00164225 has its CatchHandler @ 00164469 */
      if ((local_358 != -0x8000000000000000) &&
         (cVar4 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(plVar1[1],local_348,"]",1),
         cVar4 != '\0')) {
                    /* try { // try from 0016422e to 0016423a has its CatchHandler @ 00164485 */
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&local_358);
        goto LAB_0016423b;
      }
    }
                    /* try { // try from 001643cf to 00164413 has its CatchHandler @ 00164469 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_320);
    local_2d8 = (undefined)uStack_310;
    uStack_2d7 = (undefined4)(CONCAT44(uStack_30c,uStack_310) >> 8);
    uStack_2e0 = uStack_318;
    uStack_2dc = uStack_314;
    uStack_2d3 = CONCAT13(2,(int3)((uint)uStack_30c >> 8));
    uStack_2cf = 0;
    uVar5 = ::alloc::boxed::Box<T>::new(&local_2e8);
                    /* try { // try from 00164414 to 00164423 has its CatchHandler @ 00164485 */
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(&local_358);
                    /* try { // try from 00164424 to 0016442d has its CatchHandler @ 00164480 */
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_3e0);
    auVar7._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00212b50;
    auVar7._0_8_ = uVar5;
  }
LAB_00164439:
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_378);
  return auVar7;
}