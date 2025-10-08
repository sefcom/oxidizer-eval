__int64 __fastcall uu_wc::is_stdin_small_file()
{
  unsigned int v0; // ebx
  int v2; // [rsp+Ch] [rbp-BCh] BYREF
  _QWORD v3[7]; // [rsp+10h] [rbp-B8h] BYREF
  int v4; // [rsp+48h] [rbp-80h]
  unsigned __int64 v5; // [rsp+60h] [rbp-68h]

  std::io::stdio::stdin();
  v2 = 0;
  std::fs::File::metadata(v3, &v2);
  if ( v3[0] == 2LL )
    v0 = 0;
  else
    LOBYTE(v0) = (v4 & 0xF000) == 0x8000 && v5 < 0xA00001;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v3[0], v3[1]);
  return v0;
}