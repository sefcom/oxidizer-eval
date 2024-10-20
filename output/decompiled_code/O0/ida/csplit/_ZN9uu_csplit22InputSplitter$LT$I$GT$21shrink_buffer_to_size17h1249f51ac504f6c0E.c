__int64 __fastcall uu_csplit::InputSplitter<I>::shrink_buffer_to_size(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  _BYTE v5[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int64)alloc::vec::Vec<T,A>::len(a2) > *(_QWORD *)(a2 + 48) )
  {
    v2 = alloc::vec::Vec<T,A>::len(a2);
    v3 = *(_QWORD *)(a2 + 48);
    if ( v2 < v3 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_2A2198);
    alloc::vec::Vec<T,A>::drain(v5, a2, v2 - v3);
  }
  else
  {
    alloc::vec::Vec<T,A>::drain(v5, a2, 0LL);
  }
  core::iter::traits::iterator::Iterator::map(a1, v5);
  return a1;
}
