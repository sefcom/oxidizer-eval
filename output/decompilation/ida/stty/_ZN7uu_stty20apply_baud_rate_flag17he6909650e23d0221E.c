char __fastcall uu_stty::apply_baud_rate_flag(__int64 a1, __int64 a2, __int64 a3)
{
  char **v4; // rax
  char v5; // cl
  char result; // al
  unsigned int v7; // eax

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, 1LL, a2, a3) )
  {
    v4 = (char **)&off_E2AD0;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a50, 2LL, a2, a3) )
  {
    v4 = &off_E2AE8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a75, 2LL, a2, a3) )
  {
    v4 = &off_E2B00;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a110, 3LL, a2, a3) )
  {
    v4 = &off_E2B18;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a134, 3LL, a2, a3) )
  {
    v4 = &off_E2B30;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a150, 3LL, a2, a3) )
  {
    v4 = &off_E2B48;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a200, 3LL, a2, a3) )
  {
    v4 = &off_E2B60;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a300, 3LL, a2, a3) )
  {
    v4 = &off_E2B78;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a600, 3LL, a2, a3) )
  {
    v4 = &off_E2B90;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1200, 4LL, a2, a3) )
  {
    v4 = &off_E2BA8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1800, 4LL, a2, a3) )
  {
    v4 = &off_E2BC0;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2400, 4LL, a2, a3) )
  {
    v4 = &off_E2BD8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a9600, 4LL, a2, a3) )
  {
    v4 = &off_E2BF0;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a19200, 5LL, a2, a3) )
  {
    v4 = &off_E2C08;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a38400, 5LL, a2, a3) )
  {
    v4 = &off_E2C20;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a57600, 5LL, a2, a3) )
  {
    v4 = &off_E2C38;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a115200, 6LL, a2, a3) )
  {
    v4 = &off_E2C50;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a230400, 6LL, a2, a3) )
  {
    v4 = &off_E2C68;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a500000, 6LL, a2, a3) )
  {
    v4 = &off_E2C80;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a576000, 6LL, a2, a3) )
  {
    v4 = &off_E2C98;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a921600, 6LL, a2, a3) )
  {
    v4 = &off_E2CB0;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1000000, 7LL, a2, a3) )
  {
    v4 = &off_E2CC8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1152000, 7LL, a2, a3) )
  {
    v4 = &off_E2CE0;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1500000, 7LL, a2, a3) )
  {
    v4 = &off_E2CF8;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2000000, 7LL, a2, a3) )
  {
    v4 = &off_E2D10;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2500000, 7LL, a2, a3) )
  {
    v4 = &off_E2D28;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3000000, 7LL, a2, a3) )
  {
    v4 = &off_E2D40;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3500000, 7LL, a2, a3) )
  {
    v4 = &off_E2D58;
  }
  else
  {
    v5 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4000000, 7LL, a2, a3);
    result = 2;
    if ( !v5 )
      return result;
    v4 = &off_E2D70;
  }
  v7 = nix::sys::termios::cfsetospeed(a1, *((unsigned int *)v4 + 4));
  core::result::Result<T,E>::expect(v7, aFailedToSetBau, 23LL, &off_E3868);
  return 1;
}