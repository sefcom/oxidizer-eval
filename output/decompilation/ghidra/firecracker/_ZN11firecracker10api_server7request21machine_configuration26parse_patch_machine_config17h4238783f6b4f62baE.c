void _ZN11firecracker10api_server7request21machine_configuration26parse_patch_machine_config17h4238783f6b4f62baE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long local_128;
  undefined8 local_120;
  ulong local_118;
  long local_110;
  undefined8 local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  ulong local_c0;
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x40,1);
  local_c8 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  _ZN10serde_json2de10from_trait17h3b7a981a74be18a2E(&local_128,&local_d8);
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17hcab8396f4b809ef4E(&local_110,&local_128);
  if (local_110 == 2) {
    *(undefined *)(param_1 + 1) = 4;
    param_1[2] = local_108;
    *param_1 = 1;
  }
  else {
    local_128 = local_110;
    local_120 = local_108;
    local_118 = local_100;
    cVar1 = (*(code *)
              PTR__ZN3vmm10vmm_config14machine_config19MachineConfigUpdate8is_empty17h8838f3038c18e226E_004bfbb0
            )(&local_128);
    if (cVar1 == '\0') {
      if ((local_100 & 0xff0000000000) == 0x60000000000) {
        local_d0 = local_110;
        local_c8 = local_108;
        local_c0 = local_100;
        local_d8 = 0x23;
        _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                  (&local_f8,&local_d8);
      }
      else {
        (*(code *)
          PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
        )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x350,1);
        local_d0 = local_110;
        local_c8 = local_108;
        local_c0 = local_100;
        local_d8 = 0x23;
        _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                  (&local_f8,&local_d8);
        _ZN11firecracker10api_server14parsed_request11ParsingInfo26append_deprecation_message17h908cdac1c9c60287E
                  (&local_f8,&DAT_001381a3,0x38);
      }
      param_1[3] = local_e8;
      param_1[4] = uStack_e0;
      param_1[1] = local_f8;
      param_1[2] = uStack_f0;
      *param_1 = 0;
    }
    else {
      _ZN11firecracker10api_server14parsed_request15method_to_error17h4698b3af70462059E(param_1,2);
    }
  }
  return;
}