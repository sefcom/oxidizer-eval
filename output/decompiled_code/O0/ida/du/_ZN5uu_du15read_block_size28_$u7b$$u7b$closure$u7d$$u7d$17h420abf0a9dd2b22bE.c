__int64 __fastcall uu_du::read_block_size::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  uu_du::format_error_message(v11, a3, a1, a2, anon_b877040be6323add0ac9264ba73403e3_22_llvm_12520490929008774313, 10LL);
  v4 = v11[0];
  v5 = v11[1];
  v6 = v11[2];
  result = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  *(_QWORD *)result = v4;
  *(_QWORD *)(result + 8) = v5;
  *(_QWORD *)(result + 16) = v6;
  *(_DWORD *)(result + 24) = 1;
  v8 = *(_QWORD *)(a3 + 8);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a3 + 16);
    v10 = result;
    _rust_dealloc(v9, v8, 1LL);
    return v10;
  }
  return result;
}
