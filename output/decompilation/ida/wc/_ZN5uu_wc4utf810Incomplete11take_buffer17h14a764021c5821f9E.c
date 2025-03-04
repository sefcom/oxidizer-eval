__int64 __fastcall uu_wc::utf8::Incomplete::take_buffer(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(unsigned __int8 *)(a1 + 4);
  *(_BYTE *)(a1 + 4) = 0;
  return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v2, a1, 4LL, &off_131590);
}
