__int64 __fastcall uu_tail::uumain::uumain()
{
  __int64 result; // rax
  char v1; // al
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r14
  __int128 v8; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD *v9; // [rsp+10h] [rbp-E8h]
  __int128 v10; // [rsp+18h] [rbp-E0h]
  __int128 v11; // [rsp+28h] [rbp-D0h]
  __int128 v12; // [rsp+38h] [rbp-C0h]
  __int64 v13; // [rsp+48h] [rbp-B0h]
  _QWORD v14[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+60h] [rbp-98h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp-88h]
  __int128 v17; // [rsp+78h] [rbp-80h]
  __int128 v18; // [rsp+88h] [rbp-70h]
  __int128 v19; // [rsp+98h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-50h]
  _QWORD v21[3]; // [rsp+B0h] [rbp-48h] BYREF
  char v22; // [rsp+C8h] [rbp-30h]
  __int128 v23; // [rsp+D0h] [rbp-28h] BYREF
  _QWORD *v24; // [rsp+E0h] [rbp-18h]

  uu_tail::args::parse_args((__int64)&v8);
  result = *((_QWORD *)&v8 + 1);
  if ( (_QWORD)v8 != 5LL )
  {
    v20 = v13;
    v19 = v12;
    v18 = v11;
    v17 = v10;
    v15 = v8;
    v16 = v9;
    uu_tail::args::Settings::check_warnings((__int64)&v15);
    v1 = uu_tail::args::Settings::verify((__int64 *)&v15);
    if ( v1 == 2 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v1 != 1 )
      {
        v7 = uu_tail::uu_tail((__int64)&v15);
        core::ptr::drop_in_place<uu_tail::args::Settings>(&v15);
        return v7;
      }
      v21[0] = 0LL;
      v21[1] = asc_1F813;
      v21[2] = 1LL;
      v22 = 1;
      v14[0] = v21;
      v14[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v8 = &off_1B85D0;
      *((_QWORD *)&v8 + 1) = 2LL;
      v9 = v14;
      v10 = 1uLL;
      core::option::Option<T>::map_or_else(&v23, &v8);
      LODWORD(v10) = 1;
      v8 = v23;
      v9 = v24;
      v6 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
             &v8,
             &v8,
             v2,
             v3,
             v4,
             v5);
    }
    core::ptr::drop_in_place<uu_tail::args::Settings>(&v15);
    return v6;
  }
  return result;
}
