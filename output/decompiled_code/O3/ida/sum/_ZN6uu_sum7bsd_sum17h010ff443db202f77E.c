unsigned __int64 __fastcall uu_sum::bsd_sum(__int64 a1, __int64 a2)
{
  int v3; // r15d
  __int64 (__fastcall *v4)(__int64, _QWORD *, __int64); // rbp
  __int64 v5; // r12
  unsigned __int64 v6; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // esi
  unsigned __int8 *v10; // rcx
  int v11; // r15d
  int v12; // r15d
  int v13; // r15d
  int v14; // r15d
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // edx
  __int64 v19; // rsi
  _QWORD s[518]; // [rsp+8h] [rbp-1030h] BYREF

  v3 = 0;
  memset(s, 0, 0x1000uLL);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a2 + 24);
  v5 = 0LL;
  while ( !v4(a1, s, 4096LL) )
  {
    if ( !v6 )
      goto LABEL_12;
    if ( v6 >= 0x1001 )
      core::slice::index::slice_end_index_len_fail(v6, 4096LL, &off_DF900);
    v7 = (unsigned __int8 *)s;
    v8 = v6 & 7;
    if ( (v6 & 7) != 0 )
    {
      do
      {
        v9 = *v7++;
        LOWORD(v3) = __ROR2__(v3, 1);
        v3 += v9;
        --v8;
      }
      while ( v8 );
    }
    v5 += v6;
    if ( v6 >= 8 )
    {
      v10 = (unsigned __int8 *)s + v6;
      do
      {
        LOWORD(v3) = __ROR2__(v3, 1);
        v11 = *v7 + v3;
        LOWORD(v11) = __ROR2__(v11, 1);
        v12 = v7[1] + v11;
        LOWORD(v12) = __ROR2__(v12, 1);
        v13 = v7[2] + v12;
        LOWORD(v13) = __ROR2__(v13, 1);
        v14 = v7[3] + v13;
        LOWORD(v14) = __ROR2__(v14, 1);
        v15 = v7[4] + v14;
        LOWORD(v15) = __ROR2__(v15, 1);
        v16 = v7[5] + v15;
        LOWORD(v16) = __ROR2__(v16, 1);
        v17 = v7[6] + v16;
        v18 = v7[7];
        v7 += 8;
        LOWORD(v17) = __ROR2__(v17, 1);
        v3 = v18 + v17;
      }
      while ( v7 != v10 );
    }
  }
  core::ptr::drop_in_place<std::io::error::Error>(v6);
LABEL_12:
  if ( *(_QWORD *)a2 )
    (*(void (__fastcall **)(__int64))a2)(a1);
  v19 = *(_QWORD *)(a2 + 8);
  if ( v19 )
    _rust_dealloc(a1, v19, *(_QWORD *)(a2 + 16));
  return (unsigned __int64)(v5 + 1023) >> 10;
}
