__int64 __fastcall bat::assets::HighlightingAssets::get_syntax_for_file_name(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char v8; // al
  int v9; // ecx
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm0
  char v14; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v15[7]; // [rsp+1h] [rbp-77h]
  __int128 v16; // [rsp+8h] [rbp-70h]
  __int128 v17; // [rsp+18h] [rbp-60h]
  __int128 v18; // [rsp+28h] [rbp-50h]
  __int128 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-30h]

  bat::assets::HighlightingAssets::find_syntax_by_extension((__int64)&v14, a2, a3, a4);
  v8 = v14;
  if ( v14 == 13
    && ((_QWORD)v16
     || (bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix(&v14, a5, a3, a4, a2, a5),
         v8 = v14,
         v14 == 13)) )
  {
    *(_OWORD *)(a1 + 8) = v16;
    *(_BYTE *)a1 = 13;
  }
  else
  {
    v9 = *(_DWORD *)v15;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v15[3];
    *(_DWORD *)(a1 + 1) = v9;
    v10 = v18;
    v11 = v19;
    *(_OWORD *)(a1 + 24) = v17;
    *(_OWORD *)(a1 + 40) = v10;
    *(_OWORD *)(a1 + 56) = v11;
    *(_QWORD *)(a1 + 72) = v20;
    v12 = v16;
    *(_BYTE *)a1 = v8;
    *(_OWORD *)(a1 + 8) = v12;
  }
  return a1;
}