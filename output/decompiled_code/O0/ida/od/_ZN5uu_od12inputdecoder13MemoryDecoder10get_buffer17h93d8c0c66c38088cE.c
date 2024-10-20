__int64 __fastcall uu_od::inputdecoder::MemoryDecoder::get_buffer(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // r8

  v2 = *(_QWORD *)(*a1 + 8LL);
  if ( !v2 || (v3 = *(_QWORD *)(*a1 + 16LL), v3 < 0) )
    core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
  v4 = a1[1];
  if ( v4 < a2 )
    core::slice::index::slice_index_order_fail(
      a2,
      v4,
      &anon_73050de727ff50a019884682d8624ba5_67_llvm_6296603921265638786);
  if ( v3 < v4 )
    core::slice::index::slice_end_index_len_fail(
      a1[1],
      v3,
      &anon_73050de727ff50a019884682d8624ba5_67_llvm_6296603921265638786);
  return a2 + v2;
}
