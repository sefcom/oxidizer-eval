__int64 __fastcall uu_csplit::SplitWriter::delete_all_splits(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // r13
  void *v6; // rbp
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  size_t v9; // [rsp+10h] [rbp-48h] BYREF
  void *src; // [rsp+18h] [rbp-40h]
  size_t n; // [rsp+20h] [rbp-38h]

  v8 = 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = 0LL;
  do
  {
    uu_csplit::split_name::SplitName::get(&v9, v2, v3);
    v6 = src;
    v5 = std::sys::pal::unix::fs::unlink(src, n);
    if ( v9 )
      _rust_dealloc(v6, v9, 1LL);
    if ( v5 )
    {
      if ( v4 )
        core::ptr::drop_in_place<std::io::error::Error>(&v8);
      v8 = v5;
      v4 = v5;
    }
    else
    {
      v5 = v4;
    }
    ++v3;
  }
  while ( v1 != v3 );
  return v5;
}
