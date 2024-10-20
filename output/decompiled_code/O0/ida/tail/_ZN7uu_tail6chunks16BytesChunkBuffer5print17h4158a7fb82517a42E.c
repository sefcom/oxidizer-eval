_OWORD *__fastcall uu_tail::chunks::BytesChunkBuffer::print(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  const void *v11; // r12
  size_t v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  void *v15; // r13
  void *v16; // rdi
  __int64 v17; // rax
  _OWORD *v18; // rax
  __int128 v19; // xmm0
  _OWORD *v21; // [rsp+8h] [rbp-70h]
  __int128 v22; // [rsp+10h] [rbp-68h] BYREF
  __int128 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]

  alloc::collections::vec_deque::VecDeque<T,A>::slice_ranges(&v22, a1, *(_QWORD *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v3 + 8LL * *((_QWORD *)&v22 + 1);
  v5 = v3 + 8LL * *((_QWORD *)&v23 + 1);
  v6 = v3 + 8 * v23;
  v7 = v3 + 8 * v22;
  v21 = 0LL;
  do
  {
    if ( v7 == v4 )
    {
      v8 = v7;
    }
    else
    {
      v8 = v7 + 8;
      if ( v7 )
      {
        v9 = v4;
        v10 = v7 + 8;
        goto LABEL_9;
      }
    }
    if ( !v6 || v6 == v5 )
      return v21;
    v10 = v6 + 8;
    v7 = v6;
    v9 = v5;
    v5 = v4;
    v6 = v8;
LABEL_9:
    v11 = *(const void **)v7;
    v12 = *(_QWORD *)(*(_QWORD *)v7 + 0x2000LL);
    if ( v12 >= 0x2001 )
      core::slice::index::slice_end_index_len_fail(
        v12,
        0x2000LL,
        &anon_d47df02a786f831a0d9960a1e02c39b9_25_llvm_1356039585147583896);
    v25 = v9;
    v26 = v10;
    v13 = a2[2];
    if ( *a2 - v13 <= v12 )
    {
      v17 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v11, v12);
    }
    else
    {
      v24 = v6;
      v14 = v5;
      v15 = (void *)(v13 + a2[1]);
      core::intrinsics::copy_nonoverlapping::precondition_check(v11, v15, 1LL, 1LL, v12);
      v16 = v15;
      v5 = v14;
      v6 = v24;
      memcpy(v16, v11, v12);
      a2[2] = v12 + v13;
      v17 = 0LL;
    }
    v4 = v25;
    v7 = v26;
  }
  while ( !v17 );
  *(_QWORD *)&v22 = 0x8000000000000000LL;
  *((_QWORD *)&v23 + 1) = v17;
  v18 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !v18 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v19 = v22;
  v18[1] = v23;
  v21 = v18;
  *v18 = v19;
  return v21;
}
