__int64 __fastcall uu_tee::tee(__int64 a1)
{
  char v1; // bp
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r12
  void *v5; // rax
  void *v6; // r14
  __int64 v7; // rbx
  __int64 *v8; // rax
  void *v9; // r14
  _QWORD *v10; // rbx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  char v18; // al
  __int64 v19; // rax
  __int64 *v20; // r14
  void (__fastcall **v21)(__int64 *); // r15
  void (__fastcall *v22)(__int64 *); // rsi
  char v24; // [rsp+Fh] [rbp-C9h] BYREF
  __int128 v25; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+20h] [rbp-B8h]
  void *v27; // [rsp+30h] [rbp-A8h]
  __int64 v28; // [rsp+40h] [rbp-98h] BYREF
  __int64 *v29; // [rsp+48h] [rbp-90h] BYREF
  void (__fastcall **v30)(__int64 *); // [rsp+50h] [rbp-88h]
  void *src[2]; // [rsp+58h] [rbp-80h] BYREF
  void *v32; // [rsp+68h] [rbp-70h]
  __int64 v33; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v34[3]; // [rsp+78h] [rbp-60h] BYREF
  _QWORD v35[9]; // [rsp+90h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 25) && signal(2, (__sighandler_t)((char *)&dword_0 + 1)) == (__sighandler_t)-1LL
    || (v1 = *(_BYTE *)(a1 + 26), v1 == 4) && signal(13, 0LL) == (__sighandler_t)-1LL )
  {
    _errno_location();
    return 0x2700000003LL;
  }
  v2 = *(_QWORD *)(a1 + 16);
  v34[0] = *(_QWORD *)(a1 + 8);
  v34[1] = v34[0] + 24 * v2;
  v34[2] = a1;
  core::iter::adapters::try_process(&v25, v34);
  v3 = *((_QWORD *)&v25 + 1);
  if ( (_QWORD)v25 != 0x8000000000000000LL )
  {
    v4 = v26;
    *(_OWORD *)src = v25;
    v32 = (void *)v26;
    v5 = (void *)_rust_alloc(17LL, 1LL);
    if ( !v5 )
      alloc::raw_vec::handle_error(1LL, 17LL);
    v6 = v5;
    qmemcpy(v5, "'standard output'", 17);
    v7 = std::io::stdio::stdout();
    v8 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v8 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v8 = v7;
    *((_QWORD *)&v26 + 1) = v8;
    v27 = &unk_E7938;
    *(_QWORD *)&v25 = 17LL;
    *((_QWORD *)&v25 + 1) = v6;
    *(_QWORD *)&v26 = 17LL;
    v9 = v32;
    if ( v32 == src[0] )
      alloc::raw_vec::RawVec<T,A>::grow_one(src);
    v10 = src[1];
    if ( v9 )
      memmove((char *)src[1] + 40, src[1], 40LL * (_QWORD)v9);
    v11 = v25;
    v12 = v26;
    v10[4] = v27;
    *((_OWORD *)v10 + 1) = v12;
    *(_OWORD *)v10 = v11;
    v32 = (char *)v9 + 1;
    v26 = (unsigned __int64)v9 + 1;
    v25 = *(_OWORD *)src;
    LOBYTE(v27) = v1;
    v13 = std::io::stdio::stdin();
    v14 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v14 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v14 = v13;
    v29 = v14;
    v30 = (void (__fastcall **)(__int64 *))&unk_E7988;
    v15 = std::io::copy::stack_buffer_copy(&v29, &v25);
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        v17 = v16;
        v18 = std::io::error::Error::kind(v16);
        v16 = v17;
        if ( v18 != 39 )
        {
          core::ptr::drop_in_place<std::io::error::Error>(v17);
          v3 = 0x2700000003LL;
LABEL_24:
          v20 = v29;
          v21 = v30;
          if ( *v30 )
            (*v30)(v29);
          v22 = v21[1];
          if ( v22 )
            _rust_dealloc(v20, v22, v21[2]);
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v25);
          if ( (_QWORD)v25 )
            _rust_dealloc(*((_QWORD *)&v25 + 1), 40 * v25, 8LL);
          return v3;
        }
      }
      core::ptr::drop_in_place<std::io::error::Error>(v16);
    }
    v3 = 0x2700000003LL;
    if ( v4 == v2 )
    {
      v28 = 0LL;
      v24 = (char)v27;
      v33 = 0LL;
      v35[0] = &v24;
      v35[1] = &v33;
      v35[2] = &v28;
      alloc::vec::Vec<T,A>::retain_mut(&v25, v35);
      v19 = v33 + *((_QWORD *)&v26 + 1);
      *((_QWORD *)&v26 + 1) += v33;
      if ( v28 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v28);
      }
      else if ( !v19 )
      {
        v3 = 0LL;
      }
    }
    goto LABEL_24;
  }
  return v3;
}
