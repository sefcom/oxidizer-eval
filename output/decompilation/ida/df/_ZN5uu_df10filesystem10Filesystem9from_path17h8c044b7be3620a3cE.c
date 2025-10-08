__int64 __fastcall uu_df::filesystem::Filesystem::from_path(_BYTE *dest, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v6; // rax
  __int128 v8; // [rsp+8h] [rbp-90h] BYREF
  __int64 v9; // [rsp+18h] [rbp-80h]
  _BYTE v10[8]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp-28h]

  *(_QWORD *)&v6 = <&T as core::convert::AsRef<U>>::as_ref(a4);
  v11 = v6;
  <T as alloc::string::SpecToString>::spec_to_string(&v8, &v11);
  uu_df::filesystem::mount_info_from_path(v10, a2, a3, a4);
  v13 = a2;
  v14 = a3;
  v11 = v8;
  v12 = v9;
  if ( v10[0] == 1 )
  {
    dest[8] = v10[1];
    *(_QWORD *)dest = 0x8000000000000000LL;
    return core::ptr::drop_in_place<uu_df::filesystem::Filesystem::from_path<&&alloc::string::String>::{{closure}}>(&v11);
  }
  else
  {
    v16 = v9;
    v15 = v8;
    return uu_df::filesystem::Filesystem::from_mount(dest);
  }
}