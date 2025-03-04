char __fastcall uu_dd::is_fifo(__int64 a1, __int64 a2)
{
  _DWORD v3[14]; // [rsp+8h] [rbp-B0h] BYREF
  int v4; // [rsp+40h] [rbp-78h]

  std::fs::metadata(v3, a1, a2);
  if ( v3[0] == 2 || (v4 & 0xF000) != 0x1000 )
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v3);
    return 0;
  }
  else
  {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v3);
    return 1;
  }
}
