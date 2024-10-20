__int64 *__fastcall uu_tail::chunks::BytesChunkBuffer::print(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 *v9; // r12
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 *v14; // rbp
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 *v19; // [rsp+8h] [rbp-60h]
  __int64 *v20; // [rsp+10h] [rbp-58h]
  __int128 v21; // [rsp+18h] [rbp-50h]
  __int128 v22; // [rsp+28h] [rbp-40h]

  v3 = a1[3];
  if ( v3 )
  {
    v4 = *a1;
    v5 = a1[2];
    v6 = 0LL;
    if ( v5 >= *a1 )
      v6 = *a1;
    v7 = v5 - v6;
    v8 = v3 - (v4 - v7);
    if ( v3 <= v4 - v7 )
    {
      v8 = 0LL;
      v4 = v7 + v3;
    }
  }
  else
  {
    v7 = 0LL;
    v4 = 0LL;
    v8 = 0LL;
  }
  v9 = (__int64 *)a1[1];
  v10 = &v9[v7];
  v11 = &v9[v4];
  v12 = &v9[v8];
  v19 = 0LL;
  do
  {
    if ( v10 == v11 )
    {
      if ( v9 == v12 )
        goto LABEL_19;
      v20 = v11;
      v14 = v11;
      if ( !v9 )
        goto LABEL_19;
    }
    else
    {
      v20 = v12;
      v12 = v11;
      v14 = v9;
      v9 = v10;
    }
    v8 = *v9;
    v15 = *(_QWORD *)(*v9 + 0x2000);
    if ( v15 >= 0x2001 )
      core::slice::index::slice_end_index_len_fail(
        *(_QWORD *)(*v9 + 0x2000),
        0x2000LL,
        &anon_260ad779062915721296377f2d114085_13_llvm_11775337101010531792);
    v16 = a2[2];
    if ( *a2 - v16 > v15 )
    {
      memcpy((void *)(v16 + a2[1]), (const void *)v8, *(_QWORD *)(*v9 + 0x2000));
      a2[2] = v15 + v16;
      v13 = 0LL;
    }
    else
    {
      v13 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v8, *(_QWORD *)(*v9 + 0x2000));
    }
    v11 = v12;
    v10 = v9 + 1;
    v9 = v14;
    v12 = v20;
  }
  while ( !v13 );
  *(_QWORD *)&v21 = 0x8000000000000000LL;
  *((_QWORD *)&v22 + 1) = v13;
  v8 = 8LL;
  v17 = (__int64 *)_rust_alloc(32LL, 8LL);
  if ( !v17 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *((_OWORD *)v17 + 1) = v22;
  v11 = v17;
  v19 = v17;
  *(_OWORD *)v17 = v21;
LABEL_19:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(a2, v8, v10, v11);
  return v19;
}
