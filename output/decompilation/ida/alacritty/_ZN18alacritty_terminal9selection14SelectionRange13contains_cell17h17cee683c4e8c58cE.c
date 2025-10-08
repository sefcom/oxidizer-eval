char __fastcall alacritty_terminal::selection::SelectionRange::contains_cell(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5)
{
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  __int64 v10; // r8
  bool v11; // r8
  bool v12; // di
  bool v13; // dl
  bool v14; // si
  char result; // al
  unsigned __int64 v16; // r15
  char v17; // cl

  v7 = *(_DWORD *)(a2 + 16);
  if ( a5 != 0 || a4 != v7 )
    goto LABEL_10;
  if ( a3 != *(_QWORD *)(a2 + 8) )
    goto LABEL_9;
  v8 = *(_DWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == a3 && v8 == a4 )
    return 0;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == a3 && v9 == a4 )
    return 0;
  if ( *(_BYTE *)(a1 + 32) != 1 )
  {
LABEL_9:
    v7 = a4;
LABEL_10:
    v16 = *(_QWORD *)(a2 + 8);
    v17 = alacritty_terminal::selection::SelectionRange::contains(a1, v16, v7);
    result = 1;
    if ( v17 )
      return result;
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 20LL) & 0x20) != 0 )
      return alacritty_terminal::selection::SelectionRange::contains(a1, v16 + 1, v7);
    return 0;
  }
  v11 = v10 == a3;
  v12 = v9 == a4;
  v13 = *(_QWORD *)a1 == a3;
  v14 = v8 == a4;
  result = 0;
  if ( !v11 || !v14 )
  {
    v7 = a4;
    if ( !v13 || !v12 )
      goto LABEL_10;
  }
  return result;
}