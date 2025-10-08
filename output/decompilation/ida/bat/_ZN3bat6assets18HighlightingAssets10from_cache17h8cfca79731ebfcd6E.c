__int64 __fastcall bat::assets::HighlightingAssets::from_cache(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // cl
  __int128 v5; // xmm0
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v9; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-A8h]
  _BYTE v11[8]; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+20h] [rbp-98h]
  __int64 v13; // [rsp+28h] [rbp-90h]
  _BYTE v14[31]; // [rsp+30h] [rbp-88h]
  char v15; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v16[31]; // [rsp+51h] [rbp-67h]
  __int128 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+80h] [rbp-38h]
  __int128 v19; // [rsp+90h] [rbp-28h]

  std::path::Path::join(&v9, a2, a3, aSyntaxesBin_0, 12LL);
  std::path::Path::join(v11, a2, a3, aThemesBin_0, 10LL);
  bat::assets::asset_from_cache(&v15, v12, v13);
  v4 = v15;
  if ( v15 == 13 )
  {
    *(_QWORD *)&v14[23] = *(_QWORD *)&v16[23];
    v5 = *(_OWORD *)&v16[7];
    *(_OWORD *)&v14[7] = *(_OWORD *)&v16[7];
    *(_QWORD *)(a1 + 120) = *(_QWORD *)&v16[23];
    *(_OWORD *)(a1 + 104) = v5;
    *(_OWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  else
  {
    v6 = v17;
    v7 = v18;
    *(_OWORD *)&v14[15] = *(_OWORD *)&v16[15];
    *(_OWORD *)v14 = *(_OWORD *)v16;
    *(_OWORD *)(a1 + 72) = v19;
    *(_OWORD *)(a1 + 56) = v7;
    *(_OWORD *)(a1 + 40) = v6;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v14[15];
    *(_OWORD *)(a1 + 9) = *(_OWORD *)v14;
    *(_BYTE *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 0x8000000000000001LL;
    core::ptr::drop_in_place<bat::assets::serialized_syntax_set::SerializedSyntaxSet>(&v9);
  }
  core::ptr::drop_in_place<std::path::PathBuf>(v11);
  return a1;
}