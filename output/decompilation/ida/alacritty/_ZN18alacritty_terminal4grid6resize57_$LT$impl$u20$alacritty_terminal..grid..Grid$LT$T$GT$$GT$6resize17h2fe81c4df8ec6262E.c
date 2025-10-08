__int64 __fastcall alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::resize(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  char v6; // al
  char v7; // al
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-58h]
  __int64 v10; // [rsp+10h] [rbp-48h]
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]

  <alacritty_terminal::term::cell::Cell as core::default::Default>::default(&v11);
  v10 = *(_QWORD *)(a1 + 80);
  v9 = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a1 + 64) = v11;
  *(_QWORD *)(a1 + 80) = v12;
  v6 = (*(_QWORD *)(a1 + 152) > a3) - (*(_QWORD *)(a1 + 152) < a3);
  if ( v6 )
  {
    if ( v6 == 1 )
      alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::shrink_lines(a1, a3);
    else
      alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::grow_lines(a1, a3);
  }
  v7 = (*(_QWORD *)(a1 + 144) > a4) - (*(_QWORD *)(a1 + 144) < a4);
  if ( v7 )
  {
    if ( v7 == 1 )
      alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::shrink_columns(a1, a2, a4);
    else
      alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::grow_columns(a1, a2, a4);
  }
  core::ptr::drop_in_place<alacritty_terminal::term::cell::Cell>(a1 + 64);
  result = v10;
  *(_QWORD *)(a1 + 80) = v10;
  *(_OWORD *)(a1 + 64) = v9;
  return result;
}