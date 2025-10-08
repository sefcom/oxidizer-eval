void _ZN4just5scope5Scope4root17hda0e4ba20c461efbE(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined local_72;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined local_58 [40];
  
  local_f8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
                    /* try { // try from 00387c77 to 00387c7b has its CatchHandler @ 00387d8f */
  uVar2 = _ZN4just9constants9constants17h3594f93ebbf36f97E();
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h8e7ee68ea126f0a0E(local_58,uVar2);
  auVar3 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he181a059410bee19E
                     (local_58);
  if (auVar3._0_8_ != 0) {
    do {
      uVar2 = *auVar3._0_8_;
      uVar1 = auVar3._0_8_[1];
                    /* try { // try from 00387cce to 00387d55 has its CatchHandler @ 00387d91 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_70,*auVar3._8_8_,auVar3._8_8_[1]);
      local_c8 = local_60;
      local_d8 = local_70;
      uStack_d0 = uStack_68;
      local_74 = 1;
      local_78 = 0;
      local_c0 = "PRELUDE";
      local_b8 = 7;
      local_a0 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0x18;
      local_72 = 0;
      local_b0 = uVar2;
      local_a8 = uVar1;
      local_98 = uVar1;
      _ZN4just5scope5Scope4bind17h2017080dbe33bcdeE(&local_f8,&local_d8);
      auVar3 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he181a059410bee19E
                         (local_58);
    } while (auVar3._0_8_ != 0);
  }
  param_1[2] = local_e8;
  param_1[3] = uStack_e0;
  *param_1 = local_f8;
  param_1[1] = uStack_f0;
  return;
}