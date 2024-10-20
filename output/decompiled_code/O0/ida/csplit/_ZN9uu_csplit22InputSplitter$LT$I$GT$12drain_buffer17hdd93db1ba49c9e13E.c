__int64 __fastcall uu_csplit::InputSplitter<I>::drain_buffer(__int64 a1)
{
  _BYTE v2[40]; // [rsp+10h] [rbp-28h] BYREF

  alloc::vec::Vec<T,A>::drain(v2);
  core::iter::traits::iterator::Iterator::map(a1, v2);
  return a1;
}
