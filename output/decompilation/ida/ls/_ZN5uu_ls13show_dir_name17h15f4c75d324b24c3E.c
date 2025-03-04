__int64 __fastcall uu_ls::show_dir_name(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int128 *v13; // rdi
  __int64 v14; // rax
  __int128 *v16; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+8h] [rbp-90h]
  __int128 v18; // [rsp+10h] [rbp-88h] BYREF
  __int64 v19; // [rsp+20h] [rbp-78h]
  __int128 v20; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h]
  void *v22; // [rsp+48h] [rbp-50h] BYREF
  __int64 v23; // [rsp+50h] [rbp-48h]
  __int128 **v24; // [rsp+58h] [rbp-40h]
  __int64 v25; // [rsp+60h] [rbp-38h]
  __int64 v26; // [rsp+68h] [rbp-30h]

  uucore::features::quoting_style::escape_dir_name(&v20, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), a3 + 245);
  if ( *(_BYTE *)(a3 + 239) != 0 && *(_BYTE *)(a3 + 238) == 0 )
  {
    uu_ls::create_hyperlink((__int64)&v18, *((__int64 *)&v20 + 1), v21, a1);
    v16 = &v18;
    v17 = <alloc::string::String as core::fmt::Display>::fmt;
    v22 = &unk_212550;
    v23 = 2LL;
    v26 = 0LL;
    v24 = &v16;
    v25 = 1LL;
    v12 = std::io::Write::write_fmt(a2, &v22, v8, v9, v10, v11);
    core::result::Result<T,E>::unwrap(v12);
    core::ptr::drop_in_place<alloc::string::String>(&v18);
    v13 = &v20;
  }
  else
  {
    v19 = v21;
    v18 = v20;
    v16 = &v18;
    v17 = <alloc::string::String as core::fmt::Display>::fmt;
    v22 = &unk_212550;
    v23 = 2LL;
    v26 = 0LL;
    v24 = &v16;
    v25 = 1LL;
    v14 = std::io::Write::write_fmt(a2, &v22, v4, v5, v6, v7);
    core::result::Result<T,E>::unwrap(v14);
    v13 = &v18;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v13);
}
