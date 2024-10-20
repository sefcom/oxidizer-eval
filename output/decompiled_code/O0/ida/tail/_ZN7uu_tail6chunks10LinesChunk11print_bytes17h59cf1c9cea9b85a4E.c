_OWORD *__fastcall uu_tail::chunks::LinesChunk::print_bytes(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  size_t v4; // rbx
  const void *v5; // r14
  __int64 v6; // r15
  __int64 v7; // r13
  void *v8; // r12
  _OWORD *result; // rax
  __int64 v10; // rax
  __int128 v11; // [rsp+0h] [rbp-48h]
  __int128 v12; // [rsp+10h] [rbp-38h]

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
  v6 = *a2;
  v7 = *(_QWORD *)(*a2 + 16LL);
  if ( *(_QWORD *)*a2 - v7 > v4 )
  {
    v8 = (void *)(v7 + *(_QWORD *)(v6 + 8));
    core::intrinsics::copy_nonoverlapping::precondition_check(v5, v8, 1LL, 1LL, v4);
    memcpy(v8, v5, v4);
    *(_QWORD *)(v6 + 16) = v4 + v7;
    return 0LL;
  }
  v10 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(*a2, v5, v4);
  if ( !v10 )
    return 0LL;
  *(_QWORD *)&v11 = 0x8000000000000000LL;
  *((_QWORD *)&v12 + 1) = v10;
  result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  result[1] = v12;
  *result = v11;
  return result;
}
