__int64 __fastcall uu_cp::platform::linux::check_dest_is_fifo()
{
  unsigned int v0; // ebx
  _QWORD v2[7]; // [rsp+0h] [rbp-B8h] BYREF
  int v3; // [rsp+38h] [rbp-80h]

  std::fs::metadata(v2);
  LOBYTE(v0) = v2[0] != 2LL && (v3 & 0xF000) == 4096;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v2[0], v2[1]);
  return v0;
}
