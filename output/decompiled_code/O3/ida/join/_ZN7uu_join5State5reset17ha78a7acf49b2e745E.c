__int64 __fastcall uu_join::State::reset(_QWORD *a1, __int128 *a2)
{
  _OWORD *v3; // r15
  __int64 v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1

  v3 = (_OWORD *)a1[1];
  v4 = a1[2];
  a1[2] = 0LL;
  if ( v4 )
  {
    v5 = v3 + 2;
    do
    {
      v6 = *(v5 - 4);
      if ( v6 )
        _rust_dealloc(*(v5 - 3), 16 * v6, 8LL);
      v7 = *(v5 - 1);
      if ( v7 )
        _rust_dealloc(*v5, v7, 1LL);
      v5 += 6;
      --v4;
    }
    while ( v4 );
  }
  result = 0x8000000000000000LL;
  if ( *(_QWORD *)a2 != 0x8000000000000000LL )
  {
    if ( !*a1 )
    {
      result = alloc::raw_vec::RawVec<T,A>::grow_one(a1);
      v3 = (_OWORD *)a1[1];
    }
    v9 = *a2;
    v10 = a2[1];
    v3[2] = a2[2];
    v3[1] = v10;
    *v3 = v9;
    a1[2] = 1LL;
  }
  return result;
}
