char __fastcall alacritty_terminal::vi_mode::is_boundary(_QWORD *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  int v6; // r9d
  bool v7; // cf
  int v8; // eax
  char result; // al

  v4 = a1[10];
  v5 = a1[24];
  v6 = 0;
  v7 = v4 < v5;
  v8 = v4 - v5;
  if ( !v7 )
    v6 = v8;
  if ( a4 || a2 || (result = 1, a3 > -v6) )
  {
    if ( a3 == (_DWORD)v5 - 1 )
      return a4 & ((unsigned __int64)(a2 + 1) >= a1[23]);
    else
      return 0;
  }
  return result;
}