_OWORD *__fastcall uu_tail::chunks::BytesChunkBuffer::print(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // r13
  _QWORD *v7; // rbp
  void *v8; // r15
  void *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  void *v14; // rsi
  size_t v15; // r14
  __int64 v16; // rbx
  _OWORD *v17; // rax
  _OWORD *v18; // r14
  __int128 v19; // xmm0
  __int64 v21; // [rsp+0h] [rbp-68h]
  __int128 v22; // [rsp+8h] [rbp-60h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  void *src; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+30h] [rbp-38h]

  alloc::collections::vec_deque::VecDeque<T,A>::slice_ranges(&v22, a1, *(_QWORD *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v3 + 8LL * *((_QWORD *)&v22 + 1);
  v21 = v3 + 8LL * *((_QWORD *)&v23 + 1);
  v5 = v3 + 8 * v23;
  v6 = v3 + 8 * v22;
  do
  {
    if ( v6 == v4 )
    {
      v11 = v6;
    }
    else
    {
      v11 = v6 + 8;
      if ( v6 )
      {
        v12 = v6;
        v13 = v4;
        v6 += 8LL;
        goto LABEL_11;
      }
    }
    if ( !v5 || v5 == v21 )
    {
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(a2);
      return 0LL;
    }
    v6 = v5 + 8;
    v12 = v5;
    v13 = v21;
    v21 = v4;
    v5 = v11;
LABEL_11:
    v14 = *(void **)v12;
    v15 = *(_QWORD *)(*(_QWORD *)v12 + 0x2000LL);
    if ( v15 >= 0x2001 )
      core::slice::index::slice_end_index_len_fail(
        v15,
        0x2000LL,
        &anon_d47df02a786f831a0d9960a1e02c39b9_25_llvm_1356039585147583896);
    v16 = a2[2];
    if ( *a2 - v16 > v15 )
    {
      v25 = v5;
      v7 = a2;
      v8 = (void *)(v16 + a2[1]);
      src = v14;
      core::intrinsics::copy_nonoverlapping::precondition_check(v14, v8, 1LL, 1LL, v15);
      v9 = v8;
      a2 = v7;
      v5 = v25;
      memcpy(v9, src, v15);
      a2[2] = v15 + v16;
      v10 = 0LL;
    }
    else
    {
      v10 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v14, *(_QWORD *)(*(_QWORD *)v12 + 0x2000LL));
    }
    v4 = v13;
  }
  while ( !v10 );
  *(_QWORD *)&v22 = 0x8000000000000000LL;
  *((_QWORD *)&v23 + 1) = v10;
  v17 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v18 = v17;
  if ( !v17 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v19 = v22;
  v17[1] = v23;
  *v17 = v19;
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(a2);
  return v18;
}
