__int64 __fastcall uu_tr::operation::Sequence::from_str(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+Fh] [rbp-89h] BYREF
  __m256i v5; // [rsp+10h] [rbp-88h] BYREF
  __int64 v6; // [rsp+30h] [rbp-68h] BYREF
  __m256i v7; // [rsp+38h] [rbp-60h]
  __int64 v8; // [rsp+58h] [rbp-40h]
  _BYTE v9[56]; // [rsp+60h] [rbp-38h] BYREF

  nom::multi::many0::{{closure}}(&v6, &v4, a2, a3);
  if ( v6 )
  {
    v5 = v7;
  }
  else
  {
    v5.m256i_i64[3] = v8;
    *(_OWORD *)&v5.m256i_u64[1] = *(_OWORD *)&v7.m256i_u64[2];
    v5.m256i_i64[0] = 3LL;
  }
  core::result::Result<T,E>::unwrap(&v6, &v5);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v9, &v6);
  return core::iter::adapters::try_process(a1, v9);
}
