unsigned __int64 __fastcall uu_join::State::get_current_key(_QWORD *a1)
{
  _QWORD *v1; // r8
  unsigned __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi

  if ( !a1[2] )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_FDD30);
  v1 = (_QWORD *)a1[1];
  v2 = a1[8];
  if ( v1[2] <= v2 )
    return 0LL;
  v3 = 16 * v2;
  v4 = v1[1];
  v5 = *(_QWORD *)(v4 + v3);
  v6 = *(_QWORD *)(v4 + v3 + 8);
  if ( v6 < v5 )
    core::slice::index::slice_index_order_fail(v5, v6, &off_FDC08);
  if ( v6 > v1[5] )
    core::slice::index::slice_end_index_len_fail(v6, v1[5], &off_FDC08);
  return v1[4] + v5;
}
