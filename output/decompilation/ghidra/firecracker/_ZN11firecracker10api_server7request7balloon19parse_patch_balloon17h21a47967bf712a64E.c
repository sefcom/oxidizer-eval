void _ZN11firecracker10api_server7request7balloon19parse_patch_balloon17h21a47967bf712a64E
               (undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5
               )

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  long *local_110;
  code *local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined6 local_d0;
  undefined2 uStack_ca;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  undefined6 local_b8;
  undefined2 uStack_b2;
  undefined8 local_b0;
  
  local_110 = param_2;
  local_108 = (code *)param_3;
  if (param_4 == 0) {
    local_100 = 0;
    _ZN10serde_json2de10from_trait17h888345223613cd04E(&local_120,&local_110);
    if (local_120 == 1) goto LAB_00254cc1;
    uStack_c8 = (undefined2)local_11c;
    uStack_c6 = (undefined2)((uint)local_11c >> 0x10);
    local_d0 = 0x1f;
  }
  else {
    local_f8 = param_4;
    local_f0 = param_5;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                      (param_4,param_5,&DAT_001380e8,10);
    if (cVar1 == '\0') {
      local_110 = &local_f8;
      local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1757f628e8f40b52E;
      local_d0 = 0x4a3830;
      uStack_ca = 0;
      uStack_c8 = 2;
      uStack_c6 = 0;
      uStack_c4 = 0;
      uStack_c2 = 0;
      local_b0 = 0;
      uStack_c0 = SUB86(&local_110,0);
      uStack_ba = (undefined2)((ulong)&local_110 >> 0x30);
      local_b8 = 1;
      uStack_b2 = 0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE
                (local_e8,0,extraout_RDX,&local_d0);
      uStack_ca = local_e8._0_2_;
      uStack_c2 = (undefined2)uStack_e0;
      *(undefined2 *)(param_1 + 1) = 0x301;
      *(ulong *)((long)param_1 + 10) = CONCAT26(uStack_ca,local_d0);
      *(ulong *)((long)param_1 + 0x12) = CONCAT26(uStack_c2,local_e8._2_6_);
      param_1[3] = uStack_e0;
      param_1[4] = local_d8;
      *param_1 = 1;
      return;
    }
    local_100 = 0;
    _ZN10serde_json2de10from_trait17h642a55a6eb6ae921E(&local_120,&local_110);
    if ((local_120 & 1) != 0) {
LAB_00254cc1:
      *(undefined *)(param_1 + 1) = 4;
      param_1[2] = local_118;
      *param_1 = 1;
      return;
    }
    uStack_c8 = local_120._2_2_;
    local_d0 = 0x20;
  }
  uStack_ca = 0;
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (param_1 + 1,&local_d0);
  *param_1 = 0;
  return;
}