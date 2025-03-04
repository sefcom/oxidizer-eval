void _ZN5uu_du11file_as_vec17ha4cb87d59a25f84cE(undefined8 param_1)

{
  undefined4 uVar1;
  undefined local_50 [16];
  undefined local_40 [48];
  
  _ZN3std2fs4File4open17hc0282a67b51c44beE(local_50);
  uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hc7cbe91f3679df68E(local_50);
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17ha4ed61db034c9bb6E
            (local_40,0x2000,uVar1);
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17ha82b4e3bbe951e30E
            (param_1,local_40);
  return;
}