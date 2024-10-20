_OWORD *__fastcall uu_tail::chunks::BytesChunkBuffer::print(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r13
  const void *v14; // rsi
  unsigned __int64 v15; // r15
  __int64 v16; // rbp
  __int64 v17; // rax
  _OWORD *v18; // rax
  _OWORD *v20; // [rsp+8h] [rbp-60h]
  unsigned __int64 v21; // [rsp+10h] [rbp-58h]
  __int128 v22; // [rsp+18h] [rbp-50h]
  __int128 v23; // [rsp+28h] [rbp-40h]

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
  v9 = a1[1];
  v10 = v9 + 8 * v7;
  v21 = v9 + 8 * v4;
  v11 = v9 + 8 * v8;
  v20 = 0LL;
  do
  {
    if ( v10 == v21 )
    {
      if ( v9 == v11 )
        return v20;
      v12 = v10;
      v13 = v10;
      v21 = v11;
      if ( !v9 )
        return v20;
    }
    else
    {
      v12 = v11;
      v13 = v9;
      v9 = v10;
    }
    v14 = *(const void **)v9;
    v15 = *(_QWORD *)(*(_QWORD *)v9 + 0x2000LL);
    if ( v15 >= 0x2001 )
      core::slice::index::slice_end_index_len_fail(
        *(_QWORD *)(*(_QWORD *)v9 + 0x2000LL),
        0x2000LL,
        &anon_260ad779062915721296377f2d114085_13_llvm_11775337101010531792);
    v16 = a2[2];
    if ( *a2 - v16 <= v15 )
    {
      v17 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v14, *(_QWORD *)(*(_QWORD *)v9 + 0x2000LL));
    }
    else
    {
      memcpy((void *)(v16 + a2[1]), v14, *(_QWORD *)(*(_QWORD *)v9 + 0x2000LL));
      a2[2] = v15 + v16;
      v17 = 0LL;
    }
    v10 = v9 + 8;
    v11 = v12;
    v9 = v13;
  }
  while ( !v17 );
  *(_QWORD *)&v22 = 0x8000000000000000LL;
  *((_QWORD *)&v23 + 1) = v17;
  v18 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v18 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v18[1] = v23;
  v20 = v18;
  *v18 = v22;
  return v20;
}
