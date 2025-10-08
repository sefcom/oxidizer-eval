__int64 __fastcall zoxide::util::write(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v16; // [rsp+0h] [rbp-88h] BYREF
  __int128 v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+18h] [rbp-70h] BYREF
  __int64 v19; // [rsp+20h] [rbp-68h]
  __int128 v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+40h] [rbp-48h]
  _QWORD v23[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = <&T as core::convert::AsRef<U>>::as_ref();
  v5 = v4;
  v23[0] = v3;
  v23[1] = v4;
  v6 = a2[1];
  v7 = <std::ffi::os_str::OsString as core::ops::index::Index<core::ops::range::RangeFull>>::index(v6, a2[2]);
  v9 = v8;
  v10 = std::path::Path::parent(v3, v5);
  if ( !v10 )
    core::option::unwrap_failed(&off_134BC8);
  v11 = v10;
  zoxide::util::tmpfile(&v18, v10);
  v13 = v18;
  v14 = -v19;
  if ( !__OFSUB__(-v19, 1LL) )
  {
    v17 = v20;
    v16 = v19;
    v21 = v18;
    v18 = v7;
    v19 = v9;
    *(_QWORD *)&v20 = &v16;
    *((_QWORD *)&v20 + 1) = v23;
    v13 = zoxide::util::write::{{closure}}(&v18, v11, v12, v14);
    v22 = v13;
    if ( v13 )
    {
      v18 = std::fs::remove_file(&v16);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v18);
    }
    core::mem::drop(v16, v17);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*a2, v6, v12, v14);
  return v13;
}