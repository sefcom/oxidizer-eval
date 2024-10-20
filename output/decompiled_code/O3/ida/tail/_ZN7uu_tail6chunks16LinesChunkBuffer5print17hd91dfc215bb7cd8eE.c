_OWORD *__fastcall uu_tail::chunks::LinesChunkBuffer::print(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r12
  const void *v14; // rsi
  size_t v15; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rax
  _OWORD *v19; // rax
  _OWORD *v21; // [rsp+8h] [rbp-60h]
  unsigned __int64 v22; // [rsp+10h] [rbp-58h]
  __int128 v23; // [rsp+18h] [rbp-50h]
  __int128 v24; // [rsp+28h] [rbp-40h]

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
  v22 = v9 + 8 * v4;
  v11 = v9 + 8 * v8;
  v21 = 0LL;
  do
  {
    while ( 1 )
    {
      if ( v10 == v22 )
      {
        if ( v9 == v11 )
          return v21;
        v12 = v10;
        v13 = v10;
        v22 = v11;
        if ( !v9 )
          return v21;
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
          &anon_260ad779062915721296377f2d114085_14_llvm_11775337101010531792);
      v16 = v9 + 8;
      v17 = a2[2];
      if ( *a2 - v17 <= v15 )
        break;
      memcpy((void *)(v17 + a2[1]), v14, v15);
      a2[2] = v15 + v17;
      v10 = v16;
      v11 = v12;
      v9 = v13;
    }
    v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v14, v15);
    v10 = v16;
    v11 = v12;
    v9 = v13;
  }
  while ( !v18 );
  *(_QWORD *)&v23 = 0x8000000000000000LL;
  *((_QWORD *)&v24 + 1) = v18;
  v19 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v19 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v19[1] = v24;
  v21 = v19;
  *v19 = v23;
  return v21;
}
