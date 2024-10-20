_OWORD *__fastcall uu_tail::chunks::LinesChunkBuffer::fill(unsigned __int64 *a1, __int64 a2)
{
  char v4; // bp
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
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
  char v20; // bp
  _BYTE *v21; // rax
  _OWORD *v22; // rax
  _OWORD *v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  __int64 v31; // r15
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  bool v36; // cf
  unsigned __int64 v37; // r12
  char v38; // bp
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // r8
  __int64 v42; // rsi
  bool v43; // di
  bool v44; // cc
  size_t v45; // rbp
  size_t v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // r13
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  size_t v55; // [rsp+0h] [rbp-4058h]
  __int128 v56; // [rsp+8h] [rbp-4050h]
  __int128 v57; // [rsp+18h] [rbp-4040h]
  _QWORD dest[1024]; // [rsp+28h] [rbp-4030h] BYREF
  _QWORD s[1024]; // [rsp+2028h] [rbp-2030h] BYREF

  s[512] = 0LL;
  s[0] = 0LL;
  dest[512] = 0LL;
  dest[0] = 0LL;
  v4 = *((_BYTE *)a1 + 48);
  memset(s, 0, sizeof(s));
  v5 = (_BYTE *)_rust_alloc(8216LL, 8LL);
  if ( !v5 )
LABEL_59:
    alloc::alloc::handle_alloc_error(8LL, 8216LL);
  v6 = v5;
  memset(v5, 0, 0x2010uLL);
  v6[8208] = v4;
  while ( 1 )
  {
    if ( <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a2, v6, 0x2000LL) )
    {
      *(_QWORD *)&v56 = 0x8000000000000000LL;
      *((_QWORD *)&v57 + 1) = v8;
      v22 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v22 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v23 = v22;
      v22[1] = v57;
      *v22 = v56;
      goto LABEL_56;
    }
    *((_QWORD *)v6 + 1024) = v8;
    if ( !v8 )
      break;
    if ( v8 > 0x2000 )
      goto LABEL_57;
    v9 = memchr::arch::x86_64::memchr::count_raw::FN();
    *((_QWORD *)v6 + 1025) = v9;
    a1[4] += v9;
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
    *(_QWORD *)(a1[1] + 8 * (v12 - v13)) = v6;
    v14 = a1[3];
    a1[3] = v14 + 1;
    if ( v14 == -1LL )
      core::option::expect_failed(aOutOfBoundsAcc, 20LL, &off_15C1E8);
    v15 = a1[2];
    v16 = a1[1];
    v17 = 0LL;
    if ( v15 >= *a1 )
      v17 = *a1;
    v18 = v15 - v17;
    v19 = a1[4];
    if ( v19 - *(_QWORD *)(*(_QWORD *)(v16 + 8 * v18) + 8200LL) > a1[5] )
    {
      v7 = 0LL;
      if ( v15 + 1 >= *a1 )
        v7 = *a1;
      a1[2] = v15 - v7 + 1;
      a1[3] = v14;
      v6 = *(_BYTE **)(v16 + 8 * v15);
      a1[4] = v19 - *((_QWORD *)v6 + 1025);
    }
    else
    {
      v20 = *((_BYTE *)a1 + 48);
      v21 = (_BYTE *)_rust_alloc(8216LL, 8LL);
      if ( !v21 )
        goto LABEL_59;
      v6 = v21;
      memcpy(v21, s, 0x2000uLL);
      *((_OWORD *)v6 + 512) = 0LL;
      v6[8208] = v20;
    }
  }
  *((_QWORD *)v6 + 1025) = 0LL;
  v24 = a1[3];
  if ( v24 )
  {
    v25 = v24 + a1[2] - 1;
    v26 = 0LL;
    if ( v25 >= *a1 )
      v26 = *a1;
    v27 = *(_QWORD *)(a1[1] + 8 * (v25 - v26));
    v8 = *(_QWORD *)(v27 + 0x2000);
    if ( v8 >= 0x2001 )
LABEL_57:
      core::slice::index::slice_end_index_len_fail(
        v8,
        0x2000LL,
        &anon_260ad779062915721296377f2d114085_13_llvm_11775337101010531792);
    if ( !v8 || *((_BYTE *)a1 + 48) != *(_BYTE *)(v27 + v8 - 1) )
    {
      ++*(_QWORD *)(v27 + 8200);
      ++a1[4];
      v24 = a1[3];
      if ( !v24 )
LABEL_32:
        core::option::unwrap_failed(&off_15C200);
    }
    while ( 1 )
    {
      v28 = a1[2];
      v29 = *a1;
      v30 = a1[1];
      if ( v28 + 1 < *a1 )
        v29 = 0LL;
      a1[2] = v28 - v29 + 1;
      a1[3] = v24 - 1;
      v31 = *(_QWORD *)(v30 + 8 * v28);
      v32 = a1[4];
      v33 = *(_QWORD *)(v31 + 8200);
      v34 = a1[5];
      if ( v32 - v33 <= v34 )
        break;
      a1[4] = v32 - v33;
      _rust_dealloc(v31, 8216LL, 8LL);
      v24 = a1[3];
      if ( !v24 )
        goto LABEL_32;
    }
    v35 = 0LL;
    if ( v32 >= v34 )
      v35 = v32 - v34;
    v36 = v33 < v35;
    v37 = v33 - v35;
    if ( v36 )
    {
      v38 = *(_BYTE *)(v31 + 8208);
      v37 = 0LL;
      memset(dest, 0, sizeof(dest));
      v55 = 0LL;
    }
    else
    {
      v39 = *(_QWORD *)(v31 + 0x2000);
      if ( v39 >= 0x2001 )
        core::slice::index::slice_end_index_len_fail(
          *(_QWORD *)(v31 + 0x2000),
          0x2000LL,
          &anon_260ad779062915721296377f2d114085_13_llvm_11775337101010531792);
      v40 = 0LL;
      if ( v32 > v34 && v39 )
      {
        v40 = 0LL;
        do
        {
          v41 = v40;
          v42 = 0LL;
          v43 = *(_BYTE *)(v31 + v40++) == *(_BYTE *)(v31 + 8208);
          if ( v39 - 1 == v41 )
            break;
          LOBYTE(v42) = v43;
          v35 -= v42;
        }
        while ( v35 );
      }
      v44 = v39 <= v40;
      v45 = v39 - v40;
      if ( v44 )
      {
        v55 = 0LL;
        memset(dest, 0, sizeof(dest));
      }
      else
      {
        v46 = 0LL;
        if ( v45 < 0x2000 )
          v46 = 0x2000 - v45;
        memset((char *)dest + v45, 0, v46);
        v55 = v45;
        memcpy(dest, (const void *)(v31 + v40), v45);
      }
      v38 = *(_BYTE *)(v31 + 8208);
    }
    v47 = (_QWORD *)_rust_alloc(8216LL, 8LL);
    if ( !v47 )
      alloc::alloc::handle_alloc_error(8LL, 8216LL);
    v48 = v47;
    memcpy(v47, dest, 0x2000uLL);
    v48[1024] = v55;
    v48[1025] = v37;
    *((_BYTE *)v48 + 8208) = v38;
    v49 = *a1;
    v50 = a1[3];
    if ( v50 == *a1 )
    {
      alloc::collections::vec_deque::VecDeque<T,A>::grow(a1);
      v49 = *a1;
      v50 = a1[3];
    }
    v51 = a1[1];
    v52 = a1[2] - 1;
    v36 = __CFADD__(v52, v49);
    v53 = v52 + v49;
    if ( !v36 )
      v53 = a1[2] - 1;
    a1[2] = v53;
    a1[3] = v50 + 1;
    *(_QWORD *)(v51 + 8 * v53) = v48;
    _rust_dealloc(v31, 8216LL, 8LL);
  }
  v23 = 0LL;
LABEL_56:
  _rust_dealloc(v6, 8216LL, 8LL);
  return v23;
}
