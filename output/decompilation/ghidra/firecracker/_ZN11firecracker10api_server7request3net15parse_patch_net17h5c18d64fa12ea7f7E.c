void _ZN11firecracker10api_server7request3net15parse_patch_net17h5c18d64fa12ea7f7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined *puVar2;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined local_240 [16];
  undefined local_230 [8];
  undefined8 uStack_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined uStack_214;
  undefined uStack_213;
  undefined2 uStack_212;
  undefined4 uStack_210;
  undefined2 uStack_20c;
  undefined2 uStack_20a;
  undefined6 uStack_208;
  undefined2 uStack_202;
  undefined6 uStack_200;
  undefined2 uStack_1fa;
  undefined8 local_1f8;
  undefined *local_160;
  code *local_158;
  undefined *local_150;
  code *local_148;
  undefined *local_c8;
  undefined8 local_c0;
  undefined local_b8 [120];
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x20;
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(puVar2,1);
  if (param_4 == 0) {
    (*(code *)
      PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
    )(puVar2,1);
    *(undefined *)(param_1 + 1) = 0;
  }
  else {
    _ZN11firecracker10api_server14parsed_request10checked_id17hc78530a21c875bb9E
              (&local_218,param_4,param_5);
    if ((char)local_218 == '\x05') {
      local_248 = 0;
      local_258 = param_2;
      local_250 = param_3;
      _ZN10serde_json2de10from_trait17h486efc37a7061ee8E(&local_218,&local_258);
      _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17h52ffa4223c546021E(&local_160,&local_218);
      if (local_160 != (undefined *)0x4) {
        (*(code *)PTR_memcpy_004bf3b8)(local_b8,&local_150,0x88);
        local_c8 = local_160;
        local_c0 = local_158;
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                          (CONCAT26(uStack_20a,CONCAT24(uStack_20c,uStack_210)),
                           CONCAT26(uStack_202,uStack_208),local_40,local_38);
        if (cVar1 != '\0') {
          (*(code *)PTR_memcpy_004bf3b8)(&uStack_210,&local_c8,0x98);
          local_218 = 0x22;
          uStack_214 = 0;
          uStack_213 = 0;
          uStack_212 = 0;
          _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                    (param_1 + 1,&local_218);
          *param_1 = 0;
          return;
        }
        (*(code *)
          PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
        )(puVar2,1);
        local_258 = local_40;
        local_250 = local_38;
        local_160 = local_240;
        local_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
        local_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
        local_218 = 0x4a3870;
        uStack_214 = 0;
        uStack_213 = 0;
        uStack_212 = 0;
        uStack_210 = 3;
        uStack_20c = 0;
        uStack_20a = 0;
        local_1f8 = 0;
        uStack_208 = SUB86(&local_160,0);
        uStack_202 = (undefined2)((ulong)&local_160 >> 0x30);
        uStack_200 = 2;
        uStack_1fa = 0;
        local_150 = (undefined *)&local_258;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE
                  (local_230,0,extraout_RDX,&local_218);
        uStack_212 = local_230._0_2_;
        uStack_210 = local_230._2_4_;
        uStack_20c = local_230._6_2_;
        uStack_20a = (undefined2)uStack_228;
        uStack_208 = (undefined6)((ulong)uStack_228 >> 0x10);
        uStack_202 = (undefined2)local_220;
        uStack_200 = (undefined6)((ulong)local_220 >> 0x10);
        *(undefined2 *)(param_1 + 1) = 0x301;
        *(undefined4 *)((long)param_1 + 10) = local_218;
        *(uint *)((long)param_1 + 0xe) = CONCAT22(uStack_212,CONCAT11(uStack_213,uStack_214));
        *(undefined4 *)((long)param_1 + 0x12) = uStack_210;
        *(uint *)((long)param_1 + 0x16) = CONCAT22(uStack_20a,uStack_20c);
        param_1[3] = uStack_228;
        param_1[4] = local_220;
        *param_1 = 1;
        _ZN4core3ptr71drop_in_place_LT_vmm__vmm_config__net__NetworkInterfaceUpdateConfig_GT_17h20791c9dbec41ac5E
                  (&local_c8);
        return;
      }
      *(undefined *)(param_1 + 1) = 4;
      param_1[2] = local_158;
    }
    else {
      *(uint *)((long)param_1 + 0xc) = CONCAT22(uStack_212,CONCAT11(uStack_213,uStack_214));
      *(uint *)((long)param_1 + 9) = CONCAT13(uStack_214,local_218._1_3_);
      *(char *)(param_1 + 1) = (char)local_218;
      param_1[2] = CONCAT26(uStack_20a,CONCAT24(uStack_20c,uStack_210));
      param_1[3] = CONCAT26(uStack_202,uStack_208);
      param_1[4] = CONCAT26(uStack_1fa,uStack_200);
    }
  }
  *param_1 = 1;
  return;
}