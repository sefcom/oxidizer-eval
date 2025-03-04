ulong * _ZN6uu_cut14list_to_ranges17h582948f175afb12bE
                  (ulong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulong local_38;
  long local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulong local_18;
  
  if (param_4 == 0) {
    _ZN6uucore8features6ranges5Range9from_list17hf67be8a5ce4e6c04E(param_1);
  }
  else {
    _ZN6uucore8features6ranges5Range9from_list17hf67be8a5ce4e6c04E(&local_30);
    if (local_30 == 0) {
      local_38 = local_18;
      local_48 = local_28;
      uStack_44 = uStack_24;
      uStack_40 = uStack_20;
      uStack_3c = uStack_1c;
      _ZN6uu_cut14list_to_ranges28__u7b__u7b_closure_u7d__u7d_17h500d2b69098a6b6eE
                (param_1 + 1,&local_48);
    }
    else {
      param_1[3] = local_18;
      param_1[1] = CONCAT44(uStack_24,local_28);
      param_1[2] = CONCAT44(uStack_1c,uStack_20);
    }
    *param_1 = (ulong)(local_30 != 0);
  }
  return param_1;
}