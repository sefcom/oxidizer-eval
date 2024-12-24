__int64 __fastcall uu_cp::disk_usage(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-E8h] BYREF
  int v12; // [rsp+10h] [rbp-D8h] BYREF
  int v13; // [rsp+48h] [rbp-A0h]
  __int64 v14; // [rsp+60h] [rbp-88h]

  v11[0] = a1;
  v11[1] = a1 + 24 * a2;
  v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v11);
  if ( !v4 )
    return 0LL;
  if ( a3 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = v4;
      std::fs::metadata(&v12, v4);
      if ( v12 == 2 )
        break;
      if ( (v13 & 0xF000) == 0x4000 )
      {
        if ( uu_cp::disk_usage_directory(*(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16)) )
          return 1LL;
        v5 += v7;
      }
      else
      {
        v5 += v14;
      }
      v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v11);
      if ( !v4 )
        return 0LL;
    }
  }
  else
  {
    v9 = 0LL;
    while ( 1 )
    {
      std::fs::metadata(&v12, v4);
      if ( v12 == 2 )
        break;
      if ( (v13 & 0xF000) == 0x4000 )
        v10 = 0LL;
      else
        v10 = v14;
      v9 += v10;
      v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v11);
      if ( !v4 )
        return 0LL;
    }
  }
  return 1LL;
}
