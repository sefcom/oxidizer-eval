        unsigned __int64 a5)
{
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned __int64 v8; // r14
  __int64 v9; // r9
  __int64 v10; // r13
  void *v11; // rax
  void *v12; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm0
  _QWORD v16[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+10h] [rbp-38h]
  __int64 v18; // [rsp+18h] [rbp-30h]

  v6 = *(unsigned __int8 *)(a4 + 41);
  LOBYTE(v6) = 8 * v6;
  v7 = (unsigned int)&loc_100A1A >> v6;
  v8 = 0x8000000000000000LL;
  if ( *(_BYTE *)(a4 + 40) )
  {
    v9 = *(_QWORD *)(a4 + 32);
LABEL_8:
    v14 = *(_OWORD *)(a4 + 8);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v9;
    *(_BYTE *)(a1 + 16) = v7;
    *(_DWORD *)(a1 + 17) = a5;
    *(_BYTE *)(a1 + 23) = BYTE6(a5);
    *(_WORD *)(a1 + 21) = WORD2(a5);
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 32) = a2;
    *(_QWORD *)(a1 + 40) = a3;
    *(_OWORD *)(a1 + 48) = v14;
    *(_BYTE *)(a1 + 64) = 1;
    return a1;
  }
  v10 = a3;
  uu_split::number::FixedWidthNumber::new((__int64)v16, v7, *(_QWORD *)(a4 + 24), *(_QWORD *)(a4 + 32));
  if ( v16[0] != 0x8000000000000000LL )
  {
    v9 = v16[1];
    LOBYTE(v7) = v17;
    v6 = v18;
    a5 = v17 >> 8;
    v8 = v16[0];
    a3 = v10;
    goto LABEL_8;
  }
  v11 = (void *)_rust_alloc(63LL, 1LL);
  if ( !v11 )
    alloc::raw_vec::handle_error(1LL, 63LL);
  v12 = v11;
  qmemcpy(v11, "numerical suffix start value is too large for the suffix length", 63);
  v13 = _rust_alloc(32LL, 8LL);
  if ( !v13 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)v13 = 63LL;
  *(_QWORD *)(v13 + 8) = v12;
  *(_QWORD *)(v13 + 16) = 63LL;
  *(_DWORD *)(v13 + 24) = 1;
  *(_QWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 16) = &off_10C6C8;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return a1;
}
