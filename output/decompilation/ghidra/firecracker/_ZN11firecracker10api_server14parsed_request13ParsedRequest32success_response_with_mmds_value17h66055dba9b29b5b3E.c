void _ZN11firecracker10api_server14parsed_request13ParsedRequest32success_response_with_mmds_value17h66055dba9b29b5b3E
               (undefined8 param_1,char *param_2)

{
  ulong uVar1;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *local_c8;
  undefined local_b8 [24];
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
  if (2 < uVar1) {
    local_a0 = &PTR_DAT_004a3690;
    local_98 = 1;
    local_90 = 8;
    local_88 = 0;
    uStack_80 = 0;
    local_e0 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                         (&PTR_DAT_004a36d0);
    local_100 = &DAT_00137ee6;
    uStack_f8 = 0x27;
    local_f0 = &DAT_00137ee6;
    local_e8 = 0x27;
    _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_a0,3,&local_100);
  }
  (*(code *)PTR__ZN10micro_http8response8Response3new17h78e744fb9400e084E_004bfb88)(&local_a0,1,1);
  if (*param_2 == '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
              (local_b8,&DAT_00137f4e,2);
  }
  else {
    _ZN10serde_json3ser6to_vec17hc4f969a0cebbfddbE(&local_100,param_2);
    local_c8 = local_f0;
    local_d8 = (undefined4)local_100;
    uStack_d4 = local_100._4_4_;
    uStack_d0 = (undefined4)uStack_f8;
    uStack_cc = uStack_f8._4_4_;
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfeff9db6cbe68564E
              (local_b8,&local_d8,&PTR_DAT_004a36e8);
  }
  (*(code *)PTR__ZN10micro_http8response8Response8set_body17hb2a8ea3742c0d431E_004bfb90)
            (&local_a0,local_b8);
  (*(code *)PTR_memcpy_004bf3b8)(param_1,&local_a0,0x90);
  return;
}