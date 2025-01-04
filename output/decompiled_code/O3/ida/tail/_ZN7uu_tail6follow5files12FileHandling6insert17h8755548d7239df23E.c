        char a5)
{
  __int128 v8; // [rsp+8h] [rbp-210h] BYREF
  __int64 v9; // [rsp+18h] [rbp-200h]
  __int128 v10; // [rsp+20h] [rbp-1F8h]
  __int64 v11; // [rsp+30h] [rbp-1E8h]
  __int128 v12; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-1C8h]
  _OWORD dest[15]; // [rsp+120h] [rbp-F8h] BYREF

  uu_tail::follow::files::FileHandling::canonicalize_path(&v8);
  if ( a5 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(dest, &v8);
    v13 = *(_QWORD *)&dest[1];
    v12 = dest[0];
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(a1);
    *(_QWORD *)(a1 + 16) = v13;
    *(_OWORD *)a1 = v12;
  }
  v11 = v9;
  v10 = v8;
  memcpy(dest, a4, 0xD8uLL);
  hashbrown::map::HashMap<K,V,S,A>::insert(&v12);
  return core::ptr::drop_in_place<core::option::Option<uu_tail::follow::files::PathData>>(&v12, a1 + 24);
}
