int __fastcall alacritty_terminal::tty::unix::set_controlling_terminal(int a1)
{
  int result; // eax
  __int64 v2; // rax
  unsigned __int64 v3; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v4[2]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v5[5]; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  result = ioctl(a1, 0x540EuLL, 0LL);
  if ( result < 0 )
  {
    if ( !core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
      std::process::exit(1);
    v3 = ((unsigned __int64)(unsigned int)*_errno_location() << 32) | 2;
    v4[0] = &v3;
    v4[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    v6[0] = &off_897258;
    v6[1] = 1LL;
    v6[4] = 0LL;
    v6[2] = v4;
    v6[3] = 1LL;
    v2 = log::__private_api::loc(&off_897268);
    v5[0] = aAlacrittyTermi_7;
    v5[1] = 29LL;
    v5[2] = aAlacrittyTermi_7;
    v5[3] = 29LL;
    v5[4] = v2;
    log::__private_api::log(v6, v5);
    core::ptr::drop_in_place<std::io::error::Error>(v3);
    std::process::exit(1);
  }
  return result;
}