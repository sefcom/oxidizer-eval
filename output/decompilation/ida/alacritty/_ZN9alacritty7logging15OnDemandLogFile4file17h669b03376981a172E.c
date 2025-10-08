__int64 __fastcall alacritty::logging::OnDemandLogFile::file(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  int v3; // ebp
  __int64 v4; // r15
  __int64 v5; // rsi
  __int128 v6; // xmm0
  __int64 v8; // [rsp+0h] [rbp-118h] BYREF
  __int64 v9; // [rsp+8h] [rbp-110h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-108h] BYREF
  __int128 v11; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v12[4]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-E4h]
  __int64 v14; // [rsp+38h] [rbp-E0h]
  __int128 dest; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v16; // [rsp+50h] [rbp-C8h]
  __int64 v17; // [rsp+60h] [rbp-B8h]

  v1 = (_QWORD *)(a1 + 24);
  if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 24)) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    std::fs::metadata(&dest);
    v3 = dest;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest);
    if ( v3 == 2 )
    {
      core::ptr::drop_in_place<core::option::Option<std::io::buffered::linewriter::LineWriter<std::fs::File>>>(v1, v2);
      *v1 = 0x8000000000000000LL;
    }
    else if ( *v1 != 0x8000000000000000LL )
    {
      return 0LL;
    }
  }
  *(_QWORD *)&dest = 0x1B600000000LL;
  DWORD2(dest) = 0x10000;
  WORD6(dest) = 256;
  std::fs::OpenOptions::open(v12, &dest, a1);
  if ( (v12[0] & 1) != 0 )
  {
    v8 = v14;
    v10[0] = std::io::stdio::stdout();
    *(_QWORD *)&v11 = &v8;
    *((_QWORD *)&v11 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_883200;
    *((_QWORD *)&dest + 1) = 2LL;
    v17 = 0LL;
    *(_QWORD *)&v16 = &v11;
    *((_QWORD *)&v16 + 1) = 1LL;
    v9 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(v10, &dest);
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v9);
    return 1LL;
  }
  else
  {
    v5 = v13;
    std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&dest, v13);
    core::ptr::drop_in_place<core::option::Option<std::io::buffered::linewriter::LineWriter<std::fs::File>>>(v1, v5);
    v6 = dest;
    *(_OWORD *)(a1 + 40) = v16;
    *(_OWORD *)v1 = v6;
    v4 = 0LL;
    core::sync::atomic::atomic_store(*(_QWORD *)(a1 + 56) + 16LL, 1LL, 0LL);
    v9 = std::io::stdio::stdout();
    v11 = *(_OWORD *)(a1 + 8);
    v10[0] = &v11;
    v10[1] = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_8831E0;
    *((_QWORD *)&dest + 1) = 2LL;
    v17 = 0LL;
    *(_QWORD *)&v16 = v10;
    *((_QWORD *)&v16 + 1) = 1LL;
    v8 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v9, &dest);
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v8);
    if ( *(_QWORD *)(a1 + 24) == 0x8000000000000000LL )
      core::option::unwrap_failed(&off_883220);
  }
  return v4;
}