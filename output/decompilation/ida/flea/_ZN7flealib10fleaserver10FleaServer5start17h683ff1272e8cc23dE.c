__int64 __fastcall flealib::fleaserver::FleaServer::start(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        volatile signed __int64 **a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  volatile signed __int64 *v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // of
  __int64 v12; // rax
  __int64 v13; // rt0
  volatile signed __int64 *v14; // rax
  __int64 v15; // rt0
  unsigned int v17; // [rsp+8h] [rbp-120h] BYREF
  int v18; // [rsp+Ch] [rbp-11Ch] BYREF
  volatile signed __int64 *v19; // [rsp+10h] [rbp-118h] BYREF
  __m256i v20; // [rsp+18h] [rbp-110h] BYREF
  __int64 v21; // [rsp+38h] [rbp-F0h]
  char **v22; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-E0h]
  _BYTE v24[24]; // [rsp+50h] [rbp-D8h]
  __int64 v25; // [rsp+68h] [rbp-C0h]
  __int128 v26; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v27[2]; // [rsp+80h] [rbp-A8h] BYREF
  volatile signed __int64 *v28; // [rsp+90h] [rbp-98h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+98h] [rbp-90h]
  int v30; // [rsp+A0h] [rbp-88h]
  volatile signed __int64 *v31; // [rsp+B0h] [rbp-78h]
  unsigned int *v32; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v35; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-38h]

  v33[0] = a2;
  v33[1] = a3;
  std::net::tcp::TcpListener::bind(&v22);
  v17 = core::result::Result<T,E>::unwrap(&v22);
  v5 = std::net::udp::UdpSocket::set_nonblocking(&v17, 1LL);
  core::result::Result<T,E>::expect(v5);
  flealib::fileserver::FileServer::new((__int64)&v35);
  *(__int64 *)((char *)&v20.m256i_i64[2] + 3) = v36;
  *(_OWORD *)((char *)v20.m256i_i32 + 3) = v35;
  v22 = (char **)(&dword_0 + 1);
  v23 = 1LL;
  *(_DWORD *)v24 = 0;
  v24[4] = 0;
  *(_OWORD *)&v24[5] = *(_OWORD *)v20.m256i_i8;
  *(_QWORD *)&v24[16] = *((_QWORD *)&v35 + 1);
  v25 = v36;
  v19 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(&v22);
  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
  {
    v28 = v33;
    v29 = <&T as core::fmt::Display>::fmt;
    v22 = &off_70B3C0;
    v23 = 1LL;
    *(_QWORD *)&v24[16] = 0LL;
    *(_QWORD *)v24 = &v28;
    *(_QWORD *)&v24[8] = 1LL;
    v6 = log::__private_api::loc(&off_70B420);
    v20.m256i_i64[0] = (__int64)aFlealibFleaser;
    v20.m256i_i64[1] = 19LL;
    v20.m256i_i64[2] = (__int64)aFlealibFleaser;
    v20.m256i_i64[3] = 19LL;
    v21 = v6;
    log::__private_api::log(&v22, 4LL, &v20);
  }
  v32 = &v17;
  v7 = *a4;
  v31 = *a4 + 2;
  while ( 1 )
  {
    <std::net::tcp::Incoming as core::iter::traits::iterator::Iterator>::next(&v34, &v32);
    if ( (_DWORD)v34 == 2 )
      break;
    v26 = v34;
    if ( (_DWORD)v34 )
    {
      v8 = *((_QWORD *)&v26 + 1);
      if ( (unsigned __int8)std::io::error::Error::kind(*((_QWORD *)&v26 + 1)) == 13 )
      {
        if ( !(unsigned __int8)core::sync::atomic::atomic_load(v31, 4LL) )
        {
          core::ptr::drop_in_place<std::io::error::Error>((char *)&v26 + 8);
          break;
        }
        std::thread::sleep(0LL, 100000000LL);
        core::ptr::drop_in_place<std::io::error::Error>((char *)&v26 + 8);
      }
      else
      {
        v27[0] = v8;
        if ( core::sync::atomic::atomic_load() )
        {
          v28 = v27;
          v29 = <std::io::error::Error as core::fmt::Display>::fmt;
          v22 = &off_70B3E0;
          v23 = 1LL;
          *(_QWORD *)&v24[16] = 0LL;
          *(_QWORD *)v24 = &v28;
          *(_QWORD *)&v24[8] = 1LL;
          v9 = log::__private_api::loc(&off_70B480);
          v20.m256i_i64[0] = (__int64)aFlealibFleaser;
          v20.m256i_i64[1] = 19LL;
          v20.m256i_i64[2] = (__int64)aFlealibFleaser;
          v20.m256i_i64[3] = 19LL;
          v21 = v9;
          log::__private_api::log(&v22, 1LL, &v20);
        }
        core::ptr::drop_in_place<std::io::error::Error>(v27);
      }
    }
    else
    {
      v18 = DWORD1(v26);
      v10 = core::sync::atomic::atomic_load();
      v11 = __OFSUB__(v10, 4LL);
      if ( v10 >= 4 )
      {
        std::net::tcp::TcpStream::peer_addr(&v22, &v18);
        core::result::Result<T,E>::unwrap(&v28, &v22, &off_70B438);
        v27[0] = &v28;
        v27[1] = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
        v22 = &off_70B3D0;
        v23 = 1LL;
        *(_QWORD *)&v24[16] = 0LL;
        *(_QWORD *)v24 = v27;
        *(_QWORD *)&v24[8] = 1LL;
        v12 = log::__private_api::loc(&off_70B450);
        v20.m256i_i64[0] = (__int64)aFlealibFleaser;
        v20.m256i_i64[1] = 19LL;
        v20.m256i_i64[2] = (__int64)aFlealibFleaser;
        v20.m256i_i64[3] = 19LL;
        v21 = v12;
        log::__private_api::log(&v22, 4LL, &v20);
      }
      v13 = _InterlockedIncrement64(v19);
      if ( (v13 < 0) ^ v11 | (v13 == 0) || (v14 = v19, v15 = _InterlockedIncrement64(v7), (v15 < 0) ^ v11 | (v15 == 0)) )
        BUG();
      v30 = v18;
      v28 = v14;
      v29 = (__int64 (__fastcall *)())v7;
      *(_QWORD *)v24 = 0x8000000000000000LL;
      v22 = 0LL;
      LOBYTE(v25) = 0;
      std::thread::Builder::spawn_unchecked(&v20, &v22, &v28);
      core::result::Result<T,E>::expect(&v22, &v20);
      core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v22);
    }
  }
  core::ptr::drop_in_place<std::net::tcp::TcpStream>(v17);
  return core::ptr::drop_in_place<alloc::sync::Arc<std::sync::mutex::Mutex<flealib::fileserver::FileServer>>>(&v19);
}