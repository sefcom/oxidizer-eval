__int64 __fastcall uu_csplit::InputSplitter<I>::shrink_buffer_to_size(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  bool v4; // cf
  unsigned __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 16);
  v3 = 0LL;
  v4 = v2 < *(_QWORD *)(a2 + 48);
  v5 = v2 - *(_QWORD *)(a2 + 48);
  if ( !v4 )
    v3 = v5;
  return alloc::vec::Vec<T,A>::drain(a1, a2, v3);
}
