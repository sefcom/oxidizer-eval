__int64 __fastcall uu_expr::syntax_tree::Parser::next(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rdi

  v3 = a2[1];
  v4 = a2[2];
  if ( v4 >= v3 )
  {
    v7 = v4 - 1;
    if ( v7 >= v3 )
      core::panicking::panic_bounds_check(v7, a2[1], &off_1A30D0);
    <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 8, *(_QWORD *)(*a2 + 16 * v7), *(_QWORD *)(*a2 + 16 * v7 + 8));
    result = 1LL;
  }
  else
  {
    v5 = *a2;
    a2[2] = v4 + 1;
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(v5 + 16 * v4);
    result = 7LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}
