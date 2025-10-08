void _ZN11firecracker10api_server7request3net13parse_put_net17h49efa1f8059fae0eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined local_280 [16];
  undefined local_270 [8];
  undefined8 uStack_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined uStack_254;
  undefined uStack_253;
  undefined2 uStack_252;
  undefined4 uStack_250;
  undefined2 uStack_24c;
  undefined2 uStack_24a;
  undefined6 uStack_248;
  undefined2 uStack_242;
  undefined6 uStack_240;
  undefined2 uStack_23a;
  undefined8 local_238;
  undefined *local_1a0;
  code *local_198;
  undefined *local_190;
  code *local_188;
  undefined *local_e8;
  undefined8 local_e0;
  undefined local_d8 [120];
  undefined8 local_60;
  undefined8 local_58;
  
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x1e0,1);
  if (param_4 == 0) {
    (*(code *)
      PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
    )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x1f0,1);
    *(undefined *)(param_1 + 1) = 0;
  }
  else {
    _ZN11firecracker10api_server14parsed_request10checked_id17hc78530a21c875bb9E
              (&local_258,param_4,param_5);
    if ((char)local_258 == '\x05') {
      local_288 = 0;
      local_298 = param_2;
      local_290 = param_3;
      _ZN10serde_json2de10from_trait17h5d0ec113c53acd70E(&local_258,&local_298);
      _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17h182637a9118db19fE(&local_1a0,&local_258);
      if (local_1a0 != (undefined *)0x4) {
        (*(code *)PTR_memcpy_004bf3b8)(local_d8,&local_190,0xa8);
        local_e8 = local_1a0;
        local_e0 = local_198;
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                          (CONCAT26(uStack_24a,CONCAT24(uStack_24c,uStack_250)),
                           CONCAT26(uStack_242,uStack_248),local_60,local_58);
        if (cVar1 != '\0') {
          _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                    (param_1 + 1,&local_e8);
          *param_1 = 0;
          return;
        }
        (*(code *)
          PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
        )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x1f0,1);
        local_298 = local_60;
        local_290 = local_58;
        local_1a0 = local_280;
        local_198 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
        local_188 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
        local_258 = 0x4a3870;
        uStack_254 = 0;
        uStack_253 = 0;
        uStack_252 = 0;
        uStack_250 = 3;
        uStack_24c = 0;
        uStack_24a = 0;
        local_238 = 0;
        uStack_248 = SUB86(&local_1a0,0);
        uStack_242 = (undefined2)((ulong)&local_1a0 >> 0x30);
        uStack_240 = 2;
        uStack_23a = 0;
        local_190 = (undefined *)&local_298;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE
                  (local_270,0,extraout_RDX,&local_258);
        uStack_252 = local_270._0_2_;
        uStack_250 = local_270._2_4_;
        uStack_24c = local_270._6_2_;
        uStack_24a = (undefined2)uStack_268;
        uStack_248 = (undefined6)((ulong)uStack_268 >> 0x10);
        uStack_242 = (undefined2)local_260;
        uStack_240 = (undefined6)((ulong)local_260 >> 0x10);
        *(undefined2 *)(param_1 + 1) = 0x301;
        *(undefined4 *)((long)param_1 + 10) = local_258;
        *(uint *)((long)param_1 + 0xe) = CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254));
        *(undefined4 *)((long)param_1 + 0x12) = uStack_250;
        *(uint *)((long)param_1 + 0x16) = CONCAT22(uStack_24a,uStack_24c);
        param_1[3] = uStack_268;
        param_1[4] = local_260;
        *param_1 = 1;
        _ZN4core3ptr65drop_in_place_LT_vmm__vmm_config__net__NetworkInterfaceConfig_GT_17he5a65d49aff1c8d9E
                  (&local_e8);
        return;
      }
      *(undefined *)(param_1 + 1) = 4;
      param_1[2] = local_198;
    }
    else {
      *(uint *)((long)param_1 + 0xc) = CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254));
      *(uint *)((long)param_1 + 9) = CONCAT13(uStack_254,local_258._1_3_);
      *(char *)(param_1 + 1) = (char)local_258;
      param_1[2] = CONCAT26(uStack_24a,CONCAT24(uStack_24c,uStack_250));
      param_1[3] = CONCAT26(uStack_242,uStack_248);
      param_1[4] = CONCAT26(uStack_23a,uStack_240);
    }
  }
  *param_1 = 1;
  return;
}