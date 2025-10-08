void _ZN6uu_yes16args_into_buffer17h6f2b697e93c64beeE(undefined8 param_1,long *param_2)

{
  undefined auVar1 [16];
  undefined local_c0 [104];
  undefined local_58 [64];
  
  if (*param_2 != 0) {
    _ZN4core4iter6traits8iterator8Iterator3map17h85e126f28116e081E(local_58);
    _ZN9itertools4free11intersperse17h6224ce86375bb11fE(local_c0,local_58);
    auVar1 = _ZN115__LT_itertools__intersperse__IntersperseWith_LT_I_C_ElemF_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfa08dc8a2341c4e0E
                       (local_c0);
    if (auVar1._0_8_ != 0) {
      do {
        _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h4aa797f0d174754dE
                  (param_1,auVar1._0_8_,auVar1._8_8_ + auVar1._0_8_);
        auVar1 = _ZN115__LT_itertools__intersperse__IntersperseWith_LT_I_C_ElemF_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfa08dc8a2341c4e0E
                           (local_c0);
      } while (auVar1._0_8_ != 0);
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h82ca3c1e4aaf20e1E(param_1);
    return;
  }
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h4aa797f0d174754dE
            (param_1,"y\n","");
  return;
}