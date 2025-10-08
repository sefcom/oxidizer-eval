__int64 __fastcall alacritty_terminal::term::Term<T>::set_options(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  unsigned __int64 v5; // r14
  _QWORD *v6; // rdi
  _BYTE v8[24]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v9; // [rsp+18h] [rbp-60h]
  __int128 v10; // [rsp+20h] [rbp-58h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  _OWORD v12[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v13 = *(_QWORD *)(a1 + 568);
  v3 = *(_OWORD *)(a1 + 536);
  v12[1] = *(_OWORD *)(a1 + 552);
  v12[0] = v3;
  v4 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 536) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 552) = v4;
  *(_QWORD *)(a1 + 568) = *(_QWORD *)(a2 + 32);
  if ( __OFSUB__(0LL, *(_QWORD *)(a1 + 576)) )
  {
    v5 = 0x8000000000000002LL;
  }
  else
  {
    <alloc::string::String as core::clone::Clone>::clone(v8, a1 + 576);
    v11 = *(_QWORD *)&v8[16];
    v10 = *(_OWORD *)v8;
    v5 = 0x8000000000000001LL;
  }
  *(_QWORD *)v8 = v5;
  *(_OWORD *)&v8[8] = v10;
  v9 = v11;
  <alacritty::event::EventProxy as alacritty_terminal::event::EventListener>::send_event(a1, v8);
  v6 = (_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(a1 + 1756) & 0x1000) == 0 )
    v6 = (_QWORD *)(a1 + 40);
  alacritty_terminal::grid::Grid<T>::update_history(v6, *(_QWORD *)(a1 + 560));
  if ( *(_BYTE *)(a1 + 572) != BYTE4(v13) )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<bool>>(*(_QWORD *)(a1 + 440), *(_QWORD *)(a1 + 448));
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_QWORD *)(a1 + 448) = 1LL;
    *(_QWORD *)(a1 + 456) = 0LL;
    core::ptr::drop_in_place<alloc::vec::Vec<bool>>(*(_QWORD *)(a1 + 464), *(_QWORD *)(a1 + 472));
    *(_QWORD *)(a1 + 464) = 0LL;
    *(_QWORD *)(a1 + 472) = 1LL;
    *(_QWORD *)(a1 + 480) = 0LL;
    *(_BYTE *)(a1 + 1758) &= 0x83u;
  }
  *(_BYTE *)(a1 + 528) = 1;
  return core::ptr::drop_in_place<alacritty_terminal::term::Config>(v12);
}