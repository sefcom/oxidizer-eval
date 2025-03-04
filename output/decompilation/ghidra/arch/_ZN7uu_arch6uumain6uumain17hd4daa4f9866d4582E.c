undefined8 _ZN7uu_arch6uumain6uumain17hd4daa4f9866d4582E(undefined8 param_1,undefined8 param_2)

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
  
  (*(code *)PTR__ZN7uu_arch6uu_app17h8f2567686988086aE_00208b40)(&local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h1685219cca491285E
            (&local_500,&local_2e8,param_1,param_2);
  if (local_500 == (undefined *)0x8000000000000000) {
    uVar1 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00208b48
            )();
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
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h09a2e4ae76fe94e9E
              (&local_558);
    (*(code *)
      PTR__ZN96__LT_platform_info__lib_impl__target__PlatformInfo_u20_as_u20_platform_info__PlatformInfoAPI_GT_3new17ha4b962048a517d48E_00208b50
    )(&local_2e8);
    if (local_2e8 == (undefined *)0x8000000000000000) {
      uVar1 = _ZN7uu_arch6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hfa7d8d33c6f73432E
                        (local_2e0,local_2d8);
    }
    else {
      (*(code *)PTR_memcpy_00208b58)(&uStack_4e8,&local_2d0,0x200);
      local_500 = local_2e8;
      local_4f8 = local_2e0;
      local_4f0 = local_2d8;
                    /* try { // try from 0015b447 to 0015b44f has its CatchHandler @ 0015b4f0 */
      (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E_00208b60)
                (&local_558,local_498,local_490);
                    /* try { // try from 0015b45a to 0015b4cc has its CatchHandler @ 0015b4f5 */
      local_510 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17hcfa4d6c8abc28637E
                            (local_550,CONCAT44(uStack_544,local_548));
      local_520 = (undefined8 *)local_510;
      local_518 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1daa6270d834d97fE;
      local_2e8 = &DAT_00202d30;
      local_2e0 = 2;
      local_2c8 = 0;
      local_2d8 = &local_520;
      local_2d0 = 1;
      (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00208b68)(&local_2e8);
                    /* try { // try from 0015b4cd to 0015b4d4 has its CatchHandler @ 0015b4f0 */
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h2f20969a414777e7E
                (&local_558);
      _ZN4core3ptr66drop_in_place_LT_platform_info__lib_impl__target__PlatformInfo_GT_17h0caea20308fb7da4E
                (&local_500);
      uVar1 = 0;
    }
  }
  return uVar1;
}