_QWORD *__fastcall uu_df::filesystem::Filesystem::from_path(_QWORD *dest, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v6; // rax
  __int64 v7; // rax
  __int128 v9; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-D8h]
  __int128 v11; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-C0h]
  _BYTE src[184]; // [rsp+30h] [rbp-B8h] BYREF

  *(_QWORD *)&v6 = <&T as core::convert::AsRef<U>>::as_ref(a4);
  v9 = v6;
  <T as alloc::string::ToString>::to_string(&v11, &v9);
  v7 = uu_df::filesystem::mount_info_from_path(a2, a3, a4);
  if ( v7 )
  {
    <uucore::features::fsext::MountInfo as core::clone::Clone>::clone(src, v7);
    v10 = v12;
    v9 = v11;
    uu_df::filesystem::Filesystem::new(dest, src);
  }
  else
  {
    *dest = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::string::String>(&v11);
  }
  return dest;
}
