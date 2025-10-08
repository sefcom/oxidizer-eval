unsigned __int64 __fastcall alacritty_terminal::term::Term<T>::set_keyboard_mode(__int64 a1, int a2, char a3)
{
  int v3; // ebp
  int v4; // eax
  unsigned int v5; // r14d
  int v6; // eax
  unsigned __int64 result; // rax
  __int64 v8; // rax
  int v9; // [rsp+4h] [rbp-84h] BYREF
  _QWORD v10[2]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v11[5]; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v12[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 1756);
  v5 = v4 & 0xFF83FFFF;
  *(_DWORD *)(a1 + 1756) = v4 & 0xFF83FFFF;
  if ( a3 )
  {
    v6 = v4 & 0x7C0000;
    if ( a3 == 1 )
      v3 = v6 | a2;
    else
      v3 = v6 & ~a2;
  }
  v9 = v3;
  result = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
  if ( result >= 5 )
  {
    v10[0] = &v9;
    v10[1] = <alacritty_terminal::term::TermMode as core::fmt::Debug>::fmt;
    v12[0] = &off_877848;
    v12[1] = 1LL;
    v12[4] = 0LL;
    v12[2] = v10;
    v12[3] = 1LL;
    v8 = log::__private_api::loc(&off_877858);
    v11[0] = aAlacrittyTermi_2;
    v11[1] = 24LL;
    v11[2] = aAlacrittyTermi_2;
    v11[3] = 24LL;
    v11[4] = v8;
    result = log::__private_api::log(v12, 5LL, v11);
    v3 = v9;
  }
  *(_DWORD *)(a1 + 1756) = v5 | v3;
  return result;
}