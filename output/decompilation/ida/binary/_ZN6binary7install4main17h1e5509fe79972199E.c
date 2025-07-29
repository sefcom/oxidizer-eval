unsigned __int64 binary::install::main()
{
  unsigned __int64 result; // rax
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  const char *v4; // [rsp+0h] [rbp-78h] BYREF
  __int64 v5; // [rsp+8h] [rbp-70h]
  const char *v6; // [rsp+10h] [rbp-68h]
  __int64 v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+20h] [rbp-58h]
  char **v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h]
  __int64 v11; // [rsp+38h] [rbp-40h]
  __int128 v12; // [rsp+40h] [rbp-38h]
  _BYTE v13[32]; // [rsp+58h] [rbp-20h] BYREF

  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
  {
    v9 = &off_18E6AB8;
    v10 = 1LL;
    v11 = 8LL;
    v12 = 0LL;
    v4 = aBinaryInstall;
    v5 = 15LL;
    v6 = aBinaryInstall;
    v7 = 15LL;
    v8 = log::__private_api::loc(&off_18E6AD8);
    ((void (__fastcall *)(char ***, __int64, const char **))log::__private_api::log)(&v9, 3LL, &v4);
  }
  binary::install::copy_self();
  binary::install::drop_library(v13);
  binary::install::add_preload_hook(v13);
  result = core::sync::atomic::atomic_load();
  if ( result >= 3 )
  {
    v9 = &off_18E6AC8;
    v10 = 1LL;
    v11 = 8LL;
    v12 = 0LL;
    v1 = log::__private_api::loc(&off_18E6AF0);
    v4 = aBinaryInstall;
    v5 = 15LL;
    v6 = aBinaryInstall;
    v7 = 15LL;
    v8 = v1;
    return ((__int64 (__fastcall *)(char ***, __int64, const char **, const char *, __int64, __int64))log::__private_api::log)(
             &v9,
             3LL,
             &v4,
             aBinaryInstall,
             v2,
             v3);
  }
  return result;
}