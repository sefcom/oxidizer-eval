void _ZN11firecracker10api_server7request4mmds21parse_put_mmds_config17he5403443915ac8b8E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  byte local_110;
  undefined4 uStack_10f;
  undefined4 uStack_10b;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  byte local_b0;
  undefined4 uStack_af;
  undefined3 uStack_ab;
  undefined uStack_a8;
  
  local_f8 = 0;
  uVar1 = uStack_10b;
  local_108 = param_2;
  local_100 = param_3;
  _ZN10serde_json2de10from_trait17had22b5db4459960bE
            (&local_d0,(undefined8 *)((long)register0x00000020 + -0x108));
  uVar1 = uStack_10b;
  _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17h84a551e65a9c49c2E(&local_128,&local_d0);
  uStack_10b = uVar1;
  uVar1 = uStack_10b;
  uStack_ab = (undefined3)uVar1;
  uStack_af = uStack_10f;
  local_c8 = local_128;
  local_c0 = local_120;
  local_b8 = local_118;
  local_b0 = local_110;
  local_d0 = 0x1a;
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (&local_f0,&local_d0);
  if ((local_110 & 1) == 0) {
    (*(code *)
      PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
    )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x350,1);
    _ZN11firecracker10api_server14parsed_request11ParsingInfo26append_deprecation_message17h908cdac1c9c60287E
              (&local_f0,&DAT_001381db,0x33);
  }
  param_1[3] = local_e0;
  param_1[4] = uStack_d8;
  param_1[1] = local_f0;
  param_1[2] = uStack_e8;
  *param_1 = 0;
  return;
}