__int64 __fastcall uu_ls::create_hyperlink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+0h] [rbp-108h] BYREF
  const char *v14; // [rsp+10h] [rbp-F8h]
  __int64 (__fastcall *v15)(); // [rsp+18h] [rbp-F0h]
  _QWORD *v16; // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall *v17)(); // [rsp+28h] [rbp-E0h]
  __int128 v18; // [rsp+30h] [rbp-D8h] BYREF
  const char *v19; // [rsp+40h] [rbp-C8h]
  _BYTE v20[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h]
  _BYTE v22[8]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+70h] [rbp-98h]
  _QWORD v25[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[24]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v27[24]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v28[10]; // [rsp+B8h] [rbp-50h] BYREF

  v25[0] = a2;
  v25[1] = a3;
  hostname::get(&v13);
  if ( (_QWORD)v13 == 0x8000000000000000LL )
  {
    uu_ls::create_hyperlink::{{closure}}(&v18, *((_QWORD *)&v13 + 1));
  }
  else
  {
    v19 = v14;
    v18 = v13;
  }
  std::sys::os_str::bytes::Slice::to_string_lossy(v26, *((_QWORD *)&v18 + 1));
  std::fs::canonicalize(&v13, a4 + 24);
  core::result::Result<T,E>::unwrap_or_default(v20, &v13);
  std::sys::os_str::bytes::Slice::to_string_lossy(v22, v21);
  *(_QWORD *)&v13 = v23;
  *((_QWORD *)&v13 + 1) = v23 + v24;
  v14 = asc_364BB;
  v15 = (__int64 (__fastcall *)())&byte_6;
  ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))<alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter)(
    v27,
    &v13,
    v5,
    v23 + v24,
    v6,
    v7);
  *(_QWORD *)&v13 = v26;
  *((_QWORD *)&v13 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v14 = v27;
  v15 = <alloc::string::String as core::fmt::Display>::fmt;
  v16 = v25;
  v17 = <&T as core::fmt::Display>::fmt;
  v28[0] = &off_212BE8;
  v28[1] = 4LL;
  v28[4] = 0LL;
  v28[2] = &v13;
  v28[3] = 3LL;
  core::option::Option<T>::map_or_else(a1, v28, v8, v9, v10, v11);
  core::ptr::drop_in_place<alloc::string::String>(v27);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v22);
  core::ptr::drop_in_place<std::path::PathBuf>(v20);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v26);
  return core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v18);
}
