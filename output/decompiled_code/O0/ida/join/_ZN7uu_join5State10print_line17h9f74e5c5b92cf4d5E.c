__int64 __fastcall uu_join::State::print_line(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 field; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]
  __int64 v15; // [rsp+50h] [rbp-8h]

  if ( uu_join::Repr<Sep>::uses_format(a4) )
  {
    v6 = uu_join::Repr<Sep>::print_format(a4, a2, a3, a1);
    v13 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v6);
    if ( v13 )
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v13,
               &off_12E2A0);
    return uu_join::Repr<Sep>::print_line_ending(a4, a2);
  }
  field = uu_join::Line::get_field(a3, *(_QWORD *)(a1 + 64));
  v5 = uu_join::Repr<Sep>::print_field(a4, a2, field, v4);
  v14 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v5);
  if ( !v14 )
  {
    v7 = uu_join::Repr<Sep>::print_fields(a4, a2, a3, *(_QWORD *)(a1 + 64));
    v15 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v7);
    if ( v15 )
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v15,
               &off_12E270);
    return uu_join::Repr<Sep>::print_line_ending(a4, a2);
  }
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v14,
           &off_12E288);
}
