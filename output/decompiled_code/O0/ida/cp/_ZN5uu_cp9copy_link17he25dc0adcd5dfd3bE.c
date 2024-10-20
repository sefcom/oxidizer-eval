_QWORD *__fastcall uu_cp::copy_link(_QWORD *a1, __int64 a2, __int64 a3, void *a4, size_t a5, __int64 a6)
{
  void *v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  void *v13; // [rsp+10h] [rbp-48h]
  signed __int64 v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  void *v16; // [rsp+28h] [rbp-30h]
  signed __int64 v17; // [rsp+30h] [rbp-28h]

  std::sys::pal::unix::fs::readlink(&v15);
  v9 = v16;
  if ( v15 == 0x8000000000000000LL )
  {
    *a1 = 2LL;
    a1[1] = v9;
  }
  else
  {
    v12 = v15;
    v13 = v16;
    v14 = v17;
    if ( ((unsigned __int8)std::path::Path::is_symlink(a4, a5) || (unsigned __int8)std::path::Path::is_file(a4, a5))
      && (v10 = std::sys::pal::unix::fs::unlink(a4, a5)) != 0 )
    {
      *a1 = 2LL;
      a1[1] = v10;
    }
    else
    {
      if ( !v13 || v14 < 0 )
        core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
      uu_cp::symlink_file(a1, v13, v14, a4, a5, a6);
    }
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v12);
  }
  return a1;
}
