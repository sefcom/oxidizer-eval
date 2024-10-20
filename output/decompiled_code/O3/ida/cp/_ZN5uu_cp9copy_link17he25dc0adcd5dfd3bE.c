_QWORD *__fastcall uu_cp::copy_link(_QWORD *a1, __int64 a2, __int64 a3, void *a4, size_t a5, __int64 a6)
{
  __int64 v9; // r14
  void *v10; // r15
  __int64 v11; // rax
  size_t v13; // [rsp+8h] [rbp-50h]
  _QWORD v14[9]; // [rsp+10h] [rbp-48h] BYREF

  std::sys::pal::unix::fs::readlink(v14);
  v9 = v14[0];
  v10 = (void *)v14[1];
  if ( v14[0] == 0x8000000000000000LL )
  {
    *a1 = 2LL;
    a1[1] = v10;
  }
  else
  {
    v13 = v14[2];
    if ( ((unsigned __int8)std::path::Path::is_symlink(a4, a5) || (unsigned __int8)std::path::Path::is_file(a4, a5))
      && (v11 = std::sys::pal::unix::fs::unlink(a4, a5)) != 0 )
    {
      *a1 = 2LL;
      a1[1] = v11;
    }
    else
    {
      uu_cp::symlink_file((__int64)a1, v10, v13, a4, a5, a6);
    }
    if ( v9 )
      _rust_dealloc(v10, v9, 1LL);
  }
  return a1;
}
