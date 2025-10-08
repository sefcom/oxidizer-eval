undefined *
_ZN11forc_crypto4keys7new_key7handler17h9c4194e818a0987dE(undefined *param_1,int param_2)

{
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_4f8;
  undefined8 local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 local_4a0;
  undefined4 uStack_497;
  undefined4 uStack_493;
  undefined4 uStack_48f;
  undefined4 uStack_48b;
  undefined3 uStack_487;
  undefined4 uStack_484;
  undefined8 local_480;
  undefined local_478 [24];
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 local_450;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined local_228 [80];
  undefined local_1d8 [64];
  undefined local_198 [376];
  
  _ZN9rand_core11SeedableRng12from_entropy17h52b795ce180600f2E(local_198);
  _ZN9secp256k13key9SecretKey3new17h24bcd7daaece4c34E(&local_460,local_198);
  (*(code *)
    PTR__ZN112__LT_fuel_crypto__secp256__secret__SecretKey_u20_as_u20_core__convert__From_LT_secp256k1__key__SecretKey_GT__GT_4from17h2fedde1aa26a106bE_00786f20
  )(&local_318,&local_460);
  (*(code *)PTR__ZN11fuel_crypto7secp2566secret9SecretKey10public_key17h92c239beec8670a7E_00786f28)
            (local_1d8,&local_318);
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h88293082a2027faaE
            (local_478,&local_318);
  if (param_2 == 0) {
                    /* try { // try from 004f9808 to 004f981d has its CatchHandler @ 004f9ab3 */
    (*(code *)PTR__ZN7fuel_tx11transaction5types5input5Input5owner17hebfe60385362c439E_00786f38)
              (local_228,local_1d8);
    local_4e8 = 0;
    local_4d8 = 0;
                    /* try { // try from 004f9836 to 004f984e has its CatchHandler @ 004f9afd */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (&local_460,"secret",6);
    local_558 = local_450;
    local_568 = local_460;
    uStack_564 = uStack_45c;
    uStack_560 = uStack_458;
    uStack_55c = uStack_454;
                    /* try { // try from 004f9869 to 004f9896 has its CatchHandler @ 004f9aa4 */
    _ZN10serde_json5value8to_value17h85ee9959a652e90eE(&local_460,local_478);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfb6a08304b238768E
              (&local_548,&local_460,&PTR_s_forc_plugins_forc_crypto_src_key_0072ef78);
                    /* try { // try from 004f9897 to 004f98b5 has its CatchHandler @ 004f9a75 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h6e915daebfbdef11E
              (&local_460,&local_4e8,&local_568,&local_548);
                    /* try { // try from 004f98b6 to 004f98db has its CatchHandler @ 004f9afd */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hb265dab470452c02E
              (&local_460);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (&local_460,"address",7);
    local_558 = local_450;
    local_568 = local_460;
    uStack_564 = uStack_45c;
    uStack_560 = uStack_458;
    uStack_55c = uStack_454;
                    /* try { // try from 004f98f6 to 004f9923 has its CatchHandler @ 004f9a95 */
    _ZN10serde_json5value8to_value17he048be58e96999ebE(&local_460,local_228);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfb6a08304b238768E
              (&local_548,&local_460,&PTR_s_forc_plugins_forc_crypto_src_key_0072ef78);
                    /* try { // try from 004f9924 to 004f9942 has its CatchHandler @ 004f9a5c */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h6e915daebfbdef11E
              (&local_460,&local_4e8,&local_568,&local_548);
                    /* try { // try from 004f9943 to 004f9968 has its CatchHandler @ 004f9afd */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hb265dab470452c02E
              (&local_460);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (&local_460,&DAT_00179690,4);
    local_558 = local_450;
    local_568 = local_460;
    uStack_564 = uStack_45c;
    uStack_560 = uStack_458;
    uStack_55c = uStack_454;
    local_588 = &DAT_0017ae90;
    uStack_580 = 0x10;
                    /* try { // try from 004f9997 to 004f99bf has its CatchHandler @ 004f9a81 */
    _ZN10serde_json5value8to_value17h9acc37e190130f50E(&local_460,&local_588);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfb6a08304b238768E
              (&local_548,&local_460,&PTR_s_forc_plugins_forc_crypto_src_key_0072ef78);
                    /* try { // try from 004f99c0 to 004f99de has its CatchHandler @ 004f9a53 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h6e915daebfbdef11E
              (&local_460,&local_4e8,&local_568,&local_548);
                    /* try { // try from 004f99df to 004f99eb has its CatchHandler @ 004f9afd */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hb265dab470452c02E
              (&local_460);
    uStack_493._3_1_ = (undefined)local_4e8;
    uStack_48f = (undefined4)((ulong)local_4e8 >> 8);
    uStack_48b._0_3_ = (undefined3)((ulong)local_4e8 >> 0x28);
    uStack_48b._3_1_ = (undefined)uStack_4e0;
    uStack_487 = (undefined3)((uint)uStack_4e0 >> 8);
    uStack_484 = uStack_4dc;
    local_480 = local_4d8;
  }
  else {
    local_4d8 = CONCAT44(uStack_304,local_308);
    uStack_4d0 = uStack_300;
    uStack_4cc = uStack_2fc;
    local_4e8 = CONCAT44(uStack_314,local_318);
    uStack_4e0 = uStack_310;
    uStack_4dc = uStack_30c;
                    /* try { // try from 004f94c2 to 004f94f2 has its CatchHandler @ 004f9ab3 */
    _ZN15libp2p_identity9secp256k19SecretKey14try_from_bytes17h2208239c8347d100E
              (&local_460,&local_4e8);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h276f33466d1d3b2bE
              (&local_390,&local_460,&PTR_s_forc_plugins_forc_crypto_src_key_0072ef90);
    local_280 = local_370;
    uStack_27c = uStack_36c;
    uStack_278 = uStack_368;
    uStack_274 = uStack_364;
    local_270 = local_360;
    uStack_26c = uStack_35c;
    uStack_268 = uStack_358;
    uStack_264 = uStack_354;
    local_260 = local_350;
    uStack_25c = uStack_34c;
    uStack_258 = uStack_348;
    uStack_254 = uStack_344;
    local_250 = local_340;
    uStack_24c = uStack_33c;
    uStack_248 = uStack_338;
    uStack_244 = uStack_334;
    local_240 = local_330;
    uStack_23c = uStack_32c;
    uStack_238 = uStack_328;
    uStack_234 = uStack_324;
    local_230 = local_320;
    local_2f8 = local_390;
    uStack_2f4 = uStack_38c;
    uStack_2f0 = uStack_388;
    uStack_2ec = uStack_384;
    local_2e8 = local_380;
    uStack_2e4 = uStack_37c;
    uStack_2e0 = uStack_378;
    uStack_2dc = uStack_374;
    local_2d8 = local_370;
    uStack_2d4 = uStack_36c;
    uStack_2d0 = uStack_368;
    uStack_2cc = uStack_364;
    local_2c8 = local_360;
    uStack_2c4 = uStack_35c;
    uStack_2c0 = uStack_358;
    uStack_2bc = uStack_354;
    local_2b8 = local_350;
    uStack_2b4 = uStack_34c;
    uStack_2b0 = uStack_348;
    uStack_2ac = uStack_344;
    local_2a8 = local_340;
    uStack_2a4 = uStack_33c;
    uStack_2a0 = uStack_338;
    uStack_29c = uStack_334;
    local_298 = local_330;
    uStack_294 = uStack_32c;
    uStack_290 = uStack_328;
    uStack_28c = uStack_324;
    local_288 = local_320;
    (*(code *)PTR_memcpy_00786380)(&local_460,&local_2f8,0xd0);
    local_4f8 = local_320;
    local_518 = local_340;
    uStack_514 = uStack_33c;
    uStack_510 = uStack_338;
    uStack_50c = uStack_334;
    local_528 = local_350;
    uStack_524 = uStack_34c;
    uStack_520 = uStack_348;
    uStack_51c = uStack_344;
    local_538 = local_360;
    uStack_534 = uStack_35c;
    uStack_530 = uStack_358;
    uStack_52c = uStack_354;
    local_548 = local_370;
    uStack_544 = uStack_36c;
    uStack_540 = uStack_368;
    uStack_53c = uStack_364;
                    /* try { // try from 004f9612 to 004f9624 has its CatchHandler @ 004f9a7a */
    (*(code *)PTR__ZN15libp2p_identity7peer_id6PeerId15from_public_key17h629ca857ed4c9689E_00786f30)
              (local_228,&local_548);
    local_4b0 = 0;
    local_4a0 = 0;
                    /* try { // try from 004f963d to 004f9652 has its CatchHandler @ 004f9acb */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (&local_548,"secret",6);
    local_578 = CONCAT44(uStack_534,local_538);
    local_588 = (undefined *)CONCAT44(uStack_544,local_548);
    uStack_580 = CONCAT44(uStack_53c,uStack_540);
                    /* try { // try from 004f9666 to 004f968d has its CatchHandler @ 004f9a97 */
    _ZN10serde_json5value8to_value17h85ee9959a652e90eE(&local_548,local_478);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfb6a08304b238768E
              (&local_568,&local_548,&PTR_s_forc_plugins_forc_crypto_src_key_0072efa8);
                    /* try { // try from 004f968e to 004f96a7 has its CatchHandler @ 004f9a73 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h6e915daebfbdef11E
              (&local_548,&local_4b0,&local_588,&local_568);
                    /* try { // try from 004f96a8 to 004f96c7 has its CatchHandler @ 004f9acb */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hb265dab470452c02E
              (&local_548);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (&local_548,"peer_id",7);
    local_4b8 = CONCAT44(uStack_534,local_538);
    local_4c8 = (char *)CONCAT44(uStack_544,local_548);
    uStack_4c0 = CONCAT44(uStack_53c,uStack_540);
                    /* try { // try from 004f96e2 to 004f96f1 has its CatchHandler @ 004f9a61 */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h1dc51f77ca8ee280E
              (&local_588,local_228);
                    /* try { // try from 004f96f2 to 004f9714 has its CatchHandler @ 004f9a83 */
    _ZN10serde_json5value8to_value17h85ee9959a652e90eE(&local_548,&local_588);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfb6a08304b238768E
              (&local_568,&local_548,&PTR_s_forc_plugins_forc_crypto_src_key_0072efa8);
                    /* try { // try from 004f9715 to 004f9733 has its CatchHandler @ 004f9a5a */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h6e915daebfbdef11E
              (&local_548,&local_4b0,&local_4c8,&local_568);
                    /* try { // try from 004f9734 to 004f973d has its CatchHandler @ 004f9a58 */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hb265dab470452c02E
              (&local_548);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h223631e41b095cf4E(&local_588);
                    /* try { // try from 004f9746 to 004f975b has its CatchHandler @ 004f9acb */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd37f91379d22554aE
              (&local_548,&DAT_00179690,4);
    local_578 = CONCAT44(uStack_534,local_538);
    local_588 = (undefined *)CONCAT44(uStack_544,local_548);
    uStack_580 = CONCAT44(uStack_53c,uStack_540);
    local_4c8 = "p2p";
    uStack_4c0 = 3;
                    /* try { // try from 004f978a to 004f97b1 has its CatchHandler @ 004f9a7f */
    _ZN10serde_json5value8to_value17h9acc37e190130f50E(&local_548,&local_4c8);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfb6a08304b238768E
              (&local_568,&local_548,&PTR_s_forc_plugins_forc_crypto_src_key_0072efa8);
                    /* try { // try from 004f97b2 to 004f97cb has its CatchHandler @ 004f9a51 */
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h6e915daebfbdef11E
              (&local_548,&local_4b0,&local_588,&local_568);
                    /* try { // try from 004f97cc to 004f97d5 has its CatchHandler @ 004f9acb */
    _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17hb265dab470452c02E
              (&local_548);
    uStack_493._3_1_ = (undefined)local_4b0;
    uStack_48f = (undefined4)((ulong)local_4b0 >> 8);
    uStack_48b._3_1_ = (undefined)uStack_4a8;
    uStack_48b = CONCAT13(uStack_48b._3_1_,(int3)((ulong)local_4b0 >> 0x28));
    uStack_487 = (undefined3)((uint)uStack_4a8 >> 8);
    uStack_484 = uStack_4a4;
    local_480 = local_4a0;
    _ZN4core3ptr54drop_in_place_LT_libp2p_identity__keypair__Keypair_GT_17hcc350d790208f723E
              (&local_460);
  }
  *param_1 = 5;
  *(undefined4 *)(param_1 + 1) = uStack_497;
  *(undefined4 *)(param_1 + 5) = uStack_493;
  *(undefined4 *)(param_1 + 9) = uStack_48f;
  *(undefined4 *)(param_1 + 0xd) = uStack_48b;
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_484,CONCAT31(uStack_487,uStack_48b._3_1_));
  *(undefined8 *)(param_1 + 0x18) = local_480;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h223631e41b095cf4E(local_478);
  return param_1;
}