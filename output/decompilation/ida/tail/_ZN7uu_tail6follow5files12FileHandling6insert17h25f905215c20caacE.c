__int64 __fastcall uu_tail::follow::files::FileHandling::insert(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+0h] [rbp-128h]
  __int128 v12; // [rsp+0h] [rbp-128h]
  __int64 v13; // [rsp+10h] [rbp-118h]
  __int64 v14; // [rsp+10h] [rbp-118h]
  __int128 v15; // [rsp+18h] [rbp-110h] BYREF
  __int64 v16; // [rsp+28h] [rbp-100h]
  __int128 dest; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-E8h]

  uu_tail::follow::files::FileHandling::canonicalize_path(&v15);
  if ( a5 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&dest, *((_QWORD *)&v15 + 1), v16);
    v13 = v18;
    v11 = dest;
    core::ptr::drop_in_place<uu_tail::paths::InputKind>(*a1, a1[1]);
    a1[2] = v13;
    *(_OWORD *)a1 = v11;
  }
  v14 = v16;
  v12 = v15;
  hashbrown::map::HashMap<K,V,S,A>::insert(&dest);
  return core::ptr::drop_in_place<core::option::Option<uu_tail::follow::files::PathData>>(
           &dest,
           a1 + 3,
           v6,
           v7,
           v8,
           v9,
           v12,
           *((_QWORD *)&v12 + 1),
           v14);
}