_QWORD *__fastcall uu_df::get_all_filesystems(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp-90h] BYREF
  __int64 v5; // [rsp+10h] [rbp-88h]
  __int64 v6; // [rsp+18h] [rbp-80h]
  _QWORD v7[3]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v9; // [rsp+58h] [rbp-40h]
  _BYTE v10[56]; // [rsp+60h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a2 + 82) )
    sync();
  uucore::features::fsext::read_fs_list(&v4);
  v2 = v6;
  if ( v4 == 0x8000000000000000LL )
  {
    a1[1] = v5;
    a1[2] = v2;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v7[0] = v4;
    v7[1] = v5;
    v7[2] = v6;
    uu_df::filter_mount_list((__int64)v10, (__int64)v7, a2);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v8);
    v9 = a2;
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
      a1,
      v8);
  }
  return a1;
}
