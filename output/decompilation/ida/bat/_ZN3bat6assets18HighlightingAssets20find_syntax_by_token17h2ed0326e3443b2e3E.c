__int64 __fastcall bat::assets::HighlightingAssets::find_syntax_by_token(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // bp
  __int64 *v7; // r13
  __int64 v8; // r12
  __int64 syntax_by_token; // rax
  int v10; // eax
  char v12; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v13[7]; // [rsp+9h] [rbp-7Fh]
  __int64 v14; // [rsp+10h] [rbp-78h]
  __int128 v15; // [rsp+18h] [rbp-70h]
  __int128 v16; // [rsp+28h] [rbp-60h]
  __int128 v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+48h] [rbp-40h]

  bat::assets::HighlightingAssets::get_syntax_set((__int64)&v12, a2);
  v6 = v12;
  v7 = (__int64 *)(a1 + 16);
  if ( v12 == 13 )
  {
    v8 = v14;
    syntax_by_token = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_token(v14, a3, a4);
    *v7 = v8;
  }
  else
  {
    v10 = *(_DWORD *)v13;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v13[3];
    *(_DWORD *)(a1 + 1) = v10;
    syntax_by_token = v14;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 64) = v18;
    *(_OWORD *)v7 = v15;
  }
  *(_QWORD *)(a1 + 8) = syntax_by_token;
  *(_BYTE *)a1 = v6;
  return a1;
}