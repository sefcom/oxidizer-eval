void _ZN11firecracker10api_server7request7actions17parse_put_actions17h91344de731f8059aE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char local_f8;
  char local_f7;
  undefined8 local_f0;
  undefined local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  
  uVar1 = 1;
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x100,1);
  local_c8 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  _ZN10serde_json2de10from_trait17had644ab27425a8a8E(local_e8,&local_d8);
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17hdacb15b2469aec72E(&local_f8,local_e8);
  if (local_f8 == '\x01') {
    *(undefined *)(param_1 + 1) = 4;
    param_1[2] = local_f0;
  }
  else {
    if (local_f7 == '\0') {
      local_d8 = 0x10;
    }
    else if (local_f7 == '\x01') {
      local_d8 = 0x1d;
    }
    else {
      local_d8 = 0x1e;
    }
    _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
              (param_1 + 1,&local_d8);
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}