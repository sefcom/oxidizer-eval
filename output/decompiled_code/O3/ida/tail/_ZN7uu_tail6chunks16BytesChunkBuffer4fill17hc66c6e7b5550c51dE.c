_OWORD *__fastcall uu_tail::chunks::BytesChunkBuffer::fill(unsigned __int64 *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rax
  _OWORD *v19; // rax
  _OWORD *v20; // r14
  __int128 v21; // xmm0
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r13
  bool v27; // cf
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r15
  size_t v30; // r12
  _QWORD *v31; // rax
  _QWORD *v32; // r13
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v39; // [rsp+0h] [rbp-6038h]
  _OWORD dest[512]; // [rsp+8h] [rbp-6030h] BYREF
  _QWORD src[1024]; // [rsp+2008h] [rbp-4030h] BYREF
  _QWORD s[1024]; // [rsp+4008h] [rbp-2030h] BYREF

  src[512] = 0LL;
  src[0] = 0LL;
  *(_QWORD *)&dest[256] = 0LL;
  *(_QWORD *)&dest[0] = 0LL;
  memset(s, 0, sizeof(s));
  v4 = (_QWORD *)_rust_alloc(8200LL, 8LL);
  if ( !v4 )
LABEL_38:
    alloc::alloc::handle_alloc_error(8LL, 8200LL);
  v5 = v4;
  memset(v4, 0, 0x2008uLL);
  while ( !<std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a2, v5, 0x2000LL) )
  {
    v5[1024] = v7;
    if ( !v7 )
    {
      v22 = a1[3];
      if ( v22 )
      {
        v23 = a1[2];
        v24 = *a1;
        v25 = a1[1];
        if ( v23 + 1 < *a1 )
          v24 = 0LL;
        a1[2] = v23 - v24 + 1;
        a1[3] = v22 - 1;
        v26 = a1[5];
        v27 = v26 < a1[4];
        v28 = v26 - a1[4];
        if ( v27 )
          v28 = 0LL;
        v39 = *(_QWORD *)(v25 + 8 * v23);
        v29 = *(_QWORD *)(v39 + 0x2000);
        v30 = v29 - v28;
        if ( v29 <= v28 )
        {
          v30 = 0LL;
          memset(src, 0, sizeof(src));
        }
        else
        {
          memset(dest, 0, sizeof(dest));
          if ( v29 >= 0x2001 )
            core::slice::index::slice_end_index_len_fail(
              v29,
              0x2000LL,
              &anon_260ad779062915721296377f2d114085_14_llvm_11775337101010531792);
          memcpy(dest, (const void *)(v39 + v28), v30);
          memcpy(src, dest, sizeof(src));
        }
        v31 = (_QWORD *)_rust_alloc(8200LL, 8LL);
        if ( !v31 )
          alloc::alloc::handle_alloc_error(8LL, 8200LL);
        v32 = v31;
        memcpy(v31, src, 0x2000uLL);
        v32[1024] = v30;
        v33 = *a1;
        v34 = a1[3];
        if ( v34 == *a1 )
        {
          alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
          v33 = *a1;
          v34 = a1[3];
        }
        v35 = a1[1];
        v36 = a1[2] - 1;
        v27 = __CFADD__(v36, v33);
        v37 = v36 + v33;
        if ( !v27 )
          v37 = a1[2] - 1;
        a1[2] = v37;
        a1[3] = v34 + 1;
        *(_QWORD *)(v35 + 8 * v37) = v32;
        _rust_dealloc(v39, 8200LL, 8LL);
      }
      v20 = 0LL;
      goto LABEL_36;
    }
    a1[5] += v7;
    v8 = *a1;
    v9 = a1[3];
    if ( v9 == *a1 )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
      v8 = *a1;
      v9 = a1[3];
    }
    v10 = a1[2] + v9;
    v11 = 0LL;
    if ( v10 >= v8 )
      v11 = v8;
    *(_QWORD *)(a1[1] + 8 * (v10 - v11)) = v5;
    v12 = a1[3];
    a1[3] = v12 + 1;
    if ( v12 == -1LL )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_15C1D0);
    v13 = a1[2];
    v14 = a1[1];
    v15 = 0LL;
    if ( v13 >= *a1 )
      v15 = *a1;
    v16 = v13 - v15;
    v17 = a1[5];
    if ( v17 - *(_QWORD *)(*(_QWORD *)(v14 + 8 * v16) + 0x2000LL) > a1[4] )
    {
      v6 = 0LL;
      if ( v13 + 1 >= *a1 )
        v6 = *a1;
      a1[2] = v13 - v6 + 1;
      a1[3] = v12;
      v5 = *(_QWORD **)(v14 + 8 * v13);
      a1[5] = v17 - v5[1024];
    }
    else
    {
      v18 = (_QWORD *)_rust_alloc(8200LL, 8LL);
      if ( !v18 )
        goto LABEL_38;
      v5 = v18;
      memcpy(v18, s, 0x2000uLL);
      v5[1024] = 0LL;
    }
  }
  *(_QWORD *)&dest[0] = 0x8000000000000000LL;
  *((_QWORD *)&dest[1] + 1) = v7;
  v19 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v19 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v20 = v19;
  v21 = dest[0];
  v19[1] = dest[1];
  *v19 = v21;
LABEL_36:
  _rust_dealloc(v5, 8200LL, 8LL);
  return v20;
}
