__int64 __fastcall uu_join::Repr<Sep>::print_format(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+18h] [rbp-100h]
  __int64 v13; // [rsp+40h] [rbp-D8h]
  __int64 v14; // [rsp+58h] [rbp-C0h]
  __int64 v15; // [rsp+60h] [rbp-B8h]
  __int64 v16; // [rsp+98h] [rbp-80h]
  _QWORD v17[2]; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-50h]
  __int64 v21; // [rsp+D0h] [rbp-48h]
  __int64 v22; // [rsp+D8h] [rbp-40h]
  __int64 v23; // [rsp+E0h] [rbp-38h]
  __int64 v24; // [rsp+E8h] [rbp-30h]
  __int64 v25; // [rsp+F0h] [rbp-28h]
  __int64 v26; // [rsp+F8h] [rbp-20h]
  __int64 v27; // [rsp+100h] [rbp-18h]

  v17[0] = a3;
  v17[1] = a4;
  v16 = alloc::vec::Vec<T,A>::len();
  v19[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(0LL, v16);
  v19[1] = v4;
  do
  {
    v20 = core::iter::range::<impl core::iter::traits::iterator::Iterator for core::ops::range::Range<A>>::next(v19);
    v21 = v5;
    if ( !v20 )
      return 0LL;
    v15 = v21;
    if ( v21 )
    {
      v7 = <uu_join::WhitespaceSep as uu_join::Separator>::output_separator(a1 + 41);
      v13 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v7, v8);
      v22 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v13);
      if ( v22 )
        return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 v22,
                 &off_12E090);
    }
    v14 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(a1, v15, &off_12E060);
    v9 = uu_join::State::print_line::{{closure}}(v17, v14);
    v25 = v9;
    v26 = v10;
    if ( v9 )
    {
      v23 = v25;
      v24 = v26;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 32);
      v23 = *(_QWORD *)(a1 + 24);
      v24 = v11;
    }
    v12 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v23, v24);
    v27 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v12);
  }
  while ( !v27 );
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v27,
           &off_12E078);
}
