__int64 __fastcall uu_wc::files0_iter_stdin(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // dl
  char v3; // bp
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  char v7; // bp
  __int64 result; // rax
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = std::io::stdio::stdin();
  v1 = std::io::stdio::Stdin::lock(&v9);
  v3 = v2;
  std::sys::os_str::bytes::Slice::to_owned(v10, anon_8ae93ed5783cc3dfed1aac42e59f686c_18_llvm_7002947973987599328, 1LL);
  v4 = v10[0];
  v5 = v10[1];
  v6 = v10[2];
  v7 = v3 & 1;
  result = _rust_alloc(0x2000LL, 1LL);
  if ( !result )
    alloc::raw_vec::handle_error(1LL, 0x2000LL);
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = 0x2000LL;
  *(_QWORD *)(a1 + 64) = v1;
  *(_BYTE *)(a1 + 72) = v7;
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}
