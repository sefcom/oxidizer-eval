__int64 __fastcall uu_shred::BytesWriter::bytes_for_pass(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r14

  if ( *a1 )
  {
    result = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
               *(__int64 *)((char *)&qword_10008 + (_QWORD)a1),
               *(__int64 *)((char *)&qword_10008 + (_QWORD)a1) + a2,
               a1 + 1);
    *(__int64 *)((char *)&qword_10008 + (_QWORD)a1) = (*(__int64 *)((char *)&qword_10008 + (_QWORD)a1) + a2) % 3uLL;
  }
  else
  {
    v3 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a2, a1 + 336);
    rand::rng::Rng::fill(a1 + 16, v3);
    return v3;
  }
  return result;
}
