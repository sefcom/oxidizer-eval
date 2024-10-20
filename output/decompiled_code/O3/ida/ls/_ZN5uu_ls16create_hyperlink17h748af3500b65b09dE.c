__int64 __fastcall uu_ls::create_hyperlink(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rsi
  char **v8; // r15
  __int64 v9; // r12
  _QWORD *v10; // rbp
  __int64 result; // rax
  __int64 v12; // r14
  char **v13; // [rsp+10h] [rbp-F8h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+18h] [rbp-F0h] BYREF
  const char *v15; // [rsp+20h] [rbp-E8h]
  __int64 (__fastcall *v16)(); // [rsp+28h] [rbp-E0h]
  _QWORD *v17; // [rsp+30h] [rbp-D8h]
  __int64 (__fastcall *v18)(); // [rsp+38h] [rbp-D0h]
  __int64 v19; // [rsp+40h] [rbp-C8h]
  _QWORD v20[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h]
  _QWORD v22[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  char **v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h]
  char ***v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+B8h] [rbp-50h]
  _QWORD v31[8]; // [rsp+C8h] [rbp-40h] BYREF

  v21 = a1;
  v31[0] = a2;
  v31[1] = a3;
  hostname::get(&v26);
  v5 = v26;
  v6 = v27;
  if ( v26 == (char **)0x8000000000000000LL )
  {
    v20[0] = v27;
    std::sys::os_str::bytes::Slice::to_owned(&v13, 1LL, 0LL);
    v5 = v13;
    v6 = (__int64)v14;
    core::ptr::drop_in_place<std::io::error::Error>(v20, 1LL);
  }
  v19 = v6;
  std::sys::os_str::bytes::Slice::to_string_lossy(v22);
  v7 = *(_QWORD *)(a4 + 32);
  std::sys::pal::unix::fs::canonicalize(&v13, v7, *(_QWORD *)(a4 + 40));
  v8 = v13;
  if ( v13 == (char **)0x8000000000000000LL )
  {
    core::ptr::drop_in_place<std::io::error::Error>(&v14, v7);
    v9 = 1LL;
    v8 = 0LL;
  }
  else
  {
    v9 = (__int64)v14;
  }
  std::sys::os_str::bytes::Slice::to_string_lossy(&v23);
  v10 = v24;
  v13 = (char **)v24;
  v14 = (__int64 (__fastcall *)())((char *)v24 + v25);
  v15 = asc_2F35A;
  v16 = (__int64 (__fastcall *)())&byte_6;
  <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(v20, &v13);
  v13 = (char **)v22;
  v14 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v15 = (const char *)v20;
  v16 = <alloc::string::String as core::fmt::Display>::fmt;
  v17 = v31;
  v18 = <&T as core::fmt::Display>::fmt;
  v26 = &off_1ACB78;
  v27 = 4LL;
  v30 = 0LL;
  v28 = &v13;
  v29 = 3LL;
  alloc::fmt::format::format_inner(v21, &v26);
  if ( v20[0] )
    _rust_dealloc(v20[1], v20[0], 1LL);
  if ( 2 * v23 )
  {
    _rust_dealloc(v10, v23, 1LL);
    if ( !v8 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v8 )
LABEL_10:
    _rust_dealloc(v9, v8, 1LL);
LABEL_11:
  result = 0x8000000000000000LL;
  v12 = v19;
  if ( v22[0] != 0x8000000000000000LL && v22[0] )
    result = _rust_dealloc(v22[1], v22[0], 1LL);
  if ( v5 )
    return _rust_dealloc(v12, v5, 1LL);
  return result;
}
