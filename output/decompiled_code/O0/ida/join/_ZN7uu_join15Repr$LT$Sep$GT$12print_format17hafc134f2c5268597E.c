__int64 __fastcall uu_join::Repr<Sep>::print_format(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+10h] [rbp-F8h]
  __int64 v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+50h] [rbp-B8h]
  __int64 v14; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+98h] [rbp-70h]
  _QWORD v18[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-50h]
  __int64 v20; // [rsp+C0h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  __int64 v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-28h]
  __int64 v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]

  v16 = alloc::vec::Vec<T,A>::len(a1);
  v18[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(0LL, v16);
  v18[1] = v3;
  do
  {
    v19 = core::iter::range::<impl core::iter::traits::iterator::Iterator for core::ops::range::Range<A>>::next(v18);
    v20 = v4;
    if ( !v19 )
      return 0LL;
    v14 = v20;
    if ( v20 )
    {
      v6 = <uu_join::WhitespaceSep as uu_join::Separator>::output_separator(a1 + 41);
      v12 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v6, v7);
      v21 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v12);
      if ( v21 )
        return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 v21,
                 &off_12E090);
    }
    v13 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(a1, v14, &off_12E060);
    v8 = uu_join::State::combine::{{closure}}(a3, v13);
    v24 = v8;
    v25 = v9;
    if ( v8 )
    {
      v22 = v24;
      v23 = v25;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 32);
      v22 = *(_QWORD *)(a1 + 24);
      v23 = v10;
    }
    v11 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v22, v23);
    v26 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v11);
  }
  while ( !v26 );
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v26,
           &off_12E078);
}
