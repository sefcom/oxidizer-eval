unsigned __int64 binary::daemon::close_all_fds()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rax
  int v3; // ebx
  int v4; // edi
  unsigned __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rax
  const char *v11; // [rsp+8h] [rbp-70h] BYREF
  __int64 v12; // [rsp+10h] [rbp-68h]
  const char *v13; // [rsp+18h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-50h]
  char **v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int128 v19; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    v16 = &off_18E7300;
    v17 = 1LL;
    v18 = 8LL;
    v19 = 0LL;
    v11 = aBinaryDaemon;
    v12 = 14LL;
    v13 = aBinaryDaemon;
    v14 = 14LL;
    v15 = log::__private_api::loc(&off_18E7330);
    log::__private_api::log(&v16, 3LL, &v11, aBinaryDaemon, v0, v1);
  }
  v2 = sysconf(4);
  if ( v2 <= 0 )
  {
    result = core::sync::atomic::atomic_load();
    if ( !result )
      return result;
    v16 = &off_18E7320;
    v17 = 1LL;
    v18 = 8LL;
    v19 = 0LL;
    v10 = log::__private_api::loc(&off_18E7348);
    v11 = aBinaryDaemon;
    v12 = 14LL;
    v13 = aBinaryDaemon;
    v14 = 14LL;
    v15 = v10;
    v9 = 1LL;
    return log::__private_api::log(&v16, v9, &v11, aBinaryDaemon, v7, v8);
  }
  v3 = v2;
  if ( (int)v2 >= 4 )
  {
    v4 = 3;
    do
      close(v4++);
    while ( v3 != v4 );
  }
  result = core::sync::atomic::atomic_load();
  if ( result >= 3 )
  {
    v16 = &off_18E7310;
    v17 = 1LL;
    v18 = 8LL;
    v19 = 0LL;
    v6 = log::__private_api::loc(&off_18E7360);
    v11 = aBinaryDaemon;
    v12 = 14LL;
    v13 = aBinaryDaemon;
    v14 = 14LL;
    v15 = v6;
    v9 = 3LL;
    return log::__private_api::log(&v16, v9, &v11, aBinaryDaemon, v7, v8);
  }
  return result;
}