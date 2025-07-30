unsigned __int64 __fastcall binary::install::main(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  const char *v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+8h] [rbp-70h]
  const char *v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+18h] [rbp-60h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  char **v12; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-38h]
  _BYTE v16[32]; // [rsp+58h] [rbp-20h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load(a1) >= 3 )
  {
    v12 = &off_18E6AB8;
    v13 = 1LL;
    v14 = 8LL;
    v15 = 0LL;
    v7 = aBinaryInstall;
    v8 = 15LL;
    v9 = aBinaryInstall;
    v10 = 15LL;
    v11 = log::__private_api::loc(&off_18E6AD8);
    log::__private_api::log(&v12, 3LL, &v7, aBinaryInstall, v1, v2);
  }
  binary::install::copy_self();
  binary::install::drop_library((__int64)v16);
  binary::install::add_preload_hook((__int64)v16);
  result = core::sync::atomic::atomic_load(v16);
  if ( result >= 3 )
  {
    v12 = &off_18E6AC8;
    v13 = 1LL;
    v14 = 8LL;
    v15 = 0LL;
    v4 = log::__private_api::loc(&off_18E6AF0);
    v7 = aBinaryInstall;
    v8 = 15LL;
    v9 = aBinaryInstall;
    v10 = 15LL;
    v11 = v4;
    return log::__private_api::log(&v12, 3LL, &v7, aBinaryInstall, v5, v6);
  }
  return result;
}