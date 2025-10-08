__int64 uu_timeout::unblock_sigchld()
{
  _BYTE v1[24]; // [rsp+0h] [rbp-18h] BYREF

  nix::sys::signal::signal(v1, 17LL, 0LL);
  return core::result::Result<T,E>::unwrap(v1);
}