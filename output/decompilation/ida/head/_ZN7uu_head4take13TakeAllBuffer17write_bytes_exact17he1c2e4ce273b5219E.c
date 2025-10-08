__int64 __fastcall uu_head::take::TakeAllBuffer::write_bytes_exact(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbx

  v4 = uu_head::take::TakeAllBuffer::remaining_buffer();
  v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a3, v4, v5, &off_F7B00);
  result = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a2, v6);
  if ( !result )
  {
    v8 = *(_QWORD *)(a1 + 24) + a3;
    *(_QWORD *)(a1 + 24) = v8;
    if ( v8 > *(_QWORD *)(a1 + 16) )
      core::panicking::panic(aAssertionFaile_0, 55LL, &off_F7B18);
  }
  return result;
}