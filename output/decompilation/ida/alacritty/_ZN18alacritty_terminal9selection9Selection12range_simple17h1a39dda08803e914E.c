__int64 __fastcall alacritty_terminal::selection::Selection::range_simple(
        __int64 a1,
        __int128 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5)
{
  bool is_empty; // al
  char v9; // cl
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rsi

  is_empty = alacritty_terminal::selection::Selection::is_empty(a2);
  v9 = 2;
  if ( is_empty )
    goto LABEL_16;
  if ( !*((_BYTE *)a4 + 16) )
  {
    v10 = *((_DWORD *)a4 + 2);
    if ( *((_DWORD *)a3 + 2) != v10 )
    {
      v11 = *a4;
      if ( *a4 )
        goto LABEL_6;
      goto LABEL_8;
    }
    v11 = *a4;
    if ( *a3 != *a4 )
    {
      if ( v11 )
      {
LABEL_6:
        *a4 = v11 - 1;
        goto LABEL_9;
      }
LABEL_8:
      *a4 = a5 - 1;
      *((_DWORD *)a4 + 2) = v10 - 1;
    }
  }
LABEL_9:
  v12 = *a3;
  v13 = *((_DWORD *)a3 + 2);
  v14 = *((_DWORD *)a4 + 2);
  if ( *((_BYTE *)a3 + 16) )
  {
    if ( v13 == v14 && v12 == *a4 )
    {
      v14 = *((_DWORD *)a3 + 2);
    }
    else
    {
      *a3 = ++v12;
      if ( v12 == a5 )
      {
        *a3 = 0LL;
        *((_DWORD *)a3 + 2) = ++v13;
        v12 = 0LL;
      }
    }
  }
  v15 = *a4;
  *(_QWORD *)a1 = v12;
  *(_DWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 16) = v15;
  *(_DWORD *)(a1 + 24) = v14;
  v9 = 0;
LABEL_16:
  *(_BYTE *)(a1 + 32) = v9;
  return a1;
}