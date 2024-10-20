__int64 __fastcall uu_od::prn_char::format_ascii_dump(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  unsigned __int8 *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rax
  unsigned __int8 *v12; // rbx
  size_t v13; // rbp
  __int64 v14; // rbx
  __int128 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h]
  __int64 v18; // [rsp+20h] [rbp-38h]

  v5 = a2;
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 1LL;
  v17 = 0LL;
  alloc::raw_vec::RawVec<T,A>::grow_one(&v16, a2, a3, a4);
  v18 = a1;
  **((_BYTE **)&v16 + 1) = 62;
  v17 = 1LL;
  v8 = 1LL;
  if ( a3 )
  {
    v9 = 0LL;
    do
    {
      v10 = v5[v9];
      v7 = (unsigned int)(v10 - 32);
      if ( (unsigned __int8)(v10 - 32) >= 0x5Fu )
      {
        if ( v8 == (_QWORD)v16 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v16, a2, v6, v7);
        *(_BYTE *)(*((_QWORD *)&v16 + 1) + v8++) = 46;
      }
      else
      {
        v11 = (unsigned int)(16 * v10);
        v12 = *(unsigned __int8 **)((char *)&uu_od::prn_char::C_CHARS + v11);
        v13 = *(size_t *)((char *)&uu_od::prn_char::C_CHARS + v11 + 8);
        if ( (__int64)v16 - v8 < v13 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v16, v8, v13);
          v8 = v17;
        }
        a2 = v12;
        memcpy((void *)(*((_QWORD *)&v16 + 1) + v8), v12, v13);
        v8 = v17 + v13;
      }
      v17 = v8;
      ++v9;
    }
    while ( a3 != v9 );
  }
  v14 = v18;
  if ( v8 == (_QWORD)v16 )
    alloc::raw_vec::RawVec<T,A>::grow_one(&v16, a2, v6, v7);
  *(_BYTE *)(*((_QWORD *)&v16 + 1) + v8) = 60;
  *(_QWORD *)(v14 + 16) = v8 + 1;
  *(_OWORD *)v14 = v16;
  return v14;
}
