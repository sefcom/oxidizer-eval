__int64 __fastcall uu_cp::disk_usage(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  int dest; // [rsp+8h] [rbp-E0h] BYREF
  int v11; // [rsp+40h] [rbp-A8h]
  __int64 v12; // [rsp+58h] [rbp-90h]

  if ( !a2 )
    return 0LL;
  v4 = 24 * a2;
  v5 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      std::fs::metadata(&dest);
      if ( dest == 2 )
        break;
      if ( (v11 & 0xF000) == 0x4000 )
      {
        if ( (uu_cp::disk_usage_directory(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16)) & 1) != 0 )
          return 1LL;
        v6 += v8;
        a1 += 24LL;
        v4 -= 24LL;
        if ( !v4 )
          return v5;
      }
      else
      {
        v6 += v12;
        a1 += 24LL;
        v4 -= 24LL;
        if ( !v4 )
          return v5;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      std::fs::metadata(&dest);
      if ( dest == 2 )
        break;
      v7 = 0LL;
      if ( (v11 & 0xF000) != 0x4000 )
        v7 = v12;
      v6 += v7;
      a1 += 24LL;
      v4 -= 24LL;
      if ( !v4 )
        return v5;
    }
  }
  return 1LL;
}