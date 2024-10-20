__int64 __fastcall uu_base32::base_common::fast_decode::write_to_output(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v4, 1LL, 1LL, v5);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a3 + 56))(a2, v4, v5);
  if ( !result )
  {
    if ( !*(_QWORD *)(a1 + 8) || *(__int64 *)(a1 + 16) < 0 )
      core::panicking::panic_nounwind(anon_7bf8453590977c7a3fe5e2865e6df318_13_llvm_976352915506230263, 166LL);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
