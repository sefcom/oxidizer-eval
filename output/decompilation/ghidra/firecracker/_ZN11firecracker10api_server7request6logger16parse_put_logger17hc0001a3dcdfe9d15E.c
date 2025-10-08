void _ZN11firecracker10api_server7request6logger16parse_put_logger17hc0001a3dcdfe9d15E
               (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_148;
  ulong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  ulong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined local_58 [56];
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x160,1);
  local_100 = 0;
  local_110 = param_2;
  local_108 = param_3;
  _ZN10serde_json2de10from_trait17h63f5323c501f3365E(local_58,&local_110);
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17h6f9f62146816f583E(&local_148,local_58);
  if (local_148 != -0x7fffffffffffffff) {
    local_d8 = local_118;
    local_e8 = local_128;
    uStack_e4 = uStack_124;
    uStack_e0 = uStack_120;
    uStack_dc = uStack_11c;
    local_f8 = local_138;
    uStack_f4 = uStack_134;
    uStack_f0 = uStack_130;
    uStack_ec = uStack_12c;
    local_108 = local_148;
    local_100 = local_140;
    local_110 = 5;
    _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
              (param_1 + 1,&local_110);
  }
  else {
    *(undefined *)(param_1 + 1) = 4;
    param_1[2] = local_140;
  }
  *param_1 = (ulong)(local_148 == -0x7fffffffffffffff);
  return;
}