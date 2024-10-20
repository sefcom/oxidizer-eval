_OWORD *__fastcall uu_tail::chunks::LinesChunk::print_bytes(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  size_t v4; // r14
  const void *v5; // r15
  __int64 v6; // r13
  void *v7; // r12
  _OWORD *result; // rax
  __int64 v9; // rax
  __int128 v10; // [rsp+0h] [rbp-48h]
  __int128 v11; // [rsp+10h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 0x2000);
  v4 = v3 - a3;
  if ( v3 < a3 )
    core::slice::index::slice_index_order_fail(
      a3,
      v3,
      &anon_d47df02a786f831a0d9960a1e02c39b9_26_llvm_1356039585147583896);
  if ( v3 > 0x2000 )
    core::slice::index::slice_end_index_len_fail(
      *(_QWORD *)(a1 + 0x2000),
      0x2000LL,
      &anon_d47df02a786f831a0d9960a1e02c39b9_26_llvm_1356039585147583896);
  v5 = (const void *)(a3 + a1);
  v6 = a2[2];
  if ( *a2 - v6 > v4 )
  {
    v7 = (void *)(v6 + a2[1]);
    core::intrinsics::copy_nonoverlapping::precondition_check(v5, v7, 1LL, 1LL, v4);
    memcpy(v7, v5, v4);
    a2[2] = v4 + v6;
    return 0LL;
  }
  v9 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v5, v4);
  if ( !v9 )
    return 0LL;
  *(_QWORD *)&v10 = 0x8000000000000000LL;
  *((_QWORD *)&v11 + 1) = v9;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  result[1] = v11;
  *result = v10;
  return result;
}
