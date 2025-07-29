unsigned __int64 binary::delete_self()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rax
  const char *v9; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+10h] [rbp-98h]
  const char *v11; // [rsp+18h] [rbp-90h]
  __int64 v12; // [rsp+20h] [rbp-88h]
  __int64 v13; // [rsp+28h] [rbp-80h]
  __int128 v14; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v15; // [rsp+40h] [rbp-68h]
  __int128 v16; // [rsp+48h] [rbp-60h]
  _BYTE v17[24]; // [rsp+68h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+80h] [rbp-28h] BYREF
  __int128 v19; // [rsp+90h] [rbp-18h] BYREF

  std::env::current_exe(&v14);
  core::result::Result<T,E>::unwrap(v17, &v14);
  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    v19 = *(_OWORD *)&v17[8];
    v18[0] = &v19;
    v18[1] = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&v14 = &off_18E6FF8;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = v18;
    v16 = 1uLL;
    v9 = aBinary_0;
    v10 = 6LL;
    v11 = aBinary_0;
    v12 = 6LL;
    v13 = log::__private_api::loc(&off_18E7040);
    log::__private_api::log(&v14, 3LL, &v9, aBinary_0, v0, v1);
  }
  v15 = *(_QWORD **)&v17[16];
  v14 = *(_OWORD *)v17;
  v2 = std::fs::remove_file(&v14);
  v9 = (const char *)v2;
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v9);
  result = core::sync::atomic::atomic_load();
  if ( v2 )
  {
    if ( !result )
      return result;
    *(_QWORD *)&v14 = &off_18E7008;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = (_QWORD *)&byte_8;
    v16 = 0LL;
    v4 = log::__private_api::loc(&off_18E7070);
    v9 = aBinary_0;
    v10 = 6LL;
    v11 = aBinary_0;
    v12 = 6LL;
    v13 = v4;
    v7 = 1LL;
  }
  else
  {
    if ( result <= 2 )
      return result;
    *(_QWORD *)&v14 = &off_18E7018;
    *((_QWORD *)&v14 + 1) = 1LL;
    v15 = (_QWORD *)&byte_8;
    v16 = 0LL;
    v8 = log::__private_api::loc(&off_18E7058);
    v9 = aBinary_0;
    v10 = 6LL;
    v11 = aBinary_0;
    v12 = 6LL;
    v13 = v8;
    v7 = 3LL;
  }
  return log::__private_api::log(&v14, v7, &v9, aBinary_0, v5, v6);
}