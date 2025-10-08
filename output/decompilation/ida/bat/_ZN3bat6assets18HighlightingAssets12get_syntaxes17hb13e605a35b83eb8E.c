__int64 __fastcall bat::assets::HighlightingAssets::get_syntaxes(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rcx
  int v4; // ecx
  char v6; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v7[7]; // [rsp+1h] [rbp-57h]
  __int64 v8; // [rsp+8h] [rbp-50h]
  __int128 v9; // [rsp+10h] [rbp-48h]
  __int128 v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-18h]

  bat::assets::HighlightingAssets::get_syntax_set((__int64)&v6, a2);
  v2 = v6;
  if ( v6 == 13 )
  {
    v3 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(v8 + 16);
  }
  else
  {
    v4 = *(_DWORD *)v7;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v7[3];
    *(_DWORD *)(a1 + 1) = v4;
    v3 = v8;
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 48) = v11;
    *(_OWORD *)(a1 + 64) = v12;
    *(_OWORD *)(a1 + 16) = v9;
  }
  *(_QWORD *)(a1 + 8) = v3;
  *(_BYTE *)a1 = v2;
  return a1;
}