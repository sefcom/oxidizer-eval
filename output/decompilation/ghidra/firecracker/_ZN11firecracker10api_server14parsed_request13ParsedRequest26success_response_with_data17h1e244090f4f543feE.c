void _ZN11firecracker10api_server14parsed_request13ParsedRequest26success_response_with_data17h1e244090f4f543feE
               (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined *local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
  if (2 < uVar1) {
    local_a8 = &PTR_DAT_004a3690;
    local_a0 = 1;
    local_98 = 8;
    local_90 = 0;
    uStack_88 = 0;
    local_d0 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                         (&PTR_DAT_004a36a0);
    local_f0 = &DAT_00137ee6;
    uStack_e8 = 0x27;
    local_e0 = &DAT_00137ee6;
    local_d8 = 0x27;
    _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_a8,3,&local_f0);
  }
  (*(code *)PTR__ZN10micro_http8response8Response3new17h78e744fb9400e084E_004bfb88)(&local_a8,1,1);
  _ZN10serde_json3ser6to_vec17hbcbadfe4102ecc44E(&local_f0,param_2);
  local_b8 = local_e0;
  local_c8 = (undefined4)local_f0;
  uStack_c4 = local_f0._4_4_;
  uStack_c0 = (undefined4)uStack_e8;
  uStack_bc = uStack_e8._4_4_;
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfeff9db6cbe68564E
            (&local_f0,&local_c8,&PTR_DAT_004a36b8);
  (*(code *)PTR__ZN10micro_http8response8Response8set_body17hb2a8ea3742c0d431E_004bfb90)
            (&local_a8,&local_f0);
  (*(code *)PTR_memcpy_004bf3b8)(param_1,&local_a8,0x90);
  return;
}