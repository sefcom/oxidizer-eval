undefined8 * _ZN4just8function8just_pid17h7a6413ce5eb56871E(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined local_12 [10];
  
  uVar1 = (*(code *)PTR__ZN3std7process2id17hbddb6ac2895e6a42E_00566ba8)();
  uVar2 = (*(code *)
            PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u32_GT_4_fmt17hcfe26aa883005358E_00566bb0)
                    (uVar1,local_12,10);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_30,uVar2);
  param_1[3] = local_20;
  param_1[1] = local_30;
  param_1[2] = uStack_28;
  *param_1 = 0;
  return param_1;
}