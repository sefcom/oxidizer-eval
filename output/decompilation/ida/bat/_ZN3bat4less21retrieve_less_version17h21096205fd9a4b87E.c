__int64 bat::less::retrieve_less_version()
{
  __int64 v0; // rax
  __int64 v2; // r14
  __int64 v3; // [rsp+8h] [rbp-180h] BYREF
  __int128 v4; // [rsp+10h] [rbp-178h]
  __int128 v5; // [rsp+20h] [rbp-168h]
  __int128 v6; // [rsp+30h] [rbp-158h]
  _OWORD v7[4]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v8; // [rsp+80h] [rbp-108h]
  __int128 v9; // [rsp+88h] [rbp-100h]
  _BYTE dest[8]; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-E8h]
  __int128 v12; // [rsp+A8h] [rbp-E0h]

  v0 = std::ffi::os_str::<impl core::convert::AsRef<std::ffi::os_str::OsStr> for alloc::string::String>::as_ref();
  grep_cli::decompress::resolve_binary(dest, v0);
  if ( (dest[0] & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,grep_cli::process::CommandError>>(dest);
    return 2LL;
  }
  v7[0] = v12;
  if ( __OFSUB__(-v11, 1LL) )
    return 2LL;
  v9 = v7[0];
  v8 = v11;
  std::process::Command::new(dest);
  std::process::Command::arg(dest, aVersion_1, 9LL);
  std::process::Command::output(v7, dest);
  if ( *(_QWORD *)&v7[0] == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::result::Result<std::process::Output,std::io::error::Error>>(v7);
    core::ptr::drop_in_place<std::process::Command>(dest);
    return 2LL;
  }
  v6 = *(_OWORD *)((char *)&v7[2] + 8);
  v5 = *(_OWORD *)((char *)&v7[1] + 8);
  v4 = *(_OWORD *)((char *)v7 + 8);
  v3 = *(_QWORD *)&v7[0];
  core::ptr::drop_in_place<std::process::Command>(dest);
  if ( DWORD2(v6) )
    v2 = bat::less::parse_less_version_busybox(*((_QWORD *)&v5 + 1), v6);
  else
    v2 = bat::less::parse_less_version(v4, *((_QWORD *)&v4 + 1));
  core::ptr::drop_in_place<std::process::Output>(&v3);
  return v2;
}