void _ZN5uu_pr23file_last_modified_time17hae8021e2b64db77dE(undefined8 param_1)

{
  undefined8 local_d0;
  undefined8 local_c8;
  int local_b8 [2];
  undefined8 local_b0;
  
  _ZN3std2fs8metadata17h17f73c8d2a6d1ec6E(local_b8);
  if (local_b8[0] == 2) {
    local_c8 = local_b0;
    local_d0 = 0x8000000000000000;
  }
  else {
    _ZN5uu_pr23file_last_modified_time28__u7b__u7b_closure_u7d__u7d_17h39d1768db5370a89E
              (&local_d0,local_b8);
  }
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17hf6638d2eb1437ac8E(param_1,&local_d0);
  return;
}