__int64 just::signal_handler::SignalHandler::instance()
{
  __int64 v0; // rdx
  __int64 v2; // [rsp+0h] [rbp-118h] BYREF
  char v3; // [rsp+8h] [rbp-110h]
  __int64 *v4; // [rsp+10h] [rbp-108h] BYREF
  __int128 v5; // [rsp+18h] [rbp-100h]
  __int64 v6; // [rsp+28h] [rbp-F0h]
  __int64 v7; // [rsp+30h] [rbp-E8h]
  int v8; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-D0h]
  char v10; // [rsp+50h] [rbp-C8h]
  _QWORD v11[2]; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v12; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+78h] [rbp-A0h]
  char **v14; // [rsp+80h] [rbp-98h] BYREF
  __int128 v15; // [rsp+88h] [rbp-90h]
  __int64 v16; // [rsp+98h] [rbp-80h]
  __int64 v17; // [rsp+A0h] [rbp-78h]
  _QWORD v18[2]; // [rsp+E8h] [rbp-30h] BYREF
  _BYTE v19[32]; // [rsp+F8h] [rbp-20h] BYREF

  std::sync::poison::mutex::Mutex<T>::lock(&v8);
  if ( v8 == 1 )
  {
    v2 = v9;
    v3 = v10;
    v4 = &v2;
    *(_QWORD *)&v5 = <std::sync::poison::PoisonError<T> as core::fmt::Display>::fmt;
    v14 = &off_430EF0;
    *(_QWORD *)&v15 = 1LL;
    v17 = 0LL;
    *((_QWORD *)&v15 + 1) = &v4;
    v16 = 1LL;
    core::option::Option<T>::map_or_else(&v12, 0LL, v0, &v14);
    v15 = v12;
    v16 = v13;
    LOBYTE(v14) = 29;
    LOBYTE(v5) = 0;
    v4 = 0LL;
    *(_QWORD *)((char *)&v5 + 1) = 0xA0000000ALL;
    BYTE9(v5) = 1;
    just::color::Color::stderr((__int64)v19, (__int64)&v4);
    v18[0] = &v14;
    v18[1] = &off_430F00;
    v11[0] = v18;
    v11[1] = <just::color_display::Wrapper as core::fmt::Display>::fmt;
    v4 = (__int64 *)&unk_42DBD8;
    *(_QWORD *)&v5 = 2LL;
    v7 = 0LL;
    *((_QWORD *)&v5 + 1) = v11;
    v6 = 1LL;
    std::io::stdio::_eprint(&v4);
    core::ptr::drop_in_place<just::error::Error>(&v14);
    std::process::exit(1);
  }
  return v9;
}