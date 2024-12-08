__int64 __fastcall uu_cp::aligned_ancestors(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  _OWORD *i; // rax
  __int128 *v7; // rdx
  __int128 v8; // xmm1
  __int128 v10; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+18h] [rbp-B0h]
  _BYTE v12[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-A0h]
  __int64 v14; // [rsp+30h] [rbp-98h]
  _BYTE v15[8]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v16; // [rsp+40h] [rbp-88h]
  __int64 v17; // [rsp+48h] [rbp-80h]
  _QWORD v18[2]; // [rsp+50h] [rbp-78h] BYREF
  char v19; // [rsp+60h] [rbp-68h]
  _OWORD v20[4]; // [rsp+88h] [rbp-40h] BYREF

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v12);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v15);
  v1 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
         1LL,
         v14 - 1,
         v13,
         v14,
         &off_1B5848);
  v3 = v2;
  v18[0] = 1LL;
  v18[1] = v2;
  v19 = 0;
  v4 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(v18, v16, v17);
  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 8LL;
  v11 = 0LL;
  core::iter::traits::iterator::Iterator::zip(v18, v1, v1 + 16 * v3, v4, v4 + 16 * v5);
  for ( i = (_OWORD *)<core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(v18);
        i;
        i = (_OWORD *)<core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(v18) )
  {
    v8 = *v7;
    v20[0] = *i;
    v20[1] = v8;
    alloc::vec::Vec<T,A>::push(&v10, v20);
  }
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  core::ptr::drop_in_place<alloc::vec::Vec<&std::path::Path>>(v15);
  core::ptr::drop_in_place<alloc::vec::Vec<&std::path::Path>>(v12);
  return a1;
}
