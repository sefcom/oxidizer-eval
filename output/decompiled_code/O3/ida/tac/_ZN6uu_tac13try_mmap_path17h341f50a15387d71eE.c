__int64 __fastcall uu_tac::try_mmap_path(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  __int64 v3; // rdi
  unsigned int v4; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-48h] BYREF
  char v6; // [rsp+28h] [rbp-30h]
  __int16 v7; // [rsp+2Ah] [rbp-2Eh]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+38h] [rbp-20h]

  std::fs::File::open(v5);
  if ( LODWORD(v5[0]) )
  {
    result = core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(v5);
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    v2 = HIDWORD(v5[0]);
    v4 = HIDWORD(v5[0]);
    v5[2] = 0LL;
    v5[0] = 0LL;
    v6 = 0;
    v7 = 0;
    memmap2::MmapOptions::map(&v8, v5, &v4);
    if ( v8 )
    {
      core::ptr::drop_in_place<core::result::Result<memmap2::Mmap,std::io::error::Error>>(&v8);
      *(_QWORD *)a1 = 0LL;
      v3 = v4;
    }
    else
    {
      *(_OWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 1LL;
      v3 = v2;
    }
    return core::ptr::drop_in_place<std::fs::File>(v3);
  }
  return result;
}
