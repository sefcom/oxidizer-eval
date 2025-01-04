__int64 __fastcall uu_tail::follow::files::FileHandling::get(__int64 a1)
{
  __int64 inner; // rax
  __int64 v2; // rbx
  _BYTE v4[40]; // [rsp+0h] [rbp-28h] BYREF

  uu_tail::follow::files::FileHandling::canonicalize_path(v4);
  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1 + 24, v4);
  if ( !inner )
    core::option::unwrap_failed(&off_1BC498);
  v2 = inner + 24;
  core::ptr::drop_in_place<std::path::PathBuf>(v4);
  return v2;
}
