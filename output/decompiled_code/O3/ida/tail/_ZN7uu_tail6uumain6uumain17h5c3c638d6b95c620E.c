__int64 __fastcall uu_tail::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // al
  __int64 v4; // rbx
  __int64 v5; // r14
  __int128 v6; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD *v7; // [rsp+10h] [rbp-E8h]
  __int128 v8; // [rsp+18h] [rbp-E0h]
  __int128 v9; // [rsp+28h] [rbp-D0h]
  __int128 v10; // [rsp+38h] [rbp-C0h]
  __int64 v11; // [rsp+48h] [rbp-B0h]
  _QWORD v12[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v14; // [rsp+70h] [rbp-88h]
  __int128 v15; // [rsp+78h] [rbp-80h]
  __int128 v16; // [rsp+88h] [rbp-70h]
  __int128 v17; // [rsp+98h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-50h]
  _QWORD v19[3]; // [rsp+B0h] [rbp-48h] BYREF
  char v20; // [rsp+C8h] [rbp-30h]
  __int128 v21; // [rsp+D0h] [rbp-28h] BYREF
  _QWORD *v22; // [rsp+E0h] [rbp-18h]

  uu_tail::args::parse_args(&v6, a1, a2);
  result = *((_QWORD *)&v6 + 1);
  if ( (_QWORD)v6 != 5LL )
  {
    v18 = v11;
    v17 = v10;
    v16 = v9;
    v15 = v8;
    v13 = v6;
    v14 = v7;
    uu_tail::args::Settings::check_warnings(&v13);
    v3 = uu_tail::args::Settings::verify(&v13);
    if ( v3 == 2 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( v3 != 1 )
      {
        v5 = uu_tail::uu_tail(&v13);
        core::ptr::drop_in_place<uu_tail::args::Settings>(&v13);
        return v5;
      }
      v19[0] = 0LL;
      v19[1] = asc_1F813;
      v19[2] = 1LL;
      v20 = 1;
      v12[0] = v19;
      v12[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v6 = &off_1B85D0;
      *((_QWORD *)&v6 + 1) = 2LL;
      v7 = v12;
      v8 = 1uLL;
      core::option::Option<T>::map_or_else(&v21, &v6);
      LODWORD(v8) = 1;
      v6 = v21;
      v7 = v22;
      v4 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v6);
    }
    core::ptr::drop_in_place<uu_tail::args::Settings>(&v13);
    return v4;
  }
  return result;
}
