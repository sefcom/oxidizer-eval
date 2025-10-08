__int64 __fastcall bat::config::generate_config_file(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  __int64 dir_all; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int128 v7; // kr00_16
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v13[40]; // [rsp+0h] [rbp-A8h] BYREF
  __int128 *v14; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+38h] [rbp-70h]
  __int128 v16; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+68h] [rbp-40h]
  __int128 v20; // [rsp+70h] [rbp-38h] BYREF
  __int64 v21; // [rsp+80h] [rbp-28h]

  bat::config::config_file((__int64)v17);
  v1 = v18;
  v2 = v19;
  if ( !(unsigned __int8)std::path::Path::is_file(v18, v19) )
  {
    v5 = std::path::Path::parent(v1, v2);
    if ( !v5 )
    {
      alloc::string::String::from_utf8_lossy(&v16, v1, v2);
      v14 = &v16;
      v15 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
      *(_QWORD *)v13 = &off_6C8600;
      *(_QWORD *)&v13[8] = 1LL;
      *(_QWORD *)&v13[16] = &v14;
      *(_OWORD *)&v13[24] = 1uLL;
      core::option::Option<T>::map_or_else(&v20, 0LL, v13);
      core::ptr::drop_in_place<regex::error::Error>(&v16);
      *(_OWORD *)&v13[7] = v20;
      *(_QWORD *)&v13[23] = v21;
      *(_BYTE *)a1 = 11;
      v7 = *(_OWORD *)&v13[15];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)v13;
      *(_OWORD *)(a1 + 16) = v7;
      return core::ptr::drop_in_place<std::path::PathBuf>(v17);
    }
    dir_all = std::fs::create_dir_all(v5, v6);
    if ( !dir_all )
      goto LABEL_11;
LABEL_7:
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 8) = dir_all;
    return core::ptr::drop_in_place<std::path::PathBuf>(v17);
  }
  alloc::string::String::from_utf8_lossy(&v16, v1, v2);
  v14 = &v16;
  v15 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  *(_QWORD *)v13 = &off_6C85D0;
  *(_QWORD *)&v13[8] = 2LL;
  *(_QWORD *)&v13[16] = &v14;
  *(_OWORD *)&v13[24] = 1uLL;
  std::io::stdio::_print(v13);
  core::ptr::drop_in_place<regex::error::Error>(&v16);
  *(_QWORD *)v13 = &off_6C85F0;
  *(_QWORD *)&v13[8] = 1LL;
  *(_QWORD *)&v13[16] = 8LL;
  *(_OWORD *)&v13[24] = 0LL;
  std::io::stdio::_print(v13);
  *(_QWORD *)v13 = std::io::stdio::stdout();
  dir_all = <std::io::stdio::Stdout as std::io::Write>::flush(v13);
  if ( dir_all )
    goto LABEL_7;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)&v13[8] = 1LL;
  *(_QWORD *)&v13[16] = 0LL;
  *(_QWORD *)&v16 = std::io::stdio::stdin(v13);
  if ( (std::io::stdio::Stdin::read_line(&v16, v13) & 1) != 0 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 8) = v4;
LABEL_17:
    core::ptr::drop_in_place<alloc::string::String>(v13);
    return core::ptr::drop_in_place<std::path::PathBuf>(v17);
  }
  v8 = core::str::<impl str>::trim_matches(*(_QWORD *)&v13[8], *(_QWORD *)&v13[16]);
  if ( !(unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v8, v9) )
  {
    *(_BYTE *)a1 = 13;
    goto LABEL_17;
  }
  core::ptr::drop_in_place<alloc::string::String>(v13);
LABEL_11:
  v10 = std::fs::write(v17);
  if ( v10 )
  {
    bat::config::generate_config_file::{{closure}}(v13, v1, v2, v10);
    v11 = *(_QWORD *)v13;
    v16 = *(_OWORD *)&v13[8];
    if ( !__OFSUB__(-*(_QWORD *)v13, 1LL) )
    {
      *(_OWORD *)(a1 + 16) = v16;
      *(_BYTE *)a1 = 11;
      *(_QWORD *)(a1 + 8) = v11;
      return core::ptr::drop_in_place<std::path::PathBuf>(v17);
    }
    v1 = v18;
    v2 = v19;
  }
  alloc::string::String::from_utf8_lossy(&v16, v1, v2);
  v14 = &v16;
  v15 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  *(_QWORD *)v13 = &off_6C8610;
  *(_QWORD *)&v13[8] = 2LL;
  *(_QWORD *)&v13[16] = &v14;
  *(_OWORD *)&v13[24] = 1uLL;
  std::io::stdio::_print(v13);
  core::ptr::drop_in_place<regex::error::Error>(&v16);
  *(_BYTE *)a1 = 13;
  return core::ptr::drop_in_place<std::path::PathBuf>(v17);
}