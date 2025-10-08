bool __fastcall bat::line_range::LineRange::is_inside(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  char v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  char v8; // al
  unsigned __int64 v10; // rax
  bool v11; // cf
  unsigned __int64 v12; // rcx

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_BYTE *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 1 )
  {
    v7 = 0LL;
    if ( a4 >= v4 )
      v7 = a4 - v4;
    v8 = a3 & (v7 <= a2);
    if ( (v5 & 1) == 0 )
      return (a2 <= v6) & v8;
    if ( !v8 )
      return 0;
  }
  else
  {
    if ( (v5 & 1) == 0 )
      return v4 <= a2 && a2 <= v6;
    if ( (a3 & 1) == 0 )
      return v4 <= a2;
    if ( v4 > a2 )
      return 0;
  }
  v10 = 0LL;
  v11 = a4 < v6;
  v12 = a4 - v6;
  if ( !v11 )
    v10 = v12;
  return a2 <= v10;
}