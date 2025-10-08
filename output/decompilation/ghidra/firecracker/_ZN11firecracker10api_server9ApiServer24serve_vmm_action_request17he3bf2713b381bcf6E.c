void _ZN11firecracker10api_server9ApiServer24serve_vmm_action_request17he3bf2713b381bcf6E
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *unaff_RBP;
  undefined *puVar4;
  undefined8 local_2f0;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined **local_2c8;
  code *local_2c0;
  undefined8 *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined **local_280;
  undefined8 local_278;
  undefined8 **local_270;
  undefined8 local_268;
  undefined8 local_260;
  int local_250 [136];
  
  puVar4 = (undefined *)0x0;
  bVar1 = false;
  switch(*param_3) {
  case 8:
    unaff_RBP = &DAT_001384f7;
    puVar4 = PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x368;
    if (*(char *)(param_3 + 7) != '\0') {
      unaff_RBP = &DAT_0013850b;
      puVar4 = PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x360;
    }
    local_2f0 = 0x14;
    break;
  default:
    goto switchD_002577f0_caseD_9;
  case 0x13:
    puVar4 = PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x370;
    unaff_RBP = &DAT_0013851f;
    local_2f0 = 0xd;
    break;
  case 0x15:
    puVar4 = PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x378;
    unaff_RBP = &DAT_00131520;
    local_2f0 = 8;
    break;
  case 0x18:
    puVar4 = PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x380;
    unaff_RBP = &DAT_0013852c;
    local_2f0 = 9;
  }
  bVar1 = true;
switchD_002577f0_caseD_9:
  uVar2 = _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17hfbae5736fa7e8662E(*param_2,param_2[1]);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h85382038b70c5bc2E(uVar2);
  uVar2 = (*(code *)PTR__ZN12vmm_sys_util5linux7eventfd7EventFd5write17hbb112918028d4a8aE_004bfc00)
                    (param_2 + 4,1);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h020c26ce3b222952E(uVar2);
  uVar2 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h505375acffeb89e1E(param_2[2],param_2[3]);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hd7747398b8981285E(uVar2);
  (*(code *)PTR_memcpy_004bf3b8)(local_250,uVar2,0x220);
  (*(code *)PTR__RNvCsgYTF1aGAkck_7___rustc14___rust_dealloc_004bf380)(uVar2,0x220,8);
  _ZN11firecracker10api_server14parsed_request13ParsedRequest19convert_to_response17hfe7d289cbaee243dE
            (param_1,local_250);
  if ((bVar1) && (local_250[0] != 0xd)) {
    local_2d0 = local_2f0;
    local_2d8 = unaff_RBP;
    local_2e0 = (*(code *)
                  PTR__ZN3vmm6logger31update_metric_with_elapsed_time17hefebe9558bc973b1E_004bfc08)
                          (puVar4,param_4);
    uVar3 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    if (2 < uVar3) {
      local_2c8 = &local_2d8;
      local_2c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
      local_2b8 = &local_2e0;
      local_2b0 = 
      PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_004bf968
      ;
      local_280 = &PTR_DAT_004a39f8;
      local_278 = 3;
      local_260 = 0;
      local_270 = &local_2c8;
      local_268 = 2;
      local_288 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                            (&PTR_DAT_004a3a70);
      local_2a8 = &DAT_001384cc;
      local_2a0 = 0x17;
      local_298 = &DAT_001384cc;
      local_290 = 0x17;
      _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_280,3,&local_2a8);
    }
  }
  _ZN4core3ptr113drop_in_place_LT_core__result__Result_LT_vmm__rpc_interface__VmmData_C_vmm__rpc_interface__VmmActionError_GT__GT_17hdc8697fd5f73e90dE
            (local_250);
  return;
}