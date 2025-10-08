void _ZN11firecracker10api_server7request7metrics17parse_put_metrics17hed68f0721ebe832aE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined local_38 [24];
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x1c0,1);
  local_e0 = 0;
  local_f0 = param_2;
  local_e8 = param_3;
  _ZN10serde_json2de10from_trait17ha47c724f57520e5fE(local_38,&local_f0);
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17h6c230df47e81c380E(&local_108,local_38);
  local_e8 = local_108;
  local_e0 = local_100;
  local_d8 = local_f8;
  local_f0 = 6;
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (param_1 + 1,&local_f0);
  *param_1 = 0;
  return;
}