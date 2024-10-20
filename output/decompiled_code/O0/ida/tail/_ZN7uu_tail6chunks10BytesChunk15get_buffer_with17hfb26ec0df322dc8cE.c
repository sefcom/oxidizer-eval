__int64 __fastcall uu_tail::chunks::BytesChunk::get_buffer_with(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 0x2000);
  if ( v2 < a2 )
    core::slice::index::slice_index_order_fail(
      a2,
      v2,
      &anon_d47df02a786f831a0d9960a1e02c39b9_26_llvm_1356039585147583896);
  if ( v2 > 0x2000 )
    core::slice::index::slice_end_index_len_fail(
      *(_QWORD *)(a1 + 0x2000),
      0x2000LL,
      &anon_d47df02a786f831a0d9960a1e02c39b9_26_llvm_1356039585147583896);
  return a2 + a1;
}
