__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::search_next(
        int a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // r13d
  int v12; // edx
  int v13; // ebp
  char v14; // al
  __int64 v15; // rdx

  v11 = alacritty_terminal::term::Term<T>::expand_wide(a2, a4, a5, a6);
  v13 = v12;
  v14 = core::option::Option<T>::filter(a8, a9, *(_QWORD *)(a2 + 80));
  if ( a6 )
    return alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::next_match_right(
             a1,
             a2,
             a3,
             v11,
             v13,
             a7,
             v14,
             v15);
  else
    return alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::next_match_left(
             a1,
             a2,
             a3,
             v11,
             v13,
             a7,
             v14,
             v15);
}