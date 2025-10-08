__int64 __fastcall uu_stty::print_terminal_size(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  unsigned int v5; // edx
  char **v7; // [rsp+8h] [rbp-80h] BYREF
  char **v8; // [rsp+10h] [rbp-78h] BYREF
  __int64 v9; // [rsp+18h] [rbp-70h]
  char ****v10; // [rsp+20h] [rbp-68h]
  __int128 v11; // [rsp+28h] [rbp-60h]
  char ***v12; // [rsp+58h] [rbp-30h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+60h] [rbp-28h]
  char *v14; // [rsp+68h] [rbp-20h]
  __int64 (__fastcall *v15)(); // [rsp+70h] [rbp-18h]

  v3 = nix::sys::termios::cfgetospeed();
  v7 = (char **)&off_E2AD0;
  if ( !v3 )
    goto LABEL_30;
  v7 = &off_E2AE8;
  if ( v3 == 1 )
    goto LABEL_30;
  v7 = &off_E2B00;
  if ( v3 == 2 )
    goto LABEL_30;
  v7 = &off_E2B18;
  if ( v3 == 3 )
    goto LABEL_30;
  v7 = &off_E2B30;
  if ( v3 == 4 )
    goto LABEL_30;
  v7 = &off_E2B48;
  if ( v3 == 5 )
    goto LABEL_30;
  v7 = &off_E2B60;
  if ( v3 == 6 )
    goto LABEL_30;
  v7 = &off_E2B78;
  if ( v3 == 7 )
    goto LABEL_30;
  v7 = &off_E2B90;
  if ( v3 == 8 )
    goto LABEL_30;
  v7 = &off_E2BA8;
  if ( v3 == 9 )
    goto LABEL_30;
  v7 = &off_E2BC0;
  if ( v3 == 10 )
    goto LABEL_30;
  v7 = &off_E2BD8;
  if ( v3 == 11 )
    goto LABEL_30;
  v7 = &off_E2BF0;
  if ( v3 == 13 )
    goto LABEL_30;
  v7 = &off_E2C08;
  if ( v3 == 14 )
    goto LABEL_30;
  v7 = &off_E2C20;
  if ( v3 == 15 )
    goto LABEL_30;
  v7 = &off_E2C38;
  if ( v3 == 4097 )
    goto LABEL_30;
  v7 = &off_E2C50;
  if ( v3 == 4098 )
    goto LABEL_30;
  v7 = &off_E2C68;
  if ( v3 == 4099 )
    goto LABEL_30;
  v7 = &off_E2C80;
  if ( v3 == 4101 )
    goto LABEL_30;
  v7 = &off_E2C98;
  if ( v3 == 4102 )
    goto LABEL_30;
  v7 = &off_E2CB0;
  if ( v3 == 4103 )
    goto LABEL_30;
  v7 = &off_E2CC8;
  if ( v3 == 4104
    || (v7 = &off_E2CE0, v3 == 4105)
    || (v7 = &off_E2CF8, v3 == 4106)
    || (v7 = &off_E2D10, v3 == 4107)
    || (v7 = &off_E2D28, v3 == 4108)
    || (v7 = &off_E2D40, v3 == 4109)
    || (v7 = &off_E2D58, v3 == 4110)
    || (v7 = &off_E2D70, v3 == 4111) )
  {
LABEL_30:
    v12 = &v7;
    v13 = <&T as core::fmt::Display>::fmt;
    v8 = &off_E2A50;
    v9 = 2LL;
    v10 = &v12;
    v11 = 1uLL;
    std::io::stdio::_print(&v8);
  }
  if ( *(_BYTE *)(a2 + 40) )
  {
    v7 = 0LL;
    v4 = 1LL;
    if ( !*(_BYTE *)(a2 + 24) )
      v4 = *(unsigned int *)(a2 + 28);
    if ( (uu_stty::tiocgwinsz(v4, &v7) & 1) != 0 )
      return v5;
    v12 = &v7;
    v13 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v14 = (char *)&v7 + 2;
    v15 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v8 = &off_E2A70;
    v9 = 3LL;
    v10 = &v12;
    v11 = 2uLL;
    std::io::stdio::_print(&v8);
  }
  <core::cell::RefCell<T> as core::clone::Clone>::clone(&v8, a1 + 32);
  LOBYTE(v7) = v11;
  v12 = &v7;
  v13 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v8 = &off_E2AA0;
  v9 = 2LL;
  v10 = &v12;
  v11 = 1uLL;
  std::io::stdio::_print(&v8);
  v8 = (char **)&off_E2AC0;
  v9 = 1LL;
  v10 = (char ****)&byte_8;
  v11 = 0LL;
  std::io::stdio::_print(&v8);
  return 134LL;
}