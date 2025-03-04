undefined8 *
_ZN5uu_pr4open17h24aeb0fb8cb9559fE(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  int local_c8 [2];
  undefined8 local_c0;
  undefined4 local_90;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbb47e2b296de4d69E
                    (param_2,param_3,"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs8metadata17hd60c15ad96e2cad2E(local_c8,param_2,param_3);
    if (local_c8[0] == 2) {
      _ZN5uu_pr4open28__u7b__u7b_closure_u7d__u7d_17ha6d2afc95f3a7e84E
                (param_1,param_2,param_3,local_c0);
    }
    else {
      _ZN5uu_pr4open28__u7b__u7b_closure_u7d__u7d_17h1ec6c60c8fa19c78E
                (&local_e8,param_2,param_3,local_90);
      param_1[2] = local_d8;
      param_1[3] = uStack_d0;
      *param_1 = local_e8;
      param_1[1] = uStack_e0;
    }
  }
  else {
    uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h312f2a9b49c8c6a7E(uVar2);
    param_1[1] = uVar2;
    param_1[2] = &DAT_00409430;
    *param_1 = 0x8000000000000005;
  }
  return param_1;
}