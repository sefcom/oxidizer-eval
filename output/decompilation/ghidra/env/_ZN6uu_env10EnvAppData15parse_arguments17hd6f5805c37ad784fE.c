void _ZN6uu_env10EnvAppData15parse_arguments17hd6f5805c37ad784fE
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
  
  _ZN4core4iter6traits8iterator8Iterator7collect17hdefd6c439cea8803E(&local_348,param_3,param_4);
                    /* try { // try from 0017b4e5 to 0017b4f5 has its CatchHandler @ 0017b5dc */
  (*(code *)PTR__ZN6uu_env10EnvAppData28process_all_string_arguments17h37f9f42a31d85940E_0024d2f0)
            (&local_330,param_2,&local_348);
  uVar3 = local_320;
  uVar2 = local_328;
  lVar1 = local_330;
  auVar4._8_8_ = local_320;
  auVar4._0_8_ = local_328;
  if (local_330 != -0x8000000000000000) {
                    /* try { // try from 0017b523 to 0017b530 has its CatchHandler @ 0017b5cb */
    (*(code *)PTR__ZN6uu_env6uu_app17hee268625580a1e1bE_0024d2f8)(local_2e0);
    local_2e8 = uVar3;
    local_360 = (undefined4)lVar1;
    uStack_35c = (undefined4)((ulong)lVar1 >> 0x20);
    uStack_358 = (undefined4)uVar2;
    uStack_354 = (undefined4)((ulong)uVar2 >> 0x20);
    local_2f8 = local_360;
    uStack_2f4 = uStack_35c;
    uStack_2f0 = uStack_358;
    uStack_2ec = uStack_354;
                    /* try { // try from 0017b548 to 0017b572 has its CatchHandler @ 0017b5da */
    _ZN12clap_builder7builder7command7Command20try_get_matches_from17hafb84ba160d1773cE
              (&local_330,local_2e0,&local_2f8);
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
    auVar4 = _ZN6uu_env10EnvAppData15parse_arguments28__u7b__u7b_closure_u7d__u7d_17h935bf0b1cbb383a4E
                       ();
  }
  *(undefined (*) [16])(param_1 + 1) = auVar4;
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h7647f138f93ed945E
            (&local_348);
  return;
}