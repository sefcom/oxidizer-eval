__int64 __fastcall alacritty::ipc::socket_dir(__int64 a1)
{
  __m256i *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __m256i v5; // [rsp+0h] [rbp-168h] BYREF
  __int64 v6; // [rsp+20h] [rbp-148h]
  __int128 v7; // [rsp+30h] [rbp-138h]
  __m256i v8; // [rsp+40h] [rbp-128h] BYREF
  __int64 v9; // [rsp+60h] [rbp-108h]
  __int128 v10; // [rsp+68h] [rbp-100h] BYREF
  __int64 v11; // [rsp+78h] [rbp-F0h]
  _BYTE v12[232]; // [rsp+80h] [rbp-E8h] BYREF

  xdg::base_directories::BaseDirectories::with_env(v12);
  v1 = (__m256i *)v12;
  xdg::base_directories::BaseDirectories::get_runtime_directory(&v8, v12);
  if ( v8.m256i_i32[0] != 4 )
  {
    v5 = v8;
    v6 = v9;
    ((void (__fastcall *)(__m256i *))core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,xdg::base_directories::Error>>)(&v5);
LABEL_7:
    std::env::temp_dir(a1, v1, v2, v3);
    return core::ptr::drop_in_place<xdg::base_directories::BaseDirectories>(v12);
  }
  v1 = *(__m256i **)(v8.m256i_i64[1] + 8);
  <&str as alloc::string::SpecToString>::spec_to_string(&v10, v1, *(_QWORD *)(v8.m256i_i64[1] + 16));
  v5.m256i_i64[3] = v11;
  *(_OWORD *)&v5.m256i_u64[1] = v10;
  v7 = *(_OWORD *)&v5.m256i_u64[2];
  v3 = -v5.m256i_i64[1];
  if ( __OFSUB__(-v5.m256i_i64[1], 1LL) )
    goto LABEL_7;
  v8.m256i_i64[2] = *((_QWORD *)&v7 + 1);
  *(_OWORD *)v8.m256i_i8 = __PAIR128__(v7, v5.m256i_u64[1]);
  v1 = &v8;
  alacritty::ipc::socket_dir::{{closure}}(&v5, &v8);
  if ( v5.m256i_i64[0] == 0x8000000000000000LL )
    goto LABEL_7;
  *(_QWORD *)(a1 + 16) = v5.m256i_i64[2];
  *(_OWORD *)a1 = *(_OWORD *)v5.m256i_i8;
  return core::ptr::drop_in_place<xdg::base_directories::BaseDirectories>(v12);
}