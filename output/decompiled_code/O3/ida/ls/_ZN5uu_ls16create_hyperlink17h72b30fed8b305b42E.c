__int64 __fastcall uu_ls::create_hyperlink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v10; // [rsp+0h] [rbp-108h] BYREF
  const char *v11; // [rsp+10h] [rbp-F8h]
  __int64 (__fastcall *v12)(); // [rsp+18h] [rbp-F0h]
  _QWORD *v13; // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall *v14)(); // [rsp+28h] [rbp-E0h]
  __int128 v15; // [rsp+30h] [rbp-D8h] BYREF
  const char *v16; // [rsp+40h] [rbp-C8h]
  _BYTE v17[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h]
  _BYTE v19[8]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h]
  __int64 v21; // [rsp+70h] [rbp-98h]
  _QWORD v22[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v23[24]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v24[24]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v25[10]; // [rsp+B8h] [rbp-50h] BYREF

  v22[0] = a2;
  v22[1] = a3;
  hostname::get(&v10);
  if ( (_QWORD)v10 == 0x8000000000000000LL )
  {
    uu_ls::create_hyperlink::{{closure}}(&v15, *((_QWORD *)&v10 + 1));
  }
  else
  {
    v16 = v11;
    v15 = v10;
  }
  std::sys::os_str::bytes::Slice::to_string_lossy(v23, *((_QWORD *)&v15 + 1));
  std::fs::canonicalize(&v10, a4 + 24);
  core::result::Result<T,E>::unwrap_or_default(v17, &v10);
  std::sys::os_str::bytes::Slice::to_string_lossy(v19, v18);
  *(_QWORD *)&v10 = v20;
  *((_QWORD *)&v10 + 1) = v20 + v21;
  v11 = asc_363BB;
  v12 = (__int64 (__fastcall *)())&byte_6;
  ((void (__fastcall *)(_BYTE *, __int128 *))<alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter)(
    v24,
    &v10);
  *(_QWORD *)&v10 = v23;
  *((_QWORD *)&v10 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v11 = v24;
  v12 = <alloc::string::String as core::fmt::Display>::fmt;
  v13 = v22;
  v14 = <&T as core::fmt::Display>::fmt;
  v25[0] = &off_2129E8;
  v25[1] = 4LL;
  v25[4] = 0LL;
  v25[2] = &v10;
  v25[3] = 3LL;
  core::option::Option<T>::map_or_else(a1, v25, v5, v6, v7, v8);
  core::ptr::drop_in_place<alloc::string::String>(v24);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v19);
  core::ptr::drop_in_place<std::path::PathBuf>(v17);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v23);
  return core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v15);
}
