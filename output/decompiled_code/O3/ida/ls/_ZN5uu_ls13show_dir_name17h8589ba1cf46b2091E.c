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
  __int64 v16; // [rsp+0h] [rbp-98h] BYREF
  __int128 v17; // [rsp+10h] [rbp-88h] BYREF
  __int64 v18; // [rsp+20h] [rbp-78h]
  __int128 v19; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h]
  void *v21; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 *v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h]
  __int64 v25; // [rsp+68h] [rbp-30h]

  uucore::features::quoting_style::escape_dir_name(&v19, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), a3 + 245);
  if ( *(_BYTE *)(a3 + 239) != 0 && *(_BYTE *)(a3 + 238) == 0 )
  {
    uu_ls::create_hyperlink(&v17, *((_QWORD *)&v19 + 1), v20, a1);
    v21 = &unk_212750;
    v22 = 2LL;
    v25 = 0LL;
    v23 = &v16;
    v24 = 1LL;
    v12 = ((__int64 (__fastcall *)(__int64, void **, __int64, __int64, __int64, __int64, __int128 *, __int64 (__fastcall *)()))std::io::Write::write_fmt)(
            a2,
            &v21,
            v8,
            v9,
            v10,
            v11,
            &v17,
            <alloc::string::String as core::fmt::Display>::fmt);
    core::result::Result<T,E>::unwrap(v12);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
    v13 = &v19;
  }
  else
  {
    v18 = v20;
    v17 = v19;
    v21 = &unk_212750;
    v22 = 2LL;
    v25 = 0LL;
    v23 = &v16;
    v24 = 1LL;
    v14 = ((__int64 (__fastcall *)(__int64, void **, __int64, __int64, __int64, __int64, __int128 *, __int64 (__fastcall *)()))std::io::Write::write_fmt)(
            a2,
            &v21,
            v4,
            v5,
            v6,
            v7,
            &v17,
            <alloc::string::String as core::fmt::Display>::fmt);
    core::result::Result<T,E>::unwrap(v14);
    v13 = &v17;
  }
  return core::ptr::drop_in_place<alloc::string::String>(v13);
}
