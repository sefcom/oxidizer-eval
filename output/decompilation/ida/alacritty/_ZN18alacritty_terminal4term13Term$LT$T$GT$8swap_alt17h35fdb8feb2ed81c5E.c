__int64 __fastcall alacritty_terminal::term::Term<T>::swap_alt(__int64 a1)
{
  int v1; // edx
  int v2; // r13d
  int v3; // r15d
  char v4; // bp
  __int64 v5; // r15
  int v6; // edx
  int v7; // r12d
  int v8; // ebp
  __int64 v9; // rax
  unsigned __int8 v10; // al
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // [rsp+8h] [rbp-70h]
  _BYTE v14[28]; // [rsp+14h] [rbp-64h]
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]

  if ( (*(_BYTE *)(a1 + 1757) & 0x10) == 0 )
  {
    v13 = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::semantic_search_left::{{closure}}(
            *(_QWORD *)(a1 + 88),
            *(unsigned int *)(a1 + 96));
    v2 = v1;
    <alacritty_terminal::term::cell::Cell as core::clone::Clone>::clone(&v15, a1 + 104);
    v3 = *(_DWORD *)(a1 + 128);
    v4 = *(_BYTE *)(a1 + 132);
    *(_QWORD *)&v14[20] = v16;
    *(_OWORD *)&v14[4] = v15;
    core::ptr::drop_in_place<alacritty_terminal::grid::Cursor<alacritty_terminal::term::cell::Cell>>(a1 + 264);
    *(_QWORD *)(a1 + 264) = v13;
    *(_DWORD *)(a1 + 272) = v2;
    *(_OWORD *)(a1 + 276) = *(_OWORD *)v14;
    *(_OWORD *)(a1 + 288) = *(_OWORD *)&v14[12];
    *(_DWORD *)(a1 + 304) = v3;
    *(_BYTE *)(a1 + 308) = v4;
    v5 = alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::semantic_search_left::{{closure}}(
           *(_QWORD *)(a1 + 88),
           *(unsigned int *)(a1 + 96));
    v7 = v6;
    <alacritty_terminal::term::cell::Cell as core::clone::Clone>::clone(&v15, a1 + 104);
    v8 = *(_DWORD *)(a1 + 128);
    LOBYTE(v2) = *(_BYTE *)(a1 + 132);
    *(_QWORD *)&v14[20] = v16;
    *(_OWORD *)&v14[4] = v15;
    core::ptr::drop_in_place<alacritty_terminal::grid::Cursor<alacritty_terminal::term::cell::Cell>>(a1 + 136);
    *(_QWORD *)(a1 + 136) = v5;
    *(_DWORD *)(a1 + 144) = v7;
    *(_OWORD *)(a1 + 148) = *(_OWORD *)v14;
    *(_OWORD *)(a1 + 160) = *(_OWORD *)&v14[12];
    *(_DWORD *)(a1 + 176) = v8;
    *(_BYTE *)(a1 + 180) = v2;
    alacritty_terminal::grid::Grid<T>::reset_region(a1 + 216);
  }
  core::intrinsics::typed_swap_nonoverlapping(a1 + 440, a1 + 464);
  v9 = *(_QWORD *)(a1 + 456);
  if ( v9 )
    v10 = *(_BYTE *)(*(_QWORD *)(a1 + 448) + v9 - 1);
  else
    v10 = 0;
  v11 = <alacritty_terminal::term::TermMode as core::convert::From<vte::ansi::KeyboardModes>>::from(v10);
  alacritty_terminal::term::Term<T>::set_keyboard_mode(a1, v11, 0);
  result = core::intrinsics::typed_swap_nonoverlapping(a1 + 40, a1 + 216);
  *(_BYTE *)(a1 + 1757) ^= 0x10u;
  *(_BYTE *)(a1 + 640) = 2;
  *(_BYTE *)(a1 + 528) = 1;
  return result;
}