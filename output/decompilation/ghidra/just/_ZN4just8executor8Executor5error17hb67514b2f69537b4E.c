void _ZN4just8executor8Executor5error17hb67514b2f69537b4E
               (undefined *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  
  lVar1 = *param_2;
  local_68 = param_4;
  local_60 = param_5;
  local_38 = param_3;
  if (lVar1 == 0) {
    lVar1 = param_2[1];
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
    )(&local_80,lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x10) * 0x30;
    lVar1 = *(long *)(lVar1 + 8);
    for (; lVar2 != 0; lVar2 = lVar2 + -0x30) {
                    /* try { // try from 00367c55 to 00367c7c has its CatchHandler @ 00367d34 */
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_80,0x20);
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
                (&local_80,*(long *)(lVar1 + 8),*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
      lVar1 = lVar1 + 0x30;
    }
    *(undefined8 *)(param_1 + 0x30) = local_70;
    *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_7c,local_80);
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_74,uStack_78);
    *(undefined8 *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x10) = local_68;
    *(undefined8 *)(param_1 + 0x18) = local_60;
    *param_1 = 0x29;
  }
  else {
    if (param_2[2] == 0) {
      local_58 = 0x8000000000000000;
    }
    else {
                    /* try { // try from 00367bff to 00367c34 has its CatchHandler @ 00367d2f */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_80,param_2[2],param_2[3]);
      local_48 = local_70;
      local_58 = CONCAT44(uStack_7c,local_80);
      uStack_50 = uStack_78;
      uStack_4c = uStack_74;
    }
                    /* try { // try from 00367cc4 to 00367cd0 has its CatchHandler @ 00367d20 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_80,lVar1,param_2[1]);
    *(undefined8 *)(param_1 + 0x48) = local_70;
    *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_7c,local_80);
    *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_74,uStack_78);
    *(undefined8 *)(param_1 + 0x30) = local_48;
    *(undefined8 *)(param_1 + 0x20) = local_58;
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_4c,uStack_50);
    *(undefined8 *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x10) = local_68;
    *(undefined8 *)(param_1 + 0x18) = local_60;
    *param_1 = 0x2b;
  }
  return;
}