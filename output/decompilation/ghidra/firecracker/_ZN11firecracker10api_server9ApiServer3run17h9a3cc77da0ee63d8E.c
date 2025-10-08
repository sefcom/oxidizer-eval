void _ZN11firecracker10api_server9ApiServer3run17h9a3cc77da0ee63d8E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined local_318 [16];
  undefined ***local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  long local_2d8;
  undefined *local_2d0;
  undefined8 uStack_2c8;
  undefined ***local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined ***local_290;
  undefined *local_288;
  undefined8 **local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined **local_260;
  undefined8 local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined *local_230;
  undefined **local_228;
  undefined8 uStack_220;
  undefined8 **local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 local_1a0;
  undefined **local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined local_e8 [32];
  undefined local_c8 [144];
  undefined8 local_38;
  
  *(undefined8 *)(param_2 + 0x30) = param_6;
  local_298 = param_1;
  local_318 = (*(code *)PTR__ZN3vmm7seccomp12apply_filter17ha2d856b84fea1999E_004bfbb8)
                        (param_4,param_5);
  if ((local_318 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT__LP__RP__C_vmm__seccomp__InstallationError_GT__GT_17hbde140308c0d0ea8E
              (local_318);
    (*(code *)PTR__ZN10micro_http6server10HttpServer12start_server17h4580598236ea1b44E_004bfbc0)
              (&local_228,param_2);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h62ed977e5695b52cE
              (&local_228,&DAT_001384b4,0x18,&PTR_DAT_004a3938);
    uVar4 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (2 < uVar4) {
      local_228 = &PTR_DAT_004a38c0;
      uStack_220 = 1;
      local_218 = (undefined8 **)0x8;
      uStack_210 = 0;
      uStack_208 = 0;
      local_178 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                            (&PTR_DAT_004a3950);
      local_198 = (undefined **)&DAT_001384cc;
      uStack_190 = (undefined *)0x17;
      local_188 = &DAT_001384cc;
      uStack_180 = 0x17;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_228,3,&local_198);
    }
    (*(code *)
      PTR__ZN3vmm6logger7metrics19ProcessTimeReporter17report_start_time17h67a75e5214ba751bE_004bfbc8
    )(param_3);
    (*(code *)
      PTR__ZN3vmm6logger7metrics19ProcessTimeReporter21report_cpu_start_time17h02c3e3b6acb37425E_004bfbd0
    )(param_3);
    puVar3 = PTR__ZN5utils4time11get_time_us17h2f1504f27618db39E_004bfbd8;
    puVar2 = PTR_memcpy_004bf3b8;
    while( true ) {
      while( true ) {
        (*(code *)PTR__ZN10micro_http6server10HttpServer8requests17hcd083e7d6c4a011bE_004bfbe0)
                  (&local_198,param_2);
        if (local_198 != (undefined **)0x1c) break;
        local_f8 = uStack_180;
        local_108 = (undefined4)uStack_190;
        uStack_104 = uStack_190._4_4_;
        uStack_100 = (undefined4)local_188;
        uStack_fc = local_188._4_4_;
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hef2d34e09a2ad9a4E
                  (local_e8,&local_108);
        while( true ) {
          _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he7f624846651ab67E
                    (&local_198,local_e8);
          if (local_198 == (undefined **)0x8000000000000000) break;
          (*(code *)puVar2)(&local_228,&local_198,0x90);
          local_2d8 = (*(code *)puVar3)(0);
          _ZN11firecracker10api_server9ApiServer3run28__u7b__u7b_closure_u7d__u7d_17h53249ac859967a66E
                    (local_c8,local_298,&local_2d8,&local_228);
          local_38 = local_1a0;
          (*(code *)PTR__ZN10micro_http6server10HttpServer7respond17h25ab1045afddd46aE_004bfbe8)
                    (&local_2d0,param_2,local_c8);
          if ((int)local_2d0 == 0x1c) {
            _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT__LP__RP__C_micro_http__common__ServerError_GT__GT_17h31c816d2fd0d886eE
                      (&local_2d0);
          }
          else {
            local_2e8 = local_2a0;
            local_2f8 = local_2b0;
            uStack_2f0 = uStack_2a8;
            uStack_2ec = uStack_2a4;
            local_308 = local_2c0;
            uStack_300 = uStack_2b8;
            local_318._0_8_ = local_2d0;
            local_318._8_8_ = uStack_2c8;
            lVar5 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                              (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
            if (lVar5 != 0) {
              local_230 = 
              PTR__ZN70__LT_micro_http__common__ServerError_u20_as_u20_core__fmt__Display_GT_3fmt17h53961a708603c02bE_004bf710
              ;
              local_290 = (undefined ***)&PTR_DAT_004a38f0;
              local_288 = &DAT_00000001;
              local_270 = 0;
              local_280 = &local_238;
              local_278 = 1;
              local_238 = (undefined8 *)local_318;
              local_240 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                                    (&PTR_DAT_004a3968);
              local_260 = (undefined **)&DAT_001384cc;
              local_258 = 0x17;
              local_250 = &DAT_001384cc;
              local_248 = 0x17;
              _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_290,1,&local_260);
            }
            _ZN4core3ptr52drop_in_place_LT_micro_http__common__ServerError_GT_17hf4f515fdefad93c6E
                      (local_318);
          }
          lVar5 = (*(code *)puVar3)(0);
          local_260 = (undefined **)(lVar5 - local_2d8);
          uVar4 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                            (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
          if (3 < uVar4) {
            local_290 = &local_260;
            local_288 = 
            PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_004bf968
            ;
            local_318._0_8_ = &PTR_DAT_004a3900;
            local_318._8_8_ = 2;
            local_2f8 = 0;
            local_308 = (undefined ***)&local_290;
            uStack_300 = 1;
            local_2b0 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                                  (&PTR_DAT_004a3980);
            local_2d0 = &DAT_001384cc;
            uStack_2c8 = 0x17;
            local_2c0 = (undefined ***)&DAT_001384cc;
            uStack_2b8 = 0x17;
            _ZN3log13__private_api8log_impl17h05439a06b798919cE(local_318,4,&local_2d0);
          }
          _ZN4core3ptr54drop_in_place_LT_micro_http__server__ServerRequest_GT_17h6eb788a57063f063E
                    (&local_228);
        }
        _ZN4core3ptr93drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_micro_http__server__ServerRequest_GT__GT_17ha7593e3123a29b40E
                  (local_e8);
      }
      if ((int)local_198 == 0x1a) break;
      local_1f8 = local_168;
      uStack_208 = local_178;
      uStack_200 = uStack_170;
      uStack_1fc = uStack_16c;
      local_218 = (undefined8 **)local_188;
      uStack_210 = uStack_180;
      local_228 = local_198;
      uStack_220 = uStack_190;
      lVar5 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
      if (lVar5 != 0) {
        local_288 = 
        PTR__ZN70__LT_micro_http__common__ServerError_u20_as_u20_core__fmt__Display_GT_3fmt17h53961a708603c02bE_004bf710
        ;
        local_318._0_8_ = &PTR_DAT_004a38e0;
        local_318._8_8_ = 1;
        local_2f8 = 0;
        local_308 = (undefined ***)&local_290;
        uStack_300 = 1;
        local_290 = &local_228;
        local_2b0 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                              (&PTR_DAT_004a39b0);
        local_2d0 = &DAT_001384cc;
        uStack_2c8 = 0x17;
        local_2c0 = (undefined ***)&DAT_001384cc;
        uStack_2b8 = 0x17;
        _ZN3log13__private_api8log_impl17h05439a06b798919cE(local_318,1,&local_2d0);
      }
      _ZN4core3ptr52drop_in_place_LT_micro_http__common__ServerError_GT_17hf4f515fdefad93c6E
                (&local_228);
    }
    (*(code *)
      PTR__ZN10micro_http6server10HttpServer21flush_outgoing_writes17hde693812e0f6e5a4E_004bfbf0)
              (param_2);
    uVar4 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (3 < uVar4) {
      local_228 = &PTR_DAT_004a38d0;
      uStack_220 = 1;
      local_218 = (undefined8 **)0x8;
      uStack_210 = 0;
      uStack_208 = 0;
      local_2f8 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                            (&PTR_DAT_004a3998);
      local_318._0_8_ = &DAT_001384cc;
      local_318._8_8_ = 0x17;
      local_308 = (undefined ***)&DAT_001384cc;
      uStack_300 = 0x17;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_228,4,local_318);
    }
    _ZN4core3ptr52drop_in_place_LT_micro_http__common__ServerError_GT_17hf4f515fdefad93c6E
              (&local_198);
    _ZN4core3ptr51drop_in_place_LT_micro_http__server__HttpServer_GT_17hd1fab46234d2392fE(param_2);
    return;
  }
  local_198 = &local_2d0;
  uStack_190 = 
  PTR__ZN3vmm7seccomp1_80__LT_impl_u20_core__fmt__Display_u20_for_u20_vmm__seccomp__InstallationError_GT_3fmt17h18da116329c01967E_004bfbf8
  ;
  local_228 = &PTR_DAT_004a38b0;
  uStack_220 = 1;
  uStack_208 = 0;
  local_218 = &local_198;
  uStack_210 = 1;
  local_2d0 = local_318._8_8_;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_004bf4a0)
            (&local_228,&PTR_DAT_004a3920);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}