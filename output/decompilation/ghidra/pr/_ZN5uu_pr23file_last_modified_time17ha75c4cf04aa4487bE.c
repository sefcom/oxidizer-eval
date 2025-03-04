void _ZN5uu_pr23file_last_modified_time17ha75c4cf04aa4487bE(undefined8 param_1)

{
  undefined8 local_d0;
  undefined8 local_c8;
  int local_b8 [2];
  undefined8 local_b0;
  
  _ZN3std2fs8metadata17hd60c15ad96e2cad2E(local_b8);
  if (local_b8[0] == 2) {
    local_c8 = local_b0;
    local_d0 = 0x8000000000000000;
  }
  else {
    _ZN5uu_pr23file_last_modified_time28__u7b__u7b_closure_u7d__u7d_17h9ec467e0ee2775afE
              (&local_d0,local_b8);
  }
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h0934fd5d80f5f406E(param_1,&local_d0);
  return;
}