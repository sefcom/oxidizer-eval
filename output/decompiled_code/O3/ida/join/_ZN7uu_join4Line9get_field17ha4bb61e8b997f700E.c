unsigned __int64 __fastcall uu_join::Line::get_field(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx

  if ( a1[2] <= a2 )
    return 0LL;
  v2 = 16 * a2;
  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + v2);
  v5 = *(_QWORD *)(v3 + v2 + 8);
  if ( v5 < v4 )
    core::slice::index::slice_index_order_fail(v4, v5, &off_FDC08);
  v6 = a1[5];
  if ( v5 > v6 )
    core::slice::index::slice_end_index_len_fail(v5, v6, &off_FDC08);
  return a1[4] + v4;
}
