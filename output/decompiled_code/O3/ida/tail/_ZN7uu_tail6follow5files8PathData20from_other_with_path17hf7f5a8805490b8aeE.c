        __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rax
  _OWORD *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // kr00_16
  const void *v10; // r13
  signed __int64 v11; // rbp
  const void *v12; // r15
  __int64 v13; // r13
  __int64 v14; // rax
  void *v15; // rbx
  __int64 v16; // rsi
  _OWORD *v18; // [rsp+10h] [rbp-1A8h]
  __int64 (__fastcall **v19)(); // [rsp+18h] [rbp-1A0h]
  __int128 v20; // [rsp+38h] [rbp-180h] BYREF
  _OWORD src[10]; // [rsp+48h] [rbp-170h] BYREF
  _QWORD dest[26]; // [rsp+E8h] [rbp-D0h] BYREF

  v19 = (__int64 (__fastcall **)())a2[26];
  v18 = (_OWORD *)a2[25];
  if ( !v18 )
  {
    *(_QWORD *)&v20 = 0x1B600000000LL;
    DWORD2(v20) = 1;
    WORD6(v20) = 0;
    std::fs::OpenOptions::_open(dest, &v20, a3, a4);
    if ( LODWORD(dest[0]) )
    {
      core::ptr::drop_in_place<std::io::error::Error>(dest[1]);
      v18 = 0LL;
    }
    else
    {
      v4 = HIDWORD(dest[0]);
      v5 = _rust_alloc(0x2000LL, 1LL);
      if ( !v5 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      *(_QWORD *)&v20 = v5;
      *((_QWORD *)&v20 + 1) = 0x2000LL;
      memset(src, 0, 24);
      DWORD2(src[1]) = v4;
      v6 = (_OWORD *)_rust_alloc(48LL, 8LL);
      if ( !v6 )
        alloc::alloc::handle_alloc_error(8LL, 48LL);
      v7 = v20;
      v8 = src[0];
      v6[2] = src[1];
      v6[1] = v8;
      v18 = v6;
      *v6 = v7;
    }
    v19 = &anon_c568fa996e9b1afffbd2fe86e67742f4_14_llvm_893476530518564186;
  }
  std::sys::pal::unix::fs::stat(&v20);
  v9 = v20;
  if ( (_QWORD)v20 == 2LL )
    core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v20 + 1));
  else
    memcpy(dest, src, 0xA0uLL);
  v10 = (const void *)a2[23];
  v11 = a2[24];
  if ( v11 )
  {
    if ( v11 < 0 )
    {
      v13 = 0LL;
    }
    else
    {
      v12 = (const void *)a2[23];
      v13 = 1LL;
      v14 = _rust_alloc(v11, 1LL);
      if ( v14 )
      {
        v15 = (void *)v14;
        v10 = v12;
        goto LABEL_16;
      }
    }
    alloc::raw_vec::handle_error(v13, v11);
  }
  v15 = &dword_0 + 1;
LABEL_16:
  memcpy(v15, v10, v11);
  *(_QWORD *)(a1 + 200) = v18;
  *(_QWORD *)(a1 + 208) = v19;
  *(_OWORD *)a1 = v9;
  memcpy((void *)(a1 + 16), dest, 0xA0uLL);
  *(_QWORD *)(a1 + 176) = v11;
  *(_QWORD *)(a1 + 184) = v15;
  *(_QWORD *)(a1 + 192) = v11;
  v16 = a2[22];
  if ( v16 )
    _rust_dealloc(v10, v16, 1LL);
  return a1;
}
