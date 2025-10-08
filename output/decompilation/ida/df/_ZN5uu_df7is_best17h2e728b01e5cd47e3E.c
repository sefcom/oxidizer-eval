__int64 __fastcall uu_df::is_best(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbp

  LOBYTE(v3) = 1;
  if ( a2 )
  {
    v6 = a3[1];
    v7 = a3[2];
    v8 = 152 * a2;
    while ( !(unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                                a1[1],
                                a1[2],
                                v6,
                                v7)
         || !uu_df::mount_info_lt(a3, a1) )
    {
      a1 += 19;
      v8 -= 152LL;
      if ( !v8 )
        return v3;
    }
    return 0;
  }
  return v3;
}