__int64 __fastcall fd::filesystem::is_existing_directory(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int8)std::path::Path::is_dir() )
  {
    LOBYTE(v2) = 1;
    if ( !std::path::Path::file_name(a1, a2) )
    {
      normpath::imp::normalize(v4, a1, a2);
      LOBYTE(v2) = !__OFSUB__(0LL, v4[0]);
      core::ptr::drop_in_place<core::result::Result<normpath::base::BasePathBuf,std::io::error::Error>>(v4);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}