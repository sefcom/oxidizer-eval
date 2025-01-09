void *__fastcall uu_tail::follow::files::FileHandling::remove(void *dest, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v5[24]; // [rsp+0h] [rbp-108h] BYREF
  _DWORD src[60]; // [rsp+18h] [rbp-F0h] BYREF

  uu_tail::follow::files::FileHandling::canonicalize_path((__int64)v5, a3, a4);
  hashbrown::map::HashMap<K,V,S,A>::remove(src);
  if ( src[0] == 3 )
    core::option::unwrap_failed(&off_1BC480);
  memcpy(dest, src, 0xD8uLL);
  core::ptr::drop_in_place<std::path::PathBuf>(v5);
  return dest;
}
