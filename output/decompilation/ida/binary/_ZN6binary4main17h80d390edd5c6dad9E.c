__int64 binary::main()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  char ***v7; // rdi
  char v8; // bl
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // [rsp+0h] [rbp-98h] BYREF
  __int64 v17; // [rsp+8h] [rbp-90h]
  const char *v18; // [rsp+10h] [rbp-88h]
  __int64 v19; // [rsp+18h] [rbp-80h]
  __int64 v20; // [rsp+20h] [rbp-78h]
  char **v21; // [rsp+28h] [rbp-70h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h]
  __int64 v23; // [rsp+38h] [rbp-60h]
  __int128 v24; // [rsp+40h] [rbp-58h]
  __int128 v25; // [rsp+58h] [rbp-40h] BYREF
  __int64 v26; // [rsp+68h] [rbp-30h]
  __int128 v27; // [rsp+70h] [rbp-28h] BYREF
  __int64 v28; // [rsp+80h] [rbp-18h]

  colog::init();
  if ( geteuid() )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load() > 1 )
    {
      v21 = &off_18E6F30;
      v22 = 1LL;
      v23 = 8LL;
      v24 = 0LL;
      v16 = aBinary_0;
      v17 = 6LL;
      v18 = aBinary_0;
      v19 = 6LL;
      v20 = log::__private_api::loc(&off_18E6FE0);
      log::__private_api::log(&v21, 2LL, &v16, aBinary_0, v0, v1);
    }
    binary::delete_self();
    return binary::daemon::main();
  }
  else
  {
    std::env::current_exe(&v25);
    if ( __OFSUB__(0LL, (_QWORD)v25) )
    {
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v25);
      result = core::sync::atomic::atomic_load();
      if ( result )
      {
        v21 = &off_18E6F70;
        v22 = 1LL;
        v23 = 8LL;
        v24 = 0LL;
        v16 = aBinary_0;
        v17 = 6LL;
        v18 = aBinary_0;
        v19 = 6LL;
        v20 = log::__private_api::loc(&off_18E6FC8);
        return log::__private_api::log(&v21, 1LL, &v16, aBinary_0, v3, v4);
      }
    }
    else
    {
      v27 = v25;
      v28 = v26;
      v5 = std::path::Path::file_name(*((_QWORD *)&v25 + 1));
      if ( v5 )
      {
        v7 = (char ***)v5;
        v8 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, &unk_1700121, 10LL);
        v9 = core::sync::atomic::atomic_load();
        if ( v8 )
        {
          if ( v9 > 2 )
          {
            v21 = &off_18E6F40;
            v22 = 1LL;
            v23 = 8LL;
            v24 = 0LL;
            v16 = aBinary_0;
            v17 = 6LL;
            v18 = aBinary_0;
            v19 = 6LL;
            v20 = log::__private_api::loc(&off_18E6F98);
            log::__private_api::log(&v21, 3LL, &v16, aBinary_0, v10, v11);
          }
          binary::daemon::main();
        }
        else
        {
          if ( v9 > 2 )
          {
            v21 = &off_18E6F50;
            v22 = 1LL;
            v23 = 8LL;
            v24 = 0LL;
            v16 = aBinary_0;
            v17 = 6LL;
            v18 = aBinary_0;
            v19 = 6LL;
            v20 = log::__private_api::loc(&off_18E6F80);
            v7 = &v21;
            log::__private_api::log(&v21, 3LL, &v16, aBinary_0, v14, v15);
          }
          binary::install::main((__int64)v7);
          binary::delete_self();
        }
      }
      else if ( core::sync::atomic::atomic_load() )
      {
        v21 = &off_18E6F60;
        v22 = 1LL;
        v23 = 8LL;
        v24 = 0LL;
        v16 = aBinary_0;
        v17 = 6LL;
        v18 = aBinary_0;
        v19 = 6LL;
        v20 = log::__private_api::loc(&off_18E6FB0);
        log::__private_api::log(&v21, 1LL, &v16, aBinary_0, v12, v13);
      }
      result = core::ptr::drop_in_place<std::path::PathBuf>(&v27);
      if ( (_QWORD)v25 == 0x8000000000000000LL )
        return core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v25);
    }
  }
  return result;
}