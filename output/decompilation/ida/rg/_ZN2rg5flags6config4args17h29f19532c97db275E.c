__int64 __fastcall rg::flags::config::args(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 i; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  __int64 v22; // [rsp+0h] [rbp-128h] BYREF
  __int128 v23; // [rsp+8h] [rbp-120h]
  __int128 v24; // [rsp+18h] [rbp-110h]
  __int64 v25; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v27; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+50h] [rbp-D8h] BYREF
  const char *v29; // [rsp+60h] [rbp-C8h]
  __int128 v30; // [rsp+68h] [rbp-C0h]
  __int64 v31; // [rsp+78h] [rbp-B0h]
  __int128 *v32; // [rsp+80h] [rbp-A8h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+88h] [rbp-A0h]
  __int128 *v34; // [rsp+90h] [rbp-98h]
  __int64 (__fastcall *v35)(); // [rsp+98h] [rbp-90h]
  __int64 v36; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-80h]
  __int64 v38; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-68h] BYREF
  const char *v40; // [rsp+D0h] [rbp-58h]
  __int64 v41; // [rsp+D8h] [rbp-50h]
  __int128 v42; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-38h]

  std::env::var_os(&v22, aRipgrepConfigP, 19LL);
  v2 = v22;
  result = -v22;
  if ( __OFSUB__(-v22, 1LL) )
  {
    *a1 = 0LL;
    a1[1] = 8LL;
    a1[2] = 0LL;
  }
  else
  {
    v4 = v23;
    if ( *((_QWORD *)&v23 + 1) )
    {
      v36 = v22;
      v37 = v23;
      rg::flags::config::parse(&v28, &v36);
      if ( (_QWORD)v28 == 0x8000000000000000LL )
      {
        v25 = *((_QWORD *)&v28 + 1);
        if ( rg::messages::messages() )
        {
          v22 = std::io::stdio::stdout();
          v5 = std::io::stdio::Stdout::lock(&v22);
          v22 = (__int64)&std::io::stdio::stderr::INSTANCE;
          *(_QWORD *)&v27 = std::io::stdio::Stdout::lock(&v22);
          v22 = (__int64)&off_3E99C8;
          *(_QWORD *)&v23 = 1LL;
          *((_QWORD *)&v23 + 1) = 8LL;
          v24 = 0LL;
          v6 = std::io::Write::write_fmt(&v27, &v22);
          v32 = (__int128 *)v6;
          if ( v6 )
          {
            v22 = v6;
            v20 = std::io::error::Error::kind(v6);
            std::process::exit(2 * (v20 != 11));
          }
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v32);
          v32 = (__int128 *)&v25;
          v33 = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
          v22 = (__int64)&off_3E99D8;
          *(_QWORD *)&v23 = 2LL;
          *((_QWORD *)&v23 + 1) = &v32;
          v24 = 1uLL;
          v7 = std::io::Write::write_fmt(&v27, &v22);
          *(_QWORD *)&v39 = v7;
          if ( v7 )
          {
            v22 = v7;
            v21 = std::io::error::Error::kind(v7);
            std::process::exit(2 * (v21 != 11));
          }
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v39);
          core::ptr::drop_in_place<std::io::stdio::StderrLock>(v5);
          core::ptr::drop_in_place<std::io::stdio::StderrLock>(v27);
        }
        *a1 = 0LL;
        a1[1] = 8LL;
        a1[2] = 0LL;
        core::ptr::drop_in_place<anyhow::Error>(&v25);
      }
      else
      {
        v40 = v29;
        v39 = v28;
        v42 = v30;
        v8 = v31;
        v43 = v31;
        if ( v31 )
        {
          v41 = v31;
          <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v32, &v42);
          for ( i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v32);
                i;
                i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v32) )
          {
            v38 = i;
            if ( rg::messages::messages() )
            {
              v22 = std::io::stdio::stdout();
              v10 = std::io::stdio::Stdout::lock(&v22);
              v22 = (__int64)&std::io::stdio::stderr::INSTANCE;
              v26 = std::io::stdio::Stdout::lock(&v22);
              v22 = (__int64)&off_3E99C8;
              *(_QWORD *)&v23 = 1LL;
              *((_QWORD *)&v23 + 1) = 8LL;
              v24 = 0LL;
              v11 = std::io::Write::write_fmt(&v26, &v22);
              *(_QWORD *)&v28 = v11;
              if ( v11 )
              {
                v22 = v11;
                v19 = std::io::error::Error::kind(v11);
                std::process::exit(2 * (v19 != 11));
              }
              core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v28);
              v27 = v37;
              *(_QWORD *)&v28 = &v27;
              *((_QWORD *)&v28 + 1) = <std::path::Display as core::fmt::Display>::fmt;
              v29 = (const char *)&v38;
              *(_QWORD *)&v30 = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
              v22 = (__int64)&unk_3E99F8;
              *(_QWORD *)&v23 = 3LL;
              *((_QWORD *)&v23 + 1) = &v28;
              v24 = 2uLL;
              v12 = std::io::Write::write_fmt(&v26, &v22);
              v25 = v12;
              if ( v12 )
              {
                v22 = v12;
                v18 = std::io::error::Error::kind(v12);
                std::process::exit(2 * (v18 != 11));
              }
              core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v25);
              core::ptr::drop_in_place<std::io::stdio::StderrLock>(v10);
              core::ptr::drop_in_place<std::io::stdio::StderrLock>(v26);
            }
            core::ptr::drop_in_place<anyhow::Error>(&v38);
          }
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<anyhow::Error>>(&v32);
          v8 = v41;
        }
        if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
        {
          v27 = v37;
          v32 = &v27;
          v33 = <std::path::Display as core::fmt::Display>::fmt;
          v34 = &v39;
          v35 = <alloc::vec::Vec<T,A> as core::fmt::Debug>::fmt;
          v17 = log::__private_api::loc(&off_3E9A48, 0LL, v13, v14, v15, v16, &unk_3E9A28, 2LL, &v32, 2LL, 0LL);
          *(_QWORD *)&v28 = aRgFlagsConfig;
          *((_QWORD *)&v28 + 1) = 17LL;
          v29 = aRgFlagsConfig;
          *(_QWORD *)&v30 = 17LL;
          *((_QWORD *)&v30 + 1) = v17;
          log::__private_api::log(&v22, 4LL, &v28);
        }
        a1[2] = v40;
        *(_OWORD *)a1 = v39;
        if ( !v8 )
          core::ptr::drop_in_place<alloc::vec::Vec<anyhow::Error>>(&v42);
      }
      return core::ptr::drop_in_place<std::path::PathBuf>(&v36);
    }
    else
    {
      *a1 = 0LL;
      a1[1] = 8LL;
      a1[2] = 0LL;
      return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v2, v4);
    }
  }
  return result;
}