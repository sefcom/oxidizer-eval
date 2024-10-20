__int64 __fastcall uu_csplit::SplitWriter::delete_all_splits(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  __int64 i; // r13
  __int64 v4; // rbp
  __int64 v6; // [rsp+10h] [rbp-58h] BYREF
  void *src; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+20h] [rbp-48h]
  _BYTE v9[8]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v10[56]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  v2 = 0LL;
  for ( i = 0LL; i != v1; ++i )
  {
    uu_csplit::split_name::SplitName::get(&v6, *(_QWORD *)(a1 + 32), i);
    if ( !src || (n & 0x8000000000000000LL) != 0LL )
      core::panicking::panic_nounwind(anon_bb214e635f3e52e586c02a5eeb538d7c_28_llvm_3235605871402522358, 162LL);
    v4 = std::sys::pal::unix::fs::unlink(src, n);
    if ( v6 )
      _rust_dealloc(src, v6, 1LL);
    if ( v4 )
    {
      if ( v2 )
      {
        std::io::error::repr_bitpacked::decode_repr(v9, v2);
        if ( v9[0] >= 3u )
          core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v10);
      }
      v2 = v4;
    }
    else
    {
      v4 = v2;
    }
  }
  return v4;
}
