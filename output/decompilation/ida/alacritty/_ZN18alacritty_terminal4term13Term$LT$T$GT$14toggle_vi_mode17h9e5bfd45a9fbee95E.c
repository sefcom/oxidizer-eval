__int64 __fastcall alacritty_terminal::term::Term<T>::toggle_vi_mode(__int64 a1)
{
  int v1; // eax
  int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v5[4]; // [rsp+0h] [rbp-20h] BYREF

  v1 = *(_DWORD *)(a1 + 1756);
  *(_DWORD *)(a1 + 1756) = v1 ^ 0x10000;
  if ( (v1 & 0x10000) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 96);
    if ( v2 > *(_DWORD *)(a1 + 192) + ~*(_DWORD *)(a1 + 200) )
    {
      v3 = 0LL;
      v2 = -*(_DWORD *)(a1 + 200);
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 88);
    }
    *(_QWORD *)(a1 + 656) = v3;
    *(_DWORD *)(a1 + 664) = v2;
  }
  v5[0] = 0x8000000000000008LL;
  return <alacritty::event::EventProxy as alacritty_terminal::event::EventListener>::send_event(a1, v5);
}