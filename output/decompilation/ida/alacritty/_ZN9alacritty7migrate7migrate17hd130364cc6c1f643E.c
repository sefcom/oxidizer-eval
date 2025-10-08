__int64 __fastcall alacritty::migrate::migrate(__int64 *a1)
{
  unsigned __int64 v1; // r14
  __int64 v2; // r15
  __int16 v3; // ax
  _BYTE v5[24]; // [rsp+0h] [rbp-118h] BYREF
  __int128 v6; // [rsp+18h] [rbp-100h]
  _BYTE v7[24]; // [rsp+30h] [rbp-E8h] BYREF
  char v8; // [rsp+48h] [rbp-D0h]
  __int16 v9; // [rsp+49h] [rbp-CFh]
  char v10; // [rsp+4Bh] [rbp-CDh]
  __int128 v11; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+60h] [rbp-B8h]
  __int128 v13; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+80h] [rbp-98h]
  __int64 v15; // [rsp+90h] [rbp-88h]
  _BYTE v16[24]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v17; // [rsp+B8h] [rbp-60h]
  __int64 v18; // [rsp+C8h] [rbp-50h]
  __int128 v19; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-38h]
  __int128 v21; // [rsp+E8h] [rbp-30h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-20h]

  v1 = 0x8000000000000000LL;
  v2 = *a1;
  if ( __OFSUB__(-*a1, 1LL) )
  {
    *(_QWORD *)v16 = 0x8000000000000000LL;
  }
  else
  {
    <&str as alloc::string::SpecToString>::spec_to_string(v5, a1[1], a1[2]);
    *(_QWORD *)&v16[16] = *(_QWORD *)&v5[16];
    *(_OWORD *)v16 = *(_OWORD *)v5;
  }
  core::option::Option<T>::or_else(v5, v16);
  core::option::Option<T>::or_else(&v21, v5);
  if ( (_QWORD)v21 == 0x8000000000000000LL )
  {
    *(_QWORD *)v5 = &off_883320;
    *(_QWORD *)&v5[8] = 1LL;
    *(_QWORD *)&v5[16] = 8LL;
    v6 = 0LL;
    std::io::stdio::_eprint(v5);
    std::process::exit(1);
  }
  v12 = v22;
  v11 = v21;
  if ( !*((_BYTE *)a1 + 24) )
  {
    if ( v2 != 0x8000000000000000LL )
    {
      <&str as alloc::string::SpecToString>::spec_to_string(v5, a1[1], a1[2]);
      v1 = *(_QWORD *)v5;
      *(_OWORD *)v16 = *(_OWORD *)&v5[8];
    }
    v3 = *(_WORD *)((char *)a1 + 25);
    *(_QWORD *)v7 = v1;
    *(_OWORD *)&v7[8] = *(_OWORD *)v16;
    v9 = v3;
    v10 = 1;
    v8 = 1;
    alacritty::migrate::migrate_config(v16, v7, *((_QWORD *)&v11 + 1), v12, 5LL);
    if ( *(_QWORD *)v16 == 1LL )
    {
      v20 = v17;
      v19 = *(_OWORD *)&v16[8];
      *(_QWORD *)v5 = &off_883330;
      *(_QWORD *)&v5[8] = 1LL;
      *(_QWORD *)&v5[16] = 8LL;
      v6 = 0LL;
      std::io::stdio::_eprint(v5);
      *(_QWORD *)&v13 = &v11;
      *((_QWORD *)&v13 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
      *(_QWORD *)&v14 = &v19;
      *((_QWORD *)&v14 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)v5 = &off_883340;
      *(_QWORD *)&v5[8] = 3LL;
      *(_QWORD *)&v5[16] = &v13;
      v6 = 2uLL;
      std::io::stdio::_eprint(v5);
      std::process::exit(1);
    }
    core::ptr::drop_in_place<core::result::Result<alacritty::migrate::Migration,alloc::string::String>>(v16);
    core::ptr::drop_in_place<alacritty::cli::MigrateOptions>(v7);
  }
  alacritty::migrate::migrate_config(v16, a1, *((_QWORD *)&v11 + 1), v12, 5LL);
  if ( *(_DWORD *)v16 == 1 )
  {
    *(_QWORD *)&v7[16] = v17;
    *(_OWORD *)v7 = *(_OWORD *)&v16[8];
    *(_QWORD *)v5 = &off_883330;
    *(_QWORD *)&v5[8] = 1LL;
    *(_QWORD *)&v5[16] = 8LL;
    v6 = 0LL;
    std::io::stdio::_eprint(v5);
    *(_QWORD *)&v13 = &v11;
    *((_QWORD *)&v13 + 1) = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v5 = &off_883340;
    *(_QWORD *)&v5[8] = 3LL;
    *(_QWORD *)&v5[16] = &v13;
    v6 = 2uLL;
    std::io::stdio::_eprint(v5);
    std::process::exit(1);
  }
  v15 = v18;
  v14 = v17;
  v13 = *(_OWORD *)&v16[8];
  if ( !*((_BYTE *)a1 + 27) )
  {
    alacritty::migrate::Migration::success_message(v7, &v13, 0LL);
    *(_QWORD *)&v19 = v7;
    *((_QWORD *)&v19 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v5 = &unk_882F40;
    *(_QWORD *)&v5[8] = 2LL;
    *(_QWORD *)&v5[16] = &v19;
    v6 = 1uLL;
    std::io::stdio::_print(v5);
    core::ptr::drop_in_place<alloc::string::String>(v7);
  }
  core::ptr::drop_in_place<alacritty::migrate::Migration>(&v13);
  core::mem::drop(&v11);
  return core::ptr::drop_in_place<alacritty::cli::MigrateOptions>(a1);
}