char __fastcall uu_echo::is_echo_flag(__int64 a1, char *a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // r14
  __int64 v5; // rdi
  char v7; // cl
  int v8; // esi
  __int64 v9; // rdx
  int v10; // r8d

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 0;
  v3 = *(_BYTE **)(a1 + 8);
  if ( *v3 != 45 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(v5, v2) )
    return 0;
  v7 = *a2;
  v8 = (unsigned __int8)a2[1];
  if ( v2 != 1 )
  {
    v9 = 1LL;
    while ( 1 )
    {
      v10 = (unsigned __int8)v3[v9];
      if ( v10 == 69 )
      {
        LODWORD(v5) = 0;
      }
      else
      {
        LOBYTE(v5) = 1;
        if ( v10 != 101 )
        {
          if ( v10 != 110 )
            return 0;
          v7 = 0;
          LODWORD(v5) = v8;
        }
      }
      ++v9;
      v8 = v5;
      if ( v2 == v9 )
        goto LABEL_7;
    }
  }
  LOBYTE(v5) = v8;
LABEL_7:
  a2[1] = v5 & 1;
  *a2 = v7 & 1;
  return 1;
}