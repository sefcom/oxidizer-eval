void __rustcall
uu_env::EnvAppData::parse_arguments
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  long local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined local_2e0 [712];
  
  core::iter::traits::iterator::Iterator::collect(&local_348,param_3,param_4);
                    /* try { // try from 00177d75 to 00177d85 has its CatchHandler @ 00177e6c */
  (*(code *)PTR_process_all_string_arguments_0024d9f8)(&local_330,param_2,&local_348);
  uVar3 = local_320;
  uVar2 = local_328;
  lVar1 = local_330;
  auVar4._8_8_ = local_320;
  auVar4._0_8_ = local_328;
  if (local_330 != -0x8000000000000000) {
                    /* try { // try from 00177db3 to 00177dc0 has its CatchHandler @ 00177e5b */
    (*(code *)PTR_uu_app_0024da00)(local_2e0);
    local_2e8 = uVar3;
    local_360 = (undefined4)lVar1;
    uStack_35c = (undefined4)((ulong)lVar1 >> 0x20);
    uStack_358 = (undefined4)uVar2;
    uStack_354 = (undefined4)((ulong)uVar2 >> 0x20);
    local_2f8 = local_360;
    uStack_2f4 = uStack_35c;
    uStack_2f0 = uStack_358;
    uStack_2ec = uStack_354;
                    /* try { // try from 00177dd8 to 00177e02 has its CatchHandler @ 00177e6a */
    clap_builder::builder::command::Command::try_get_matches_from(&local_330,local_2e0,&local_2f8);
    if (local_330 != -0x8000000000000000) {
      param_1[8] = local_308;
      param_1[9] = uStack_300;
      param_1[6] = local_318;
      param_1[7] = uStack_310;
      param_1[2] = local_338;
      *param_1 = local_348;
      param_1[1] = uStack_340;
      param_1[3] = local_330;
      param_1[4] = local_328;
      param_1[5] = local_320;
      return;
    }
    auVar4 = parse_arguments::___closure__();
  }
  *(undefined (*) [16])(param_1 + 1) = auVar4;
  *param_1 = 0x8000000000000000;
  core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_348);
  return;
}