__int64 __fastcall uu_dd::Output::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  _OWORD *v7; // rax
  __int64 v8; // rdx
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int128 v19; // xmm0
  int v20; // eax
  __int128 v22; // [rsp+0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+10h] [rbp-58h]
  int v24; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v25[12]; // [rsp+24h] [rbp-44h]
  char v26[4]; // [rsp+30h] [rbp-38h] BYREF
  int fd; // [rsp+34h] [rbp-34h]

  v6 = *(_QWORD *)(a4 + 136);
  if ( !v6 )
    goto LABEL_11;
  *(_QWORD *)&v22 = 0x1B600000000LL;
  DWORD2(v22) = 1;
  WORD6(v22) = 0;
  std::fs::OpenOptions::_open(&v24, &v22, a2, a3);
  if ( v24 )
  {
    *(_QWORD *)&v22 = 0x8000000000000000LL;
    *((_QWORD *)&v23 + 1) = *(_QWORD *)&v25[4];
    v7 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_32:
    v19 = v22;
    v7[1] = v23;
    *v7 = v19;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
    *(_BYTE *)a1 = 4;
    return a1;
  }
  fd = *(_DWORD *)v25;
  v26[0] = 2;
  if ( !uu_dd::Dest::seek(v26, v6) )
  {
    if ( (unsigned __int8)(v26[0] - 1) <= 1u )
      close(fd);
LABEL_11:
    if ( *(_QWORD *)a4 && (unsigned int)*(_QWORD *)a4 != 1 || *(_QWORD *)(a4 + 8) )
    {
      *(_QWORD *)v25 = 0x100000001B6LL;
      v25[8] = *(_BYTE *)(a4 + 146) ^ 1;
      v25[9] = *(_BYTE *)(a4 + 145);
      v25[6] = *(_BYTE *)(a4 + 150);
      v11 = (v25[6] << 10) | 0x4000;
      if ( !*(_BYTE *)(a4 + 152) )
        v11 = v25[6] << 10;
      v12 = v11 | 0x10000;
      if ( !*(_BYTE *)(a4 + 153) )
        v12 = v11;
      v13 = v12 | 0x1000;
      if ( !*(_BYTE *)(a4 + 154) )
        v13 = v12;
      v14 = v13 | 0x40000;
      if ( !*(_BYTE *)(a4 + 158) )
        v14 = v13;
      v15 = v14 | 0x100;
      if ( !*(_BYTE *)(a4 + 159) )
        v15 = v14;
      v16 = v15 | 0x20000;
      if ( !*(_BYTE *)(a4 + 160) )
        v16 = v15;
      v17 = v16 | 0x800;
      if ( !*(_BYTE *)(a4 + 157) )
        v17 = v16;
      v18 = v17 | 0x101000;
      if ( !*(_BYTE *)(a4 + 155) )
        v18 = v17;
      v24 = v18;
      std::fs::OpenOptions::_open(&v22, &v24, a2, a3);
      if ( (_DWORD)v22 )
      {
        *(_QWORD *)&v22 = 0x8000000000000000LL;
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&v22 + 1);
        v7 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v7 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_32;
      }
      v20 = DWORD1(v22);
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 4) = v20;
    }
    else
    {
      *(_BYTE *)a1 = 3;
    }
    *(_QWORD *)(a1 + 16) = a4;
    return a1;
  }
  *(_QWORD *)&v22 = 0x8000000000000000LL;
  *((_QWORD *)&v23 + 1) = v8;
  v9 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v9 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v10 = v22;
  v9[1] = v23;
  *v9 = v10;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
  *(_BYTE *)a1 = 4;
  if ( (unsigned __int8)(v26[0] - 1) <= 1u )
    close(fd);
  return a1;
}
