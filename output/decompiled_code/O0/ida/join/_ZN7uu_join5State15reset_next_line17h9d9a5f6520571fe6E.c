_QWORD *__fastcall uu_join::State::reset_next_line(_QWORD *a1, __int64 a2)
{
  __int128 v3; // [rsp+58h] [rbp-F0h] BYREF
  __int128 v4; // [rsp+68h] [rbp-E0h]
  __int128 v5; // [rsp+78h] [rbp-D0h]
  int v6[12]; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v8; // [rsp+C0h] [rbp-88h]
  __int128 v9; // [rsp+D0h] [rbp-78h]
  __int128 v10; // [rsp+E0h] [rbp-68h]
  __int128 v11; // [rsp+F0h] [rbp-58h]
  _OWORD v12[3]; // [rsp+100h] [rbp-48h] BYREF
  char v13; // [rsp+137h] [rbp-11h]

  v13 = 0;
  uu_join::State::next_line(v6);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v3, v6);
  if ( (_QWORD)v3 == 0x8000000000000001LL )
  {
    v7 = *((_QWORD *)&v3 + 1);
    v8 = v4;
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      &v7,
      &off_12E300);
  }
  else
  {
    v11 = v5;
    v10 = v4;
    v9 = v3;
    v13 = 0;
    v12[2] = v5;
    v12[1] = v4;
    v12[0] = v3;
    uu_join::State::reset(a2, v12);
    *a1 = 0x8000000000000001LL;
  }
  return a1;
}
