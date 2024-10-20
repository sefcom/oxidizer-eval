__int64 __fastcall uu_dd::Input::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // esi
  bool v9; // zf
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi
  _OWORD *v16; // rax
  __int128 v17; // xmm0
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rdx
  _OWORD *v21; // rax
  __int128 v22; // xmm0
  int v23; // ecx
  int v25; // [rsp+0h] [rbp-48h] BYREF
  int fd; // [rsp+4h] [rbp-44h]
  __int128 v27; // [rsp+8h] [rbp-40h] BYREF
  __int128 v28; // [rsp+18h] [rbp-30h]
  int v29; // [rsp+28h] [rbp-20h] BYREF
  __int64 v30; // [rsp+2Ch] [rbp-1Ch]
  __int16 v31; // [rsp+34h] [rbp-14h]

  v30 = 438LL;
  v7 = *(unsigned __int8 *)(a4 + 65) << 14;
  v8 = v7 | 0x10000;
  v9 = *(_BYTE *)(a4 + 66) == 0;
  v31 = 0;
  if ( v9 )
    v8 = v7;
  v10 = v8 + 4096;
  if ( !*(_BYTE *)(a4 + 67) )
    v10 = v8;
  v11 = v10 | 0x40000;
  if ( !*(_BYTE *)(a4 + 71) )
    v11 = v10;
  v12 = v11 | 0x100;
  if ( !*(_BYTE *)(a4 + 72) )
    v12 = v11;
  v13 = v12 | 0x20000;
  if ( !*(_BYTE *)(a4 + 73) )
    v13 = v12;
  v14 = v13 | 0x800;
  if ( !*(_BYTE *)(a4 + 70) )
    v14 = v13;
  v15 = v14 | 0x101000;
  v9 = *(_BYTE *)(a4 + 68) == 0;
  BYTE4(v30) = 1;
  if ( v9 )
    v15 = v14;
  v29 = v15;
  std::fs::OpenOptions::_open(&v27, &v29, a2, a3);
  if ( (_DWORD)v27 )
  {
    *(_QWORD *)&v27 = 0x8000000000000000LL;
    *((_QWORD *)&v28 + 1) = *((_QWORD *)&v27 + 1);
    v16 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v16 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v17 = v27;
    v16[1] = v28;
    *v16 = v17;
    *(_QWORD *)(a1 + 8) = v16;
    *(_QWORD *)(a1 + 16) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  v18 = DWORD1(v27);
  fd = DWORD1(v27);
  v25 = 2;
  v19 = *(_QWORD *)(a4 + 128);
  if ( !v19 )
  {
    v23 = 2;
LABEL_24:
    *(_DWORD *)(a1 + 8) = v23;
    *(_DWORD *)(a1 + 12) = v18;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  if ( !uu_dd::Source::skip(&v25, v19) )
  {
    v23 = v25;
    v18 = fd;
    goto LABEL_24;
  }
  *(_QWORD *)&v27 = 0x8000000000000000LL;
  *((_QWORD *)&v28 + 1) = v20;
  v21 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v21 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v22 = v27;
  v21[1] = v28;
  *v21 = v22;
  *(_QWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 16) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
  *(_QWORD *)a1 = 1LL;
  close(fd);
  return a1;
}
