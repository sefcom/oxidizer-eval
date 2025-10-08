void _ZN5uu_pr4open17hde771125822bcd7aE(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h15fe555904e25436E
                    (param_2,param_3,&DAT_001581f5,1);
  if (cVar1 == '\0') {
    _ZN3std2fs8metadata17h17f73c8d2a6d1ec6E(local_c8,param_2,param_3);
    if (local_c8[0] == 2) {
      _ZN5uu_pr4open28__u7b__u7b_closure_u7d__u7d_17h7683165c4528a574E
                (param_1,param_2,param_3,local_c0);
      return;
    }
    _ZN5uu_pr4open28__u7b__u7b_closure_u7d__u7d_17h1b10105b0f52e18cE
              (&local_e8,param_2,param_3,local_90);
    param_1[2] = local_d8;
    param_1[3] = uStack_d0;
    *param_1 = local_e8;
    param_1[1] = uStack_e0;
  }
  else {
    uVar2 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00398dc8)();
    uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h11ea097a94fc15a0E(uVar2);
    param_1[1] = uVar2;
    param_1[2] = &DAT_003693b8;
    *param_1 = 0x8000000000000005;
  }
  return;
}