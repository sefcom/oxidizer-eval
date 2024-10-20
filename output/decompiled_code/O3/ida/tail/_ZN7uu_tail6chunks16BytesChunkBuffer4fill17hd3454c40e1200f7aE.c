_OWORD *__fastcall uu_tail::chunks::BytesChunkBuffer::fill(unsigned __int64 *a1, __int64 *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r15
  __int64 (__fastcall *v6)(__int64, _QWORD *, __int64); // r13
  __int64 i; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rsi
  _QWORD *v20; // rax
  _OWORD *v21; // rax
  _OWORD *v22; // r14
  __int128 v23; // xmm0
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r13
  bool v29; // cf
  unsigned __int64 v30; // r13
  __int64 v31; // rbp
  unsigned __int64 v32; // r15
  size_t v33; // r12
  _QWORD *v34; // rax
  _QWORD *v35; // r13
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  _OWORD dest[512]; // [rsp+0h] [rbp-6030h] BYREF
  _QWORD src[1024]; // [rsp+2000h] [rbp-4030h] BYREF
  _QWORD s[1024]; // [rsp+4000h] [rbp-2030h] BYREF

  src[512] = 0LL;
  src[0] = 0LL;
  *(_QWORD *)&dest[256] = 0LL;
  *(_QWORD *)&dest[0] = 0LL;
  memset(s, 0, sizeof(s));
  v3 = (_QWORD *)_rust_alloc(8200LL, 8LL);
  if ( !v3 )
LABEL_39:
    alloc::alloc::handle_alloc_error(8LL, 8200LL);
  v4 = v3;
  memset(v3, 0, 0x2008uLL);
  v5 = *a2;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a2[1] + 24);
  for ( i = v6(*a2, v4, 0x2000LL); !i; i = v6(v5, v4, 0x2000LL) )
  {
    v4[1024] = v8;
    if ( !v8 )
    {
      v24 = a1[3];
      if ( v24 )
      {
        v25 = a1[2];
        v26 = *a1;
        v27 = a1[1];
        if ( v25 + 1 < *a1 )
          v26 = 0LL;
        a1[2] = v25 - v26 + 1;
        a1[3] = v24 - 1;
        v28 = a1[5];
        v29 = v28 < a1[4];
        v30 = v28 - a1[4];
        if ( v29 )
          v30 = 0LL;
        v31 = *(_QWORD *)(v27 + 8 * v25);
        v32 = *(_QWORD *)(v31 + 0x2000);
        v33 = v32 - v30;
        if ( v32 <= v30 )
        {
          v33 = 0LL;
          memset(src, 0, sizeof(src));
        }
        else
        {
          memset(dest, 0, sizeof(dest));
          if ( v32 >= 0x2001 )
            core::slice::index::slice_end_index_len_fail(
              v32,
              0x2000LL,
              &anon_260ad779062915721296377f2d114085_14_llvm_11775337101010531792);
          memcpy(dest, (const void *)(v31 + v30), v33);
          memcpy(src, dest, sizeof(src));
        }
        v34 = (_QWORD *)_rust_alloc(8200LL, 8LL);
        if ( !v34 )
          alloc::alloc::handle_alloc_error(8LL, 8200LL);
        v35 = v34;
        memcpy(v34, src, 0x2000uLL);
        v35[1024] = v33;
        v36 = *a1;
        v37 = a1[3];
        if ( v37 == *a1 )
        {
          alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
          v36 = *a1;
          v37 = a1[3];
        }
        v38 = a1[1];
        v39 = a1[2] - 1;
        v29 = __CFADD__(v39, v36);
        v40 = v39 + v36;
        if ( !v29 )
          v40 = a1[2] - 1;
        a1[2] = v40;
        a1[3] = v37 + 1;
        *(_QWORD *)(v38 + 8 * v40) = v35;
        _rust_dealloc(v31, 8200LL, 8LL);
      }
      v22 = 0LL;
      goto LABEL_37;
    }
    a1[5] += v8;
    v10 = *a1;
    v11 = a1[3];
    if ( v11 == *a1 )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
      v10 = *a1;
      v11 = a1[3];
    }
    v12 = a1[2] + v11;
    v13 = 0LL;
    if ( v12 >= v10 )
      v13 = v10;
    *(_QWORD *)(a1[1] + 8 * (v12 - v13)) = v4;
    v14 = a1[3];
    a1[3] = v14 + 1;
    if ( v14 == -1LL )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_15C1D0);
    v15 = a1[2];
    v16 = a1[1];
    v17 = 0LL;
    if ( v15 >= *a1 )
      v17 = *a1;
    v18 = v15 - v17;
    v19 = a1[5];
    if ( v19 - *(_QWORD *)(*(_QWORD *)(v16 + 8 * v18) + 0x2000LL) > a1[4] )
    {
      v9 = 0LL;
      if ( v15 + 1 >= *a1 )
        v9 = *a1;
      a1[2] = v15 - v9 + 1;
      a1[3] = v14;
      v4 = *(_QWORD **)(v16 + 8 * v15);
      a1[5] = v19 - v4[1024];
    }
    else
    {
      v20 = (_QWORD *)_rust_alloc(8200LL, 8LL);
      if ( !v20 )
        goto LABEL_39;
      v4 = v20;
      memcpy(v20, s, 0x2000uLL);
      v4[1024] = 0LL;
    }
  }
  *(_QWORD *)&dest[0] = 0x8000000000000000LL;
  *((_QWORD *)&dest[1] + 1) = v8;
  v21 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v21 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v22 = v21;
  v23 = dest[0];
  v21[1] = dest[1];
  *v21 = v23;
LABEL_37:
  _rust_dealloc(v4, 8200LL, 8LL);
  return v22;
}
