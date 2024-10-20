__int64 __fastcall uu_tail::chunks::BytesChunk::get_buffer_with(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 0x2000);
  if ( v2 < a2 )
    core::slice::index::slice_index_order_fail(
      a2,
      v2,
      &anon_260ad779062915721296377f2d114085_14_llvm_11775337101010531792);
  if ( v2 > 0x2000 )
    core::slice::index::slice_end_index_len_fail(
      *(_QWORD *)(a1 + 0x2000),
      0x2000LL,
      &anon_260ad779062915721296377f2d114085_14_llvm_11775337101010531792);
  return a2 + a1;
}
