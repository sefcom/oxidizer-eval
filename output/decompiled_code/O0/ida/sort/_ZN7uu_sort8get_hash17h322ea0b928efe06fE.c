__int64 __fastcall uu_sort::get_hash(__int64 a1)
{
  unsigned __int8 *v1; // rax
  __int64 v2; // r9
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // rsi
  unsigned __int8 *v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned __int8 *v16; // rsi
  __int64 v17; // rax
  unsigned __int8 *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax

  v1 = *(unsigned __int8 **)a1;
  v2 = 0xAF64724C8602EB6ELL;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = 0xCBF29CE484222325LL;
      v5 = *(_QWORD *)(a1 + 8) & 7LL;
      if ( (unsigned __int64)(v3 - 1) >= 7 )
      {
        v6 = v3 & 0xFFFFFFFFFFFFFFF8LL;
        do
        {
          v7 = 0x100000001B3LL
             * ((0x100000001B3LL
               * ((0x100000001B3LL
                 * ((0x100000001B3LL
                   * ((0x100000001B3LL * ((0x100000001B3LL * ((0x100000001B3LL * (v4 ^ *v1)) ^ v1[1])) ^ v1[2])) ^ v1[3])) ^ v1[4])) ^ v1[5])) ^ v1[6]);
          v8 = v1[7];
          v1 += 8;
          v4 = 0x100000001B3LL * (v7 ^ v8);
          v6 -= 8LL;
        }
        while ( v6 );
      }
      v9 = v4;
      if ( v5 )
      {
        for ( i = 0LL; i != v5; ++i )
        {
          v9 = 0x100000001B3LL * (v4 ^ v1[i]);
          v4 = v9;
        }
      }
      v2 = 0x100000001B3LL * (v9 ^ 0xFF);
    }
  }
  v11 = *(unsigned __int8 **)(a1 + 16);
  if ( !v11 || (v12 = *(_QWORD *)(a1 + 24), (v12 & 0x8000000000000000LL) != 0LL) )
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  result = 0x100000001B3LL
         * ((0x100000001B3LL
           * ((0x100000001B3LL
             * ((0x100000001B3LL
               * ((0x100000001B3LL
                 * ((0x100000001B3LL
                   * ((0x100000001B3LL * ((0x100000001B3LL * (v2 ^ (unsigned __int8)v12)) ^ BYTE1(v12))) ^ BYTE2(v12))) ^ BYTE3(v12))) ^ BYTE4(v12))) ^ BYTE5(v12))) ^ BYTE6(v12))) ^ HIBYTE(v12));
  if ( v12 )
  {
    v14 = *(_QWORD *)(a1 + 24) & 7LL;
    if ( (v12 & 7) != 0 )
    {
      v15 = 0x100000001B3LL
          * ((0x100000001B3LL
            * ((0x100000001B3LL
              * ((0x100000001B3LL
                * ((0x100000001B3LL
                  * ((0x100000001B3LL
                    * ((0x100000001B3LL * ((0x100000001B3LL * (v2 ^ (unsigned __int8)v12)) ^ BYTE1(v12))) ^ BYTE2(v12))) ^ BYTE3(v12))) ^ BYTE4(v12))) ^ BYTE5(v12))) ^ BYTE6(v12))) ^ HIBYTE(v12));
      v16 = v11;
      do
      {
        v17 = *v16++;
        result = 0x100000001B3LL * (v15 ^ v17);
        v15 = result;
        --v14;
      }
      while ( v14 );
      if ( v12 < 8 )
        return result;
    }
    else
    {
      v16 = v11;
      if ( v12 < 8 )
        return result;
    }
    v18 = &v11[v12];
    do
    {
      v19 = 0x100000001B3LL
          * ((0x100000001B3LL
            * ((0x100000001B3LL
              * ((0x100000001B3LL
                * ((0x100000001B3LL * ((0x100000001B3LL * ((0x100000001B3LL * (result ^ *v16)) ^ v16[1])) ^ v16[2])) ^ v16[3])) ^ v16[4])) ^ v16[5])) ^ v16[6]);
      v20 = v16[7];
      v16 += 8;
      result = 0x100000001B3LL * (v19 ^ v20);
    }
    while ( v16 != v18 );
  }
  return result;
}
