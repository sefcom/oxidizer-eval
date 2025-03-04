undefined  [16] _ZN5uu_ls6uumain6uumain17h6ce5242baf0a2f7eE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  long local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  long local_5a8 [3];
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined local_530 [16];
  undefined8 local_520;
  undefined local_518 [16];
  undefined8 local_508;
  long local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  long local_3e8;
  long lStack_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0 [58];
  undefined local_2e8 [712];
  
  (*(code *)PTR__ZN5uu_ls6uu_app17hb4ccd0ffed05c357E_0031db88)(local_2e8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h00423b9aa1c2dc0bE
            (&local_4e8,local_2e8,param_1,param_2);
  if (local_4e8 == -0x8000000000000000) {
    if ((*(byte *)(uStack_4e0 + 0xd5) & 0x1d) == 0xc) {
      auVar3 = (*(code *)
                 PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_0031db90
               )();
    }
    else {
      if (*(byte *)(uStack_4e0 + 0xd5) == 0) {
        local_5a8[0] = uStack_4e0;
                    /* try { // try from 001c8c1a to 001c8c63 has its CatchHandler @ 001c8cf3 */
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h472e4e5d4acf0daaE
                  (local_530,local_5a8);
        local_3d0[0] = 1;
        local_3d8 = local_520;
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4d783d11ad85c540E(&local_3e8);
      }
      else {
        local_5a8[0] = uStack_4e0;
                    /* try { // try from 001c8bc9 to 001c8c12 has its CatchHandler @ 001c8d02 */
        _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h472e4e5d4acf0daaE
                  (local_518,local_5a8);
        local_3d0[0] = 2;
        local_3d8 = local_508;
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4d783d11ad85c540E(&local_3e8);
      }
      _ZN4core3ptr47drop_in_place_LT_clap_builder__error__Error_GT_17haf3241a1492a8015E
                (local_5a8[0]);
      auVar3._8_8_ = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hf29ef8177093252dE_0030efd0
      ;
      auVar3._0_8_ = uVar2;
    }
  }
  else {
    local_548 = local_4c8;
    uStack_544 = uStack_4c4;
    uStack_540 = uStack_4c0;
    uStack_53c = uStack_4bc;
    local_558 = (undefined4)local_4d8;
    uStack_554 = local_4d8._4_4_;
    uStack_550 = uStack_4d0;
    uStack_54c = uStack_4cc;
    local_568 = (undefined4)local_4e8;
    uStack_564 = local_4e8._4_4_;
    uStack_560 = (undefined4)uStack_4e0;
    uStack_55c = uStack_4e0._4_4_;
                    /* try { // try from 001c8aa7 to 001c8ab9 has its CatchHandler @ 001c8d11 */
    (*(code *)PTR__ZN5uu_ls6Config4from17h304081f9da8d7174E_0031db98)(&local_4e8,&local_568);
    auVar3._8_8_ = local_4d8;
    auVar3._0_8_ = uStack_4e0;
    if (local_4e8 != -0x8000000000000000) {
      (*(code *)PTR_memcpy_0031da60)(local_3d0,&uStack_4d0,0xe8);
      local_3e8 = local_4e8;
      lStack_3e0 = uStack_4e0;
      local_3d8 = local_4d8;
      uVar2 = *(undefined8 *)PTR__ZN5uu_ls7options5PATHS17hbdf78393493f0f48E_0031dba0;
      uVar1 = *(undefined8 *)(PTR__ZN5uu_ls7options5PATHS17hbdf78393493f0f48E_0031dba0 + 8);
                    /* try { // try from 001c8b1c to 001c8ba0 has its CatchHandler @ 001c8d16 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb6addf61d5028314E
                (&local_4e8,&local_568,uVar2,uVar1);
      _ZN12clap_builder6parser5error12MatchesError6unwrap17hbdad559483153a61E
                (local_5a8,uVar2,uVar1,&local_4e8);
      if (local_5a8[0] == 0) {
                    /* try { // try from 001c8c7a to 001c8cc0 has its CatchHandler @ 001c8d16 */
        _ZN5uu_ls6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17h22093b37bd2384cbE(&local_5c0);
      }
      else {
        local_4b8 = local_578;
        uStack_4b4 = uStack_574;
        uStack_4b0 = uStack_570;
        uStack_4ac = uStack_56c;
        local_4c8 = local_588;
        uStack_4c4 = uStack_584;
        uStack_4c0 = uStack_580;
        uStack_4bc = uStack_57c;
        uStack_4d0 = uStack_590;
        uStack_4cc = uStack_58c;
        _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17hd2e5f05ce42ef7b6E
                  (&local_500,&local_4e8);
        local_5b8 = local_4f8;
        uStack_5b4 = uStack_4f4;
        uStack_5b0 = uStack_4f0;
        uStack_5ac = uStack_4ec;
        local_5c0 = local_500;
      }
      local_4d8 = CONCAT44(uStack_5ac,uStack_5b0);
      local_4e8 = local_5c0;
      uStack_4e0 = CONCAT44(uStack_5b4,local_5b8);
      auVar3 = (*(code *)PTR__ZN5uu_ls4list17h6ddc1ea5566af8ccE_0031dba8)(&local_4e8,&local_3e8);
                    /* try { // try from 001c8cc1 to 001c8cd3 has its CatchHandler @ 001c8d11 */
      _ZN4core3ptr34drop_in_place_LT_uu_ls__Config_GT_17h7c5f40e29ecb6421E(&local_3e8);
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hbd92667a6015f01dE
              (&local_568);
  }
  return auVar3;
}