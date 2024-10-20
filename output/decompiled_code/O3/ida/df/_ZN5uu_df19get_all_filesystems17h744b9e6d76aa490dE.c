_QWORD *__fastcall uu_df::get_all_filesystems(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+0h] [rbp-88h] BYREF
  __int64 v5; // [rsp+8h] [rbp-80h]
  __int64 v6; // [rsp+10h] [rbp-78h]
  __int64 v7; // [rsp+18h] [rbp-70h] BYREF
  __int64 v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+28h] [rbp-60h]
  __int64 v10[3]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[8]; // [rsp+48h] [rbp-40h] BYREF

  if ( *(_BYTE *)(a2 + 82) )
    sync();
  uucore::features::fsext::read_fs_list(&v7);
  v2 = v9;
  if ( v7 == 0x8000000000000000LL )
  {
    a1[1] = v8;
    a1[2] = v2;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v10[0] = v7;
    v10[1] = v8;
    v10[2] = v9;
    uu_df::filter_mount_list((__int64)&v4, v10, a2);
    v11[0] = v5;
    v11[1] = v5;
    v11[2] = v4;
    v11[3] = v5 + 152 * v6;
    v11[4] = a2;
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
      a1,
      v11);
  }
  return a1;
}
