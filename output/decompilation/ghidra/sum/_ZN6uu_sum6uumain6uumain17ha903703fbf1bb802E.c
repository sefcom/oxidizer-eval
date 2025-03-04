undefined8 _ZN6uu_sum6uumain6uumain17ha903703fbf1bb802E(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined auVar10 [16];
  unkbyte10 Var11;
  char local_43a;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 *local_3f0;
  undefined *local_3e8;
  undefined8 uStack_3e0;
  undefined8 *local_3d8;
  undefined8 local_3d0;
  undefined8 *local_3c8;
  undefined8 local_3c0;
  undefined local_3b0 [8];
  long local_3a8;
  ulong local_3a0;
  long local_398;
  long local_390;
  long local_388;
  undefined local_380 [16];
  undefined8 *local_370;
  code *local_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  long *local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined8 local_268;
  undefined8 local_260;
  undefined local_258;
  
  (*(code *)PTR__ZN6uu_sum6uu_app17hbdfcd560e86e61faE_00215e20)(&local_2f8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h7bb4a4ed4c02a1a0E
            (&local_438,&local_2f8,param_1,param_2);
  if (local_438 == (undefined8 *)0x8000000000000000) {
    uVar7 = (*(code *)
              PTR__ZN6uucore4mods5error144__LT_impl_u20_core__convert__From_LT_clap_builder__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7fb9d0425989847aE_00215e28
            )();
  }
  else {
    local_340 = local_408;
    local_350 = (undefined4)local_418;
    uStack_34c = local_418._4_4_;
    uStack_348 = (undefined4)uStack_410;
    uStack_344 = uStack_410._4_4_;
    local_360 = (undefined4)local_428;
    uStack_35c = local_428._4_4_;
    uStack_358 = (undefined4)uStack_420;
    uStack_354 = uStack_420._4_4_;
    local_370 = local_438;
    local_368 = uStack_430;
    uVar7 = *(undefined8 *)PTR__ZN6uu_sum7options4FILE17h2195fcf4470791a0E_00215e30;
    uVar2 = *(undefined8 *)(PTR__ZN6uu_sum7options4FILE17h2195fcf4470791a0E_00215e30 + 8);
                    /* try { // try from 00164314 to 00164397 has its CatchHandler @ 001648b0 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h8411335ddc2e2dacE
              (&local_2f8,&local_370,uVar7,uVar2);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h87f32a93d09a0aa2E
              (&local_438,uVar7,uVar2,&local_2f8);
    if (local_438 == (undefined8 *)0x0) {
      puVar8 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE();
      if (puVar8 == (undefined4 *)0x0) {
                    /* try { // try from 0016488f to 0016489e has its CatchHandler @ 001648b0 */
        (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E_00215e78)(8,0x18);
        goto LAB_0016489f;
      }
                    /* try { // try from 001643a8 to 001643b7 has its CatchHandler @ 001648a1 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h5cbecd347a16c703E
                (&local_2f8);
      local_3d8 = local_2e8;
      local_3e8 = local_2f8;
      uStack_3e0 = uStack_2f0;
      *(undefined8 **)(puVar8 + 4) = local_2e8;
      *puVar8 = (undefined4)local_2f8;
      puVar8[1] = local_2f8._4_4_;
      puVar8[2] = (undefined4)uStack_2f0;
      puVar8[3] = uStack_2f0._4_4_;
                    /* try { // try from 001643da to 001643ee has its CatchHandler @ 001648b0 */
      _ZN5alloc5slice4hack8into_vec17h11f95d209dbce12aE(local_3b0,puVar8,1);
    }
    else {
      local_308 = (undefined4)local_408;
      uStack_304 = local_408._4_4_;
      uStack_300 = (undefined4)uStack_400;
      uStack_2fc = uStack_400._4_4_;
      local_318 = (undefined4)local_418;
      uStack_314 = local_418._4_4_;
      uStack_310 = (undefined4)uStack_410;
      uStack_30c = uStack_410._4_4_;
      local_328 = (undefined4)local_428;
      uStack_324 = local_428._4_4_;
      uStack_320 = (undefined4)uStack_420;
      uStack_31c = uStack_420._4_4_;
      local_338 = (undefined4)local_438;
      uStack_334 = local_438._4_4_;
      uStack_330 = (undefined4)uStack_430;
      uStack_32c = uStack_430._4_4_;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hd417ab4e14c6efefE
                (local_3b0,&local_338);
    }
                    /* try { // try from 001643fd to 00164440 has its CatchHandler @ 001648ae */
    bVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00215e40
            )(&local_370,
              *(undefined8 *)
               PTR__ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hb669b9fdd31f7f9cE_00215e38,
              *(undefined8 *)
               (PTR__ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hb669b9fdd31f7f9cE_00215e38 + 8));
    local_43a = '\x01';
    if (local_3a0 < 2) {
      if (local_3a0 != 1) {
                    /* try { // try from 0016487c to 0016488c has its CatchHandler @ 001648ae */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E_00215d68)
                  (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_0020faa0);
LAB_0016489f:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_43a = _ZN77__LT_alloc__string__String_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2ne17hb4f2d17f007cd88aE_specialized_1
                            (*(undefined8 *)(local_3a8 + 8),*(undefined8 *)(local_3a8 + 0x10));
    }
    local_390 = local_3a8 + local_3a0 * 0x18;
    local_398 = local_3a8;
    lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdd4670608fe27979E
                      (&local_398);
    puVar4 = PTR__ZN6uu_sum4open17hc6d78e625deb9f03E_00215e48;
    if (lVar9 != 0) {
      plVar1 = (long *)((ulong)(bVar5 ^ 1) * 4 + 1);
      do {
        local_388 = lVar9;
                    /* try { // try from 001645f1 to 001645f6 has its CatchHandler @ 001648b7 */
        (*(code *)puVar4)(&local_3e8,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
        if (local_3e8 == (undefined *)0x0) {
          if (bVar5 == 0) {
            Var11 = (*(code *)PTR__ZN6uu_sum7bsd_sum17h3ffaf9234bf825c3E_00215e70)();
          }
          else {
                    /* try { // try from 001646c7 to 00164848 has its CatchHandler @ 001648b5 */
            Var11 = (*(code *)PTR__ZN6uu_sum8sysv_sum17h29b452e8d3fae5cdE_00215e68)();
          }
          local_380._0_8_ = (undefined8)Var11;
          local_3f8 = CONCAT62(local_3f8._2_6_,(short)((unkuint10)Var11 >> 0x40));
          local_438 = &local_3f8;
          local_428 = (undefined8 *)local_380;
          if (local_43a == '\0') {
            uStack_430 = (code *)
                         PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17hc16e9a303f8fca40E_00215e50
            ;
            uStack_420 = (code *)
                         PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_00215dc0
            ;
            uStack_410 = (code *)0x0;
            local_2f8 = (undefined *)0x2;
            local_2e8 = (undefined8 *)&DAT_00000001;
            local_2e0 = 2;
            local_2d8 = 0;
            local_2d0 = 0x800000020;
            local_2c8 = 3;
            local_2c0 = 2;
            local_2b0 = 1;
            local_2a8 = 2;
            local_2a0 = 1;
            local_298 = 0x20;
            local_290 = 3;
            local_3e8 = &DAT_0020fab8;
            uStack_3e0 = 3;
            local_3c8 = &local_2f8;
            local_3c0 = 2;
            local_3d8 = &local_438;
            local_3d0 = 3;
            local_418 = plVar1;
                    /* try { // try from 001645ba to 001645c2 has its CatchHandler @ 001648b5 */
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00215e58)(&local_3e8);
          }
          else {
            uStack_430 = (code *)
                         PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17hc16e9a303f8fca40E_00215e50
            ;
            uStack_420 = (code *)
                         PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_00215dc0
            ;
            local_418 = &local_388;
            uStack_410 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb5b251f5996ecb26E;
            uStack_400 = 0;
            local_2f8 = (undefined *)0x2;
            local_2e8 = (undefined8 *)&DAT_00000001;
            local_2e0 = 3;
            local_2d8 = 0;
            local_2d0 = 0x800000020;
            local_2c8 = 3;
            local_2c0 = 2;
            local_2b0 = 1;
            local_2a8 = 3;
            local_2a0 = 1;
            local_298 = 0x20;
            local_290 = 3;
            local_288 = 2;
            local_278 = 2;
            local_268 = 2;
            local_260 = 0x20;
            local_258 = 3;
            local_3e8 = &DAT_0020fae8;
            uStack_3e0 = 4;
            local_3c8 = &local_2f8;
            local_3c0 = 3;
            local_3d8 = &local_438;
            local_3d0 = 4;
            local_408 = plVar1;
            (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00215e58)(&local_3e8);
          }
        }
        else {
          local_3f8 = uStack_3e0;
          local_3f0 = local_3d8;
                    /* try { // try from 00164617 to 001646a7 has its CatchHandler @ 001648bc */
          uVar6 = (*(code *)local_3d8[0xc])();
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E_00215e60)(uVar6);
          auVar10 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00215e08)();
          uStack_430 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haa62e7285047aad2E;
          uStack_420 = 
          _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hb10dae7654710d7fE
          ;
          local_2f8 = &DAT_0020fa70;
          uStack_2f0 = 3;
          local_2d8 = 0;
          local_2e8 = &local_438;
          local_2e0 = 2;
          local_438 = (undefined8 *)local_380;
          local_428 = &local_3f8;
          local_380 = auVar10;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00215d48)(&local_2f8);
                    /* try { // try from 001646b2 to 001646b6 has its CatchHandler @ 001648b7 */
          _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h329148619ba10487E
                    (local_3f8,local_3f0);
        }
        lVar9 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdd4670608fe27979E
                          (&local_398);
      } while (lVar9 != 0);
    }
                    /* try { // try from 0016484e to 0016485a has its CatchHandler @ 001648b0 */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h8670efed1fef2e3fE
              (local_3b0);
    _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6657a28c01b53c01E
              (&local_370);
    uVar7 = 0;
  }
  return uVar7;
}