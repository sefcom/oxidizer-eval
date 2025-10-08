undefined8 * _ZN20fuel_core_e2e_client15load_config_env17h0d99df9a2f88ebc8E(undefined8 *param_1)

{
  undefined local_e8 [24];
  undefined8 local_d0;
  undefined local_c8 [184];
  
  _ZN3std3env6var_os17hc513b27399651064E(local_e8,"FUEL_CORE_E2E_CONFIG",0x14);
  _ZN20fuel_core_e2e_client15load_config_env28__u7b__u7b_closure_u7d__u7d_17h7f85144bbe78e3abE
            (&local_d0,local_e8);
  (*(code *)PTR_memcpy_012b6040)(param_1 + 1,local_c8,0xb8);
  *param_1 = local_d0;
  return param_1;
}