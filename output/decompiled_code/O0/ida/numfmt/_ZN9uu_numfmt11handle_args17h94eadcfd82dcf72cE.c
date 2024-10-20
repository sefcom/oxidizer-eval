__int64 __fastcall uu_numfmt::handle_args(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE src[64]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE dest[64]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v11; // [rsp+D8h] [rbp-30h]
  __int64 v12; // [rsp+E0h] [rbp-28h]
  __int64 v13; // [rsp+E8h] [rbp-20h]
  __int64 v14; // [rsp+F0h] [rbp-18h]

  <I as core::iter::traits::collect::IntoIterator>::into_iter(src, a1);
  memcpy(dest, src, sizeof(dest));
  do
  {
    v11 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(dest);
    v12 = v2;
    if ( !v11 )
      return 0LL;
    v3 = uu_numfmt::format_and_handle_validation(v11, v12, a2);
    v6 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v3, v5);
    v13 = v6;
    v14 = v7;
  }
  while ( !v6 );
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v13,
           v14,
           &off_11BFD8);
}
