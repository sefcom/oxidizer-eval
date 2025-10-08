char __fastcall alacritty_terminal::selection::SelectionRange::contains(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // eax
  char result; // al
  int v5; // ecx

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > a3 )
    return 0;
  v5 = *(_DWORD *)(a1 + 24);
  if ( v5 < a3 )
    return 0;
  if ( *(_QWORD *)a1 <= a2 )
    goto LABEL_10;
  if ( v3 == a3 )
    return 0;
  if ( *(_BYTE *)(a1 + 32) )
    return 0;
LABEL_10:
  result = 1;
  if ( *(_QWORD *)(a1 + 16) < a2 )
  {
    if ( v5 == a3 )
      return 0;
    else
      return *(_BYTE *)(a1 + 32) ^ 1;
  }
  return result;
}