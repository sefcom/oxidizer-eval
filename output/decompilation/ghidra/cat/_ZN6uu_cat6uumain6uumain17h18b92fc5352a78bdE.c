undefined  [16] _ZN6uu_cat6uumain6uumain17h18b92fc5352a78bdE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined uVar8;
  undefined uVar9;
  undefined uVar10;
  undefined uVar11;
  undefined4 *puVar12;
  undefined auVar13 [16];
  char local_3c8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 *local_318;
  undefined8 local_310;
  undefined8 *local_308;
  undefined4 *puStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined local_2d8 [616];
  long local_70 [8];
  
  (*(code *)PTR__ZN6uu_cat6uu_app17he6c315476365ffbfE_001f22f0)(&local_338);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h5946edc7e3ebffb5E
            (&local_3a8,&local_338,param_1,param_2);
  local_340 = local_378;
  local_350 = local_388;
  uStack_34c = uStack_384;
  uStack_348 = uStack_380;
  uStack_344 = uStack_37c;
  local_360 = (undefined4)local_398;
  uStack_35c = local_398._4_4_;
  uStack_358 = uStack_390;
  uStack_354 = uStack_38c;
  local_370 = local_3a8;
  local_368 = uStack_3a0;
                    /* try { // try from 00158add to 00158b2f has its CatchHandler @ 001590d3 */
  cVar7 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2308
          )(&local_370,
            *(undefined8 *)PTR__ZN6uu_cat7options15NUMBER_NONBLANK17h21a967aa4e64630bE_001f2300,
            *(undefined8 *)
             (PTR__ZN6uu_cat7options15NUMBER_NONBLANK17h21a967aa4e64630bE_001f2300 + 8));
  local_3c8 = '\x01';
  if (cVar7 == '\0') {
    local_3c8 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2308
                )(&local_370,
                  *(undefined8 *)PTR__ZN6uu_cat7options6NUMBER17h695181ced15c3b18E_001f2310,
                  *(undefined8 *)(PTR__ZN6uu_cat7options6NUMBER17h695181ced15c3b18E_001f2310 + 8));
    local_3c8 = local_3c8 * '\x02';
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_338,*(undefined8 *)PTR__ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE_001f2318,
             *(undefined8 *)(PTR__ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE_001f2318 + 8));
  uVar5 = local_328;
  puVar12 = uStack_330;
  uVar1 = local_338;
                    /* try { // try from 00158b60 to 00158b6c has its CatchHandler @ 001590be */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_338,
             *(undefined8 *)
              PTR__ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h6825b0ae9c7a2748E_001f2320,
             *(undefined8 *)
              (PTR__ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h6825b0ae9c7a2748E_001f2320 + 8));
  uVar6 = local_328;
  puVar4 = uStack_330;
  uVar2 = local_338;
                    /* try { // try from 00158b98 to 00158ba4 has its CatchHandler @ 001590ab */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_338,
             *(undefined8 *)
              PTR__ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hb145e2c58bb790e4E_001f2328,
             *(undefined8 *)
              (PTR__ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hb145e2c58bb790e4E_001f2328 + 8));
                    /* try { // try from 00158bcb to 00158bd4 has its CatchHandler @ 0015909a */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_3a8,
             *(undefined8 *)PTR__ZN6uu_cat7options16SHOW_NONPRINTING17h5b72b06df7137a06E_001f2330,
             *(undefined8 *)
              (PTR__ZN6uu_cat7options16SHOW_NONPRINTING17h5b72b06df7137a06E_001f2330 + 8));
  local_2e0 = local_398;
  local_2f0 = (undefined4)local_3a8;
  uStack_2ec = local_3a8._4_4_;
  uStack_2e8 = (undefined4)uStack_3a0;
  uStack_2e4 = uStack_3a0._4_4_;
  local_320 = uVar2;
  local_318 = puVar4;
  local_310 = uVar6;
  local_308 = (undefined8 *)local_338;
  puStack_300 = uStack_330;
  local_2f8 = local_328;
  uStack_3a0 = (undefined4 *)local_2d8;
  local_3a8 = &local_338;
                    /* try { // try from 00158c60 to 00158c72 has its CatchHandler @ 00159087 */
  local_338 = uVar1;
  uStack_330 = puVar12;
  local_328 = uVar5;
  uVar8 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h1e536dabaedc9baeE
                    (&local_3a8,&local_370);
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_4_u5d__GT_17h9e9580762ddbb4ddE
            (&local_338);
                    /* try { // try from 00158c8e to 00158c9a has its CatchHandler @ 001590d3 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_338,*(undefined8 *)PTR__ZN6uu_cat7options9SHOW_ENDS17h1ee7bf9af15f8ab5E_001f2338
             ,*(undefined8 *)(PTR__ZN6uu_cat7options9SHOW_ENDS17h1ee7bf9af15f8ab5E_001f2338 + 8));
  uVar2 = local_328;
  puVar12 = uStack_330;
  uVar1 = local_338;
                    /* try { // try from 00158cc6 to 00158cd5 has its CatchHandler @ 0015907e */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_338,*(undefined8 *)PTR__ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE_001f2318,
             *(undefined8 *)(PTR__ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE_001f2318 + 8));
                    /* try { // try from 00158cfc to 00158d05 has its CatchHandler @ 0015906d */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_3a8,
             *(undefined8 *)
              PTR__ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h6825b0ae9c7a2748E_001f2320,
             *(undefined8 *)
              (PTR__ZN6uu_cat7options21SHOW_NONPRINTING_ENDS17h6825b0ae9c7a2748E_001f2320 + 8));
  local_2f8 = local_398;
  local_308 = local_3a8;
  puStack_300 = uStack_3a0;
  local_320 = local_338;
  local_318 = uStack_330;
  local_310 = local_328;
  uStack_3a0 = &local_2f0;
                    /* try { // try from 00158d67 to 00158d79 has its CatchHandler @ 0015905a */
  local_3a8 = &local_338;
  local_338 = uVar1;
  uStack_330 = puVar12;
  local_328 = uVar2;
  uVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h1e536dabaedc9baeE
                    (&local_3a8,&local_370);
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_3_u5d__GT_17hc622560c7eebfcf4E
            (&local_338);
                    /* try { // try from 00158d95 to 00158da1 has its CatchHandler @ 001590d3 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_338,*(undefined8 *)PTR__ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE_001f2318,
             *(undefined8 *)(PTR__ZN6uu_cat7options8SHOW_ALL17hd7626174386d63ebE_001f2318 + 8));
  uVar2 = local_328;
  puVar12 = uStack_330;
  uVar1 = local_338;
                    /* try { // try from 00158dcd to 00158ddc has its CatchHandler @ 00159051 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_338,*(undefined8 *)PTR__ZN6uu_cat7options9SHOW_TABS17h8dabaa7165eb4951E_001f2340
             ,*(undefined8 *)(PTR__ZN6uu_cat7options9SHOW_TABS17h8dabaa7165eb4951E_001f2340 + 8));
                    /* try { // try from 00158e03 to 00158e0c has its CatchHandler @ 0015903d */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
            (&local_3a8,
             *(undefined8 *)
              PTR__ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hb145e2c58bb790e4E_001f2328,
             *(undefined8 *)
              (PTR__ZN6uu_cat7options21SHOW_NONPRINTING_TABS17hb145e2c58bb790e4E_001f2328 + 8));
  local_2f8 = local_398;
  local_308 = local_3a8;
  puStack_300 = uStack_3a0;
  local_320 = local_338;
  local_318 = uStack_330;
  local_310 = local_328;
  uStack_3a0 = &local_2f0;
                    /* try { // try from 00158e6e to 00158e7c has its CatchHandler @ 0015903b */
  local_3a8 = &local_338;
  local_338 = uVar1;
  uStack_330 = puVar12;
  local_328 = uVar2;
  uVar10 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h1e536dabaedc9baeE
                     (&local_3a8,&local_370);
  _ZN4core3ptr63drop_in_place_LT__u5b_alloc__string__String_u3b__u20_3_u5d__GT_17hc622560c7eebfcf4E
            (&local_338);
                    /* try { // try from 00158e9b to 00158f09 has its CatchHandler @ 001590d3 */
  uVar11 = (*(code *)
             PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001f2308
           )(&local_370,
             *(undefined8 *)PTR__ZN6uu_cat7options13SQUEEZE_BLANK17ha17d626b5583237cE_001f2348,
             *(undefined8 *)(PTR__ZN6uu_cat7options13SQUEEZE_BLANK17ha17d626b5583237cE_001f2348 + 8)
            );
  uVar1 = *(undefined8 *)PTR__ZN6uu_cat7options4FILE17h55d7a2ab59327302E_001f2350;
  uVar2 = *(undefined8 *)(PTR__ZN6uu_cat7options4FILE17h55d7a2ab59327302E_001f2350 + 8);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h7820d792b3b49300E
            (&local_338,&local_370,uVar1,uVar2);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h431fe8751896acd7E
            (local_70,uVar1,uVar2,&local_338);
  if (local_70[0] == 0) {
    puVar12 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (puVar12 == (undefined4 *)0x0) {
                    /* try { // try from 00159002 to 00159011 has its CatchHandler @ 001590d3 */
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001f2360)(8,0x18);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
                    /* try { // try from 00158f34 to 00158f54 has its CatchHandler @ 00159014 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha7aae4d87edf92c1E
              (&local_338,
               "-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: "
               ,1);
    local_398 = local_328;
    local_3a8 = (undefined8 *)((ulong)local_338._4_4_ << 0x20);
    uStack_3a0 = uStack_330;
    *(undefined8 *)(puVar12 + 4) = local_328;
    *puVar12 = (undefined4)local_338;
    puVar12[1] = local_338._4_4_;
    puVar12[2] = (undefined4)uStack_330;
    puVar12[3] = uStack_330._4_4_;
    local_338 = 1;
    local_328 = 1;
    uStack_330 = puVar12;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h7eea9b6d5fcfde70E(&local_338,local_70);
  }
  local_3a8._0_4_ = CONCAT13(uVar8,CONCAT12(uVar9,CONCAT11(uVar10,uVar11)));
  local_3a8 = (undefined8 *)CONCAT44(CONCAT31(local_3a8._5_3_,local_3c8),(undefined4)local_3a8);
                    /* try { // try from 00158fbc to 00158fcc has its CatchHandler @ 00159025 */
  auVar13 = (*(code *)PTR__ZN6uu_cat9cat_files17hcfbe1e107db8df0eE_001f2358)
                      (uStack_330,local_328,&local_3a8);
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8b05d756d7886c8aE
            (&local_338);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17ha515e43a088f69b7E
            (&local_370);
  return auVar13;
}