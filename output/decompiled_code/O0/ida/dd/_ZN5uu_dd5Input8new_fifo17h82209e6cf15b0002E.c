__int64 __fastcall uu_dd::Input::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // esi
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  _OWORD *v13; // rax
  __int128 v14; // xmm0
  int v15; // ecx
  int v17; // [rsp+0h] [rbp-58h] BYREF
  int fd; // [rsp+4h] [rbp-54h]
  __int128 v19; // [rsp+8h] [rbp-50h]
  __int128 v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+28h] [rbp-30h] BYREF
  __int64 v22; // [rsp+2Ch] [rbp-2Ch]
  __int16 v23; // [rsp+34h] [rbp-24h]
  int v24; // [rsp+38h] [rbp-20h] BYREF
  int v25; // [rsp+3Ch] [rbp-1Ch]
  __int64 v26; // [rsp+40h] [rbp-18h]

  v22 = 0x1000001B6LL;
  v23 = 0;
  v7 = ((*(_BYTE *)(a4 + 65) & 1) << 14) | ((*(_BYTE *)(a4 + 66) & 1) << 16) | ((*(_BYTE *)(a4 + 67) & 1) << 12) | ((*(_BYTE *)(a4 + 71) & 1) << 18) | ((*(_BYTE *)(a4 + 72) & 1) << 8) | ((*(_BYTE *)(a4 + 73) & 1) << 17) | ((*(_BYTE *)(a4 + 70) & 1) << 11) | 0x101000;
  if ( (*(_BYTE *)(a4 + 68) & 1) == 0 )
    v7 = ((*(_BYTE *)(a4 + 65) & 1) << 14) | ((*(_BYTE *)(a4 + 66) & 1) << 16) | ((*(_BYTE *)(a4 + 67) & 1) << 12) | ((*(_BYTE *)(a4 + 71) & 1) << 18) | ((*(_BYTE *)(a4 + 72) & 1) << 8) | ((*(_BYTE *)(a4 + 73) & 1) << 17) | ((*(_BYTE *)(a4 + 70) & 1) << 11);
  v21 = v7;
  std::fs::OpenOptions::_open(&v24, &v21, a2, a3);
  if ( v24 )
  {
    *(_QWORD *)&v19 = 0x8000000000000000LL;
    *((_QWORD *)&v20 + 1) = v26;
    v8 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v8 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v9 = v19;
    v8[1] = v20;
    *v8 = v9;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  v10 = v25;
  fd = v25;
  v17 = 2;
  v11 = *(_QWORD *)(a4 + 128);
  if ( !v11 )
  {
    v15 = 2;
LABEL_12:
    *(_DWORD *)(a1 + 8) = v15;
    *(_DWORD *)(a1 + 12) = v10;
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)a1 = 0LL;
    return a1;
  }
  if ( !uu_dd::Source::skip(&v17, v11) )
  {
    v15 = v17;
    v10 = fd;
    goto LABEL_12;
  }
  *(_QWORD *)&v19 = 0x8000000000000000LL;
  *((_QWORD *)&v20 + 1) = v12;
  v13 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v13 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v14 = v19;
  v13[1] = v20;
  *v13 = v14;
  *(_QWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
  *(_QWORD *)a1 = 1LL;
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
  close(fd);
  return a1;
}
