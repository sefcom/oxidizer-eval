void _ZN11firecracker10api_server7request8snapshot20parse_patch_vm_state17h4cab339f38e4489fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char local_d0;
  char local_cf;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  local_b0 = 0;
  local_c0 = param_2;
  local_b8 = param_3;
  _ZN10serde_json2de10from_trait17h5ce376caa8af718dE(&local_d0,&local_c0);
  if (local_d0 == '\x01') {
    *(undefined *)(param_1 + 1) = 4;
    param_1[2] = local_c8;
    *param_1 = 1;
    return;
  }
  if (local_cf == '\x01') {
    local_c0 = 0x18;
  }
  else {
    local_c0 = 0x15;
  }
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (param_1 + 1,&local_c0);
  *param_1 = 0;
  return;
}