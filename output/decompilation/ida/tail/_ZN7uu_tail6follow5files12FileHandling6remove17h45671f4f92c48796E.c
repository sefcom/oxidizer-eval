__int64 __fastcall uu_tail::follow::files::FileHandling::remove(void *dest)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-108h] BYREF
  _DWORD src[60]; // [rsp+18h] [rbp-F0h] BYREF

  uu_tail::follow::files::FileHandling::canonicalize_path(v2);
  hashbrown::map::HashMap<K,V,S,A>::remove(src);
  if ( src[0] == 3 )
    core::option::unwrap_failed(&off_1733C0);
  memcpy(dest, src, 0xD8uLL);
  return core::ptr::drop_in_place<std::path::PathBuf>(v2[0], v2[1]);
}