void _ZN11firecracker10api_server7request7balloon17parse_put_balloon17hc4435c6d24474795E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_d0 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  local_b0 = 0;
  local_c0 = param_2;
  local_b8 = param_3;
  _ZN10serde_json2de10from_trait17hb5bf098593333c85E(local_d0,&local_c0);
  if (local_d0[0] == 1) {
    *(undefined *)(param_1 + 1) = 4;
    param_1[2] = CONCAT44(uStack_c4,local_c8);
    *param_1 = 1;
    return;
  }
  local_c0 = 0x19;
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (param_1 + 1,&local_c0);
  *param_1 = 0;
  return;
}