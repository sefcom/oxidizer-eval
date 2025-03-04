undefined8 _ZN8uu_nproc6uumain6uumain17ha3523f563ab9033aE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_410;
  ulong *local_408;
  undefined *puStack_400;
  undefined8 local_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  char local_3c8;
  undefined local_3c7;
  ulong local_3c0;
  ulong **local_3b8;
  undefined *puStack_3b0;
  ulong *local_3a8;
  undefined *local_3a0;
  ulong *local_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined local_358 [16];
  undefined8 local_348;
  undefined8 local_340 [2];
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined2 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  
  (*(code *)PTR__ZN8uu_nproc6uu_app17h3da9a545ae06046aE_002144a0)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h4a07ba778773b710E
            (&local_408,&local_2f8,param_1,param_2);
  if (local_408 == (ulong *)0x8000000000000000) {
    uVar4 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_002144a8
            )();
    return uVar4;
  }
  local_360 = local_3d8;
  local_370 = local_3e8;
  uStack_36c = uStack_3e4;
  uStack_368 = uStack_3e0;
  uStack_364 = uStack_3dc;
  local_380 = (undefined4)local_3f8;
  uStack_37c = local_3f8._4_4_;
  uStack_378 = uStack_3f0;
  uStack_374 = uStack_3ec;
  local_390 = local_408;
  local_388 = puStack_400;
  uVar4 = *(undefined8 *)PTR__ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE_002144b0;
  uVar1 = *(undefined8 *)(PTR__ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE_002144b0 + 8);
                    /* try { // try from 00162b25 to 00162c5c has its CatchHandler @ 00162f80 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17he1bfe3f05eac1902E
            (&local_2f8,&local_390,uVar4,uVar1);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he7da396e8269390dE
                    (uVar4,uVar1,&local_2f8);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 8);
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h293a8678a37ef744E(uVar4,uVar1);
    (*(code *)
      PTR__ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E_002144b8
    )(&local_3c8,uVar6);
    uVar7 = local_3c0;
    if (local_3c8 != '\0') {
      local_410 = CONCAT71(local_410._1_7_,local_3c7);
      local_408 = (ulong *)0x0;
      uStack_3f0 = CONCAT31(uStack_3f0._1_3_,1);
      puStack_3b0 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E_002144c0
      ;
      local_3a8 = &local_410;
      local_3a0 = 
      PTR__ZN70__LT_core__num__error__ParseIntError_u20_as_u20_core__fmt__Display_GT_3fmt17h98d79d8d19892e5aE_002144c8
      ;
      local_2f8 = &DAT_0020e4b8;
      uStack_2f0 = (ulong *)0x2;
      local_2d8 = 0;
      local_2e8 = &local_3b8;
      uStack_2e0 = 2;
      puStack_400 = (undefined *)uVar4;
      local_3f8 = uVar1;
      local_3b8 = &local_408;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h3b8854d416b71613E(local_358,&local_2f8);
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
      local_2e8 = (ulong ***)local_348;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha1ebd3061cf9b985E(&local_2f8);
      _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he8c9c7239af95834E
                (&local_390);
      return uVar4;
    }
  }
                    /* try { // try from 00162c86 to 00162c9e has its CatchHandler @ 00162f80 */
  _ZN3std3env3var17h2318c396540c8104E(&local_2f8,&DAT_00113840,0x10);
  uVar8 = 0xffffffffffffffff;
  if (local_2f8 == (undefined *)0x0) {
    local_3f8 = uStack_2e0;
    local_408 = uStack_2f0;
                    /* try { // try from 00162cd0 to 00162cda has its CatchHandler @ 00162f33 */
    (*(code *)
      PTR__ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E_002144b8
    )(&local_3b8,local_2e8);
    puVar2 = puStack_3b0;
                    /* try { // try from 00162ce5 to 00162cee has its CatchHandler @ 00162f2e */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb6387026a6809cd4E(&local_408);
    uVar8 = -(ulong)((char)local_3b8 != '\0') | -(ulong)(puVar2 == (undefined *)0x0) | (ulong)puVar2
    ;
    if (local_2f8 == (undefined *)0x0) goto LAB_00162d22;
  }
                    /* try { // try from 00162d15 to 00162d65 has its CatchHandler @ 00162f80 */
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h02690b1027f9de22E
            (&local_2f8);
LAB_00162d22:
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_002144d8
          )(&local_390,*(undefined8 *)PTR__ZN8uu_nproc7OPT_ALL17hda6848154e8c5b80E_002144d0,
            *(undefined8 *)(PTR__ZN8uu_nproc7OPT_ALL17hda6848154e8c5b80E_002144d0 + 8));
  if (cVar3 == '\0') {
    _ZN3std3env3var17h2318c396540c8104E(&local_408,&DAT_00113c0d,0xf);
    if (local_408 == (ulong *)0x0) {
      puStack_3b0 = (undefined *)local_3f8;
                    /* try { // try from 00162d9a to 00162e0c has its CatchHandler @ 00162f5f */
      _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h77b0cfb9226a3587E
                (&local_2f8,local_3f8,CONCAT44(uStack_3ec,uStack_3f0));
      local_310 = (undefined4)local_2d8;
      uStack_30c = local_2d8._4_4_;
      uStack_308 = uStack_2d0;
      uStack_304 = uStack_2cc;
      local_320 = (undefined4)local_2e8;
      uStack_31c = local_2e8._4_4_;
      uStack_318 = (undefined4)uStack_2e0;
      uStack_314 = uStack_2e0._4_4_;
      local_330 = (undefined4)local_2f8;
      uStack_32c = local_2f8._4_4_;
      uStack_328 = (undefined4)uStack_2f0;
      uStack_324 = uStack_2f0._4_4_;
      local_340[0] = 0;
      local_300 = 0;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h10fc9985799e9278E
                (&local_2f8,local_340);
      if (local_2e8 == (ulong ***)0x0) {
        local_3c0 = (*(code *)PTR__ZN8uu_nproc21available_parallelism17h0a12aac02eb8d812E_002144e8)
                              ();
      }
      else {
                    /* try { // try from 00162e27 to 00162e50 has its CatchHandler @ 00162f1c */
        (*(code *)
          PTR__ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E_002144b8
        )(&local_3c8,*uStack_2f0,uStack_2f0[1]);
        if ((local_3c8 != '\0') || (local_3c0 == 0)) {
          local_3c0 = (*(code *)PTR__ZN8uu_nproc21available_parallelism17h0a12aac02eb8d812E_002144e8
                      )();
        }
      }
                    /* try { // try from 00162e59 to 00162e65 has its CatchHandler @ 00162f5f */
      local_410 = local_3c0;
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hd7cebb54887ea04dE
                (&local_2f8);
                    /* try { // try from 00162e66 to 00162e6f has its CatchHandler @ 00162f5a */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb6387026a6809cd4E(&local_3b8);
    }
    else {
                    /* try { // try from 00162d6e to 00162d73 has its CatchHandler @ 00162f5a */
      local_3c0 = (*(code *)PTR__ZN8uu_nproc21available_parallelism17h0a12aac02eb8d812E_002144e8)();
      local_410 = local_3c0;
    }
    if (local_408 != (ulong *)0x0) {
                    /* try { // try from 00162e78 to 00162efc has its CatchHandler @ 00162f80 */
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h02690b1027f9de22E
                (&local_408);
    }
  }
  else {
    local_3c0 = (*(code *)PTR__ZN8uu_nproc12num_cpus_all17h7340e3b3a8ccdb85E_002144e0)();
  }
  uVar8 = _ZN4core3cmp6min_by17hf28b4cdfe3eabc55E(uVar8,local_3c0);
  local_410 = 1;
  if (uVar7 <= uVar8 && uVar8 - uVar7 != 0) {
    local_410 = uVar8 - uVar7;
  }
  local_408 = &local_410;
  puStack_400 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_002143c0
  ;
  local_2f8 = &DAT_0020e460;
  uStack_2f0 = (ulong *)0x2;
  local_2d8 = 0;
  uStack_2e0 = 1;
  local_2e8 = (ulong ***)&local_408;
  (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_002144f0)(&local_2f8);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17he8c9c7239af95834E
            (&local_390);
  return 0;
}