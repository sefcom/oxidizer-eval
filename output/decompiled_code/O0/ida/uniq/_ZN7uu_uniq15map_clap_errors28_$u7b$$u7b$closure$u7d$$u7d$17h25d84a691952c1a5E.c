__int64 __fastcall uu_uniq::map_clap_errors::{{closure}}(__int64 a1)
{
  unsigned int v1; // ebx
  char v3; // [rsp+7h] [rbp-61h] BYREF
  __int64 v4; // [rsp+8h] [rbp-60h] BYREF
  _QWORD *v5; // [rsp+10h] [rbp-58h]
  __int64 v6; // [rsp+18h] [rbp-50h]
  _QWORD v7[7]; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+58h] [rbp-10h]

  v4 = 0LL;
  v5 = (_QWORD *)(&dword_0 + 1);
  v6 = 0LL;
  v7[6] = 32LL;
  v8 = 3;
  v7[0] = 0LL;
  v7[2] = 0LL;
  v7[4] = &v4;
  v7[5] = &anon_375c1d1a45d16f8cd8f160b9ae21a734_26_llvm_12203283866825814461;
  if ( (unsigned __int8)<clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(a1, v7) )
    core::result::unwrap_failed(
      anon_375c1d1a45d16f8cd8f160b9ae21a734_27_llvm_12203283866825814461,
      55LL,
      &v3,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_375c1d1a45d16f8cd8f160b9ae21a734_29_llvm_12203283866825814461);
  if ( !v5 || v6 < 0 )
    core::panicking::panic_nounwind(anon_2b0791c695ceb2ee6d0f035c0283b4dc_21_llvm_18417733653787042214, 162LL);
  if ( (unsigned __int64)v6 < 0xE )
  {
    v1 = 0;
    if ( !v4 )
      return v1;
    goto LABEL_8;
  }
  LOBYTE(v1) = (*v5 ^ 0x65722D6C6C612D2DLL | *(_QWORD *)((char *)v5 + 6) ^ 0x6465746165706572LL) == 0;
  if ( v4 )
LABEL_8:
    _rust_dealloc(v5, v4, 1LL);
  return v1;
}
