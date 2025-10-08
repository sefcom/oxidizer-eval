void _ZN5uu_ls12display_date17h897c60a9acee5f16E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int local_20 [4];
  
  _ZN5uu_ls8get_time17h9a507b9721b0487bE(local_20);
  if (local_20[0] != 0) {
    _ZN5uu_ls10TimeStyler6format17hbbf46b74a2bc22e6E(param_1,param_4 + 0x28,local_20);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h24216b49f21f2bafE
            (param_1,&DAT_001d4218,3);
  return;
}