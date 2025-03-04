void _ZN6uu_yes16args_into_buffer17h5651e8584f7e9c37E(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_c0 [104];
  undefined local_58 [64];
  
  if (*param_2 != 0) {
    _ZN4core4iter6traits8iterator8Iterator3map17hb91a5a802183f65dE(local_58);
    _ZN9itertools4free11intersperse17h6dfe3766eed6430bE(local_c0,local_58," ",1);
    auVar2 = _ZN115__LT_itertools__intersperse__IntersperseWith_LT_I_C_ElemF_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbbc9ff9732d61fafE
                       (local_c0);
    if (auVar2._0_8_ != 0) {
      do {
        uVar1 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h7c7f2adc9ed8f72aE
                          (auVar2._0_8_,auVar2._8_8_ + auVar2._0_8_);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h2642fa33805b0088E(param_1,uVar1);
        auVar2 = _ZN115__LT_itertools__intersperse__IntersperseWith_LT_I_C_ElemF_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbbc9ff9732d61fafE
                           (local_c0);
      } while (auVar2._0_8_ != 0);
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h15e2c35668a0a643E(param_1);
    return;
  }
  uVar1 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h7c7f2adc9ed8f72aE("y\n","");
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h2642fa33805b0088E(param_1,uVar1);
  return;
}