__int64 __fastcall uu_cp::platform::linux::check_dest_is_fifo(__int64 a1)
{
  unsigned int v1; // ebp
  _DWORD dest[14]; // [rsp+8h] [rbp-C0h] BYREF
  int v4; // [rsp+40h] [rbp-88h]

  std::fs::metadata(dest);
  LOBYTE(v1) = dest[0] != 2 && (v4 & 0xF000) == 4096;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, a1);
  return v1;
}