__int64 __fastcall uu_tac::try_mmap_stdin(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v3[8]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v4; // [rsp+10h] [rbp-38h]
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+38h] [rbp-10h]
  __int16 v7; // [rsp+3Ah] [rbp-Eh]

  v2 = std::io::stdio::stdin();
  v5[2] = 0LL;
  v5[0] = 0LL;
  v6 = 0;
  v7 = 0;
  result = memmap2::MmapOptions::map(v3, v5, &v2);
  if ( (v3[0] & 1) != 0 )
  {
    *(_QWORD *)a1 = 0LL;
    return core::ptr::drop_in_place<core::result::Result<memmap2::Mmap,std::io::error::Error>>(v3);
  }
  else
  {
    *(_OWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 1LL;
  }
  return result;
}