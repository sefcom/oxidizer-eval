void __rustcall uu_expr::syntax_tree::NumOrStr::to_bigint(long param_1,long *param_2)

{
  undefined uVar1;
  
  if (*param_2 == -0x8000000000000000) {
    num_bigint::bigint::convert::_<impl_num_traits::Num_for_num_bigint::bigint::BigInt>::
    from_str_radix(param_1,param_2[2],param_2[3]);
    return;
  }
  uVar1 = *(undefined *)(param_2 + 3);
  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone();
  *(undefined *)(param_1 + 0x18) = uVar1;
  return;
}