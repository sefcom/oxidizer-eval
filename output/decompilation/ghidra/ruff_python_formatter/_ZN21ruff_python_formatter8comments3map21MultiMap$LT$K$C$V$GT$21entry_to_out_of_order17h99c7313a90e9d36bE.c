int * _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_21entry_to_out_of_order17h99c7313a90e9d36bE
                (int *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined auVar4 [16];
  undefined local_48 [24];
  
  if (*param_1 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                      (*param_1 + -1,param_1[1] + -1,param_2,param_3,&PTR_DAT_0067ce50);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd104e18b08a90af8E
              (local_48,uVar2);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h212ac18df04ae491E(param_4,local_48,&PTR_DAT_0067ce68);
    iVar3 = param_1[2] + -1;
    if (param_1[2] == 0) {
      iVar3 = param_1[1] + -1;
    }
    uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                      (param_1[1] + -1,iVar3,param_2,param_3,&PTR_DAT_0067ce80);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd104e18b08a90af8E
              (local_48,uVar2);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h212ac18df04ae491E(param_4,local_48,&PTR_DAT_0067ce98);
    auVar4 = (*(code *)
               PTR__ZN21ruff_python_formatter8comments3map12InOrderEntry14trailing_range17h32d34cc5d8d5c983E_006bdc20
             )(param_1);
    uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2681de418ccc56aeE
                      (auVar4._0_8_,auVar4._8_8_,param_2,param_3,&PTR_DAT_0067ceb0);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hd104e18b08a90af8E
              (local_48,uVar2);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h212ac18df04ae491E(param_4,local_48,&PTR_DAT_0067cec8);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = uVar1;
    return param_1 + 2;
  }
  return param_1 + 2;
}