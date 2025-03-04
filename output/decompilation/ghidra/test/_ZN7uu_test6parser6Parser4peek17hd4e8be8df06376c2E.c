void _ZN7uu_test6parser6Parser4peek17hd4e8be8df06376c2E(undefined8 param_1,long param_2)

{
  undefined8 local_38 [3];
  
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17h03d1de6add56340dE
            (param_2 + 0x18,param_2 + 0x30);
  if (*(long *)(param_2 + 0x18) == -0x8000000000000000) {
    local_38[0] = 0x8000000000000000;
  }
  else {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha4fac1976132f377E
              (local_38,param_2 + 0x18);
  }
  _ZN7uu_test6parser6Symbol3new17ha5314f5fa26867b7E(param_1,local_38);
  return;
}