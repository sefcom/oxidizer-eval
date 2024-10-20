void *__fastcall uu_env::string_expander::StringExpander::put_string(_QWORD *a1, __int64 a2)
{
  const void *v2; // r15
  signed __int64 v3; // r14
  __int64 v4; // r12
  void *v5; // r12
  void *result; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-60h]
  __int64 v8; // [rsp+10h] [rbp-58h]
  signed __int64 v9; // [rsp+18h] [rbp-50h]

  v2 = *(const void **)(a2 + 8);
  if ( !v2 || (v3 = *(_QWORD *)(a2 + 16), v3 < 0) )
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v3;
  v7 = 0x8000000000000000LL;
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  v4 = a1[2];
  if ( *a1 - v4 >= (unsigned __int64)v3 )
  {
    v5 = (void *)(a1[1] + v4);
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, a1[2], v3);
    v5 = (void *)(a1[2] + a1[1]);
  }
  core::intrinsics::copy_nonoverlapping::precondition_check(v2, v5, 1LL, 1LL, v3);
  result = memcpy(v5, v2, v3);
  a1[2] += v3;
  return result;
}
