__int64 __fastcall bat::assets::HighlightingAssets::find_syntax_by_name(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 *v3; // r15
  __int64 v4; // r14
  __int64 result; // rax
  int v6; // eax
  char v7; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v8[7]; // [rsp+9h] [rbp-6Fh]
  __int64 v9; // [rsp+10h] [rbp-68h]
  __int128 v10; // [rsp+18h] [rbp-60h]
  __int128 v11; // [rsp+28h] [rbp-50h]
  __int128 v12; // [rsp+38h] [rbp-40h]
  __int128 v13; // [rsp+48h] [rbp-30h]

  bat::assets::HighlightingAssets::get_syntax_set((__int64)&v7, a2);
  v2 = v7;
  v3 = (__int64 *)(a1 + 16);
  if ( v7 == 13 )
  {
    v4 = v9;
    result = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_name(v9, aPlainText, 10LL);
    *v3 = v4;
  }
  else
  {
    v6 = *(_DWORD *)v8;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v8[3];
    *(_DWORD *)(a1 + 1) = v6;
    result = v9;
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 64) = v13;
    *(_OWORD *)v3 = v10;
  }
  *(_QWORD *)(a1 + 8) = result;
  *(_BYTE *)a1 = v2;
  return result;
}