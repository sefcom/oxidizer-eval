undefined  [16] __rustcall uu_uname::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 **ppuVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined auVar11 [16];
  ulong local_438;
  undefined local_430;
  long local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined local_3f0 [8];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 *local_3d8;
  code *local_3d0;
  undefined local_3c8 [16];
  undefined *local_3b8;
  undefined8 local_3b0;
  ulong local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined *local_2f8;
  undefined8 local_2f0;
  undefined8 **local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  
  (*(code *)PTR_uu_app_0020e830)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3b8,&local_2f8,param_1,param_2);
  if (local_3b8 == (undefined *)0x8000000000000000) {
    auVar11 = (*(code *)PTR_from_0020e838)();
  }
  else {
    local_3f8 = local_388;
    local_408 = local_398;
    uStack_404 = uStack_394;
    uStack_400 = uStack_390;
    uStack_3fc = uStack_38c;
    local_418 = local_3a8;
    uStack_410 = uStack_3a0;
    local_428 = (long)local_3b8;
    local_420 = local_3b0;
                    /* try { // try from 0015f5ec to 0015f73d has its CatchHandler @ 0015f895 */
    uVar3 = (*(code *)PTR_get_flag_0020e848)
                      (&local_428,*(undefined8 *)PTR_ALL_0020e840,
                       *(undefined8 *)(PTR_ALL_0020e840 + 8));
    uVar4 = (*(code *)PTR_get_flag_0020e848)
                      (&local_428,*(undefined8 *)PTR_KERNEL_NAME_0020e850,
                       *(undefined8 *)(PTR_KERNEL_NAME_0020e850 + 8));
    uVar5 = (*(code *)PTR_get_flag_0020e848)
                      (&local_428,*(undefined8 *)PTR_NODENAME_0020e858,
                       *(undefined8 *)(PTR_NODENAME_0020e858 + 8));
    uVar6 = (*(code *)PTR_get_flag_0020e848)
                      (&local_428,*(undefined8 *)PTR_KERNEL_RELEASE_0020e860,
                       *(undefined8 *)(PTR_KERNEL_RELEASE_0020e860 + 8));
    iVar7 = (*(code *)PTR_get_flag_0020e848)
                      (&local_428,*(undefined8 *)PTR_KERNEL_VERSION_0020e868,
                       *(undefined8 *)(PTR_KERNEL_VERSION_0020e868 + 8));
    uVar8 = (*(code *)PTR_get_flag_0020e848)
                      (&local_428,*(undefined8 *)PTR_MACHINE_0020e870,
                       *(undefined8 *)(PTR_MACHINE_0020e870 + 8));
    uVar9 = (*(code *)PTR_get_flag_0020e848)
                      (&local_428,*(undefined8 *)PTR_PROCESSOR_0020e878,
                       *(undefined8 *)(PTR_PROCESSOR_0020e878 + 8));
    uVar10 = (*(code *)PTR_get_flag_0020e848)
                       (&local_428,*(undefined8 *)PTR_HARDWARE_PLATFORM_0020e880,
                        *(undefined8 *)(PTR_HARDWARE_PLATFORM_0020e880 + 8));
    local_430 = (*(code *)PTR_get_flag_0020e848)
                          (&local_428,*(undefined8 *)PTR_OS_0020e888,
                           *(undefined8 *)(PTR_OS_0020e888 + 8));
    local_438 = (ulong)CONCAT24((ushort)((uVar8 & 0xff) << 8) | uVar6 & 0xff,
                                iVar7 << 0x18 | (uint)CONCAT12(uVar5,CONCAT11(uVar4,uVar3))) |
                (ulong)((uVar10 & 0xff) << 8 | uVar9 & 0xff) << 0x30;
    (*(code *)PTR_new_0020e890)(&local_2f8,&local_438);
    ppuVar2 = local_2e8;
    auVar11._8_8_ = local_2e8;
    auVar11._0_8_ = local_2f0;
    if (local_2f8 == (undefined *)0x8000000000000001) {
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_428);
    }
    else {
      (*(code *)PTR_memcpy_0020e7d0)(&uStack_3a0,&local_2e0,0xa8);
      local_3b8 = local_2f8;
      local_3b0 = local_2f0;
      local_3a8 = (ulong)local_2e8;
                    /* try { // try from 0015f7a3 to 0015f7b5 has its CatchHandler @ 0015f883 */
      (*(code *)PTR_display_0020e898)(local_3f0,&local_3b8);
      local_3c8 = core::str::_<impl_str>::trim_end_matches(local_3e8,local_3e0);
      local_3d8 = (undefined8 *)local_3c8;
      local_3d0 = _<&T_as_core::fmt::Display>::fmt;
      local_2f8 = &DAT_00208900;
      local_2f0 = 2;
      local_2d8 = 0;
      local_2e8 = &local_3d8;
      local_2e0 = 1;
                    /* try { // try from 0015f82e to 0015f83b has its CatchHandler @ 0015f874 */
      (*(code *)PTR__print_0020e8a0)(&local_2f8);
                    /* try { // try from 0015f83c to 0015f845 has its CatchHandler @ 0015f883 */
      core::ptr::drop_in_place<alloc::string::String>(local_3f0);
                    /* try { // try from 0015f846 to 0015f852 has its CatchHandler @ 0015f895 */
      core::ptr::drop_in_place<uu_uname::UNameOutput>(&local_3b8);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_428);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = ppuVar2;
      auVar11 = auVar1 << 0x40;
    }
  }
  return auVar11;
}