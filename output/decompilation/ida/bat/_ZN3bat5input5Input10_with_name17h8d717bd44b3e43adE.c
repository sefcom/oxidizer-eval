void *__fastcall bat::input::Input::_with_name(void *dest, char *src, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int128 v9; // [rsp+10h] [rbp-48h]
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]

  if ( a3 )
  {
    alloc::string::String::from_utf8_lossy(&v8, a3, a4);
    <&str as alloc::string::SpecToString>::spec_to_string(&v10, v9, *((_QWORD *)&v9 + 1));
    core::ptr::drop_in_place<alloc::string::String>(src + 40);
    *((_QWORD *)src + 7) = v11;
    *(_OWORD *)(src + 40) = v10;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v8);
    std::path::Path::to_path_buf(&v8, a3, a4);
    v6 = v8;
    v10 = v9;
  }
  else
  {
    v6 = 0x8000000000000000LL;
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(src + 16);
  *((_QWORD *)src + 2) = v6;
  *(_OWORD *)(src + 24) = v10;
  memcpy(dest, src, 0xA0uLL);
  return dest;
}