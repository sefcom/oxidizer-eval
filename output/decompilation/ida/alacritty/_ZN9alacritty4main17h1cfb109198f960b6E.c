__int64 alacritty::main()
{
  __int64 v1; // rbx
  __int64 v2[62]; // [rsp+0h] [rbp-4B8h] BYREF
  _BYTE v3[208]; // [rsp+1F0h] [rbp-2C8h] BYREF
  _BYTE dest[504]; // [rsp+2C0h] [rbp-1F8h] BYREF

  alacritty::cli::Options::new(v2);
  if ( v2[44] == 0x8000000000000001LL )
  {
    alacritty::migrate::migrate(&v2[22]);
LABEL_7:
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v2[51]);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v2[54]);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v2[57]);
    core::ptr::drop_in_place<alacritty::cli::ParsedOptions>(&v2[48]);
    v1 = 0LL;
    goto LABEL_8;
  }
  if ( v2[44] == 0x8000000000000002LL )
  {
    memcpy(dest, v2, 0x1F0uLL);
    return alacritty::alacritty(dest);
  }
  memcpy(v3, &v2[22], sizeof(v3));
  v1 = alacritty::msg(v3);
  if ( !v1 )
    goto LABEL_7;
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v2[51]);
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v2[54]);
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v2[57]);
  core::ptr::drop_in_place<alacritty::cli::ParsedOptions>(&v2[48]);
LABEL_8:
  core::ptr::drop_in_place<alacritty::cli::WindowOptions>(v2);
  return v1;
}