__int64 __fastcall just::subcommand::Subcommand::init(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int64 result; // rax
  __int128 v7; // kr00_16
  __int64 v8; // rax
  _BYTE v9[40]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-90h]
  _BYTE v11[24]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v12; // [rsp+48h] [rbp-70h] BYREF
  __int64 v13; // [rsp+58h] [rbp-60h]
  __int128 v14; // [rsp+60h] [rbp-58h]
  __int128 v15; // [rsp+70h] [rbp-48h]
  _QWORD v16[2]; // [rsp+88h] [rbp-30h] BYREF
  __int128 v17; // [rsp+98h] [rbp-20h] BYREF

  v3 = (_QWORD *)(a2 + 264);
  v4 = 0LL;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a2 + 120)) )
    v4 = *(_QWORD *)(a2 + 128);
  just::search::Search::init((__int64)v9, v3, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v4, *(_QWORD *)(a2 + 136));
  v14 = *(_OWORD *)&v9[8];
  v15 = *(_OWORD *)&v9[24];
  if ( __OFSUB__(-*(_QWORD *)v9, 1LL) )
  {
    *(_OWORD *)&v9[23] = v15;
    *(_OWORD *)&v9[7] = v14;
    *(_BYTE *)a1 = 42;
    v5 = *(_OWORD *)&v9[16];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v9;
    *(_OWORD *)(a1 + 17) = v5;
    result = *(_QWORD *)&v9[31];
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v9[31];
    return result;
  }
  *(_OWORD *)&v11[8] = v14;
  v12 = v15;
  *(_QWORD *)v11 = *(_QWORD *)v9;
  v13 = v10;
  if ( (unsigned __int8)std::path::Path::is_file(v14, *((_QWORD *)&v14 + 1)) )
  {
    *(_QWORD *)&v9[23] = *(_QWORD *)&v11[16];
    *(_OWORD *)&v9[7] = *(_OWORD *)v11;
    *(_BYTE *)a1 = 28;
    v7 = *(_OWORD *)&v9[15];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v9;
    *(_OWORD *)(a1 + 16) = v7;
    return core::ptr::drop_in_place<std::path::PathBuf>(&v12);
  }
  v8 = std::fs::write(v11);
  *(_QWORD *)v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v11[16];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v11;
    *(_BYTE *)a1 = 55;
    *(_QWORD *)(a1 + 8) = v8;
    return core::ptr::drop_in_place<std::path::PathBuf>(&v12);
  }
  core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v9);
  if ( *(_BYTE *)(a2 + 423) )
  {
    v17 = *(_OWORD *)&v11[8];
    v16[0] = &v17;
    v16[1] = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)v9 = &off_431158;
    *(_QWORD *)&v9[8] = 2LL;
    *(_QWORD *)&v9[16] = v16;
    *(_OWORD *)&v9[24] = 1uLL;
    std::io::stdio::_eprint(v9);
  }
  *(_BYTE *)a1 = 56;
  return core::ptr::drop_in_place<just::search::Search>(v11);
}