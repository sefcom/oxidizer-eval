void _ZN11firecracker10api_server7request21machine_configuration24parse_put_machine_config17h9236ca85aee91b6fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  
  uVar1 = 1;
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x180,1);
  local_1b8 = 0;
  local_1c8 = param_2;
  local_1c0 = param_3;
  _ZN10serde_json2de10from_trait17hc5d4db7384273cd9E(&local_e0,&local_1c8);
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17h98ff51c38463ee7bE(&local_138,&local_e0);
  if (local_138 == -0x7ffffffffffffffe) {
    *(undefined *)(param_1 + 1) = 4;
    param_1[2] = local_130;
  }
  else {
    local_140 = local_e8;
    local_150 = local_f8;
    uStack_14c = uStack_f4;
    uStack_148 = uStack_f0;
    uStack_144 = uStack_ec;
    local_160 = local_108;
    uStack_15c = uStack_104;
    uStack_158 = uStack_100;
    uStack_154 = uStack_fc;
    local_170 = local_118;
    uStack_16c = uStack_114;
    uStack_168 = uStack_110;
    uStack_164 = uStack_10c;
    local_180 = local_128;
    uStack_17c = uStack_124;
    uStack_178 = uStack_120;
    uStack_174 = uStack_11c;
    local_190 = local_138;
    local_188 = local_130;
    if (local_138 == -0x7fffffffffffffff) {
      (*(code *)
        PTR__ZN146__LT_vmm__vmm_config__machine_config__MachineConfigUpdate_u20_as_u20_core__convert__From_LT_vmm__vmm_config__machine_config__MachineConfig_GT__GT_4from17h261e0ec09c629068E_004bfba8
      )(&local_1e0,&local_190);
      local_c8 = local_1d0;
      local_d8 = local_1e0;
      uStack_d4 = uStack_1dc;
      uStack_d0 = uStack_1d8;
      uStack_cc = uStack_1d4;
      local_e0 = 0x23;
      _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                (&local_1b0,&local_e0);
    }
    else {
      (*(code *)
        PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
      )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x350,1);
      (*(code *)
        PTR__ZN146__LT_vmm__vmm_config__machine_config__MachineConfigUpdate_u20_as_u20_core__convert__From_LT_vmm__vmm_config__machine_config__MachineConfig_GT__GT_4from17h261e0ec09c629068E_004bfba8
      )(&local_1e0,&local_190);
      local_c8 = local_1d0;
      local_d8 = local_1e0;
      uStack_d4 = uStack_1dc;
      uStack_d0 = uStack_1d8;
      uStack_cc = uStack_1d4;
      local_e0 = 0x23;
      _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                (&local_1b0,&local_e0);
      _ZN11firecracker10api_server14parsed_request11ParsingInfo26append_deprecation_message17h908cdac1c9c60287E
                (&local_1b0,&DAT_0013816d,0x36);
    }
    param_1[3] = local_1a0;
    param_1[4] = uStack_198;
    param_1[1] = local_1b0;
    param_1[2] = uStack_1a8;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}