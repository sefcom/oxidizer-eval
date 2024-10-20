__int64 (__fastcall **__fastcall uu_wc::files0_iter_file(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 v4; // rax
  __int64 (__fastcall **result)(); // rax
  int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  __int64 v12; // [rsp+18h] [rbp-40h]
  _DWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]

  v10 = 0x1B600000000LL;
  LODWORD(v11) = 1;
  WORD2(v11) = 0;
  std::fs::OpenOptions::_open(v13, &v10, a2, a3);
  if ( v13[0] )
  {
    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
           v14,
           a2,
           a3);
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = v4;
    result = &anon_8ae93ed5783cc3dfed1aac42e59f686c_53_llvm_7002947973987599328;
    *(_QWORD *)(a1 + 16) = &anon_8ae93ed5783cc3dfed1aac42e59f686c_53_llvm_7002947973987599328;
  }
  else
  {
    v6 = v13[1];
    std::sys::os_str::bytes::Slice::to_owned(&v10, a2, a3);
    v7 = v10;
    v8 = v11;
    v9 = v12;
    result = (__int64 (__fastcall **)())_rust_alloc(0x2000LL, 1LL);
    if ( !result )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_OWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = result;
    *(_QWORD *)(a1 + 32) = 0x2000LL;
    *(_DWORD *)(a1 + 64) = v6;
    *(_BYTE *)(a1 + 72) = 0;
  }
  return result;
}
