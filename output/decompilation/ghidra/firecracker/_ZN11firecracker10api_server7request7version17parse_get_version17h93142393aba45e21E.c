void _ZN11firecracker10api_server7request7version17parse_get_version17h93142393aba45e21E
               (undefined8 *param_1)

{
  undefined8 local_c0 [23];
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0xb0,1);
  local_c0[0] = 0xf;
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (param_1 + 1,local_c0);
  *param_1 = 0;
  return;
}