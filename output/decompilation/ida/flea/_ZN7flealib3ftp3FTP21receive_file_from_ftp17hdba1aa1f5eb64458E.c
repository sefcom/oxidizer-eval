__int64 __fastcall flealib::ftp::FTP::receive_file_from_ftp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v23; // rax
  char v24; // al
  __int128 v25; // kr10_16
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int128 v28; // xmm0
  _BYTE v29[40]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v30; // [rsp+28h] [rbp-130h]
  __int128 v31; // [rsp+30h] [rbp-128h] BYREF
  __int128 v32; // [rsp+40h] [rbp-118h]
  __int64 v33; // [rsp+50h] [rbp-108h]
  __int64 v34; // [rsp+58h] [rbp-100h] BYREF
  _BYTE *v35; // [rsp+60h] [rbp-F8h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+68h] [rbp-F0h]
  __int128 v37; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+80h] [rbp-D8h]
  __int64 v39; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v40; // [rsp+98h] [rbp-C0h]
  __int128 v41; // [rsp+A8h] [rbp-B0h]
  __int64 v42; // [rsp+B8h] [rbp-A0h]
  _BYTE v43[24]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-80h] BYREF
  __int128 v45; // [rsp+E0h] [rbp-78h]
  __int128 v46; // [rsp+F0h] [rbp-68h]
  __int128 v47; // [rsp+100h] [rbp-58h] BYREF
  __int64 v48; // [rsp+110h] [rbp-48h]
  _BYTE v49[56]; // [rsp+120h] [rbp-38h] BYREF

  v44 = a3;
  *(_QWORD *)&v45 = a4;
  WORD4(v45) = 21;
  ftp::ftp::FtpStream::connect(v29, &v44);
  v31 = *(_OWORD *)&v29[8];
  v32 = *(_OWORD *)&v29[24];
  if ( *(_QWORD *)v29 )
  {
    v40 = v31;
    v41 = v32;
    v39 = *(_QWORD *)v29;
    v42 = v30;
    ftp::ftp::FtpStream::login(v29, &v39, a5, a6, a7, a8);
    v14 = v29[0];
    if ( v29[0] != 4 )
      goto LABEL_11;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
    {
      *(_QWORD *)v29 = &off_70BA30;
      *(_QWORD *)&v29[8] = 1LL;
      *(_QWORD *)&v29[16] = 8LL;
      *(_OWORD *)&v29[24] = 0LL;
      v15 = log::__private_api::loc(&off_70BA70);
      *(_QWORD *)&v31 = aFlealibFtp;
      *((_QWORD *)&v31 + 1) = 12LL;
      *(_QWORD *)&v32 = aFlealibFtp;
      *((_QWORD *)&v32 + 1) = 12LL;
      v33 = v15;
      log::__private_api::log(v29, 4LL, &v31);
    }
    ftp::ftp::FtpStream::cwd(v29, &v39, a11, a12);
    v14 = v29[0];
    if ( v29[0] == 4 )
    {
      ftp::ftp::FtpStream::simple_retr(&v44, &v39, a9, a10);
      if ( (v44 & 1) != 0 )
      {
        v38 = v46;
        v37 = v45;
        if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
        {
          <T as alloc::string::SpecToString>::spec_to_string(v43, &v37);
          v35 = v43;
          v36 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)v29 = &off_70BA60;
          *(_QWORD *)&v29[8] = 1LL;
          *(_QWORD *)&v29[32] = 0LL;
          *(_QWORD *)&v29[16] = &v35;
          *(_QWORD *)&v29[24] = 1LL;
          v16 = log::__private_api::loc(&off_70BAB8);
          *(_QWORD *)&v31 = aFlealibFtp;
          *((_QWORD *)&v31 + 1) = 12LL;
          *(_QWORD *)&v32 = aFlealibFtp;
          *((_QWORD *)&v32 + 1) = 12LL;
          v33 = v16;
          log::__private_api::log(v29, 1LL, &v31);
          core::ptr::drop_in_place<alloc::string::String>(v43);
        }
        ftp::ftp::FtpStream::quit(v29, &v39);
        v17 = v29[0];
        if ( v29[0] == 4 )
        {
          <T as alloc::string::SpecToString>::spec_to_string(&v31, &v37);
          *(_QWORD *)&v29[23] = v32;
          *(_OWORD *)&v29[7] = v31;
          *(_BYTE *)a1 = 2;
          v18 = *(_OWORD *)&v29[15];
          *(_OWORD *)(a1 + 1) = *(_OWORD *)v29;
          *(_OWORD *)(a1 + 16) = v18;
        }
        else
        {
          v26 = *(_OWORD *)&v29[1];
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v29[16];
          *(_OWORD *)(a1 + 1) = v26;
          *(_BYTE *)a1 = v17;
        }
        core::ptr::drop_in_place<ftp::types::FtpError>(&v37);
      }
      else
      {
        v38 = v46;
        v37 = v45;
        std::path::Path::join(v49, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), a9, a10);
        v48 = v38;
        v47 = v37;
        v22 = flealib::ftp::FTP::write_file((__int64)v49, (__int64)&v47);
        if ( v22 )
        {
          v34 = v22;
          if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) )
          {
            <T as alloc::string::SpecToString>::spec_to_string(v43, &v34);
            v35 = v43;
            v36 = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)v29 = &off_70BA50;
            *(_QWORD *)&v29[8] = 1LL;
            *(_QWORD *)&v29[32] = 0LL;
            *(_QWORD *)&v29[16] = &v35;
            *(_QWORD *)&v29[24] = 1LL;
            v23 = log::__private_api::loc(&off_70BAA0);
            *(_QWORD *)&v31 = aFlealibFtp;
            *((_QWORD *)&v31 + 1) = 12LL;
            *(_QWORD *)&v32 = aFlealibFtp;
            *((_QWORD *)&v32 + 1) = 12LL;
            v33 = v23;
            log::__private_api::log(v29, 1LL, &v31);
            core::ptr::drop_in_place<alloc::string::String>(v43);
          }
          ftp::ftp::FtpStream::quit(v29, &v39);
          v24 = v29[0];
          if ( v29[0] == 4 )
          {
            <T as alloc::string::SpecToString>::spec_to_string(&v31, &v34);
            *(_QWORD *)&v29[23] = v32;
            *(_OWORD *)&v29[7] = v31;
            *(_BYTE *)a1 = 2;
            v25 = *(_OWORD *)&v29[15];
            *(_OWORD *)(a1 + 1) = *(_OWORD *)v29;
            *(_OWORD *)(a1 + 16) = v25;
          }
          else
          {
            v28 = *(_OWORD *)&v29[1];
            *(_OWORD *)(a1 + 16) = *(_OWORD *)&v29[16];
            *(_OWORD *)(a1 + 1) = v28;
            *(_BYTE *)a1 = v24;
          }
          core::ptr::drop_in_place<std::io::error::Error>(&v34);
        }
        else
        {
          if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER) >= 4 )
          {
            *(_QWORD *)v29 = &off_70BA40;
            *(_QWORD *)&v29[8] = 1LL;
            *(_QWORD *)&v29[16] = 8LL;
            *(_OWORD *)&v29[24] = 0LL;
            v27 = log::__private_api::loc(&off_70BA88);
            *(_QWORD *)&v31 = aFlealibFtp;
            *((_QWORD *)&v31 + 1) = 12LL;
            *(_QWORD *)&v32 = aFlealibFtp;
            *((_QWORD *)&v32 + 1) = 12LL;
            v33 = v27;
            log::__private_api::log(v29, 4LL, &v31);
          }
          ftp::ftp::FtpStream::quit(a1, &v39);
        }
      }
    }
    else
    {
LABEL_11:
      v19 = *(_OWORD *)&v29[1];
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v29[16];
      *(_OWORD *)(a1 + 1) = v19;
      *(_BYTE *)a1 = v14;
    }
    core::ptr::drop_in_place<ftp::ftp::FtpStream>(&v39);
  }
  else
  {
    v20 = v31;
    *(_OWORD *)(a1 + 16) = v32;
    *(_OWORD *)a1 = v20;
  }
  return a1;
}