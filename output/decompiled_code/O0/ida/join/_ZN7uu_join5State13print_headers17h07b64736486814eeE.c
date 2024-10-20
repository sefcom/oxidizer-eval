__int64 __fastcall uu_join::State::print_headers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 line; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-8h]

  if ( (uu_join::State::has_line(a1) & 1) != 0 )
  {
    if ( (uu_join::State::has_line(a3) & 1) != 0 )
    {
      v8 = uu_join::State::combine(a1, a2, a3, a4);
      v12 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v8);
      if ( v12 )
        return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 v12,
                 &off_12E2E8);
    }
    else
    {
      line = uu_join::State::print_first_line(a1, a2, a4);
      v7 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(line);
      if ( v7 )
        return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 v7,
                 &off_12E2D0);
    }
  }
  else if ( (uu_join::State::has_line(a3) & 1) != 0 )
  {
    v4 = uu_join::State::print_first_line(a3, a2, a4);
    v13 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v4);
    if ( v13 )
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v13,
               &off_12E2B8);
  }
  return 0LL;
}
