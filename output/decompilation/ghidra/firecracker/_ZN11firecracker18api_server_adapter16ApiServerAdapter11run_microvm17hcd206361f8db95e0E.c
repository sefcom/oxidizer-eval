void _ZN11firecracker18api_server_adapter16ApiServerAdapter11run_microvm17hcd206361f8db95e0E
               (undefined *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8,
               undefined8 param_9)

{
  char cVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined local_1b8 [376];
  long *local_40;
  undefined4 local_38;
  
  uVar4 = param_9;
  plVar3 = param_8;
  LOCK();
  lVar6 = *param_8;
  *param_8 = *param_8 + 1;
  UNLOCK();
  if (*param_8 != 0 && SCARRY8(lVar6,1) == *param_8 < 0) {
    local_1f0 = 1;
    local_1e8 = 1;
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = param_3;
    local_1d0 = param_4;
    local_1c8 = param_5;
    local_1c0 = param_6;
    (*(code *)PTR_memcpy_004bf3b8)(local_1b8,param_7,0x178);
    local_40 = plVar3;
    local_38 = param_2;
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h9d46414a85dea5fcE(&local_1f0);
    _ZN94__LT_event_manager__manager__EventManager_LT_T_GT__u20_as_u20_event_manager__SubscriberOps_GT_14add_subscriber17h142e5b65e95b5675E
              (uVar4,uVar5,
               &
               PTR__ZN4core3ptr70drop_in_place_LT_firecracker__api_server_adapter__ApiServerAdapter_GT_17h1dd7473fb512a179E_004a3aa0
              );
    while( true ) {
      _ZN13event_manager7manager21EventManager_LT_S_GT_16run_with_timeout17h6fc2eeab4ecbbe87E
                (&local_1f0,uVar4);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h8c6dd5f513fe412dE
                (&local_1f0,&DAT_00138575,0x26,&PTR_DAT_004a3ac8);
      _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h38953874ec970728E(&local_1f0,param_8 + 2);
      auVar8 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc16998d407e0609dE
                         (&local_1f0,&PTR_DAT_004a3ae0);
      uVar7 = auVar8._8_8_;
      lVar6 = auVar8._0_8_;
      cVar1 = *(char *)(lVar6 + 0x214);
      if (cVar1 != -0x62) break;
      _ZN4core3ptr102drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_firecracker__metrics__PeriodicMetrics_GT__GT_17he362f43706e4abd8E
                (lVar6,uVar7 & 1);
    }
    if (cVar1 == '\0') {
      _ZN4core3ptr102drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_firecracker__metrics__PeriodicMetrics_GT__GT_17he362f43706e4abd8E
                (lVar6,uVar7 & 1);
      *param_1 = 0x20;
    }
    else {
      *param_1 = 0x1d;
      param_1[1] = cVar1;
      _ZN4core3ptr102drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_firecracker__metrics__PeriodicMetrics_GT__GT_17he362f43706e4abd8E
                (lVar6,uVar7 & 1,uVar7 & 0xffffffffffffff01);
    }
    _ZN4core3ptr92drop_in_place_LT_alloc__sync__Arc_LT_std__sync__poison__mutex__Mutex_LT_vmm__Vmm_GT__GT__GT_17hdd4fdcfc2ebf5472E
              (&param_8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}