unsigned __int64 __fastcall uu_od::inputdecoder::MemoryDecoder::get_buffer(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx

  v2 = a1[1];
  if ( v2 < a2 )
    core::slice::index::slice_index_order_fail(a2, v2, &anon_a94949093028d2d8e47277762c52d369_2_llvm_199664298606218765);
  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 16);
  if ( v2 > v4 )
    core::slice::index::slice_end_index_len_fail(
      v2,
      v4,
      &anon_a94949093028d2d8e47277762c52d369_2_llvm_199664298606218765);
  return *(_QWORD *)(v3 + 8) + a2;
}
