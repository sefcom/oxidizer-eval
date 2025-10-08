void _ZN11firecracker10api_server7request7balloon17parse_get_balloon17h315ff462125738c8E
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 extraout_RDX;
  long local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  code *local_e0;
  undefined local_d8 [8];
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined6 local_c0;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined6 local_a8;
  undefined2 uStack_a2;
  undefined8 local_a0;
  
  if (param_2 == 0) {
    local_c0 = 9;
    uStack_ba = 0;
    _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
              (param_1 + 1,&local_c0);
    *param_1 = 0;
    return;
  }
  local_f8 = param_2;
  local_f0 = param_3;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                    (param_2,param_3,&DAT_001380e8,10);
  if (cVar1 != '\0') {
    local_c0 = 10;
    uStack_ba = 0;
    _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
              (param_1 + 1,&local_c0);
    *param_1 = 0;
    return;
  }
  local_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
  local_c0 = 0x4a3810;
  uStack_ba = 0;
  uStack_b8 = 2;
  uStack_b2 = 0;
  local_a0 = 0;
  uStack_b0 = SUB86(&local_e8,0);
  uStack_aa = (undefined2)((ulong)&local_e8 >> 0x30);
  local_a8 = 1;
  uStack_a2 = 0;
  local_e8 = (undefined *)&local_f8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE
            (local_d8,0,extraout_RDX,&local_c0);
  uStack_ba = local_d8._0_2_;
  uStack_b8 = local_d8._2_6_;
  uStack_b2 = (undefined2)uStack_d0;
  *(undefined2 *)(param_1 + 1) = 0x301;
  *(ulong *)((long)param_1 + 10) = CONCAT26(uStack_ba,local_c0);
  *(ulong *)((long)param_1 + 0x12) = CONCAT26(uStack_b2,uStack_b8);
  param_1[3] = uStack_d0;
  param_1[4] = local_c8;
  *param_1 = 1;
  return;
}