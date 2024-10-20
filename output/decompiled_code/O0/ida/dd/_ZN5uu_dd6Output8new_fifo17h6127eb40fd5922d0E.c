__int64 __fastcall uu_dd::Output::new_fifo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  int v10; // eax
  __int128 v11; // xmm0
  int v12; // eax
  char v14[4]; // [rsp+8h] [rbp-80h] BYREF
  int fd; // [rsp+Ch] [rbp-7Ch]
  __int128 v16; // [rsp+18h] [rbp-70h] BYREF
  __int128 v17; // [rsp+28h] [rbp-60h]
  int v18; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+3Ch] [rbp-4Ch]
  bool v20; // [rsp+44h] [rbp-44h]
  char v21; // [rsp+45h] [rbp-43h]
  _DWORD v22[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v23; // [rsp+50h] [rbp-38h]
  _DWORD v24[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v25; // [rsp+60h] [rbp-28h]

  if ( !*(_QWORD *)(a4 + 136) )
    goto LABEL_11;
  *(_QWORD *)&v16 = 0x1B600000000LL;
  DWORD2(v16) = 1;
  WORD6(v16) = 0;
  std::fs::OpenOptions::_open(v22, &v16, a2, a3);
  if ( v22[0] )
  {
    *(_QWORD *)&v16 = 0x8000000000000000LL;
    *((_QWORD *)&v17 + 1) = v23;
    v6 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v6 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_17:
    v11 = v16;
    v6[1] = v17;
    *v6 = v11;
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
    *(_BYTE *)a1 = 4;
    return a1;
  }
  fd = v22[1];
  v14[0] = 2;
  if ( !uu_dd::Dest::seek(v14, *(_QWORD *)(a4 + 136)) )
  {
    if ( (unsigned __int8)(v14[0] - 1) <= 1u )
    {
      std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
      close(fd);
    }
LABEL_11:
    if ( *(_QWORD *)a4 == 2LL || *(_QWORD *)(a4 + 8) )
    {
      v19 = 0x100000001B6LL;
      v20 = (*(_BYTE *)(a4 + 146) & 1) == 0;
      v21 = *(_BYTE *)(a4 + 145) & 1;
      BYTE6(v19) = *(_BYTE *)(a4 + 150) & 1;
      v10 = (BYTE6(v19) << 10) | ((*(_BYTE *)(a4 + 152) & 1) << 14) | ((*(_BYTE *)(a4 + 153) & 1) << 16) | ((*(_BYTE *)(a4 + 154) & 1) << 12) | ((*(_BYTE *)(a4 + 158) & 1) << 18) | ((*(_BYTE *)(a4 + 159) & 1) << 8) | ((*(_BYTE *)(a4 + 160) & 1) << 17) | ((*(_BYTE *)(a4 + 157) & 1) << 11) | 0x101000;
      if ( (*(_BYTE *)(a4 + 155) & 1) == 0 )
        v10 = (BYTE6(v19) << 10) | ((*(_BYTE *)(a4 + 152) & 1) << 14) | ((*(_BYTE *)(a4 + 153) & 1) << 16) | ((*(_BYTE *)(a4 + 154) & 1) << 12) | ((*(_BYTE *)(a4 + 158) & 1) << 18) | ((*(_BYTE *)(a4 + 159) & 1) << 8) | ((*(_BYTE *)(a4 + 160) & 1) << 17) | ((*(_BYTE *)(a4 + 157) & 1) << 11);
      v18 = v10;
      std::fs::OpenOptions::_open(v24, &v18, a2, a3);
      if ( v24[0] )
      {
        *(_QWORD *)&v16 = 0x8000000000000000LL;
        *((_QWORD *)&v17 + 1) = v25;
        v6 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v6 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_17;
      }
      v12 = v24[1];
      *(_BYTE *)a1 = 2;
      *(_DWORD *)(a1 + 4) = v12;
    }
    else
    {
      *(_BYTE *)a1 = 3;
    }
    *(_QWORD *)(a1 + 16) = a4;
    return a1;
  }
  *(_QWORD *)&v16 = 0x8000000000000000LL;
  *((_QWORD *)&v17 + 1) = v7;
  v8 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v8 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v9 = v16;
  v8[1] = v17;
  *v8 = v9;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
  *(_BYTE *)a1 = 4;
  if ( (unsigned __int8)(v14[0] - 1) <= 1u )
  {
    std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd);
    close(fd);
  }
  return a1;
}
