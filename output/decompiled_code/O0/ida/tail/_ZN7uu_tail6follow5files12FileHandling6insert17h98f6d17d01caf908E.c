        char a5)
{
  const void *v7; // r12
  size_t v8; // r15
  __int64 v9; // r13
  void *v10; // rbp
  __int64 result; // rax
  __int128 v12; // [rsp+0h] [rbp-228h] BYREF
  size_t n; // [rsp+10h] [rbp-218h]
  __int64 v14; // [rsp+18h] [rbp-210h] BYREF
  __int64 v15; // [rsp+20h] [rbp-208h]
  void *dest; // [rsp+28h] [rbp-200h]
  __int128 v17; // [rsp+30h] [rbp-1F8h]
  size_t v18; // [rsp+40h] [rbp-1E8h]
  _QWORD v19[27]; // [rsp+48h] [rbp-1E0h] BYREF
  _BYTE v20[216]; // [rsp+120h] [rbp-108h] BYREF

  uu_tail::follow::files::FileHandling::canonicalize_path(&v12);
  if ( a5 )
  {
    v7 = (const void *)*((_QWORD *)&v12 + 1);
    v8 = n;
    core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v12 + 1), 1LL, 1LL, n);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v14, v8, 0LL);
    v9 = v15;
    if ( v14 )
      alloc::raw_vec::handle_error(v15, dest);
    v10 = dest;
    core::intrinsics::copy_nonoverlapping::precondition_check(v7, dest, 1LL, 1LL, v8);
    memcpy(v10, v7, v8);
    if ( *a1 != 0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(a1);
    *a1 = v9;
    a1[1] = v10;
    a1[2] = v8;
  }
  v18 = n;
  v17 = v12;
  memcpy(v20, a4, sizeof(v20));
  result = hashbrown::map::HashMap<K,V,S,A>::insert(v19);
  if ( v19[0] != 3LL )
    return core::ptr::drop_in_place<uu_tail::follow::files::PathData>(v19);
  return result;
}
