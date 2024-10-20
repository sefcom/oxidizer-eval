__int64 __fastcall uu_join::Line::get_field(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi

  v2 = a1[2];
  if ( v2 <= a2 )
    return 0LL;
  if ( v2 >> 59 || (v3 = a1[1]) == 0 || (v3 & 7) != 0 || (v4 = a1[4]) == 0 || (v5 = a1[5], v5 < 0) )
    core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_53_llvm_18377431372254846744, 162LL);
  v6 = 16 * a2;
  v7 = *(_QWORD *)(v3 + v6);
  v8 = *(_QWORD *)(v3 + v6 + 8);
  if ( v8 < v7 )
    core::slice::index::slice_index_order_fail(v7, v8, &off_131160);
  if ( v5 < v8 )
    core::slice::index::slice_end_index_len_fail(v8, v5, &off_131160);
  return v7 + v4;
}
