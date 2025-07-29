void __noreturn spyware::run_server_loop()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // [rsp+0h] [rbp-B8h] BYREF
  const char *v5; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v6; // [rsp+10h] [rbp-A8h]
  const char *v7; // [rsp+18h] [rbp-A0h]
  __int64 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+28h] [rbp-90h]
  __int64 v10; // [rsp+30h] [rbp-88h] BYREF
  char **v11; // [rsp+38h] [rbp-80h] BYREF
  __int64 v12; // [rsp+40h] [rbp-78h]
  __int64 **v13; // [rsp+48h] [rbp-70h]
  __int128 v14; // [rsp+50h] [rbp-68h]
  __int64 *v15; // [rsp+68h] [rbp-50h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+70h] [rbp-48h]
  __int64 *v17; // [rsp+78h] [rbp-40h]
  __int64 (__fastcall *v18)(); // [rsp+80h] [rbp-38h]

  while ( 1 )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
    {
      v11 = &off_B92A0;
      v12 = 1LL;
      v13 = (__int64 **)&byte_8;
      v14 = 0LL;
      v2 = log::__private_api::loc(&off_B9300);
      v5 = aSpyware;
      v6 = 7LL;
      v7 = aSpyware;
      v8 = 7LL;
      v9 = v2;
      log::__private_api::log(&v11, 4LL, &v5);
      v0 = spyware::communication::server::run_server(13337);
      if ( !v0 )
        goto LABEL_9;
    }
    else
    {
      v0 = spyware::communication::server::run_server(13337);
      if ( !v0 )
        goto LABEL_9;
    }
    v10 = v0;
    if ( core::sync::atomic::atomic_load() )
    {
      v4 = 5LL;
      v15 = &v10;
      v16 = <std::io::error::Error as core::fmt::Display>::fmt;
      v17 = &v4;
      v18 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v11 = &off_B92B0;
      v12 = 3LL;
      v13 = &v15;
      v14 = 2uLL;
      v1 = log::__private_api::loc(&off_B9318);
      v5 = aSpyware;
      v6 = 7LL;
      v7 = aSpyware;
      v8 = 7LL;
      v9 = v1;
      log::__private_api::log(&v11, 1LL, &v5);
    }
    core::ptr::drop_in_place<std::io::error::Error>(&v10);
LABEL_9:
    if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
    {
      v4 = 5LL;
      v15 = &v4;
      v16 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v11 = &off_B92E0;
      v12 = 2LL;
      v13 = &v15;
      v14 = 1uLL;
      v3 = log::__private_api::loc(&off_B9330);
      v5 = aSpyware;
      v6 = 7LL;
      v7 = aSpyware;
      v8 = 7LL;
      v9 = v3;
      log::__private_api::log(&v11, 4LL, &v5);
    }
    std::thread::sleep(5LL, 0LL);
  }
}