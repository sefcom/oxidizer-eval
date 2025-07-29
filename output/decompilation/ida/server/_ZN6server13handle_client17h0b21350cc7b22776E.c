__int64 __fastcall server::handle_client(unsigned int a1)
{
  __int64 v1; // r14
  unsigned int v2; // eax
  __int64 v3; // r14
  unsigned int v4; // eax
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rax
  _BYTE v9[28]; // [rsp+Ch] [rbp-11Ch] BYREF
  _BYTE v10[32]; // [rsp+28h] [rbp-100h] BYREF
  _BYTE dest[224]; // [rsp+48h] [rbp-E0h] BYREF

  std::process::Command::new(dest);
  v1 = std::process::Command::arg(dest, aI, 2LL);
  v2 = <std::sys::pal::unix::pipe::AnonPipe as std::os::fd::raw::FromRawFd>::from_raw_fd(a1);
  v3 = std::process::Command::stdin(v1, 3LL, v2);
  v4 = <std::sys::pal::unix::pipe::AnonPipe as std::os::fd::raw::FromRawFd>::from_raw_fd(a1);
  v5 = std::process::Command::stdout(v3, 3LL, v4);
  v6 = <std::sys::pal::unix::pipe::AnonPipe as std::os::fd::raw::FromRawFd>::from_raw_fd(a1);
  v7 = std::process::Command::stderr(v5, 3LL, v6);
  std::process::Command::spawn(v10, v7);
  core::result::Result<T,E>::unwrap(v9, v10);
  std::process::Child::wait(v10, v9);
  core::result::Result<T,E>::unwrap(v10);
  core::ptr::drop_in_place<std::process::Child>(v9);
  core::ptr::drop_in_place<std::process::Command>(dest);
  return core::ptr::drop_in_place<std::net::tcp::TcpStream>(a1);
}