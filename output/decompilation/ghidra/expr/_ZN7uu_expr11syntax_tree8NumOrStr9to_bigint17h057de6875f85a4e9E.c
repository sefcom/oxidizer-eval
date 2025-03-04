void _ZN7uu_expr11syntax_tree8NumOrStr9to_bigint17h057de6875f85a4e9E(long param_1,long *param_2)

{
  undefined uVar1;
  
  if (*param_2 == -0x8000000000000000) {
    _ZN10num_bigint6bigint7convert72__LT_impl_u20_num_traits__Num_u20_for_u20_num_bigint__bigint__BigInt_GT_14from_str_radix17hb9365f03b0604201E
              (param_1,param_2[2],param_2[3]);
    return;
  }
  uVar1 = *(undefined *)(param_2 + 3);
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h68d2728c8bfe0c3eE
            ();
  *(undefined *)(param_1 + 0x18) = uVar1;
  return;
}