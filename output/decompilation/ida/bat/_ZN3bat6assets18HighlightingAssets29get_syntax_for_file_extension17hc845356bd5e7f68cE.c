__int64 __fastcall bat::assets::HighlightingAssets::get_syntax_for_file_extension(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // al
  int v11; // ecx
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm0
  char v16; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v17[7]; // [rsp+1h] [rbp-77h]
  __int128 v18; // [rsp+8h] [rbp-70h]
  __int128 v19; // [rsp+18h] [rbp-60h]
  __int128 v20; // [rsp+28h] [rbp-50h]
  __int128 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-30h]

  v8 = std::path::Path::extension(a3, a4);
  bat::assets::HighlightingAssets::find_syntax_by_extension((__int64)&v16, a2, v8, v9);
  v10 = v16;
  if ( v16 == 13
    && ((_QWORD)v18
     || (bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix(&v16, a5, a3, a4, a2, a5),
         v10 = v16,
         v16 == 13)) )
  {
    *(_OWORD *)(a1 + 8) = v18;
    *(_BYTE *)a1 = 13;
  }
  else
  {
    v11 = *(_DWORD *)v17;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v17[3];
    *(_DWORD *)(a1 + 1) = v11;
    v12 = v20;
    v13 = v21;
    *(_OWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 40) = v12;
    *(_OWORD *)(a1 + 56) = v13;
    *(_QWORD *)(a1 + 72) = v22;
    v14 = v18;
    *(_BYTE *)a1 = v10;
    *(_OWORD *)(a1 + 8) = v14;
  }
  return a1;
}