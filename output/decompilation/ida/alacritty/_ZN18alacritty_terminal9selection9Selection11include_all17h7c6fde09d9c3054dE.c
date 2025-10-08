bool __fastcall alacritty_terminal::selection::Selection::include_all(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  bool result; // al
  char v7; // al
  bool v8; // zf
  bool v9; // sf

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 2);
  v4 = a1[3];
  v5 = *((unsigned int *)a1 + 8);
  if ( *((_BYTE *)a1 + 48) == 1 )
  {
    if ( v2 > v4 || (int)v3 > (int)v5 && v2 == v4 )
    {
      result = 1;
      *((_BYTE *)a1 + 16) = 1;
      *((_BYTE *)a1 + 40) = 0;
    }
    else
    {
      result = 0;
      *((_BYTE *)a1 + 16) = 0;
      *((_BYTE *)a1 + 40) = 1;
    }
  }
  else
  {
    v7 = <alacritty_terminal::index::Point<L,C> as core::cmp::Ord>::cmp(v2, v3, v4, v5);
    v8 = v7 == 0;
    v9 = v7 < 0;
    result = v7 > 0;
    *((_BYTE *)a1 + 16) = result;
    *((_BYTE *)a1 + 40) = v9 || v8;
  }
  return result;
}