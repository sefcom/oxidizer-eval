_QWORD *__fastcall uu_df::get_all_filesystems(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // [rsp+0h] [rbp-1B8h] BYREF
  _QWORD *v6; // [rsp+8h] [rbp-1B0h]
  __int64 v7; // [rsp+10h] [rbp-1A8h]
  __int128 v8; // [rsp+18h] [rbp-1A0h] BYREF
  __int64 v9; // [rsp+28h] [rbp-190h]
  _QWORD *v10; // [rsp+38h] [rbp-180h]
  _QWORD v11[3]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD dest[19]; // [rsp+58h] [rbp-160h] BYREF
  _QWORD src[25]; // [rsp+F0h] [rbp-C8h] BYREF

  v2 = a1;
  if ( *(_BYTE *)(a2 + 82) )
    sync();
  v5 = 0LL;
  v6 = (_QWORD *)&byte_8;
  v7 = 0LL;
  uucore::features::fsext::read_fs_list(dest);
  v3 = dest[2];
  if ( __OFSUB__(-dest[0], 1LL) )
  {
    a1[1] = dest[1];
    a1[2] = v3;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v10 = a1;
    v11[0] = dest[0];
    v11[1] = dest[1];
    v11[2] = dest[2];
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8, v11);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, &v8);
    while ( src[0] != 0x8000000000000000LL )
    {
      memcpy(dest, src, sizeof(dest));
      if ( uu_df::is_included((__int64)dest, a2) && (unsigned __int8)uu_df::is_best(v6, v7, src) )
        alloc::vec::Vec<T,A>::push(&v5, src);
      else
        core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, &v8);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uucore::features::fsext::MountInfo>>(&v8);
    v2 = v10;
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v8, v6, v7);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(dest, &v8);
    dest[4] = &v5;
    dest[5] = a2;
    core::iter::traits::iterator::Iterator::collect(&v8, dest);
    v2[2] = v9;
    *(_OWORD *)v2 = v8;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(&v5);
  return v2;
}