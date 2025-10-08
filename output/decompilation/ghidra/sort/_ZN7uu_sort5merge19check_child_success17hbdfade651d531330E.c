undefined  [16]
_ZN7uu_sort5merge19check_child_success17hbdfade651d531330E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined auVar3 [16];
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
                    /* try { // try from 001ce642 to 001ce6ed has its CatchHandler @ 001ce70d */
  (*(code *)PTR__ZN3std7process5Child4wait17h7e33de4911114104E_00297570)(&local_58,param_1);
  if ((int)local_58 == 1) {
    uStack_68 = local_50;
    uStack_64 = uStack_4c;
    local_70 = 1;
  }
  else {
    bVar2 = (local_58 & 0x7f00000000) == 0;
    uStack_6c = (uint)bVar2;
    uStack_68 = local_58._4_4_ >> 8 & 0xff;
    local_70 = 0;
    if (uStack_68 != 0 && bVar2) {
      _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_i32_GT__C_std__io__error__Error_GT__GT_17h5f0fafecf499e947E
                (&local_70);
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
                (&local_70,param_2,param_3);
      local_40 = local_60;
      local_50 = local_70;
      uStack_4c = uStack_6c;
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      local_58 = 0x8000000000000005;
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4da5af3d8a2f6642E(&local_58);
      goto LAB_001ce6f1;
    }
  }
  _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_i32_GT__C_std__io__error__Error_GT__GT_17h5f0fafecf499e947E
            (&local_70);
  uVar1 = 0;
LAB_001ce6f1:
  _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17hc47d8b8842bb4996E(param_1);
  auVar3._8_8_ = &
                 PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17h960567f9640cae93E_0028c448
  ;
  auVar3._0_8_ = uVar1;
  return auVar3;
}