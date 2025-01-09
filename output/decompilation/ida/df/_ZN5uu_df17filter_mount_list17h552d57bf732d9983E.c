_OWORD *__fastcall uu_df::filter_mount_list(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *result; // rax
  __int128 v5; // [rsp+0h] [rbp-238h] BYREF
  __int64 v6; // [rsp+10h] [rbp-228h]
  __int64 v7; // [rsp+18h] [rbp-220h]
  _BYTE v8[32]; // [rsp+20h] [rbp-218h] BYREF
  _QWORD src[19]; // [rsp+40h] [rbp-1F8h] BYREF
  _QWORD dest[19]; // [rsp+D8h] [rbp-160h] BYREF
  _BYTE v11[200]; // [rsp+170h] [rbp-C8h] BYREF

  v7 = a1;
  *(_QWORD *)&v5 = 0LL;
  *((_QWORD *)&v5 + 1) = 8LL;
  v6 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v8);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v8);
  while ( src[0] != 0x8000000000000000LL )
  {
    memcpy(dest, src, sizeof(dest));
    if ( uu_df::is_included((__int64)dest, a3) && uu_df::is_best(*((__int64 *)&v5 + 1), v6, dest) )
    {
      memcpy(v11, dest, 0x98uLL);
      alloc::vec::Vec<T,A>::push(&v5, v11);
    }
    else
    {
      core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(dest);
    }
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v8);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uucore::features::fsext::MountInfo>>(v8);
  result = (_OWORD *)v7;
  *(_QWORD *)(v7 + 16) = v6;
  *result = v5;
  return result;
}
