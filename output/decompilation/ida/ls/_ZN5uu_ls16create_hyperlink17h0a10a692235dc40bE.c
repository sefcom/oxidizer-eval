__int64 __fastcall uu_ls::create_hyperlink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int128 v7; // [rsp+0h] [rbp-118h] BYREF
  const char *v8; // [rsp+10h] [rbp-108h]
  __int64 v9; // [rsp+18h] [rbp-100h]
  __int64 v10; // [rsp+20h] [rbp-F8h]
  __int128 v11; // [rsp+30h] [rbp-E8h] BYREF
  const char *v12; // [rsp+40h] [rbp-D8h]
  _BYTE v13[8]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-C0h]
  _BYTE v15[8]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-A8h]
  __int64 v17; // [rsp+78h] [rbp-A0h]
  _QWORD v18[4]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v19[24]; // [rsp+A0h] [rbp-78h] BYREF
  _BYTE v20[24]; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-48h] BYREF
  const char *v22; // [rsp+E0h] [rbp-38h]

  hostname::get(&v7);
  if ( __OFSUB__(0LL, (_QWORD)v7) )
  {
    uu_ls::create_hyperlink::{{closure}}(&v11, *((_QWORD *)&v7 + 1));
  }
  else
  {
    v12 = v8;
    v11 = v7;
  }
  v5 = *((_QWORD *)&v11 + 1);
  alloc::string::String::from_utf8_lossy(v19, *((_QWORD *)&v11 + 1));
  std::fs::canonicalize(&v7, a4 + 24);
  core::result::Result<T,E>::unwrap_or_default(v13, &v7);
  alloc::string::String::from_utf8_lossy(v15, v14);
  *(_QWORD *)&v7 = v16;
  *((_QWORD *)&v7 + 1) = v16 + v17;
  v8 = asc_D421B;
  v9 = 6LL;
  ((void (__fastcall *)(_BYTE *, __int128 *))core::iter::traits::iterator::Iterator::collect)(v20, &v7);
  v18[0] = v19;
  v18[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v18[2] = v20;
  v18[3] = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v7 = &off_286D70;
  *((_QWORD *)&v7 + 1) = 3LL;
  v10 = 0LL;
  v8 = (const char *)v18;
  v9 = 2LL;
  core::option::Option<T>::map_or_else(&v21, &v7);
  v7 = v21;
  v8 = v22;
  std::ffi::os_str::OsString::push(&v7, a2);
  std::ffi::os_str::OsString::push(&v7, a8, 6LL);
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  core::ptr::drop_in_place<alloc::string::String>(v20);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v15);
  core::ptr::drop_in_place<std::path::PathBuf>(v13);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v19);
  return core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v5);
}