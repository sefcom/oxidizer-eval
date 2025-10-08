__int64 __fastcall bat::assets::HighlightingAssets::find_syntax_by_extension(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // ecx
  __int64 v11; // rcx
  unsigned __int8 v12; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v13[7]; // [rsp+9h] [rbp-6Fh]
  __int64 v14; // [rsp+10h] [rbp-68h]
  __int128 v15; // [rsp+18h] [rbp-60h]
  __int128 v16; // [rsp+28h] [rbp-50h]
  __int128 v17; // [rsp+38h] [rbp-40h]
  __int128 v18; // [rsp+48h] [rbp-30h]

  bat::assets::HighlightingAssets::get_syntax_set((__int64)&v12, a2);
  result = v12;
  if ( v12 == 13 )
  {
    v7 = v14;
    if ( a3 )
    {
      core::str::converts::from_utf8(&v12, a3, a4);
      v8 = 0LL;
      if ( !v12 )
        v8 = v15;
      v9 = 1LL;
      if ( !v12 )
        v9 = v14;
    }
    else
    {
      v9 = 1LL;
      v8 = 0LL;
    }
    result = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_extension(v7, v9, v8);
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = v7;
    *(_BYTE *)a1 = 13;
  }
  else
  {
    v10 = *(_DWORD *)v13;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v13[3];
    *(_DWORD *)(a1 + 1) = v10;
    v11 = v14;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 64) = v18;
    *(_OWORD *)(a1 + 16) = v15;
    *(_BYTE *)a1 = result;
    *(_QWORD *)(a1 + 8) = v11;
  }
  return result;
}