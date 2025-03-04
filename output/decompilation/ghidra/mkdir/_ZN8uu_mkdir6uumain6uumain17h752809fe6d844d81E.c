undefined8 _ZN8uu_mkdir6uumain6uumain17h752809fe6d844d81E(undefined8 param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined8 uVar4;
  undefined *local_680;
  undefined8 local_678;
  long local_670;
  undefined8 local_668;
  undefined4 local_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined8 local_640;
  undefined *local_638;
  undefined8 uStack_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined local_618 [16];
  undefined8 local_608;
  long local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined *local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 local_590;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined *local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  
  _ZN6uucore4Args13collect_lossy17h59e9a190abdbe1bbE(local_618,param_1,param_2);
                    /* try { // try from 0016a0c4 to 0016a0fd has its CatchHandler @ 0016a386 */
  uVar1 = (*(code *)PTR__ZN8uu_mkdir21strip_minus_from_mode17h24f9592b17407d7aE_002243a8)(local_618)
  ;
  (*(code *)PTR__ZN8uu_mkdir6uu_app17h2281d15957ce8683E_002243b0)(&local_5c8);
  _ZN12clap_builder7builder7command7Command10after_help17h8527034bc7b55f42E
            (&local_2f8,&local_5c8,&DAT_00114fd5,0x49);
  local_5b8 = (undefined *)local_608;
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17ha02fa6c35a434280E
            (&local_600,&local_2f8,&local_5c8);
  if (local_600 == -0x8000000000000000) {
    uVar4 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_002243b8
            )();
  }
  else {
    local_640 = local_5d0;
    local_650 = local_5e0;
    uStack_64c = uStack_5dc;
    uStack_648 = uStack_5d8;
    uStack_644 = uStack_5d4;
    local_660 = local_5f0;
    uStack_65c = uStack_5ec;
    uStack_658 = uStack_5e8;
    uStack_654 = uStack_5e4;
    local_670 = local_600;
    local_668 = local_5f8;
                    /* try { // try from 0016a193 to 0016a290 has its CatchHandler @ 0016a377 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hfdb84b2eea3c8209E
              (&local_5c8,&local_670,&DAT_001142bc,4);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h41e90282d6a9deadE
              (&local_2f8,&DAT_001142bc,4,&local_5c8);
    local_5c8 = (code *)CONCAT44(uStack_2f4,local_2f8);
    if (local_5c8 == (code *)0x0) {
      local_628 = 0;
      uStack_624 = 0;
      uStack_620 = 0;
      uStack_61c = 0;
      local_638 = 
      PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_002243c0
      ;
      uStack_630 = 0;
      local_680 = 
      PTR__ZN105__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__default__Default_GT_7default5EMPTY17h09c5f4cd0790faa8E_002243c0
      ;
      local_5c8 = _ZN4core3ops8function6FnOnce9call_once17hd083c6ae921629bbE;
      uVar4 = 0;
    }
    else {
      local_680 = (undefined *)CONCAT44(uStack_2ec,uStack_2f0);
      local_638 = local_2e8;
      uStack_630 = uStack_2e0;
      local_628 = local_2d8;
      uStack_624 = uStack_2d4;
      uStack_620 = uStack_2d0;
      uStack_61c = uStack_2cc;
      local_678 = local_2c8;
      uVar4 = local_2c0;
    }
    uVar2 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002243c8
            )(&local_670,&DAT_0011501e,7);
    uVar3 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002243c8
            )(&local_670,&DAT_00115025,7);
    (*(code *)PTR__ZN8uu_mkdir8get_mode17hcf7d630052cc85d4E_002243d0)(&local_2f8,&local_670,uVar1);
    if (CONCAT44(uStack_2f4,local_2f8) == -0x8000000000000000) {
      uStack_5c0 = local_680;
      local_5b8 = local_638;
      uStack_5b0 = uStack_630;
      local_5a8 = local_628;
      uStack_5a4 = uStack_624;
      uStack_5a0 = uStack_620;
      uStack_59c = uStack_61c;
      local_598 = local_678;
                    /* try { // try from 0016a2e6 to 0016a33b has its CatchHandler @ 0016a368 */
      local_590 = uVar4;
      uVar4 = (*(code *)PTR__ZN8uu_mkdir4exec17h97ad3c032066465dE_002243d8)
                        (&local_5c8,uVar3,uStack_2f0,uVar2);
    }
    else {
      local_5b8 = local_2e8;
      local_5c8 = (code *)CONCAT44(uStack_2f4,local_2f8);
      uStack_5c0 = (undefined *)CONCAT44(uStack_2ec,uStack_2f0);
      uStack_5b0 = CONCAT44(uStack_5b0._4_4_,1);
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6d97907b3bba40e6E(&local_5c8);
    }
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hec88a58d850bf936E
              (&local_670);
  }
  return uVar4;
}