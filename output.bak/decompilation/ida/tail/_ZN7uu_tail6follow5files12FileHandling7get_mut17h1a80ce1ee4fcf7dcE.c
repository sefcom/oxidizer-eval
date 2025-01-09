__int64 __fastcall uu_tail::follow::files::FileHandling::get_mut(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 inner_mut; // rax
  __int64 v4; // rbx
  _BYTE v6[40]; // [rsp+0h] [rbp-28h] BYREF

  uu_tail::follow::files::FileHandling::canonicalize_path((__int64)v6, a2, a3);
  inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1 + 24, v6);
  if ( !inner_mut )
    core::option::unwrap_failed(&off_1BC4B0);
  v4 = inner_mut + 24;
  core::ptr::drop_in_place<std::path::PathBuf>(v6);
  return v4;
}
