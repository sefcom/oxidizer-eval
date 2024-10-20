__int64 __fastcall uu_env::string_expander::StringExpander::take_one(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r13
  const void *v6; // rbp
  size_t v7; // r12
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v11; // [rsp+0h] [rbp-58h]
  __int64 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  unsigned __int8 v15; // [rsp+20h] [rbp-38h]
  unsigned int v16; // [rsp+21h] [rbp-37h]
  unsigned __int16 v17; // [rsp+25h] [rbp-33h]
  unsigned __int8 v18; // [rsp+27h] [rbp-31h]

  uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii((__int64)&v13, a1 + 3);
  v1 = v14;
  if ( v13 != 0x8000000000000000LL )
  {
    v12 = v13;
    v11 = v14;
    v2 = v15 | ((unsigned __int64)((v18 << 16) | (unsigned int)v17) << 40) | ((unsigned __int64)v16 << 8);
    if ( v2 )
    {
      v3 = v14;
      v4 = v14 + 16 * v2;
      do
      {
        v6 = *(const void **)v3;
        v7 = *(_QWORD *)(v3 + 8);
        if ( *(_QWORD *)v3 )
        {
          v8 = a1[2];
          if ( *a1 - v8 < v7 )
          {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, a1[2], *(_QWORD *)(v3 + 8));
            v8 = a1[2];
          }
          memcpy((void *)(v8 + a1[1]), v6, v7);
          v5 = v7 + v8;
        }
        else
        {
          v9 = a1[2];
          if ( v9 == *a1 )
            alloc::raw_vec::RawVec<T,A>::grow_one(a1);
          *(_BYTE *)(a1[1] + v9) = BYTE4(v7);
          v5 = v9 + 1;
        }
        a1[2] = v5;
        v3 += 16LL;
      }
      while ( v3 != v4 );
    }
    v1 = v11;
    if ( v12 )
      _rust_dealloc(v11, 16 * v12, 8LL);
  }
  return v1;
}
