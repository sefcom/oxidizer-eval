unsigned __int64 __fastcall uu_od::inputdecoder::MemoryDecoder::clone_buffer(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  void *v4; // rdi
  signed __int64 v6; // rsi
  unsigned __int64 result; // rax

  v3 = *a1;
  v4 = *(void **)(*a1 + 8LL);
  if ( !v4 || (v6 = *(_QWORD *)(v3 + 16), v6 < 0) )
    core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
  <[T] as alloc::slice::SpecCloneIntoVec<T,A>>::clone_into(v4, v6);
  result = a1[1];
  if ( result > *(_QWORD *)(a2 + 16) )
    return alloc::vec::Vec<T,A>::extend_with(a2, result - *(_QWORD *)(a2 + 16), 0LL);
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
