__int64 __fastcall alacritty::input::Processor<T,A>::sgr_mouse_report(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v5; // rdx
  char v7; // [rsp+Fh] [rbp-A9h] BYREF
  int v8; // [rsp+10h] [rbp-A8h] BYREF
  int v9; // [rsp+14h] [rbp-A4h] BYREF
  __int64 v10; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v11[8]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v12[6]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v13[40]; // [rsp+90h] [rbp-28h] BYREF

  v7 = a4;
  v8 = (32 * a5) | 0x4D;
  v10 = a2 + 1;
  v5 = (unsigned int)(a3 + 1);
  v9 = v5;
  v11[0] = &v7;
  v11[1] = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
  v11[2] = &v10;
  v11[3] = <alacritty_terminal::index::Column as core::fmt::Display>::fmt;
  v11[4] = &v9;
  v11[5] = <alacritty_terminal::index::Line as core::fmt::Display>::fmt;
  v11[6] = &v8;
  v11[7] = <char as core::fmt::Display>::fmt;
  v12[0] = &off_882DB0;
  v12[1] = 4LL;
  v12[4] = 0LL;
  v12[2] = v11;
  v12[3] = 4LL;
  core::option::Option<T>::map_or_else(v13, 0LL, v5, v12);
  return <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::write_to_pty(a1, v13);
}