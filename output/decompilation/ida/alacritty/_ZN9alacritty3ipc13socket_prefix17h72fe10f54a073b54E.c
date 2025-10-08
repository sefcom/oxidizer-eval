__int64 __fastcall alacritty::ipc::socket_prefix(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  __int128 v4; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v5; // [rsp+10h] [rbp-98h]
  __int64 v6; // [rsp+20h] [rbp-88h]
  _BYTE v7[8]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v8; // [rsp+40h] [rbp-68h]
  __int64 v9; // [rsp+48h] [rbp-60h]
  _QWORD v10[2]; // [rsp+50h] [rbp-58h] BYREF
  _OWORD v11[2]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v12[40]; // [rsp+80h] [rbp-28h] BYREF

  std::env::var(v11, aWaylandDisplay, 15LL);
  if ( LODWORD(v11[0]) == 1 )
  {
    alacritty::ipc::socket_prefix::{{closure}}(&v4, (char *)v11 + 8);
  }
  else
  {
    v5 = v11[1];
    v4 = v11[0];
  }
  ((void (__fastcall *)(_BYTE *, __int128 *))core::result::Result<T,E>::unwrap_or_default)(v7, &v4);
  alloc::str::<impl str>::replace(v12, v8, v9, 47LL, asc_F76B5, v1, v4, *((_QWORD *)&v4 + 1), v5, *((_QWORD *)&v5 + 1));
  v10[0] = v12;
  v10[1] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v4 = &off_883020;
  *((_QWORD *)&v4 + 1) = 1LL;
  v6 = 0LL;
  *(_QWORD *)&v5 = v10;
  *((_QWORD *)&v5 + 1) = 1LL;
  core::option::Option<T>::map_or_else(a1, 0LL, v2, &v4);
  core::ptr::drop_in_place<alloc::string::String>(v12);
  return core::ptr::drop_in_place<alloc::string::String>(v7);
}