__int64 __fastcall flealib::fleaserver::replay(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+18h] [rbp-3B0h]
  _BYTE v17[8]; // [rsp+20h] [rbp-3A8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-3A0h]
  __int64 v19; // [rsp+30h] [rbp-398h]
  __int64 v20; // [rsp+38h] [rbp-390h] BYREF
  const char *v21; // [rsp+40h] [rbp-388h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+48h] [rbp-380h]
  const char *v23; // [rsp+50h] [rbp-378h]
  __int64 (__fastcall *v24)(); // [rsp+58h] [rbp-370h]
  __int64 v25; // [rsp+60h] [rbp-368h]
  char **v26; // [rsp+68h] [rbp-360h] BYREF
  __int64 v27; // [rsp+70h] [rbp-358h]
  const char *v28; // [rsp+78h] [rbp-350h]
  __int128 v29; // [rsp+80h] [rbp-348h]
  __int64 v30; // [rsp+98h] [rbp-330h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-328h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-320h]
  _QWORD v33[2]; // [rsp+B0h] [rbp-318h] BYREF
  _QWORD v34[97]; // [rsp+C0h] [rbp-308h] BYREF

  v30 = a1;
  if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 4 )
  {
    v21 = (const char *)a2;
    v22 = <alloc::string::String as core::fmt::Display>::fmt;
    v23 = (const char *)a3;
    v24 = <alloc::string::String as core::fmt::Display>::fmt;
    v34[0] = &off_70B200;
    v34[1] = 2LL;
    v34[4] = 0LL;
    v34[2] = &v21;
    v34[3] = 2LL;
    v7 = log::__private_api::loc(&off_70B240);
    v26 = (char **)aFlealibFleaser;
    v27 = 19LL;
    v28 = aFlealibFleaser;
    *(_QWORD *)&v29 = 19LL;
    *((_QWORD *)&v29 + 1) = v7;
    log::__private_api::log(v34, 4LL, &v26);
  }
  <flealib::commandprocessor::CommandProcessor as flealib::commandprocessor::FleaCommand>::new(v34);
  <flealib::commandprocessor::CommandProcessor as flealib::commandprocessor::FleaCommand>::process(
    (unsigned int)v17,
    (unsigned int)v34,
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16),
    *(_QWORD *)(a3 + 8),
    *(_QWORD *)(a3 + 16),
    a4);
  if ( !v19 )
    goto LABEL_8;
  LOBYTE(v4) = 1;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v19, aQuit_0, 4LL) )
  {
LABEL_9:
    core::ptr::drop_in_place<alloc::string::String>(v17);
    core::ptr::drop_in_place<flealib::commandprocessor::CommandProcessor>(v34);
    core::ptr::drop_in_place<alloc::string::String>(a3);
    goto LABEL_10;
  }
  v26 = (char **)std::net::udp::UdpSocket::set_nonblocking(v30, 1LL);
  if ( v26 )
  {
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v26);
    if ( core::sync::atomic::atomic_load() )
    {
      v26 = &off_70B220;
      v27 = 1LL;
      v28 = &byte_8;
      v29 = 0LL;
      v8 = log::__private_api::loc(&off_70B288);
      v21 = aFlealibFleaser;
      v22 = (__int64 (__fastcall *)())(&word_12 + 1);
      v23 = aFlealibFleaser;
      v24 = (__int64 (__fastcall *)())(&word_12 + 1);
      v25 = v8;
      log::__private_api::log(&v26, 1LL, &v21);
    }
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v26);
  v16 = a3;
  v10 = v18;
  v11 = v19;
  v12 = 0LL;
  v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          0LL,
          v18,
          v19);
  if ( !v13 )
LABEL_24:
    core::str::slice_error_fail(v10, v11, v12, v11, &off_70B258);
  v12 = 0LL;
  while ( 1 )
  {
    v31 = <&std::net::tcp::TcpStream as std::io::Write>::write(&v30, v13);
    v32 = v14;
    if ( v31 )
      break;
    v12 += v14;
    v11 = v19;
    if ( v12 == v19 )
      goto LABEL_23;
    v10 = v18;
LABEL_16:
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v12,
            v10,
            v11);
    if ( !v13 )
      goto LABEL_24;
  }
  if ( (unsigned __int8)std::io::error::Error::kind(v14) == 13 )
  {
    std::thread::sleep(0LL, 100000000LL);
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v31);
    v10 = v18;
    v11 = v19;
    goto LABEL_16;
  }
  v20 = v32;
  if ( core::sync::atomic::atomic_load() )
  {
    v33[0] = &v20;
    v33[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    v26 = &off_70B230;
    v27 = 1LL;
    v28 = (const char *)v33;
    v29 = 1uLL;
    v15 = log::__private_api::loc(&off_70B270);
    v21 = aFlealibFleaser;
    v22 = (__int64 (__fastcall *)())(&word_12 + 1);
    v23 = aFlealibFleaser;
    v24 = (__int64 (__fastcall *)())(&word_12 + 1);
    v25 = v15;
    log::__private_api::log(&v26, 1LL, &v21);
  }
  core::ptr::drop_in_place<std::io::error::Error>(&v20);
LABEL_23:
  core::ptr::drop_in_place<alloc::string::String>(v17);
  core::ptr::drop_in_place<flealib::commandprocessor::CommandProcessor>(v34);
  core::ptr::drop_in_place<alloc::string::String>(v16);
  v4 = 0;
LABEL_10:
  core::ptr::drop_in_place<alloc::string::String>(a2);
  return v4;
}