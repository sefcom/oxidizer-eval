undefined8 __rustcall uu_arch::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_558;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 local_528;
  undefined8 *local_520;
  code *local_518;
  undefined local_510 [16];
  undefined *local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined8 local_4d0;
  undefined8 local_498;
  undefined8 local_490;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined8 **local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  
  (*(code *)PTR_uu_app_00208438)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_500,&local_2e8,param_1,param_2);
  if (local_500 == (undefined *)0x8000000000000000) {
    uVar1 = (*(code *)PTR_from_00208440)();
  }
  else {
    local_528 = local_4d0;
    local_538 = local_4e0;
    uStack_534 = uStack_4dc;
    uStack_530 = uStack_4d8;
    uStack_52c = uStack_4d4;
    local_548 = (undefined4)local_4f0;
    uStack_544 = local_4f0._4_4_;
    uStack_540 = uStack_4e8;
    uStack_53c = uStack_4e4;
    local_558 = (long)local_500;
    local_550 = local_4f8;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_558);
    (*(code *)PTR_new_00208448)(&local_2e8);
    if (local_2e8 == (undefined *)0x8000000000000000) {
      uVar1 = uumain::___closure__(local_2e0,local_2d8);
    }
    else {
      (*(code *)PTR_memcpy_002083a0)(&uStack_4e8,&local_2d0,0x200);
      local_500 = local_2e8;
      local_4f8 = local_2e0;
      local_4f0 = local_2d8;
                    /* try { // try from 0015c967 to 0015c96f has its CatchHandler @ 0015ca10 */
      (*(code *)PTR_to_string_lossy_00208450)(&local_558,local_498,local_490);
                    /* try { // try from 0015c97a to 0015c9ec has its CatchHandler @ 0015ca15 */
      local_510 = core::str::_<impl_str>::trim_matches(local_550,CONCAT44(uStack_544,local_548));
      local_520 = (undefined8 *)local_510;
      local_518 = _<&T_as_core::fmt::Display>::fmt;
      local_2e8 = &DAT_002026c0;
      local_2e0 = 2;
      local_2c8 = 0;
      local_2d8 = &local_520;
      local_2d0 = 1;
      (*(code *)PTR__print_00208458)(&local_2e8);
                    /* try { // try from 0015c9ed to 0015c9f4 has its CatchHandler @ 0015ca10 */
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_558);
      core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&local_500);
      uVar1 = 0;
    }
  }
  return uVar1;
}