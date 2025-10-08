void _ZN11firecracker10api_server7request4mmds14parse_put_mmds17hb67f8353b350b258E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined8 extraout_RDX;
  long local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  long *local_118;
  code *local_110;
  undefined local_f8 [8];
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined6 local_e0;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  undefined uStack_d4;
  undefined uStack_d3;
  undefined2 uStack_d2;
  undefined6 uStack_d0;
  undefined2 uStack_ca;
  undefined4 local_c8;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined8 uStack_c0;
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x200,1);
  if (param_4 == 0) {
    local_120 = 0;
    local_130 = param_2;
    local_128 = param_3;
    _ZN10serde_json2de10from_trait17h19ed231b4994ff1fE(&local_118,&local_130);
    _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17h368cdc317ff58cacE(&local_150,&local_118);
    if ((char)local_150 == '\x06') {
      *(undefined *)(param_1 + 1) = 4;
      param_1[2] = local_148;
      *param_1 = 1;
    }
    else {
      uStack_d3 = (undefined)((ulong)local_150 >> 0x28);
      uStack_d2 = (undefined2)((ulong)local_150 >> 0x30);
      uStack_d4 = (undefined)((ulong)local_150 >> 0x20);
      local_c8 = local_140;
      uStack_c4 = (undefined2)uStack_13c;
      uStack_c2 = (undefined2)((uint)uStack_13c >> 0x10);
      uStack_d8 = (undefined4)local_150;
      uStack_d0 = (undefined6)local_148;
      uStack_ca = (undefined2)((ulong)local_148 >> 0x30);
      local_e0 = 0x16;
      uStack_da = 0;
      _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                (param_1 + 1,&local_e0);
      *param_1 = 0;
    }
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                      (param_4,param_5,&DAT_00137f0d,6);
    if (cVar1 != '\0') {
      _ZN11firecracker10api_server7request4mmds21parse_put_mmds_config17he5403443915ac8b8E
                (param_1,param_2,param_3);
      return;
    }
    local_150 = param_4;
    local_148 = param_5;
    (*(code *)
      PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
    )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x210,1);
    local_118 = &local_150;
    local_110 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
    local_e0 = 0x4a3850;
    uStack_da = 0;
    uStack_d8 = 2;
    uStack_d4 = 0;
    uStack_d3 = 0;
    uStack_d2 = 0;
    uStack_c0 = 0;
    uStack_d0 = SUB86(&local_118,0);
    uStack_ca = (undefined2)((ulong)&local_118 >> 0x30);
    local_c8 = 1;
    uStack_c4 = 0;
    uStack_c2 = 0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE
              (local_f8,0,extraout_RDX,&local_e0);
    uStack_da = local_f8._0_2_;
    uStack_d2 = (undefined2)uStack_f0;
    *(undefined2 *)(param_1 + 1) = 0x301;
    *(ulong *)((long)param_1 + 10) = CONCAT26(uStack_da,local_e0);
    *(ulong *)((long)param_1 + 0x12) = CONCAT26(uStack_d2,local_f8._2_6_);
    param_1[3] = uStack_f0;
    param_1[4] = local_e8;
    *param_1 = 1;
  }
  return;
}