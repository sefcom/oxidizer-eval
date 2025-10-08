__int64 __fastcall alacritty_terminal::grid::Grid<T>::scroll_display(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  switch ( a2 )
  {
    case 0:
      v4 = 0LL;
      v5 = (int)core::cmp::Ord::max((unsigned int)(*((_DWORD *)a1 + 40) + a3), 0LL);
      v6 = a1[5];
      v7 = v6 < a1[19];
      v8 = v6 - a1[19];
      if ( !v7 )
        v4 = v8;
      v9 = v4;
      goto LABEL_13;
    case 1:
      v13 = a1[5];
      v14 = a1[19];
      v5 = v14 + a1[20];
      v9 = 0LL;
      v7 = v13 < v14;
      v15 = v13 - v14;
      if ( !v7 )
        v9 = v15;
LABEL_13:
      result = core::cmp::Ord::min(v5, v9);
      break;
    case 2:
      v11 = a1[20];
      goto LABEL_8;
    case 3:
      v11 = a1[5];
LABEL_8:
      result = 0LL;
      v7 = v11 < a1[19];
      v12 = v11 - a1[19];
      if ( !v7 )
        result = v12;
      break;
    case 4:
      result = 0LL;
      break;
  }
  a1[20] = result;
  return result;
}