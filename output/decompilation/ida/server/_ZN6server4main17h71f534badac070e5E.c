__int64 server::main()
{
  unsigned int v1; // [rsp+4h] [rbp-C4h] BYREF
  unsigned int v2; // [rsp+8h] [rbp-C0h] BYREF
  int v3; // [rsp+Ch] [rbp-BCh] BYREF
  unsigned int *v4; // [rsp+10h] [rbp-B8h] BYREF
  char **v5; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v6; // [rsp+20h] [rbp-A8h]
  const char *v7; // [rsp+28h] [rbp-A0h]
  __int128 v8; // [rsp+30h] [rbp-98h]
  _QWORD v9[4]; // [rsp+48h] [rbp-80h] BYREF
  _DWORD v10[4]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v11[80]; // [rsp+78h] [rbp-50h] BYREF

  std::net::tcp::TcpListener::bind(&v5, a192168098080, 16LL);
  v1 = core::result::Result<T,E>::expect(&v5);
  v5 = &off_6B688;
  v6 = 1LL;
  v7 = aRustc3b1717c05_0;
  v8 = 0LL;
  std::io::stdio::_print(&v5);
  v3 = 0;
  v4 = &v1;
  while ( 1 )
  {
    <std::net::tcp::Incoming as core::iter::traits::iterator::Iterator>::next(v10, &v4);
    if ( v10[0] == 2 )
      break;
    v2 = core::result::Result<T,E>::expect(v10);
    std::net::tcp::TcpStream::peer_addr(&v5, &v2);
    core::result::Result<T,E>::unwrap(v11, &v5);
    v9[0] = v11;
    v9[1] = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
    v9[2] = &v3;
    v9[3] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v5 = &off_6B6B0;
    v6 = 3LL;
    v7 = (const char *)v9;
    v8 = 2uLL;
    std::io::stdio::_print(&v5);
    std::thread::spawn(&v5, v2);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v5);
    ++v3;
  }
  return core::ptr::drop_in_place<std::net::tcp::TcpStream>(v1);
}