undefined8 _ZN7uu_arch6uumain6uumain17h0bd0b462c0d82bf9E(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_558;
  code *local_550;
  undefined local_548 [16];
  long local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_508;
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
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  
  (*(code *)PTR__ZN7uu_arch6uu_app17hd4428bb15012b7f7E_001dc2f0)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17hfc17acdf76e5c85dE
            (&local_500,&local_2e8,param_1,param_2);
  local_508 = local_4d0;
  local_518 = local_4e0;
  uStack_514 = uStack_4dc;
  uStack_510 = uStack_4d8;
  uStack_50c = uStack_4d4;
  local_528 = (undefined4)local_4f0;
  uStack_524 = local_4f0._4_4_;
  uStack_520 = uStack_4e8;
  uStack_51c = uStack_4e4;
  local_538 = (long)local_500;
  local_530 = local_4f8;
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h2fd53c8310661601E
            (&local_538);
  (*(code *)
    PTR__ZN96__LT_platform_info__lib_impl__target__PlatformInfo_u20_as_u20_platform_info__PlatformInfoAPI_GT_3new17h6dba048fa364e08aE_001dc300
  )(&local_2e8);
  if (local_2e8 == (undefined *)0x8000000000000000) {
    uVar2 = _ZN7uu_arch6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h9c8f83b63c6d64ebE
                      (local_2e0,local_2d8);
  }
  else {
    (*(code *)PTR_memcpy_001dc2a0)(&uStack_4e8,&local_2d0,0x200);
    local_500 = local_2e8;
    local_4f8 = local_2e0;
    local_4f0 = local_2d8;
                    /* try { // try from 0014e07d to 0014e087 has its CatchHandler @ 0014e150 */
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_001dc308)
              (&local_538,local_498,local_490);
    uVar2 = local_530;
    lVar1 = local_538;
    local_548 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h3836609a668f0dd0E
                          (local_530,CONCAT44(uStack_524,local_528));
    local_558 = (undefined8 *)local_548;
    local_550 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha4a905462ef9de42E;
    local_2e8 = &DAT_001d5670;
    local_2e0 = 2;
    local_2c8 = 0;
    local_2d0 = 1;
                    /* try { // try from 0014e0fc to 0014e109 has its CatchHandler @ 0014e130 */
    local_2d8 = (undefined *)&local_558;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001dc310)(&local_2e8);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hfb98d344dedea716E
              (lVar1,uVar2);
    _ZN4core3ptr66drop_in_place_LT_platform_info__lib_impl__target__PlatformInfo_GT_17h855488b27b83ec1cE
              (&local_500);
    uVar2 = 0;
  }
  return uVar2;
}