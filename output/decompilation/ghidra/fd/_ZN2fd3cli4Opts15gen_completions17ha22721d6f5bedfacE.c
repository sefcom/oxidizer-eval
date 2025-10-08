void _ZN2fd3cli4Opts15gen_completions17ha22721d6f5bedfacE(undefined *param_1,char param_2)

{
  byte local_18;
  undefined local_17;
  undefined8 local_10;
  
  if (param_2 == '\x06') {
    param_1[1] = 5;
  }
  else {
    _ZN2fd3cli4Opts15gen_completions28__u7b__u7b_closure_u7d__u7d_17h4f5f0f8e2e59eb17E
              (&local_18,param_2);
    if ((local_18 & 1) != 0) {
      *(undefined8 *)(param_1 + 8) = local_10;
      *param_1 = 1;
      return;
    }
    param_1[1] = local_17;
  }
  *param_1 = 0;
  return;
}