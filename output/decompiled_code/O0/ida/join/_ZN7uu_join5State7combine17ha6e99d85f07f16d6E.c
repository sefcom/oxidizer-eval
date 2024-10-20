__int64 __fastcall uu_join::State::combine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-C8h]
  __int64 v14; // [rsp+8h] [rbp-C0h]
  int v18[2]; // [rsp+38h] [rbp-90h] BYREF
  int v19[2]; // [rsp+40h] [rbp-88h]
  int v20[2]; // [rsp+48h] [rbp-80h] BYREF
  int v21[2]; // [rsp+50h] [rbp-78h]
  int v22[2]; // [rsp+58h] [rbp-70h]
  int v23[2]; // [rsp+60h] [rbp-68h] BYREF
  int v24[2]; // [rsp+68h] [rbp-60h]
  int v25[2]; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+78h] [rbp-50h]
  int v27[2]; // [rsp+80h] [rbp-48h] BYREF
  int v28[2]; // [rsp+88h] [rbp-40h]
  int v29[2]; // [rsp+90h] [rbp-38h]
  int v30[2]; // [rsp+98h] [rbp-30h]
  int v31[2]; // [rsp+A0h] [rbp-28h]
  __int64 v32; // [rsp+A8h] [rbp-20h]
  __int64 v33; // [rsp+B0h] [rbp-18h]
  __int64 v34; // [rsp+B8h] [rbp-10h]
  __int64 v35; // [rsp+C0h] [rbp-8h]

  *(_QWORD *)v18 = uu_join::State::get_current_key(a1);
  *(_QWORD *)v19 = v4;
  *(_QWORD *)v20 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
  *(_QWORD *)v21 = v5;
  while ( 1 )
  {
    *(_QWORD *)v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v20);
    if ( !*(_QWORD *)v22 )
      break;
    v14 = *(_QWORD *)v22;
    *(_QWORD *)v23 = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a3);
    *(_QWORD *)v24 = v6;
    while ( 1 )
    {
      *(_QWORD *)v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v23);
      if ( !*(_QWORD *)v25 )
        break;
      v13 = *(_QWORD *)v25;
      if ( uu_join::Repr<Sep>::uses_format(a4) )
      {
        *(_QWORD *)v27 = v18;
        *(_QWORD *)v28 = a1;
        *(_QWORD *)v29 = v14;
        *(_QWORD *)v30 = a3;
        *(_QWORD *)v31 = v13;
        v9 = uu_join::Repr<Sep>::print_format(a4, a2, (__int64)v27);
        v26 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v9);
        if ( v26 )
          return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                   v26,
                   &off_12E3C0);
      }
      else
      {
        v8 = uu_join::Repr<Sep>::print_field(a4, a2, *(__int64 *)v18, *(__int64 *)v19);
        v32 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v8);
        if ( v32 )
          return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                   v32,
                   &off_12E390);
        v10 = uu_join::Repr<Sep>::print_fields(a4, a2, v14, *(_QWORD *)(a1 + 64));
        v33 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v10);
        if ( v33 )
          return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                   v33,
                   &off_12E378);
        v11 = uu_join::Repr<Sep>::print_fields(a4, a2, v13, *(_QWORD *)(a3 + 64));
        v34 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v11);
        if ( v34 )
          return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                   v34,
                   &off_12E360);
      }
      v12 = uu_join::Repr<Sep>::print_line_ending(a4, a2);
      v35 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v12);
      if ( v35 )
        return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 v35,
                 &off_12E3A8);
    }
  }
  return 0LL;
}
