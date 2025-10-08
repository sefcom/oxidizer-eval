__int64 __fastcall uu_tr::operation::Sequence::from_str(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __m256i v6; // [rsp+0h] [rbp-88h] BYREF
  int v7; // [rsp+28h] [rbp-60h] BYREF
  __m256i v8; // [rsp+30h] [rbp-58h]
  __int64 v9; // [rsp+50h] [rbp-38h]
  _BYTE v10[48]; // [rsp+58h] [rbp-30h] BYREF

  <nom::multi::Many0<F> as nom::internal::Parser<I>>::process(&v7);
  if ( v7 == 1 )
  {
    v6 = v8;
  }
  else
  {
    v6.m256i_i64[3] = v9;
    *(_OWORD *)&v6.m256i_u64[1] = *(_OWORD *)&v8.m256i_u64[2];
    v6.m256i_i64[0] = 3LL;
  }
  ((void (__fastcall *)(_BYTE *, __m256i *))core::result::Result<T,E>::unwrap)(v10, &v6);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(
    &v7,
    v10,
    v1,
    v2,
    v3,
    v4,
    v6.m256i_i64[0],
    v6.m256i_i64[1],
    v6.m256i_i64[2],
    v6.m256i_i64[3]);
  return core::iter::traits::iterator::Iterator::collect(a1, &v7);
}