__int64 __fastcall uu_du::file_as_vec(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  _OWORD v5[3]; // [rsp+0h] [rbp-88h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+38h] [rbp-50h]
  _OWORD v8[4]; // [rsp+40h] [rbp-48h] BYREF

  *(_QWORD *)&v5[0] = 0x1B600000000LL;
  DWORD2(v5[0]) = 1;
  WORD6(v5[0]) = 0;
  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  core::slice::raw::from_raw_parts::precondition_check(v2, 1LL, 1LL, v3);
  std::fs::OpenOptions::_open(v6, v5, v2, v3);
  if ( v6[0] )
  {
    *(_QWORD *)&v5[0] = v7;
    core::result::unwrap_failed(
      anon_b877040be6323add0ac9264ba73403e3_62_llvm_12520490929008774313,
      12LL,
      v5,
      &anon_d78f1f8cba74da176e55b198ed82e3e1_32_llvm_12309497218524734664,
      &anon_b877040be6323add0ac9264ba73403e3_63_llvm_12520490929008774313);
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v8, 0x2000LL, v6[1]);
  v5[2] = v8[2];
  v5[1] = v8[1];
  v5[0] = v8[0];
  ((void (__fastcall *)(__int64, _OWORD *))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter)(
    a1,
    v5);
  return a1;
}
