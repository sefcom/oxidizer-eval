__int64 __fastcall uu_ptx::format_tex_field(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+10h] [rbp-28h]
  __int128 v7; // [rsp+18h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v4, a2, a2 + a3);
  if ( !v5 || (v5 & 7) != 0 || v6 >= 0x555555555555556LL )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  alloc::str::join_generic_copy(&v7, v5, v6, 1LL, 0LL);
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v4);
  return a1;
}
