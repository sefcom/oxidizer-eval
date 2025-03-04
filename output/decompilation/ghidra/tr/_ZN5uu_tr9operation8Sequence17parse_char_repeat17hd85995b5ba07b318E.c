void _ZN5uu_tr9operation8Sequence17parse_char_repeat17hd85995b5ba07b318E
               (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  ulong uStack_20;
  ulong local_18;
  ulong uStack_10;
  
  local_60 = "[";
  local_58 = 1;
  local_50 = "*";
  local_48 = 1;
  local_40 = "]";
  local_38 = 1;
  _ZN3nom8sequence9delimited28__u7b__u7b_closure_u7d__u7d_17hbda65ba818a3ebf0E
            (&local_30,&local_60,param_2,param_3);
  if (local_30 == 0) {
    param_1[3] = local_18;
    param_1[4] = uStack_10;
    param_1[1] = local_28;
    param_1[2] = uStack_20;
  }
  else {
    _ZN5uu_tr9operation8Sequence17parse_char_repeat28__u7b__u7b_closure_u7d__u7d_17hb4b44df29a4e59ecE
              (param_1 + 1,&local_30);
  }
  *param_1 = (ulong)(local_30 == 0);
  return;
}