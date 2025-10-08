__int64 uu_tail::uumain::uumain()
{
  __int64 result; // rax
  char v1; // al
  __int64 v2; // rbx
  __int64 v3; // r14
  __int128 v4; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD *v5; // [rsp+10h] [rbp-E8h]
  __int128 v6; // [rsp+18h] [rbp-E0h]
  __int128 v7; // [rsp+28h] [rbp-D0h]
  __int128 v8; // [rsp+38h] [rbp-C0h]
  __int64 v9; // [rsp+48h] [rbp-B0h]
  _QWORD v10[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v12; // [rsp+70h] [rbp-88h]
  __int128 v13; // [rsp+78h] [rbp-80h]
  __int128 v14; // [rsp+88h] [rbp-70h]
  __int128 v15; // [rsp+98h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-50h]
  _QWORD v17[3]; // [rsp+B0h] [rbp-48h] BYREF
  char v18; // [rsp+C8h] [rbp-30h]
  __int128 v19; // [rsp+D0h] [rbp-28h] BYREF
  _QWORD *v20; // [rsp+E0h] [rbp-18h]

  uu_tail::args::parse_args((__int64)&v4);
  result = *((_QWORD *)&v4 + 1);
  if ( (_QWORD)v4 != 5LL )
  {
    v16 = v9;
    v15 = v8;
    v14 = v7;
    v13 = v6;
    v11 = v4;
    v12 = v5;
    uu_tail::args::Settings::check_warnings(&v11);
    v1 = uu_tail::args::Settings::verify(&v11);
    if ( v1 )
    {
      if ( v1 == 1 )
      {
        v17[0] = 0LL;
        v17[1] = asc_225C3;
        v17[2] = 1LL;
        v18 = 1;
        v10[0] = v17;
        v10[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v4 = &off_171AE0;
        *((_QWORD *)&v4 + 1) = 2LL;
        v5 = v10;
        v6 = 1uLL;
        core::option::Option<T>::map_or_else(&v19, &v4);
        LODWORD(v6) = 1;
        v4 = v19;
        v5 = v20;
        v2 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v4);
      }
      else
      {
        v2 = 0LL;
      }
      core::ptr::drop_in_place<uu_tail::args::Settings>(&v11);
      return v2;
    }
    else
    {
      v3 = uu_tail::uu_tail(&v11);
      core::ptr::drop_in_place<uu_tail::args::Settings>(&v11);
      return v3;
    }
  }
  return result;
}