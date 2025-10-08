__int64 __fastcall uu_expr::syntax_tree::NumOrStr::to_bigint(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  char v3; // bp

  if ( __OFSUB__(0LL, *a2) )
    return num_bigint::bigint::convert::<impl num_traits::Num for num_bigint::bigint::BigInt>::from_str_radix(
             a1,
             a2[2],
             a2[3]);
  v3 = *((_BYTE *)a2 + 24);
  result = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a1, a2[1], a2[2]);
  *(_BYTE *)(a1 + 24) = v3;
  return result;
}