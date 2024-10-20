__int64 __fastcall uu_join::State::skip_line(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 line; // rax
  __int64 v7; // [rsp+38h] [rbp-50h]
  _QWORD v8[3]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v9[3]; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v10[3]; // [rsp+70h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
  {
    line = uu_join::State::print_first_line(a1, a2, a4);
    v7 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(line);
    if ( v7 )
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v7,
               &off_12E4F8);
  }
  uu_join::State::reset_next_line(v9, a1);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v8, v9);
  if ( v8[0] == 0x8000000000000001LL )
    return 0LL;
  v10[0] = v8[0];
  v10[1] = v8[1];
  v10[2] = v8[2];
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v10,
           &off_12E4E0);
}
