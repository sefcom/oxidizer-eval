__int64 __fastcall uu_tail::follow::files::FileHandling::get_mut(__int64 a1)
{
  __int64 inner_mut; // rax
  __int64 v2; // rbx
  _BYTE v4[40]; // [rsp+0h] [rbp-28h] BYREF

  uu_tail::follow::files::FileHandling::canonicalize_path(v4);
  inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1 + 24, v4);
  if ( !inner_mut )
    core::option::unwrap_failed(&off_1BC4B0);
  v2 = inner_mut + 24;
  core::ptr::drop_in_place<std::path::PathBuf>(v4);
  return v2;
}
