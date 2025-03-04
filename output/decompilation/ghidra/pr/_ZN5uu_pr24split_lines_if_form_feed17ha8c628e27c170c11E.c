void _ZN5uu_pr24split_lines_if_form_feed17ha8c628e27c170c11E(undefined8 *param_1,long *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if (*param_2 == -0x8000000000000000) {
    _ZN5uu_pr24split_lines_if_form_feed28__u7b__u7b_closure_u7d__u7d_17h8a95074bb9280ff2E
              (param_1,param_2[1]);
    return;
  }
  local_28 = param_2[2];
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)((long)param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 1);
  uStack_2c = *(undefined4 *)((long)param_2 + 0xc);
  _ZN5uu_pr24split_lines_if_form_feed28__u7b__u7b_closure_u7d__u7d_17hfab3542512aec1ceE
            (&local_20,&local_38);
  *param_1 = local_20;
  param_1[1] = uStack_18;
  param_1[2] = local_10;
  return;
}