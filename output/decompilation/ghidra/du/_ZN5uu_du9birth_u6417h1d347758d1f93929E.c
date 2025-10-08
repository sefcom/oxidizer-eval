undefined8 _ZN5uu_du9birth_u6417h1d347758d1f93929E(undefined8 param_1)

{
  byte local_28 [8];
  int local_20;
  undefined local_10 [8];
  int local_8;
  
  (*(code *)PTR__ZN3std2fs8Metadata7created17hedfca1c6312fe34eE_0024eb70)(local_28,param_1);
  if (local_20 == 1000000000) {
    _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_std__time__SystemTime_C_std__io__error__Error_GT__GT_17h35db9f67a6db3bdcE
              (local_28);
    return 0;
  }
  local_8 = local_20;
  (*(code *)PTR__ZN3std4time10SystemTime14duration_since17h5eaa6a008fb4c137E_0024eb78)
            (local_28,local_10,0,0);
  if ((local_28[0] & 1) != 0) {
    return 0;
  }
  return 1;
}