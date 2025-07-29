_OWORD *__fastcall flealib::ftp::FTP::send_file_to_ftp(
        _OWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  __int128 v18; // kr00_16
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  char **v28; // rdi
  _BYTE v29[40]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-D0h]
  __int128 v31; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+40h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-A8h]
  __int64 v34; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int128 v35; // [rsp+60h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-88h]
  __int64 v37; // [rsp+78h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-70h] BYREF
  __int128 v39; // [rsp+90h] [rbp-68h]
  __int128 v40; // [rsp+A0h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-48h]
  unsigned __int128 v42; // [rsp+B8h] [rbp-40h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-30h]
  _QWORD v44[5]; // [rsp+D0h] [rbp-28h] BYREF

  v35 = __PAIR128__(a4, a3);
  LOWORD(v36) = 21;
  ftp::ftp::FtpStream::connect(v29, &v35);
  v31 = *(_OWORD *)&v29[8];
  v32 = *(_OWORD *)&v29[24];
  if ( !*(_QWORD *)v29 )
  {
    v20 = v31;
    a1[1] = v32;
    *a1 = v20;
    return a1;
  }
  v39 = v31;
  v40 = v32;
  v38 = *(_QWORD *)v29;
  v41 = v30;
  ftp::ftp::FtpStream::login(v29, &v38, a5, a6, a7, a8);
  v14 = v29[0];
  if ( v29[0] != 4 )
    goto LABEL_12;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
  {
    *(_QWORD *)v29 = &off_70BA30;
    *(_QWORD *)&v29[8] = 1LL;
    *(_QWORD *)&v29[16] = 8LL;
    *(_OWORD *)&v29[24] = 0LL;
    v15 = log::__private_api::loc(&off_70BAF0);
    *(_QWORD *)&v31 = aFlealibFtp;
    *((_QWORD *)&v31 + 1) = 12LL;
    *(_QWORD *)&v32 = aFlealibFtp;
    *((_QWORD *)&v32 + 1) = 12LL;
    v33 = v15;
    log::__private_api::log(v29, 4LL, &v31);
  }
  ftp::ftp::FtpStream::cwd(v29, &v38, a11, a12);
  v14 = v29[0];
  if ( v29[0] == 4 )
  {
    std::sys::os_str::bytes::Slice::to_str(v29, a9, a10);
    if ( *(_DWORD *)v29 == 1 )
      core::option::unwrap_failed(&off_70BB08);
    flealib::ftp::FTP::read_file_to_vec(&v42);
    if ( !__OFSUB__(0LL, (_QWORD)v42) )
    {
      v36 = v43;
      v35 = v42;
      v37 = 0LL;
      v22 = std::path::Path::file_name(a9, a10);
      if ( v22 )
      {
        std::sys::os_str::bytes::Slice::to_str(&v31, v22, v23);
        if ( (_DWORD)v31 != 1 )
        {
          ftp::ftp::FtpStream::put(v29, &v38, *((_QWORD *)&v31 + 1), v32, &v35);
          v24 = v29[0];
          if ( v29[0] == 4 )
          {
            if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
            {
              *(_QWORD *)v29 = &off_70BAD0;
              *(_QWORD *)&v29[8] = 1LL;
              *(_QWORD *)&v29[16] = 8LL;
              *(_OWORD *)&v29[24] = 0LL;
              v25 = log::__private_api::loc(&off_70BB50);
              *(_QWORD *)&v31 = aFlealibFtp;
              *((_QWORD *)&v31 + 1) = 12LL;
              *(_QWORD *)&v32 = aFlealibFtp;
              *((_QWORD *)&v32 + 1) = 12LL;
              v33 = v25;
              log::__private_api::log(v29, 4LL, &v31);
            }
            core::ptr::drop_in_place<lettre::message::body::Body>(&v35);
            ftp::ftp::FtpStream::quit(a1, &v38);
          }
          else
          {
            v27 = *(_OWORD *)&v29[1];
            a1[1] = *(_OWORD *)&v29[16];
            *(_OWORD *)((char *)a1 + 1) = v27;
            *(_BYTE *)a1 = v24;
            core::ptr::drop_in_place<lettre::message::body::Body>(&v35);
          }
          goto LABEL_13;
        }
        v28 = &off_70BB38;
      }
      else
      {
        v28 = &off_70BB20;
      }
      core::option::unwrap_failed(v28);
    }
    v34 = *((_QWORD *)&v42 + 1);
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
    {
      <T as alloc::string::SpecToString>::spec_to_string(&v35, &v34);
      v44[0] = &v35;
      v44[1] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v29 = &off_70BAE0;
      *(_QWORD *)&v29[8] = 1LL;
      *(_QWORD *)&v29[32] = 0LL;
      *(_QWORD *)&v29[16] = v44;
      *(_QWORD *)&v29[24] = 1LL;
      v16 = log::__private_api::loc(&off_70BB68);
      *(_QWORD *)&v31 = aFlealibFtp;
      *((_QWORD *)&v31 + 1) = 12LL;
      *(_QWORD *)&v32 = aFlealibFtp;
      *((_QWORD *)&v32 + 1) = 12LL;
      v33 = v16;
      log::__private_api::log(v29, 1LL, &v31);
      core::ptr::drop_in_place<alloc::string::String>(&v35);
    }
    ftp::ftp::FtpStream::quit(v29, &v38);
    v17 = v29[0];
    if ( v29[0] == 4 )
    {
      <T as alloc::string::SpecToString>::spec_to_string(&v31, &v34);
      *(_QWORD *)&v29[23] = v32;
      *(_OWORD *)&v29[7] = v31;
      *(_BYTE *)a1 = 2;
      v18 = *(_OWORD *)&v29[15];
      *(_OWORD *)((char *)a1 + 1) = *(_OWORD *)v29;
      a1[1] = v18;
    }
    else
    {
      v26 = *(_OWORD *)&v29[1];
      a1[1] = *(_OWORD *)&v29[16];
      *(_OWORD *)((char *)a1 + 1) = v26;
      *(_BYTE *)a1 = v17;
    }
    core::ptr::drop_in_place<std::io::error::Error>(&v34);
  }
  else
  {
LABEL_12:
    v19 = *(_OWORD *)&v29[1];
    a1[1] = *(_OWORD *)&v29[16];
    *(_OWORD *)((char *)a1 + 1) = v19;
    *(_BYTE *)a1 = v14;
  }
LABEL_13:
  core::ptr::drop_in_place<ftp::ftp::FtpStream>(&v38);
  return a1;
}