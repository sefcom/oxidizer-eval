int __fastcall alacritty_terminal::tty::unix::set_nonblocking(int fd)
{
  int v1; // eax
  int result; // eax
  int v3; // [rsp+4h] [rbp-44h] BYREF
  _QWORD v4[8]; // [rsp+8h] [rbp-40h] BYREF

  v1 = fcntl(fd, 3, 0LL);
  result = fcntl(fd, 4, v1 | 0x800u);
  v3 = result;
  if ( result )
  {
    v4[0] = 0LL;
    core::panicking::assert_failed(0LL, &v3, &arg, v4, &off_897328);
  }
  return result;
}