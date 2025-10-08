undefined8 * _ZN4just8function8num_cpus17h99429b75fcda06ddE(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined local_1c [20];
  
  uVar1 = (*(code *)PTR__ZN8num_cpus5linux12get_num_cpus17h28a5c9f1704b633eE_00566bd0)();
  uVar1 = (*(code *)
            PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u64_GT_4_fmt17h284f18664830c6ddE_00566bd8)
                    (uVar1,local_1c,0x14);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_38,uVar1);
  param_1[3] = local_28;
  param_1[1] = local_38;
  param_1[2] = uStack_30;
  *param_1 = 0;
  return param_1;
}