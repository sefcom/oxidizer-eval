long * _ZN10check_docs23extract_starts_and_ends17h30dde6298c2e4524E
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  undefined local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17hc0aabeb8c92c5bf9E_002fea20)
            (&local_98,"^(.+):(\\d+):\\s*(?:/{2,}|/\\*)\\s*ANCHOR\\s*:\\s*([\\w_-]+)\\s*(?:\\*/)?",
             0x40);
  uStack_b0 = (undefined4)uStack_88;
  uStack_ac = (undefined4)((ulong)uStack_88 >> 0x20);
  if (CONCAT44(uStack_94,local_98) == 0) {
    uStack_88 = local_80;
    local_98 = uStack_90;
    uStack_94 = uStack_8c;
    uStack_90 = uStack_b0;
    uStack_8c = uStack_ac;
    local_68 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17ha1d16daf0c272c04E
                         (&local_98);
  }
  else {
    local_28 = local_80;
    local_38 = uStack_90;
    uStack_34 = uStack_8c;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    _ZN10check_docs23extract_starts_and_ends28__u7b__u7b_closure_u7d__u7d_17h5404a495eb6554e3E
              (&local_70,param_2,param_3,local_40);
    if (local_70 != -0x8000000000000000) {
      local_58 = local_70;
      lStack_50 = local_68;
      local_48 = local_60;
                    /* try { // try from 001ed43b to 001ed4f1 has its CatchHandler @ 001ed537 */
      (*(code *)PTR__ZN5regex5regex6string5Regex3new17hc0aabeb8c92c5bf9E_002fea20)
                (&local_98,
                 "^(.+):(\\d+):\\s*(?:/{2,}|/\\*)\\s*ANCHOR_END\\s*:\\s*([\\w_-]+)\\s*(?:\\*/)?",
                 0x44);
      uStack_b0 = (undefined4)uStack_88;
      uStack_ac = (undefined4)((ulong)uStack_88 >> 0x20);
      if (CONCAT44(uStack_94,local_98) == 0) {
        uStack_88 = local_80;
        local_98 = uStack_90;
        uStack_94 = uStack_8c;
        uStack_90 = uStack_b0;
        uStack_8c = uStack_ac;
        local_68 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17ha1d16daf0c272c04E
                             (&local_98);
      }
      else {
        local_28 = local_80;
        local_38 = uStack_90;
        uStack_34 = uStack_8c;
        uStack_30 = uStack_b0;
        uStack_2c = uStack_ac;
        _ZN10check_docs23extract_starts_and_ends28__u7b__u7b_closure_u7d__u7d_17h5404a495eb6554e3E
                  (&local_70,param_2,param_3,local_40);
        if (local_70 != -0x8000000000000000) {
          param_1[2] = local_48;
          *param_1 = local_58;
          param_1[1] = lStack_50;
          param_1[3] = local_70;
          param_1[4] = local_68;
          param_1[5] = local_60;
          return param_1;
        }
      }
      param_1[1] = local_68;
      *param_1 = -0x8000000000000000;
      _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_check_docs__Anchor_GT__GT_17h01addc0fc9fc5f6eE
                (&local_58);
      return param_1;
    }
  }
  param_1[1] = local_68;
  *param_1 = -0x8000000000000000;
  return param_1;
}