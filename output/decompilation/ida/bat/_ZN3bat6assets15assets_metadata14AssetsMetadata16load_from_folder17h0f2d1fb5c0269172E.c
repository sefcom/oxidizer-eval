__int64 __fastcall bat::assets::assets_metadata::AssetsMetadata::load_from_folder(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // rsi
  int v12; // r14d
  __int64 v14; // [rsp+0h] [rbp-138h] BYREF
  __int64 v15; // [rsp+8h] [rbp-130h]
  _BYTE v16[48]; // [rsp+18h] [rbp-120h] BYREF
  __int128 v17; // [rsp+48h] [rbp-F0h]
  __int128 v18; // [rsp+58h] [rbp-E0h]
  _DWORD dest[52]; // [rsp+68h] [rbp-D0h] BYREF

  bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder((__int64)v16, a2, a3);
  if ( v16[0] == 13 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v16[40];
    v5 = *(_OWORD *)&v16[8];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v16[24];
    *(_OWORD *)(a1 + 8) = v5;
    *(_BYTE *)a1 = 13;
  }
  else if ( v16[0] == 6 )
  {
    *(_OWORD *)(a1 + 64) = v18;
    v6 = *(_OWORD *)v16;
    v7 = *(_OWORD *)&v16[16];
    v8 = *(_OWORD *)&v16[32];
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
  }
  else
  {
    std::path::Path::join(&v14, a2, a3, aSyntaxesBin_0, 12LL);
    v9 = v15;
    std::fs::metadata(dest);
    v10 = dest[0];
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v9);
    core::ptr::drop_in_place<std::path::PathBuf>(&v14);
    if ( v10 == 2
      && (std::path::Path::join(&v14, a2, a3, aThemesBin_0, 10LL),
          v11 = v15,
          std::fs::metadata(dest),
          v12 = dest[0],
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v11),
          core::ptr::drop_in_place<std::path::PathBuf>(&v14),
          v12 == 2) )
    {
      *(_QWORD *)(a1 + 8) = 0x8000000000000001LL;
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
      *(_DWORD *)(a1 + 40) = 1000000000;
    }
    *(_BYTE *)a1 = 13;
    core::ptr::drop_in_place<bat::error::Error>(v16);
  }
  return a1;
}