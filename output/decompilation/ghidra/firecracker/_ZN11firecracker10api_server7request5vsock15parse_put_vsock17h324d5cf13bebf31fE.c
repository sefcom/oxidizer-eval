undefined8
_ZN11firecracker10api_server7request5vsock15parse_put_vsock17h324d5cf13bebf31fE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x220,1);
  local_140 = 0;
  local_150 = param_2;
  local_148 = param_3;
  _ZN10serde_json2de10from_trait17hf2f010f459f337bdE(&local_e0,&local_150);
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17he91879e7163bf2eaE(&local_138,&local_e0);
  if (local_120 == -0x8000000000000000) {
    local_d8 = local_138;
    local_d0 = local_130;
    local_c8 = local_128;
    local_c0 = 0x8000000000000000;
    local_b8 = local_118;
    uStack_b4 = uStack_114;
    uStack_b0 = uStack_110;
    uStack_ac = uStack_10c;
    local_a8 = local_108;
    local_e0 = 0x1b;
    uVar1 = _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                      (&local_100,&local_e0);
  }
  else {
    (*(code *)
      PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
    )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x350,1);
    local_d8 = local_138;
    local_d0 = local_130;
    local_c8 = local_128;
    local_c0 = local_120;
    local_b8 = local_118;
    uStack_b4 = uStack_114;
    uStack_b0 = uStack_110;
    uStack_ac = uStack_10c;
    local_a8 = local_108;
    local_e0 = 0x1b;
    _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
              (&local_100,&local_e0);
    uVar1 = _ZN11firecracker10api_server14parsed_request11ParsingInfo26append_deprecation_message17h908cdac1c9c60287E
                      (&local_100,&DAT_00138360,0x29);
  }
  param_1[3] = local_f0;
  param_1[4] = uStack_e8;
  param_1[1] = local_100;
  param_1[2] = uStack_f8;
  *param_1 = 0;
  return uVar1;
}