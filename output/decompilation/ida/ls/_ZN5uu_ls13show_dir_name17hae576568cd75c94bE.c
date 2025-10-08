__int64 __fastcall uu_ls::show_dir_name(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // r14
  __int64 v6; // r15
  __int128 v8; // [rsp+8h] [rbp-80h] BYREF
  __int64 v9; // [rsp+18h] [rbp-70h]
  __int128 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+30h] [rbp-58h]
  _QWORD v12[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h]

  uucore::features::quoting_style::escape_dir_name(&v8, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), a3 + 252);
  if ( *(_BYTE *)(a3 + 247) && !*(_BYTE *)(a3 + 246) )
  {
    v4 = 1;
    uu_ls::create_hyperlink(&v10, *((_QWORD *)&v8 + 1), v9, a1);
  }
  else
  {
    v11 = v9;
    v10 = v8;
    v4 = 0;
  }
  v5 = *((_QWORD *)&v10 + 1);
  v6 = uu_ls::write_os_str(a2, *((_QWORD *)&v10 + 1), v11);
  if ( !v6 )
  {
    v12[0] = &off_286B58;
    v12[1] = 1LL;
    v12[2] = 8LL;
    v13 = 0LL;
    v6 = std::io::Write::write_fmt(a2, v12);
  }
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v10, v5);
  if ( v4 )
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v8, *((_QWORD *)&v8 + 1));
  return v6;
}