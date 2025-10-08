__int64 __fastcall uu_shred::BytesWriter::bytes_for_pass(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r14

  if ( *a1 == 1 )
  {
    result = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
               *(__int64 *)((char *)&GCC_except_table4_0 + (_QWORD)a1),
               *(__int64 *)((char *)&GCC_except_table4_0 + (_QWORD)a1) + a2,
               a1 + 1,
               &unk_10002,
               &off_F9F80);
    *(__int64 *)((char *)&GCC_except_table4_0 + (_QWORD)a1) = (*(__int64 *)((char *)&GCC_except_table4_0 + (_QWORD)a1)
                                                             + a2)
                                                            % 3uLL;
  }
  else
  {
    v3 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a2, a1 + 336);
    <rand_core::block::BlockRng<R> as rand_core::RngCore>::fill_bytes(a1 + 16, v3);
    return v3;
  }
  return result;
}