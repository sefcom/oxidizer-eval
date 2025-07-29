__int64 __fastcall flealib::ftp::FTP::write_file(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // [rsp+4h] [rbp-24h] BYREF
  _BYTE v5[4]; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v6; // [rsp+Ch] [rbp-1Ch]
  __int64 v7; // [rsp+10h] [rbp-18h]

  std::fs::File::create(v5, a1);
  if ( (v5[0] & 1) != 0 )
  {
    v2 = v7;
  }
  else
  {
    v4 = v6;
    v2 = std::io::Write::write_all(&v4, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    core::ptr::drop_in_place<std::fs::File>(v4);
    if ( !v2 )
      v2 = 0LL;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2);
  return v2;
}