__int64 binary::main()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  const char *v15; // [rsp+0h] [rbp-98h] BYREF
  __int64 v16; // [rsp+8h] [rbp-90h]
  const char *v17; // [rsp+10h] [rbp-88h]
  __int64 v18; // [rsp+18h] [rbp-80h]
  __int64 v19; // [rsp+20h] [rbp-78h]
  char **v20; // [rsp+28h] [rbp-70h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int128 v23; // [rsp+40h] [rbp-58h]
  __int128 v24; // [rsp+58h] [rbp-40h] BYREF
  __int64 v25; // [rsp+68h] [rbp-30h]
  __int128 v26; // [rsp+70h] [rbp-28h] BYREF
  __int64 v27; // [rsp+80h] [rbp-18h]

  colog::init();
  if ( geteuid() )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load() > 1 )
    {
      v20 = &off_18E6F30;
      v21 = 1LL;
      v22 = 8LL;
      v23 = 0LL;
      v15 = aBinary_0;
      v16 = 6LL;
      v17 = aBinary_0;
      v18 = 6LL;
      v19 = log::__private_api::loc(&off_18E6FE0);
      log::__private_api::log(&v20, 2LL, &v15, aBinary_0, v0, v1);
    }
    binary::delete_self();
    return binary::daemon::main();
  }
  else
  {
    std::env::current_exe(&v24);
    if ( __OFSUB__(0LL, (_QWORD)v24) )
    {
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v24);
      result = core::sync::atomic::atomic_load();
      if ( result )
      {
        v20 = &off_18E6F70;
        v21 = 1LL;
        v22 = 8LL;
        v23 = 0LL;
        v15 = aBinary_0;
        v16 = 6LL;
        v17 = aBinary_0;
        v18 = 6LL;
        v19 = log::__private_api::loc(&off_18E6FC8);
        return log::__private_api::log(&v20, 1LL, &v15, aBinary_0, v3, v4);
      }
    }
    else
    {
      v26 = v24;
      v27 = v25;
      v5 = std::path::Path::file_name(*((_QWORD *)&v24 + 1));
      if ( v5 )
      {
        v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, &unk_1700121, 10LL);
        v8 = core::sync::atomic::atomic_load();
        if ( v7 )
        {
          if ( v8 > 2 )
          {
            v20 = &off_18E6F40;
            v21 = 1LL;
            v22 = 8LL;
            v23 = 0LL;
            v15 = aBinary_0;
            v16 = 6LL;
            v17 = aBinary_0;
            v18 = 6LL;
            v19 = log::__private_api::loc(&off_18E6F98);
            log::__private_api::log(&v20, 3LL, &v15, aBinary_0, v9, v10);
          }
          binary::daemon::main();
        }
        else
        {
          if ( v8 > 2 )
          {
            v20 = &off_18E6F50;
            v21 = 1LL;
            v22 = 8LL;
            v23 = 0LL;
            v15 = aBinary_0;
            v16 = 6LL;
            v17 = aBinary_0;
            v18 = 6LL;
            v19 = log::__private_api::loc(&off_18E6F80);
            log::__private_api::log(&v20, 3LL, &v15, aBinary_0, v13, v14);
          }
          binary::install::main();
          binary::delete_self();
        }
      }
      else if ( core::sync::atomic::atomic_load() )
      {
        v20 = &off_18E6F60;
        v21 = 1LL;
        v22 = 8LL;
        v23 = 0LL;
        v15 = aBinary_0;
        v16 = 6LL;
        v17 = aBinary_0;
        v18 = 6LL;
        v19 = log::__private_api::loc(&off_18E6FB0);
        log::__private_api::log(&v20, 1LL, &v15, aBinary_0, v11, v12);
      }
      result = core::ptr::drop_in_place<std::path::PathBuf>(&v26);
      if ( (_QWORD)v24 == 0x8000000000000000LL )
        return core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v24);
    }
  }
  return result;
}