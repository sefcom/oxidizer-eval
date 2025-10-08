void _ZN11firecracker10api_server7request11boot_source21parse_put_boot_source17h1c01f309b4bae106E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x120,1);
  local_128 = 0;
  local_138 = param_2;
  local_130 = param_3;
  _ZN10serde_json2de10from_trait17h63c0f3896a991196E(&local_d8,&local_138);
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17h292c18eddc5e152aE(&local_120,&local_d8);
  local_90 = local_e0;
  local_a0 = local_f0;
  uStack_9c = uStack_ec;
  uStack_98 = uStack_e8;
  uStack_94 = uStack_e4;
  local_b0 = local_100;
  uStack_ac = uStack_fc;
  uStack_a8 = uStack_f8;
  uStack_a4 = uStack_f4;
  local_c0 = local_110;
  uStack_bc = uStack_10c;
  uStack_b8 = uStack_108;
  uStack_b4 = uStack_104;
  local_d0 = local_120;
  local_c8 = local_118;
  local_d8 = 4;
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (param_1 + 1,&local_d8);
  *param_1 = 0;
  return;
}