undefined8 *
_ZN7uu_sort6Output3new17h911849d79fe47e41E(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined4 unaff_EBP;
  undefined8 uVar1;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  uVar1 = 0x8000000000000000;
  if (param_2 != 0) {
    local_d8 = 0x1b600000000;
    local_d0 = 0x100;
    local_cc = 1;
    _ZN3std2fs11OpenOptions4open17h0d3ef205fa11a490E(&local_c8,&local_d8,param_2,param_3);
    if (local_c8 == 1) {
      _ZN7uu_sort6Output3new28__u7b__u7b_closure_u7d__u7d_17ha523fa15eec4008dE
                (&local_68,param_2,param_3,local_c0);
      local_7c = local_2c;
      local_8c = local_3c;
      uStack_84 = uStack_34;
      local_9c = local_4c;
      uStack_94 = uStack_44;
      uStack_ac = local_5c;
      uStack_a8 = uStack_58;
      uStack_a4 = uStack_54;
      uStack_a0 = uStack_50;
      local_b8 = local_68;
      local_b0 = local_60;
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4da5af3d8a2f6642E(&local_b8);
      param_1[1] = uVar1;
      param_1[2] = &
                   PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17h960567f9640cae93E_0028c448
      ;
      *param_1 = 0x8000000000000001;
      return param_1;
    }
                    /* try { // try from 001d0400 to 001d040f has its CatchHandler @ 001d0441 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
              (&local_b8,param_2,param_3);
    local_78 = CONCAT44(uStack_ac,local_b0);
    uStack_70 = CONCAT44(uStack_a4,uStack_a8);
    uVar1 = local_b8;
    unaff_EBP = local_c4;
  }
  *param_1 = uVar1;
  param_1[1] = local_78;
  param_1[2] = uStack_70;
  *(undefined4 *)(param_1 + 3) = unaff_EBP;
  return param_1;
}