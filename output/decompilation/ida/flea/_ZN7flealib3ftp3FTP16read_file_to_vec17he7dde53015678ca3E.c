__int64 __fastcall flealib::ftp::FTP::read_file_to_vec(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  unsigned int v3; // [rsp+4h] [rbp-24h] BYREF
  __int128 v4; // [rsp+8h] [rbp-20h] BYREF
  __int64 v5; // [rsp+18h] [rbp-10h]

  std::fs::File::open(&v4);
  if ( (v4 & 1) != 0 )
  {
    a1[1] = *((_QWORD *)&v4 + 1);
    result = 0x8000000000000000LL;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v3 = DWORD1(v4);
    *(_QWORD *)&v4 = 0LL;
    *((_QWORD *)&v4 + 1) = 1LL;
    v5 = 0LL;
    if ( <std::fs::File as std::io::Read>::read_to_end(&v3, &v4) )
    {
      a1[1] = v2;
      *a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v4);
    }
    else
    {
      a1[2] = v5;
      *(_OWORD *)a1 = v4;
    }
    return core::ptr::drop_in_place<std::fs::File>(v3);
  }
  return result;
}