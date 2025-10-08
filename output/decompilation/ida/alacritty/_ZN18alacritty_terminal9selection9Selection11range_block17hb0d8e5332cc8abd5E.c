__int64 __fastcall alacritty_terminal::selection::Selection::range_block(
        __int64 a1,
        __int128 *a2,
        __int64 *a3,
        __int64 *a4)
{
  bool is_empty; // al
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rsi
  char v11; // di
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  int v15; // esi

  is_empty = alacritty_terminal::selection::Selection::is_empty(a2);
  v8 = 2;
  if ( !is_empty )
  {
    v9 = *a3;
    v10 = *a4;
    if ( *a3 <= (unsigned __int64)*a4 )
    {
      v12 = *a3;
      v13 = *a4;
      if ( *((_BYTE *)a4 + 16) )
        goto LABEL_11;
    }
    else
    {
      v11 = *((_BYTE *)a3 + 16);
      *((_BYTE *)a3 + 16) = *((_BYTE *)a4 + 16);
      *((_BYTE *)a4 + 16) = v11;
      *a3 = v10;
      *a4 = v9;
      v12 = v10;
      v13 = v9;
      if ( v11 )
        goto LABEL_11;
    }
    if ( *((_DWORD *)a3 + 2) == *((_DWORD *)a4 + 2) )
    {
      if ( v13 == 0 || v9 == v10 )
      {
LABEL_11:
        v14 = *((_DWORD *)a3 + 2);
        v15 = *((_DWORD *)a4 + 2);
        if ( *((_BYTE *)a3 + 16) )
          goto LABEL_12;
        goto LABEL_15;
      }
    }
    else if ( !v13 )
    {
      v13 = 0LL;
      v14 = *((_DWORD *)a3 + 2);
      v15 = *((_DWORD *)a4 + 2);
      if ( *((_BYTE *)a3 + 16) )
      {
LABEL_12:
        if ( v12 == v13 && v14 == v15 )
          v15 = v14;
        else
          *a3 = ++v12;
      }
LABEL_15:
      *(_QWORD *)a1 = v12;
      *(_DWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = v13;
      *(_DWORD *)(a1 + 24) = v15;
      v8 = 1;
      goto LABEL_16;
    }
    *a4 = --v13;
    goto LABEL_11;
  }
LABEL_16:
  *(_BYTE *)(a1 + 32) = v8;
  return a1;
}