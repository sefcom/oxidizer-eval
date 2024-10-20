void *__fastcall uu_pr::read_stream_and_create_pages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  void *v9; // rax
  void *v10; // rbx
  _QWORD src[35]; // [rsp+8h] [rbp-120h] BYREF

  v3 = 1LL;
  v4 = 1LL;
  if ( *(_QWORD *)(a1 + 216) != 0x8000000000000000LL )
    v4 = *(_QWORD *)(a1 + 248);
  v5 = *(_QWORD *)(a1 + 304);
  if ( *(_QWORD *)(a1 + 256) != 0x8000000000000000LL )
    v3 = *(_QWORD *)(a1 + 288);
  v6 = v3 * (*(_QWORD *)(a1 + 312) >> *(_BYTE *)(a1 + 320));
  src[0] = 1LL;
  src[1] = 0LL;
  src[5] = 0LL;
  v7 = *(_OWORD *)(a2 + 16);
  v8 = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&src[9] = *(_OWORD *)a2;
  *(_OWORD *)&src[11] = v7;
  *(_OWORD *)&src[13] = v8;
  src[15] = *(_QWORD *)(a2 + 48);
  src[16] = 0LL;
  src[17] = v4;
  src[18] = a3;
  src[19] = v6;
  src[20] = 0LL;
  src[24] = 0LL;
  src[28] = 0LL;
  src[29] = v5;
  LOBYTE(src[30]) = 0;
  LOBYTE(src[34]) = 0;
  *(_OWORD *)&src[31] = *(_OWORD *)a1;
  src[33] = v5;
  v9 = (void *)_rust_alloc(280LL, 8LL);
  if ( !v9 )
    alloc::alloc::handle_alloc_error(8LL, 280LL);
  v10 = v9;
  memcpy(v9, src, 0x118uLL);
  return v10;
}
