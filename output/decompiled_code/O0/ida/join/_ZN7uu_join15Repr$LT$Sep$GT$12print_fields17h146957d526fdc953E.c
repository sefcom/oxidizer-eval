__int64 __fastcall uu_join::Repr<Sep>::print_fields(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-78h]
  _QWORD v18[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  __int64 v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-18h]
  __int64 field; // [rsp+68h] [rbp-10h]
  __int64 v24; // [rsp+70h] [rbp-8h]

  v4 = alloc::vec::Vec<T,A>::len();
  v18[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(0LL, v4);
  v18[1] = v5;
  while ( 1 )
  {
    do
    {
      v19 = core::iter::range::<impl core::iter::traits::iterator::Iterator for core::ops::range::Range<A>>::next(v18);
      v20 = v6;
      if ( !v19 )
        return 0LL;
      v13 = v20;
    }
    while ( v20 == a4 );
    v8 = <uu_join::WhitespaceSep as uu_join::Separator>::output_separator(a1 + 41);
    v10 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v8, v9);
    v21 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v10);
    if ( v21 )
      break;
    field = uu_join::Line::get_field(a3, v13);
    v24 = v11;
    if ( !field )
      core::option::unwrap_failed(&off_12E018);
    v12 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, field, v24);
    v22 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v12);
    if ( v22 )
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v22,
               &off_12E030);
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v21,
           &off_12E048);
}
