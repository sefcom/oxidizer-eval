void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> alacritty_terminal::term::search::RegexIter<T>::next_match(
        int a1,
        __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // r9

  v3 = a2[5];
  v4 = a2[4];
  v5 = *a2;
  v6 = *((_DWORD *)a2 + 2);
  v7 = a2[2];
  if ( *((_BYTE *)a2 + 48) == 1 )
    alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search_right(
      a1,
      v3,
      v4,
      v5,
      v6,
      v7,
      *((_DWORD *)a2 + 6));
  else
    alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search_left(
      a1,
      v3,
      v4,
      v5,
      v6,
      v7,
      *((_DWORD *)a2 + 6));
}