unsigned __int64 binary::daemon::fork_to_bg()
{
  __int64 v0; // r8
  __int64 v1; // r9
  unsigned __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // [rsp+0h] [rbp-58h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h]
  const char *v11; // [rsp+10h] [rbp-48h]
  __int64 v12; // [rsp+18h] [rbp-40h]
  __int64 v13; // [rsp+20h] [rbp-38h]
  char **v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int128 v17; // [rsp+40h] [rbp-18h]

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    v14 = &off_18E71F8;
    v15 = 1LL;
    v16 = 8LL;
    v17 = 0LL;
    v9 = aBinaryDaemon;
    v10 = 14LL;
    v11 = aBinaryDaemon;
    v12 = 14LL;
    v13 = log::__private_api::loc(&off_18E7228);
    log::__private_api::log(&v14, 3LL, &v9, aBinaryDaemon, v0, v1);
  }
  if ( fork() > 0 )
    goto LABEL_9;
  if ( setsid() < 0 )
  {
    if ( core::sync::atomic::atomic_load() )
    {
      v14 = &off_18E7208;
      v15 = 1LL;
      v16 = 8LL;
      v17 = 0LL;
      v6 = log::__private_api::loc(&off_18E7258);
      v9 = aBinaryDaemon;
      v10 = 14LL;
      v11 = aBinaryDaemon;
      v12 = 14LL;
      v13 = v6;
      log::__private_api::log(&v14, 1LL, &v9, aBinaryDaemon, v7, v8);
    }
    exit(1);
  }
  if ( fork() > 0 )
LABEL_9:
    exit(0);
  result = core::sync::atomic::atomic_load();
  if ( result > 2 )
  {
    v14 = &off_18E7218;
    v15 = 1LL;
    v16 = 8LL;
    v17 = 0LL;
    v3 = log::__private_api::loc(&off_18E7240);
    v9 = aBinaryDaemon;
    v10 = 14LL;
    v11 = aBinaryDaemon;
    v12 = 14LL;
    v13 = v3;
    return log::__private_api::log(&v14, 3LL, &v9, aBinaryDaemon, v4, v5);
  }
  return result;
}