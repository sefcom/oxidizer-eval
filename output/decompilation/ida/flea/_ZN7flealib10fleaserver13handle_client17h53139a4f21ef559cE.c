__int64 __fastcall flealib::fleaserver::handle_client(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  char v12; // bp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // [rsp+8h] [rbp-530h] BYREF
  char v20; // [rsp+Fh] [rbp-529h] BYREF
  __int128 v21; // [rsp+10h] [rbp-528h] BYREF
  __int128 v22; // [rsp+20h] [rbp-518h] BYREF
  __int128 v23; // [rsp+30h] [rbp-508h]
  __int128 v24; // [rsp+40h] [rbp-4F8h] BYREF
  _BYTE v25[48]; // [rsp+50h] [rbp-4E8h] BYREF
  __int128 v26; // [rsp+80h] [rbp-4B8h] BYREF
  __int64 v27; // [rsp+90h] [rbp-4A8h]
  _BYTE v28[24]; // [rsp+A0h] [rbp-498h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+B8h] [rbp-480h]
  __int64 v30; // [rsp+C0h] [rbp-478h]
  __int64 v31; // [rsp+C8h] [rbp-470h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-468h] BYREF
  const char *v33; // [rsp+E0h] [rbp-458h]
  __int64 v34; // [rsp+E8h] [rbp-450h]
  __int64 v35; // [rsp+F0h] [rbp-448h]
  __int64 v36; // [rsp+F8h] [rbp-440h]
  __int64 v37; // [rsp+100h] [rbp-438h]
  _BYTE s[1072]; // [rsp+108h] [rbp-430h] BYREF

  v37 = a2;
  v19 = a1;
  memset(s, 0, 0x400uLL);
  v36 = *a3 + 16LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = <std::net::tcp::TcpStream as std::io::Read>::read(&v19, s, 1024LL);
      v6 = v5;
      v30 = v4;
      v31 = v5;
      if ( !v4 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v5) != 13 )
      {
        *(_QWORD *)&v24 = v31;
        if ( core::sync::atomic::atomic_load() )
        {
          std::net::tcp::TcpStream::peer_addr(&v21, &v19);
          core::result::Result<T,E>::unwrap(&v32, &v21, &off_70B378);
          <T as alloc::string::SpecToString>::spec_to_string(&v26, &v24);
          *(_QWORD *)v28 = &v32;
          *(_QWORD *)&v28[8] = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
          *(_QWORD *)&v28[16] = &v26;
          v29 = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v21 = &off_70B2B0;
          *((_QWORD *)&v21 + 1) = 2LL;
          *(_QWORD *)&v23 = 0LL;
          *(_QWORD *)&v22 = v28;
          *((_QWORD *)&v22 + 1) = 2LL;
          v14 = log::__private_api::loc(&off_70B390);
          *(_QWORD *)v25 = aFlealibFleaser;
          *(_QWORD *)&v25[8] = 19LL;
          *(_QWORD *)&v25[16] = aFlealibFleaser;
          *(_QWORD *)&v25[24] = 19LL;
          *(_QWORD *)&v25[32] = v14;
          log::__private_api::log(&v21, 1LL, v25);
          core::ptr::drop_in_place<alloc::string::String>(&v26);
        }
        v15 = std::net::tcp::TcpStream::shutdown(&v19, 2LL);
        core::result::Result<T,E>::unwrap(v15, &off_70B3A8);
        core::ptr::drop_in_place<std::io::error::Error>(&v24);
        return core::ptr::drop_in_place<std::net::tcp::TcpStream>(v19);
      }
      std::thread::sleep(0LL, 100000000LL);
      if ( (v30 & 1) != 0 )
        core::ptr::drop_in_place<std::io::error::Error>(&v31);
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v21);
    v27 = v22;
    v26 = v21;
    if ( (unsigned __int64)(v6 - 1023) > 0xFFFFFFFFFFFFFC01LL )
      break;
    v7 = std::net::tcp::TcpStream::shutdown(&v19, 2LL);
    core::result::Result<T,E>::unwrap(v7, &off_70B360);
LABEL_10:
    v9 = 0;
LABEL_11:
    core::ptr::drop_in_place<alloc::string::String>(&v26);
    if ( !v9 )
      return core::ptr::drop_in_place<std::net::tcp::TcpStream>(v19);
  }
  s[v6] = 0;
  core::str::converts::from_utf8(v28, s, 1024LL);
  if ( (v28[0] & 1) != 0 )
  {
    v8 = std::net::tcp::TcpStream::shutdown(&v19, 2LL);
    core::result::Result<T,E>::unwrap(v8, &off_70B348);
    goto LABEL_10;
  }
  v24 = *(_OWORD *)&v28[8];
  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
  {
    *(_QWORD *)&v32 = &v24;
    *((_QWORD *)&v32 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v21 = &off_70B2A0;
    *((_QWORD *)&v21 + 1) = 1LL;
    *(_QWORD *)&v23 = 0LL;
    *(_QWORD *)&v22 = &v32;
    *((_QWORD *)&v22 + 1) = 1LL;
    v10 = log::__private_api::loc(&off_70B2D0);
    *(_QWORD *)v25 = aFlealibFleaser;
    *(_QWORD *)&v25[8] = 19LL;
    *(_QWORD *)&v25[16] = aFlealibFleaser;
    *(_QWORD *)&v25[24] = 19LL;
    *(_QWORD *)&v25[32] = v10;
    log::__private_api::log(&v21, 4LL, v25);
  }
  flealib::fleaserver::remove_newline_characters((__int64)&v21);
  v11 = *((_QWORD *)&v21 + 1);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v32);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21, v11);
  *(_QWORD *)&v25[16] = v33;
  *(_OWORD *)v25 = v32;
  alloc::string::String::from_utf8(&v21, v25);
  core::result::Result<T,E>::unwrap(v25, &v21);
  core::ptr::drop_in_place<alloc::string::String>(&v26);
  v27 = *(_QWORD *)&v25[16];
  v26 = *(_OWORD *)v25;
  flealib::commandparser::CommandParser::get_command(v25, (__int64)&v20, *(__int64 *)&v25[8]);
  if ( !__OFSUB__(0LL, *(_QWORD *)v25) )
  {
    v22 = *(_OWORD *)&v25[16];
    v23 = *(_OWORD *)&v25[32];
    v21 = *(_OWORD *)v25;
    v9 = *(_QWORD *)&v25[16] == 0LL;
    if ( *(_QWORD *)&v25[16] )
    {
      *(_QWORD *)&v28[16] = *(_QWORD *)&v25[16];
      *(_OWORD *)v28 = *(_OWORD *)v25;
      v33 = *(const char **)&v25[40];
      v32 = *(_OWORD *)&v25[24];
      v12 = flealib::fleaserver::replay((__int64)&v19, (__int64)v28, (__int64)&v32, v37);
      v13 = std::net::tcp::TcpStream::shutdown(&v19, 2LL);
      core::result::Result<T,E>::unwrap(v13, &off_70B300);
      if ( (v12 & 1) != 0 )
        core::sync::atomic::atomic_store(v36);
    }
    else
    {
      core::ptr::drop_in_place<alloc::string::String>(&v21);
      core::ptr::drop_in_place<alloc::string::String>((char *)&v22 + 8);
    }
    goto LABEL_11;
  }
  v24 = *(_OWORD *)&v25[8];
  v17 = std::net::tcp::TcpStream::shutdown(&v19, 2LL);
  core::result::Result<T,E>::unwrap(v17, &off_70B318);
  if ( core::sync::atomic::atomic_load() )
  {
    *(_QWORD *)v28 = &v24;
    *(_QWORD *)&v28[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v21 = asc_4FB30;
    *((_QWORD *)&v21 + 1) = 1LL;
    *(_QWORD *)&v23 = 0LL;
    *(_QWORD *)&v22 = v28;
    *((_QWORD *)&v22 + 1) = 1LL;
    v18 = log::__private_api::loc(&off_70B330);
    *(_QWORD *)&v32 = aFlealibFleaser;
    *((_QWORD *)&v32 + 1) = 19LL;
    v33 = aFlealibFleaser;
    v34 = 19LL;
    v35 = v18;
    log::__private_api::log(&v21, 1LL, &v32);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v26);
  return core::ptr::drop_in_place<std::net::tcp::TcpStream>(v19);
}