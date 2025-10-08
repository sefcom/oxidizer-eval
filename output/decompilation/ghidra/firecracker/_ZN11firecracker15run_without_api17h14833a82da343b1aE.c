void _ZN11firecracker15run_without_api17h14833a82da343b1aE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined param_5,undefined param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined auVar9 [12];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  long *local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  long local_3e8;
  long local_3e0;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined local_3a0 [312];
  undefined local_268 [184];
  long local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined local_168 [304];
  long local_38;
  
  _ZN13event_manager7manager21EventManager_LT_S_GT_17new_with_capacity17h328affe4842db2ceE
            (&local_3e8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hbb53a831db29b376E
            (local_268,&local_3e8,&PTR_DAT_004a4160);
  local_3d0 = _ZN11firecracker7metrics15PeriodicMetrics3new17h090430d50ede4455E();
  local_3e8 = 1;
  local_3e0 = 1;
  uStack_3d8 = 0;
  plVar5 = (long *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h659fe066b81ad2c7E(&local_3e8);
  LOCK();
  lVar6 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  local_430 = plVar5;
  if (*plVar5 == 0 || SCARRY8(lVar6,1) != *plVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _ZN94__LT_event_manager__manager__EventManager_LT_T_GT__u20_as_u20_event_manager__SubscriberOps_GT_14add_subscriber17h142e5b65e95b5675E
            (local_268,plVar5,
             &
             PTR__ZN4core3ptr58drop_in_place_LT_firecracker__metrics__PeriodicMetrics_GT_17h1f161be9d5a5a85aE_004a3cc0
            );
  _ZN11firecracker23build_microvm_from_json17h1f8e3de32d767856E
            (&local_3e8,param_2,local_268,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  lVar4 = local_3e8;
  local_478 = local_3e0;
  lVar6 = local_478;
  uStack_470 = uStack_3d8;
  uVar3 = uStack_470;
  local_468 = CONCAT44(uStack_3cc,local_3d0);
  uStack_460 = uStack_3c8;
  local_458 = local_3c0;
  uStack_450 = uStack_3b8;
  local_448 = local_3b0;
  uStack_444 = uStack_3ac;
  uStack_440 = uStack_3a8;
  uStack_43c = uStack_3a4;
  if (local_3e8 == -0x8000000000000000) {
    local_478._0_4_ = (undefined4)local_3e0;
    local_478._4_4_ = (undefined4)((ulong)local_3e0 >> 0x20);
    uStack_470._0_4_ = (undefined4)uStack_3d8;
    uStack_470._4_4_ = (undefined4)((ulong)uStack_3d8 >> 0x20);
    local_3f8 = CONCAT44(uStack_3ac,local_3b0);
    uStack_3f0 = CONCAT44(uStack_3a4,uStack_3a8);
    local_428 = (undefined4)local_478;
    uStack_424 = local_478._4_4_;
    uStack_420 = (undefined4)uStack_470;
    uStack_41c = uStack_470._4_4_;
    uStack_410 = uStack_3c8;
    local_408 = local_3c0;
    uStack_400 = uStack_3b8;
    *(undefined8 *)(param_1 + 0xc) = local_3f8;
    *(undefined8 *)(param_1 + 0xe) = uStack_3f0;
    *(undefined8 *)(param_1 + 8) = local_3c0;
    *(undefined8 *)(param_1 + 10) = uStack_3b8;
    *(undefined8 *)(param_1 + 4) = local_468;
    *(undefined8 *)(param_1 + 6) = uStack_3c8;
    *param_1 = (undefined4)local_478;
    param_1[1] = local_478._4_4_;
    param_1[2] = (undefined4)uStack_470;
    param_1[3] = uStack_470._4_4_;
    local_478 = lVar6;
    uStack_470 = uVar3;
    local_418 = local_468;
  }
  else {
    (*(code *)PTR_memcpy_004bf3b8)(local_168,local_3a0,0x138);
    local_3f8 = CONCAT44(uStack_444,local_448);
    uStack_3f0 = CONCAT44(uStack_43c,uStack_440);
    local_408 = local_458;
    uStack_400 = uStack_450;
    local_418 = local_468;
    uStack_410 = uStack_460;
    local_428 = (undefined4)local_478;
    uStack_424 = local_478._4_4_;
    uStack_420 = (undefined4)uStack_470;
    uStack_41c = uStack_470._4_4_;
    local_1a8 = (undefined4)local_478;
    uStack_1a4 = local_478._4_4_;
    uStack_1a0 = (undefined4)uStack_470;
    uStack_19c = uStack_470._4_4_;
    local_198 = (undefined4)local_468;
    uStack_194 = local_468._4_4_;
    uStack_190 = (undefined4)uStack_460;
    uStack_18c = uStack_460._4_4_;
    local_188 = (undefined4)local_458;
    uStack_184 = local_458._4_4_;
    uStack_180 = (undefined4)uStack_450;
    uStack_17c = uStack_450._4_4_;
    local_178 = local_448;
    uStack_174 = uStack_444;
    uStack_170 = uStack_440;
    uStack_16c = uStack_43c;
    local_1b0 = lVar4;
    local_478 = local_38;
    _ZN4core3ptr48drop_in_place_LT_vmm__resources__VmResources_GT_17h68977f9def7baa44E(&local_1b0);
    _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h8c6f8f786f04e889E(&local_3e8,plVar5 + 2);
    auVar9 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h3726d98727c37e19E
                       (&local_3e8,&PTR_DAT_004a4190);
    _ZN11firecracker7metrics15PeriodicMetrics5start17h3c1c244ee7083cafE(auVar9._0_8_ + 8);
    _ZN4core3ptr102drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_firecracker__metrics__PeriodicMetrics_GT__GT_17he362f43706e4abd8E
              (auVar9._0_8_,auVar9._8_4_ & 1);
    while( true ) {
      _ZN13event_manager7manager21EventManager_LT_S_GT_16run_with_timeout17h6fc2eeab4ecbbe87E
                (&local_3e8,local_268);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h8c6dd5f513fe412dE
                (&local_3e8,
                 "Failed to start the event managerEmptyIDGenericInvalidIDInvalidPathMethodSerdeJson"
                 ,0x21,&PTR_DAT_004a41a8);
      _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h38953874ec970728E
                (&local_3e8,local_478 + 0x10);
      auVar8 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc16998d407e0609dE
                         (&local_3e8,&PTR_DAT_004a41c0);
      uVar7 = auVar8._8_8_;
      lVar6 = auVar8._0_8_;
      cVar1 = *(char *)(lVar6 + 0x214);
      if (cVar1 != -0x62) break;
      _ZN4core3ptr102drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_firecracker__metrics__PeriodicMetrics_GT__GT_17he362f43706e4abd8E
                (lVar6,auVar8[8] & 1,uVar7 & 0xffffffffffffff01);
    }
    if (cVar1 == '\0') {
      _ZN4core3ptr102drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_firecracker__metrics__PeriodicMetrics_GT__GT_17he362f43706e4abd8E
                (lVar6,uVar7 & 1);
      *(undefined *)param_1 = 0x1d;
    }
    else {
      *(undefined *)param_1 = 0x1c;
      *(char *)((long)param_1 + 1) = cVar1;
      _ZN4core3ptr102drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_firecracker__metrics__PeriodicMetrics_GT__GT_17he362f43706e4abd8E
                (lVar6,uVar7 & 1);
    }
    _ZN4core3ptr92drop_in_place_LT_alloc__sync__Arc_LT_std__sync__poison__mutex__Mutex_LT_vmm__Vmm_GT__GT__GT_17hdd4fdcfc2ebf5472E
              (&local_478);
  }
  _ZN4core3ptr121drop_in_place_LT_alloc__sync__Arc_LT_std__sync__poison__mutex__Mutex_LT_firecracker__metrics__PeriodicMetrics_GT__GT__GT_17hf44de49e7d991a0dE
            (&local_430);
  _ZN4core3ptr169drop_in_place_LT_event_manager__manager__EventManager_LT_alloc__sync__Arc_LT_std__sync__poison__mutex__Mutex_LT_dyn_u20_event_manager__MutEventSubscriber_GT__GT__GT__GT_17ha231e7ff64aebfc9E
            (local_268);
  return;
}