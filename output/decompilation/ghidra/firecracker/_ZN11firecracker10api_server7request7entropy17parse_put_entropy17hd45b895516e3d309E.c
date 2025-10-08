void _ZN11firecracker10api_server7request7entropy17parse_put_entropy17hd45b895516e3d309E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  local_b0 = 0;
  local_c0 = param_2;
  local_b8 = param_3;
  _ZN10serde_json2de10from_trait17h24d1608271596f73E(&local_100,&local_c0);
  if (local_100 == 4) {
    *(undefined *)(param_1 + 1) = 4;
    param_1[2] = local_f8;
    *param_1 = 1;
    return;
  }
  local_88 = local_d0;
  uStack_84 = uStack_cc;
  uStack_80 = uStack_c8;
  uStack_7c = uStack_c4;
  local_98 = local_e0;
  uStack_94 = uStack_dc;
  uStack_90 = uStack_d8;
  uStack_8c = uStack_d4;
  local_a8 = local_f0;
  uStack_a4 = uStack_ec;
  uStack_a0 = uStack_e8;
  uStack_9c = uStack_e4;
  local_b8 = local_100;
  local_b0 = local_f8;
  local_c0 = 0x1c;
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (param_1 + 1,&local_c0);
  *param_1 = 0;
  return;
}