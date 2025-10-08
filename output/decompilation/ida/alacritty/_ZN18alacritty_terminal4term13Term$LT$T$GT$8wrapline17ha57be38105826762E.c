void __fastcall alacritty_terminal::term::Term<T>::wrapline(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD v6[5]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-50h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h]

  if ( *(char *)(a1 + 1756) < 0 )
  {
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 5 )
    {
      v7[0] = &off_877958;
      v7[1] = 1LL;
      v7[2] = 8LL;
      v8 = 0LL;
      v6[0] = aAlacrittyTermi_2;
      v6[1] = 24LL;
      v6[2] = aAlacrittyTermi_2;
      v6[3] = 24LL;
      v6[4] = log::__private_api::loc(&off_877968);
      log::__private_api::log(v7, 5LL, v6);
    }
    v1 = alacritty_terminal::grid::Grid<T>::cursor_cell(a1 + 40);
    *(_BYTE *)(v1 + 20) |= 0x10u;
    v2 = *(int *)(a1 + 96);
    v3 = v2 + 1;
    if ( (int)v2 + 1 >= *(_DWORD *)(a1 + 676) )
    {
      <alacritty_terminal::term::Term<T> as vte::ansi::Handler>::linefeed(a1);
      v3 = *(_DWORD *)(a1 + 96);
      v4 = *(_QWORD *)(a1 + 496);
      v5 = *(_QWORD *)(a1 + 504);
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 496);
      v5 = *(_QWORD *)(a1 + 504);
      alacritty_terminal::term::TermDamageState::damage_line(v4, v5, v2, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 88));
      *(_DWORD *)(a1 + 96) = v3;
    }
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_BYTE *)(a1 + 132) = 0;
    alacritty_terminal::term::TermDamageState::damage_line(v4, v5, v3, 0LL, 0LL);
  }
}