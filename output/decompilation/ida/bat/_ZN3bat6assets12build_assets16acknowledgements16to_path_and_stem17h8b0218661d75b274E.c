__int64 __fastcall bat::assets::build_assets::acknowledgements::to_path_and_stem(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  _BYTE v13[24]; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+18h] [rbp-90h]
  __int64 v15; // [rsp+28h] [rbp-80h]
  __int128 v16; // [rsp+30h] [rbp-78h] BYREF
  __int64 v17; // [rsp+40h] [rbp-68h]
  __int128 v18; // [rsp+48h] [rbp-60h] BYREF
  __int64 v19; // [rsp+58h] [rbp-50h]
  _BYTE v20[24]; // [rsp+60h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a4 + 8);
  v7 = *(_QWORD *)(a4 + 16);
  std::path::Path::to_path_buf(&v18, v6, v7);
  v8 = std::path::Path::file_stem(v6, v7);
  if ( !v8 )
  {
    *a1 = 0x8000000000000000LL;
LABEL_8:
    core::ptr::drop_in_place<std::path::PathBuf>(&v18);
    return core::ptr::drop_in_place<walkdir::dent::DirEntry>(a4);
  }
  bat::assets::build_assets::acknowledgements::to_path_and_stem::{{closure}}(v13, v8);
  *(_OWORD *)&v20[8] = *(_OWORD *)&v13[8];
  *(_QWORD *)v20 = *(_QWORD *)v13;
  v9 = std::path::Path::strip_prefix(v6, v7, a2, a3);
  if ( !v9 )
  {
    *(_QWORD *)&v16 = 0x8000000000000000LL;
    goto LABEL_7;
  }
  bat::assets::build_assets::acknowledgements::to_path_and_stem::{{closure}}(v13, v9);
  v17 = *(_QWORD *)&v13[16];
  v16 = *(_OWORD *)v13;
  v10 = *(_QWORD *)v13;
  if ( *(_QWORD *)v13 == 0x8000000000000000LL )
  {
LABEL_7:
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v16);
    *a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::string::String>(v20);
    goto LABEL_8;
  }
  a1[7] = *((_QWORD *)&v16 + 1);
  a1[8] = v17;
  v11 = v18;
  *(_OWORD *)v13 = v18;
  *(_QWORD *)&v13[16] = v19;
  v14 = *(_OWORD *)v20;
  v15 = *(_QWORD *)&v20[16];
  a1[4] = *(_QWORD *)&v20[8];
  a1[5] = v15;
  a1[2] = *(_QWORD *)&v13[16];
  a1[3] = v14;
  *(_OWORD *)a1 = v11;
  a1[6] = v10;
  return core::ptr::drop_in_place<walkdir::dent::DirEntry>(a4);
}