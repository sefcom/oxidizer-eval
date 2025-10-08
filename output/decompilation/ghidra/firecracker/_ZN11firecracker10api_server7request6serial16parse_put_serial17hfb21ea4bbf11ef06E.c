void _ZN11firecracker10api_server7request6serial16parse_put_serial17hfb21ea4bbf11ef06E
               (ulong *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  long local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined local_38 [24];
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x240,1);
  local_e0 = 0;
  local_f0 = param_2;
  local_e8 = param_3;
  _ZN10serde_json2de10from_trait17h7c0901b67b7a0e76E(local_38,&local_f0);
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17hcddf4eeebb18306fE(&local_f0,local_38);
  local_d8 = local_e0;
  local_e0 = local_e8;
  bVar1 = local_f0 != -0x7fffffffffffffff;
  if (bVar1) {
    local_e8 = local_f0;
    local_f0 = 7;
    _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
              (param_1 + 1,&local_f0);
  }
  else {
    *(undefined *)(param_1 + 1) = 4;
    param_1[2] = local_e8;
  }
  *param_1 = (ulong)!bVar1;
  return;
}