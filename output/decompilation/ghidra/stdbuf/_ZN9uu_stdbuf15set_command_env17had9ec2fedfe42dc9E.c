long _ZN9uu_stdbuf15set_command_env17had9ec2fedfe42dc9E
               (long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined local_4c [20];
  undefined local_38 [8];
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *param_4;
  if (lStack_28 != 0) {
    if ((int)lStack_28 == 1) {
      uStack_30 = 0x50e6ca;
      auVar2 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17ha74f8abc3b4b0be0E
                         (param_2,param_3);
      uStack_30 = 0x50e6e1;
      auVar3 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17ha74f8abc3b4b0be0E
                         (&DAT_0011b76b,1);
      uStack_30 = 0x50e6f6;
      (*(code *)PTR__ZN3std3sys7process3env10CommandEnv3set17h7ca34cd9604d57a8E_005af500)
                (param_1 + 0x78,auVar2._0_8_,auVar2._8_8_,auVar3._0_8_,auVar3._8_8_);
      return param_1;
    }
    uVar1 = (*(code *)
              PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u64_GT_4_fmt17h284f18664830c6ddE_005af750)
                      (param_4[1],local_4c,0x14);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1f3fa2d8817656eeE
              (local_38,uVar1);
    lStack_28 = _ZN3std7process7Command3env17h1c373d51c7e82eeaE(param_1,param_2,param_3,local_38);
  }
  return lStack_28;
}