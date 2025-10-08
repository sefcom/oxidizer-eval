__int64 __fastcall fd::output::print_entry_format(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v16; // [rsp+0h] [rbp-88h] BYREF
  __int64 v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+10h] [rbp-78h]
  __int64 v19; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v20[6]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v21[48]; // [rsp+58h] [rbp-30h] BYREF

  v6 = fd::dir_entry::DirEntry::stripped_path(a2, *(_BYTE *)(a3 + 487));
  v8 = 0LL;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a3 + 360)) )
    v8 = *(_QWORD *)(a3 + 368);
  fd::fmt::FormatTemplate::generate(&v16, a4, v6, v7, v8, *(_QWORD *)(a3 + 376));
  v9 = v17;
  alloc::string::String::from_utf8_lossy(v21, v17);
  v20[0] = asc_70810;
  v20[1] = 1LL;
  v20[4] = 0LL;
  v20[2] = &v19;
  v20[3] = 1LL;
  v14 = std::io::Write::write_fmt(
          a1,
          v20,
          v10,
          v11,
          v12,
          v13,
          v16,
          v17,
          v18,
          v21,
          <alloc::borrow::Cow<B> as core::fmt::Display>::fmt);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v16, v9);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v21);
  return v14;
}