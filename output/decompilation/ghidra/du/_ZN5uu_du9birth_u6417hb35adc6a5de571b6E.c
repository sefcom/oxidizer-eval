undefined8 _ZN5uu_du9birth_u6417hb35adc6a5de571b6E(undefined8 param_1)

{
  long local_28;
  int local_20;
  long local_10;
  int local_8;
  
  _ZN3std2fs8Metadata7created17h8ccef99991753c93E(&local_28,param_1);
  if (local_20 == 1000000000) {
    _ZN4core3ptr94drop_in_place_LT_core__result__Result_LT_std__time__SystemTime_C_std__io__error__Error_GT__GT_17h5f799c8f7658c15dE
              (&local_28);
  }
  else {
    local_10 = local_28;
    local_8 = local_20;
    _ZN3std4time10SystemTime14duration_since17hd2a32b95d4b7e9edE(&local_28,&local_10,0,0);
    if (local_28 == 0) {
      return 1;
    }
  }
  return 0;
}