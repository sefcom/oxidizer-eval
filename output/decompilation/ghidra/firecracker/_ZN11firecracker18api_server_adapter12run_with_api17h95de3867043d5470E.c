void _ZN11firecracker18api_server_adapter12run_with_api17h95de3867043d5470E
               (undefined4 *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
               undefined4 *param_5,undefined8 *param_6,undefined param_7,undefined param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int __fd;
  int __fd_00;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined uVar21;
  undefined auVar22 [16];
  int local_5a8;
  int local_5a4;
  undefined4 *local_5a0;
  undefined **local_590;
  undefined4 *local_580;
  int local_574;
  undefined8 *local_570;
  undefined8 local_568;
  long *local_558;
  long *local_550;
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
  undefined8 uStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined7 uStack_4f8;
  undefined local_4f1;
  undefined7 uStack_4f0;
  undefined uStack_4e9;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined3 uStack_4dc;
  undefined uStack_4d9;
  undefined7 uStack_4d8;
  undefined **local_4d1;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined **local_4b0;
  undefined8 *local_4a8;
  undefined local_4a0 [16];
  undefined **local_490 [2];
  long local_480;
  undefined8 local_478;
  int iStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  uint uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined local_430 [8];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  long local_3e0;
  undefined8 local_3d8;
  int local_3d0;
  undefined **local_2f0 [2];
  undefined local_2e0 [16];
  undefined local_2d0 [16];
  undefined **local_2c0;
  long **local_2b0;
  undefined4 *local_2a8;
  int local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined7 uStack_240;
  undefined uStack_239;
  undefined7 uStack_238;
  undefined uStack_231;
  undefined7 local_230;
  undefined uStack_229;
  undefined7 uStack_228;
  undefined uStack_221;
  undefined7 uStack_220;
  undefined8 local_219;
  undefined local_198 [8];
  undefined8 uStack_190;
  undefined8 local_188;
  undefined local_180 [8];
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined local_168 [312];
  
  puVar7 = PTR__ZN12vmm_sys_util5linux7eventfd7EventFd3new17h5f57ed9483b32f4cE_004bfc38;
  local_5a0 = param_1;
  local_580 = param_5;
  local_558 = param_3;
  local_4a8 = param_6;
  (*(code *)PTR__ZN12vmm_sys_util5linux7eventfd7EventFd3new17h5f57ed9483b32f4cE_004bfc38)
            (&local_478,1);
  local_5a8 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hebbe0ee00a820641E
                        (&local_478,&DAT_0013889c,0x1a,&PTR_DAT_004a3be8);
  (*(code *)puVar7)(&local_478,0x800);
  __fd = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hebbe0ee00a820641E
                   (&local_478,&DAT_001388b6,0x1e,&PTR_DAT_004a3c00);
  local_5a4 = __fd;
  _ZN3std4sync4mpmc7channel17h4b8c68c93431b2d7E(&local_478);
  local_4b8 = CONCAT44(uStack_46c,iStack_470);
  local_4b0 = local_478;
  local_2f0[0] = local_478;
  _ZN3std4sync4mpmc7channel17h4b8c68c93431b2d7E(&local_478);
  uVar2 = (undefined4)local_468;
  uVar3 = local_468._4_4_;
  local_590 = local_478;
  local_490[0] = local_478;
  (*(code *)PTR__ZN12vmm_sys_util5linux7eventfd7EventFd9try_clone17h6bf3f4b0b2d7ee46E_004bfc40)
            (&local_478,&local_5a8);
  __fd_00 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hebbe0ee00a820641E
                      (&local_478,&DAT_001388d4,0x1c,&PTR_DAT_004a3c18);
  local_568 = param_2;
  lVar17 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17h36c25417eea7e160E(param_2);
  if (lVar17 != 0) {
    local_480 = lVar17;
    _ZN10micro_http6server10HttpServer3new17h4225a9f0723c090cE(&local_478,param_4);
    if (local_478 == (undefined **)0x0) {
      if ((iStack_470 == 0x17) &&
         (cVar15 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E
                             (CONCAT44(local_468._4_4_,(undefined4)local_468)), cVar15 == '\b')) {
        local_250 = *(undefined4 *)(param_4 + 1);
        uStack_24c = *(undefined4 *)((long)param_4 + 0xc);
        uStack_248 = *(undefined4 *)(param_4 + 2);
        uStack_244 = *(undefined4 *)((long)param_4 + 0x14);
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hb9277cdbddd35a2eE
                  (local_198,&local_250);
        uStack_239 = (undefined)local_188;
        uStack_238 = (undefined7)((ulong)local_188 >> 8);
        uStack_24c._3_1_ = local_198[0];
        uStack_248 = local_198._1_4_;
        uStack_244._0_3_ = local_198._5_3_;
        uStack_244._3_1_ = (undefined)uStack_190;
        uStack_240 = (undefined7)((ulong)uStack_190 >> 8);
        *(undefined *)local_5a0 = 0x1e;
        *(undefined4 *)((long)local_5a0 + 1) = local_250;
        *(undefined4 *)((long)local_5a0 + 5) = uStack_24c;
        *(undefined4 *)((long)local_5a0 + 9) = uStack_248;
        *(undefined4 *)((long)local_5a0 + 0xd) = uStack_244;
        *(undefined8 *)(local_5a0 + 4) = uStack_190;
        *(undefined8 *)(local_5a0 + 6) = local_188;
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h7e6e851676b6581eE(&local_548);
      }
      else {
        local_219 = uStack_440;
        uStack_229 = (undefined)uStack_450;
        uStack_228 = (undefined7)(CONCAT44(uStack_44c,uStack_450) >> 8);
        uStack_221 = SUB81(local_448,0);
        uStack_220 = (undefined7)((ulong)local_448 >> 8);
        uStack_239 = (undefined)uStack_460;
        uStack_238 = (undefined7)(CONCAT44(uStack_45c,uStack_460) >> 8);
        uStack_231 = (undefined)local_458;
        local_230 = (undefined7)(CONCAT44(uStack_454,local_458) >> 8);
        uStack_24c._3_1_ = (undefined)iStack_470;
        uStack_248 = (undefined4)(CONCAT44(uStack_46c,iStack_470) >> 8);
        uStack_244._3_1_ = (undefined)(undefined4)local_468;
        uStack_244 = CONCAT13(uStack_244._3_1_,(int3)((uint)uStack_46c >> 8));
        uStack_240 = (undefined7)(CONCAT44(local_468._4_4_,(undefined4)local_468) >> 8);
        *(undefined *)local_5a0 = 0x1f;
        *(undefined4 *)((long)local_5a0 + 1) = local_250;
        *(undefined4 *)((long)local_5a0 + 5) = uStack_24c;
        *(undefined4 *)((long)local_5a0 + 9) = uStack_248;
        *(undefined4 *)((long)local_5a0 + 0xd) = uStack_244;
        *(ulong *)((long)local_5a0 + 0x11) = CONCAT17(uStack_239,uStack_240);
        *(ulong *)((long)local_5a0 + 0x19) = CONCAT17(uStack_231,uStack_238);
        *(ulong *)((long)local_5a0 + 0x21) = CONCAT17(uStack_229,local_230);
        *(ulong *)((long)local_5a0 + 0x29) = CONCAT17(uStack_221,uStack_228);
        *(undefined ***)(local_5a0 + 0xc) = local_448;
        *(undefined8 *)(local_5a0 + 0xe) = uStack_440;
      }
      _ZN4core3ptr71drop_in_place_LT_alloc__sync__Arc_LT_alloc__vec__Vec_LT_u64_GT__GT__GT_17h0fb2ab07e6e921ccE
                (&local_480);
      _ZN4core3ptr58drop_in_place_LT_vmm_sys_util__linux__eventfd__EventFd_GT_17hcfdb36d35d96e7e1E
                (__fd_00);
      _ZN4core3ptr171drop_in_place_LT_std__sync__mpsc__Receiver_LT_alloc__boxed__Box_LT_core__result__Result_LT_vmm__rpc_interface__VmmData_C_vmm__rpc_interface__VmmActionError_GT__GT__GT__GT_17h89b8bd23d40cf07cE
                (local_2e0);
      _ZN4core3ptr169drop_in_place_LT_std__sync__mpsc__Sender_LT_alloc__boxed__Box_LT_core__result__Result_LT_vmm__rpc_interface__VmmData_C_vmm__rpc_interface__VmmActionError_GT__GT__GT__GT_17h976bfee3969176b3E
                (local_490);
      _ZN4core3ptr108drop_in_place_LT_std__sync__mpsc__Receiver_LT_alloc__boxed__Box_LT_vmm__rpc_interface__VmmAction_GT__GT__GT_17hfaeaaf36c4bace38E
                (local_4a0);
      _ZN4core3ptr106drop_in_place_LT_std__sync__mpsc__Sender_LT_alloc__boxed__Box_LT_vmm__rpc_interface__VmmAction_GT__GT__GT_17hf258a9008e318af5E
                (local_2f0);
      _ZN4core3ptr58drop_in_place_LT_vmm_sys_util__linux__eventfd__EventFd_GT_17hcfdb36d35d96e7e1E
                (__fd);
      _ZN4core3ptr58drop_in_place_LT_vmm_sys_util__linux__eventfd__EventFd_GT_17hcfdb36d35d96e7e1E
                (local_5a8);
      _ZN4core3ptr65drop_in_place_LT_vmm__vmm_config__instance_info__InstanceInfo_GT_17h8bafaefa3a8db683E
                (local_580);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h1fc4ff93f60e3e29E(*param_4,param_4[1])
      ;
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hf8b36c6afb1cf6edE
                (local_558);
    }
    else {
      local_258 = local_438;
      local_268 = (undefined4)local_448;
      uStack_264 = local_448._4_4_;
      uStack_260 = (undefined4)uStack_440;
      uStack_25c = uStack_440._4_4_;
      local_278 = local_458;
      uStack_274 = uStack_454;
      uStack_270 = uStack_450;
      uStack_26c = uStack_44c;
      local_288 = (undefined4)local_468;
      uStack_284 = local_468._4_4_;
      uStack_280 = uStack_460;
      uStack_27c = uStack_45c;
      local_298 = (undefined4)local_478;
      uStack_294 = local_478._4_4_;
      iStack_290 = iStack_470;
      uStack_28c = uStack_46c;
      local_574 = __fd_00;
      uVar18 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                         (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
      if (2 < uVar18) {
        local_548 = SUB84(param_4,0);
        uStack_544 = (undefined4)((ulong)param_4 >> 0x20);
        uStack_540 = SUB84(PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_004bfc48
                           ,0);
        uStack_53c = (undefined4)
                     ((ulong)
                      PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_004bfc48
                     >> 0x20);
        local_478 = &PTR_DAT_004a3bc8;
        iStack_470 = 2;
        uStack_46c = 0;
        local_458 = 0;
        uStack_454 = 0;
        local_468 = &local_548;
        uStack_460 = 1;
        uStack_45c = 0;
        uVar19 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                           (&PTR_DAT_004a3c48);
        local_250 = 0x138810;
        uStack_24c = 0;
        uStack_248 = 0x1f;
        uStack_244 = 0;
        uStack_240 = 0x138810;
        uStack_239 = 0;
        uStack_238 = 0x1f;
        uStack_231 = 0;
        local_230 = (undefined7)uVar19;
        uStack_229 = (undefined)((ulong)uVar19 >> 0x38);
        _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_478,3,&local_250);
      }
      local_570 = param_4;
      (*(code *)PTR__ZN12vmm_sys_util5linux7eventfd7EventFd9try_clone17h6bf3f4b0b2d7ee46E_004bfc40)
                (&local_478,&local_5a4);
      uVar16 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hebbe0ee00a820641E
                         (&local_478,&DAT_001388f0,0x1f,&PTR_DAT_004a3c60);
      (*(code *)PTR__ZN10micro_http6server10HttpServer15add_kill_switch17h04ec911044d535acE_004bfc50
      )(&local_478,&local_298,uVar16);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h62ed977e5695b52cE
                (&local_478,&DAT_0013890f,0x22,&PTR_DAT_004a3c78);
      local_468._0_4_ = 0;
      local_468._4_4_ = 0x80000000;
      local_478 = (undefined **)0x0;
      uStack_450 = uStack_450 & 0xffffff00;
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
                (&local_548,&DAT_00138896,6);
      (*(code *)PTR__ZN3std6thread7Builder4name17h9a7df364061ccb51E_004bfc58)
                (&local_250,&local_478,&local_548);
      local_448 = local_4b0;
      uStack_440 = local_4b8;
      local_3d0 = local_574;
      local_428 = CONCAT44(uStack_294,local_298);
      uStack_420 = CONCAT44(uStack_28c,iStack_290);
      local_418 = CONCAT44(uStack_284,local_288);
      uStack_410 = CONCAT44(uStack_27c,uStack_280);
      local_408 = CONCAT44(uStack_274,local_278);
      uStack_400 = CONCAT44(uStack_26c,uStack_270);
      local_3f8 = local_268;
      uStack_3f4 = uStack_264;
      uStack_3f0 = uStack_260;
      uStack_3ec = uStack_25c;
      local_3e8 = local_258;
      local_478 = (undefined **)*local_4a8;
      iStack_470 = *(int *)(local_4a8 + 1);
      uStack_46c = *(undefined4 *)((long)local_4a8 + 0xc);
      local_468._0_4_ = *(undefined4 *)(local_4a8 + 2);
      local_468._4_4_ = *(undefined4 *)((long)local_4a8 + 0x14);
      uStack_460 = *(undefined4 *)(local_4a8 + 3);
      uStack_45c = *(undefined4 *)((long)local_4a8 + 0x1c);
      local_458 = *(undefined4 *)(local_4a8 + 4);
      uStack_454 = *(undefined4 *)((long)local_4a8 + 0x24);
      uStack_450 = *(uint *)(local_4a8 + 5);
      uStack_44c = *(undefined4 *)((long)local_4a8 + 0x2c);
      local_3d8 = param_9;
      local_3e0 = lVar17;
      local_438._0_4_ = uVar2;
      local_438._4_4_ = uVar3;
      _ZN3std6thread7Builder15spawn_unchecked17h2f60c371c604c1bdE(&local_548,&local_250,&local_478);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17ha75d62c38c499594E(local_180,&local_548);
      _ZN13event_manager7manager21EventManager_LT_S_GT_17new_with_capacity17h328affe4842db2ceE
                (&local_478);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17hbb53a831db29b376E
                (&local_250,&local_478,&PTR_DAT_004a3ca8);
      uStack_460 = _ZN11firecracker7metrics15PeriodicMetrics3new17h090430d50ede4455E();
      local_478 = (undefined **)0x1;
      iStack_470 = 1;
      uStack_46c = 0;
      local_468._0_4_ = 0;
      local_468._4_4_ = 0;
      local_550 = (long *)_ZN5alloc5boxed12Box_LT_T_GT_3new17h659fe066b81ad2c7E(&local_478);
      LOCK();
      lVar17 = *local_550;
      *local_550 = *local_550 + 1;
      UNLOCK();
      if (*local_550 == 0 || SCARRY8(lVar17,1) != *local_550 < 0) goto LAB_00258c38;
      _ZN94__LT_event_manager__manager__EventManager_LT_T_GT__u20_as_u20_event_manager__SubscriberOps_GT_14add_subscriber17h142e5b65e95b5675E
                (&local_250,local_550,
                 &
                 PTR__ZN4core3ptr58drop_in_place_LT_firecracker__metrics__PeriodicMetrics_GT_17h1f161be9d5a5a85aE_004a3cc0
                );
      if (*local_558 == -0x8000000000000000) {
        local_508 = *(undefined8 *)(local_580 + 0x10);
        uStack_500 = *(undefined8 *)(local_580 + 0x12);
        local_548 = *local_580;
        uStack_544 = local_580[1];
        uStack_540 = local_580[2];
        uStack_53c = local_580[3];
        local_538 = local_580[4];
        uStack_534 = local_580[5];
        uStack_530 = local_580[6];
        uStack_52c = local_580[7];
        local_528 = local_580[8];
        uStack_524 = local_580[9];
        uStack_520 = *(undefined ***)(local_580 + 10);
        local_518 = local_580[0xc];
        uStack_514 = local_580[0xd];
        uStack_510 = local_580[0xe];
        uStack_50c = local_580[0xf];
        (*(code *)
          PTR__ZN3vmm13rpc_interface20PrebootApiController27build_microvm_from_requests17h5953c7106a2ac51aE_004bfc60
        )(&local_478,local_568,&local_250,&local_548,local_4a0,local_490,&local_5a8,param_7,param_8,
          param_10,param_11,param_12);
        ppuVar20 = local_478;
        uVar21 = (undefined)iStack_470;
        if (local_478 == (undefined **)0x8000000000000000) {
          local_4d1 = (undefined **)CONCAT44(uStack_44c,uStack_450);
          uStack_4e0 = (undefined4)(CONCAT44(uStack_45c,uStack_460) >> 8);
          uStack_4dc = (undefined3)((uint)uStack_45c >> 8);
          uStack_4d9 = (undefined)local_458;
          uStack_4d8 = (undefined7)(CONCAT44(uStack_454,local_458) >> 8);
          uStack_4f0 = (undefined7)(CONCAT44(uStack_46c,iStack_470) >> 8);
          uStack_4e8 = (undefined4)(CONCAT44(local_468._4_4_,(undefined4)local_468) >> 8);
          uStack_4e4._0_3_ = (undefined3)((uint)local_468._4_4_ >> 8);
          uStack_4e4 = CONCAT13((undefined)uStack_460,(undefined3)uStack_4e4);
          uVar21 = 0x1c;
          local_4f1 = (undefined)iStack_470;
          uStack_4e9 = (undefined)local_468;
        }
        else {
          uStack_4f8 = CONCAT43(uStack_46c,iStack_470._1_3_);
          uStack_4f0 = CONCAT43(local_468._4_4_,local_468._1_3_);
          local_4f1 = (undefined)local_468;
          uStack_4e9 = (undefined)uStack_460;
          uStack_4e8 = (undefined4)CONCAT43(uStack_45c,uStack_460._1_3_);
          uStack_4e4 = (undefined4)
                       (CONCAT17((undefined)local_458,CONCAT43(uStack_45c,uStack_460._1_3_)) >> 0x20
                       );
          uStack_4e0 = (undefined4)CONCAT43(uStack_454,local_458._1_3_);
          uStack_4dc = (undefined3)((uint)uStack_454 >> 8);
          uStack_4d9 = (undefined)uStack_450;
          uStack_4d8 = (undefined7)(CONCAT44(uStack_44c,uStack_450) >> 8);
          local_4d1 = local_448;
          local_4c8 = (undefined4)uStack_440;
          uStack_4c4 = uStack_440._4_4_;
          uStack_4c0 = (undefined4)local_438;
          uStack_4bc = local_438._4_4_;
          (*(code *)PTR_memcpy_004bf3b8)(local_168,local_430,0x138);
        }
      }
      else {
        local_508 = *(undefined8 *)(local_580 + 0x10);
        uStack_500 = *(undefined8 *)(local_580 + 0x12);
        local_548 = *local_580;
        uStack_544 = local_580[1];
        uStack_540 = local_580[2];
        uStack_53c = local_580[3];
        local_538 = local_580[4];
        uStack_534 = local_580[5];
        uStack_530 = local_580[6];
        uStack_52c = local_580[7];
        local_528 = local_580[8];
        uStack_524 = local_580[9];
        uStack_520 = *(undefined ***)(local_580 + 10);
        local_518 = local_580[0xc];
        uStack_514 = local_580[0xd];
        uStack_510 = local_580[0xe];
        uStack_50c = local_580[0xf];
        _ZN11firecracker23build_microvm_from_json17h1f8e3de32d767856E
                  (&local_478,local_568,&local_250,local_558,&local_548,param_7,param_8,param_10,
                   param_11,param_12);
        ppuVar20 = local_478;
        uVar21 = (undefined)iStack_470;
        uStack_4f8 = CONCAT43(uStack_46c,iStack_470._1_3_);
        uStack_4f0 = CONCAT43(local_468._4_4_,local_468._1_3_);
        local_4f1 = (undefined)local_468;
        uStack_4e9 = (undefined)uStack_460;
        uStack_4e8 = (undefined4)CONCAT43(uStack_45c,uStack_460._1_3_);
        uStack_4e4 = (undefined4)
                     (CONCAT17((undefined)local_458,CONCAT43(uStack_45c,uStack_460._1_3_)) >> 0x20);
        uStack_4e0 = (undefined4)CONCAT43(uStack_454,local_458._1_3_);
        uStack_4dc = (undefined3)((uint)uStack_454 >> 8);
        uStack_4d9 = (undefined)uStack_450;
        uStack_4d8 = (undefined7)(CONCAT44(uStack_44c,uStack_450) >> 8);
        local_4d1 = local_448;
        local_4c8 = (undefined4)uStack_440;
        uStack_4c4 = uStack_440._4_4_;
        uStack_4c0 = (undefined4)local_438;
        uStack_4bc = local_438._4_4_;
        if (local_478 != (undefined **)0x8000000000000000) {
          (*(code *)PTR_memcpy_004bf3b8)(local_168,local_430,0x138);
        }
      }
      uVar14 = uStack_524;
      uVar13 = local_528;
      uVar12 = uStack_530;
      uVar11 = uStack_534;
      uVar10 = uStack_53c;
      uVar16 = uStack_540;
      uVar3 = uStack_544;
      uVar2 = local_548;
      puVar8 = local_5a0;
      local_2b0 = &local_550;
      local_2a0 = local_5a8;
      local_2c0 = local_590;
      uStack_534._1_3_ = (undefined3)uStack_4e4;
      uStack_530._1_3_ = (undefined3)uStack_4e0;
      local_548._1_3_ = (undefined3)uStack_4f8;
      uStack_544 = (undefined4)((uint7)uStack_4f8 >> 0x18);
      uStack_540._1_3_ = (undefined3)uStack_4f0;
      uStack_53c = (undefined4)((uint7)uStack_4f0 >> 0x18);
      local_528._1_3_ = (undefined3)uStack_4d8;
      uStack_524 = (undefined4)((uint7)uStack_4d8 >> 0x18);
      uVar5 = (undefined)((uint)uStack_4e4 >> 0x18);
      uVar6 = (undefined)((uint)uStack_4e0 >> 0x18);
      uVar4 = (undefined)((uint)uStack_4e8 >> 0x18);
      local_2a8 = &local_250;
      if (ppuVar20 == (undefined **)0x8000000000000000) {
        uStack_520 = local_4d1;
        uStack_534 = CONCAT31(uStack_534._1_3_,uVar4);
        uStack_530 = CONCAT31(uStack_530._1_3_,uVar5);
        uStack_52c = CONCAT31(uStack_4dc,uVar6);
        local_528 = CONCAT31(local_528._1_3_,uStack_4d9);
        uStack_540 = CONCAT31(uStack_540._1_3_,local_4f1);
        local_538 = CONCAT31((int3)uStack_4e8,uStack_4e9);
        local_518 = local_4c8;
        uStack_514 = uStack_4c4;
        uStack_510 = uStack_4c0;
        uStack_50c = uStack_4bc;
        local_548 = CONCAT31(local_548._1_3_,uVar21);
        _ZN4core3ptr95drop_in_place_LT_firecracker__api_server_adapter__run_with_api___u7b__u7b_closure_u7d__u7d__GT_17h80046040f0f827b7E
                  (local_2d0);
      }
      else {
        local_448 = local_4d1;
        uStack_45c = CONCAT31(uStack_534._1_3_,uVar4);
        local_458 = CONCAT31(uStack_530._1_3_,uVar5);
        uStack_454 = CONCAT31(uStack_4dc,uVar6);
        uStack_450 = CONCAT31(local_528._1_3_,uStack_4d9);
        iStack_470._1_3_ = local_548._1_3_;
        local_468._0_4_ = CONCAT31(uStack_540._1_3_,local_4f1);
        uStack_460 = CONCAT31((int3)uStack_4e8,uStack_4e9);
        uStack_440 = CONCAT44(uStack_4c4,local_4c8);
        local_438._0_4_ = uStack_4c0;
        local_438._4_4_ = uStack_4bc;
        local_548 = uVar2;
        uStack_46c = uStack_544;
        uStack_544 = uVar3;
        uStack_540 = uVar16;
        local_468._4_4_ = uStack_53c;
        uStack_53c = uVar10;
        uStack_534 = uVar11;
        uStack_530 = uVar12;
        local_528 = uVar13;
        uStack_44c = uStack_524;
        uStack_524 = uVar14;
        (*(code *)PTR_memcpy_004bf3b8)(local_430,local_168,0x138);
        iStack_470 = CONCAT31(iStack_470._1_3_,uVar21);
        local_478 = ppuVar20;
        _ZN11firecracker18api_server_adapter12run_with_api28__u7b__u7b_closure_u7d__u7d_17hcd44a44c98af2a49E
                  (&local_548,local_2d0,&local_478);
      }
      puVar9 = local_570;
      uVar19 = (*(code *)
                 PTR__ZN12vmm_sys_util5linux7eventfd7EventFd5write17hbb112918028d4a8aE_004bfc00)
                         (&local_5a4,1);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h39e5f9294ba9fb39E(uVar19);
      local_468._0_4_ = (undefined4)local_170;
      local_468._4_4_ = (undefined4)((ulong)local_170 >> 0x20);
      iStack_470 = uStack_178;
      uStack_46c = uStack_174;
      auVar22 = _ZN3std6thread18JoinInner_LT_T_GT_4join17h1fb8cb450c6f38f4E(&local_478);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17hff140e509eb2d807E(auVar22._0_8_,auVar22._8_8_);
      puVar8[0xc] = local_518;
      puVar8[0xd] = uStack_514;
      puVar8[0xe] = uStack_510;
      puVar8[0xf] = uStack_50c;
      puVar8[8] = local_528;
      puVar8[9] = uStack_524;
      puVar8[10] = (undefined4)uStack_520;
      puVar8[0xb] = uStack_520._4_4_;
      puVar8[4] = local_538;
      puVar8[5] = uStack_534;
      puVar8[6] = uStack_530;
      puVar8[7] = uStack_52c;
      *puVar8 = local_548;
      puVar8[1] = uStack_544;
      puVar8[2] = uStack_540;
      puVar8[3] = uStack_53c;
      _ZN4core3ptr121drop_in_place_LT_alloc__sync__Arc_LT_std__sync__poison__mutex__Mutex_LT_firecracker__metrics__PeriodicMetrics_GT__GT__GT_17hf44de49e7d991a0dE
                (&local_550);
      _ZN4core3ptr169drop_in_place_LT_event_manager__manager__EventManager_LT_alloc__sync__Arc_LT_std__sync__poison__mutex__Mutex_LT_dyn_u20_event_manager__MutEventSubscriber_GT__GT__GT__GT_17ha231e7ff64aebfc9E
                (&local_250);
      _ZN4core3ptr58drop_in_place_LT_vmm_sys_util__linux__eventfd__EventFd_GT_17hcfdb36d35d96e7e1E
                (local_5a4);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h1fc4ff93f60e3e29E(*puVar9,puVar9[1]);
    }
    return;
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_004bf5f0)
            (&DAT_00138855,0x26,&PTR_DAT_004a3c30);
LAB_00258c38:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}