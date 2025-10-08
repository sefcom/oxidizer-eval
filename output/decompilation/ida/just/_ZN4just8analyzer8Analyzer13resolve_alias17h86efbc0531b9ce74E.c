__int64 __fastcall just::analyzer::Analyzer::resolve_alias(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _OWORD v11[5]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp-88h] BYREF
  __int128 v13; // [rsp+58h] [rbp-80h]
  __int64 v14; // [rsp+68h] [rbp-70h]
  __int64 v15; // [rsp+70h] [rbp-68h]
  __int64 v16; // [rsp+78h] [rbp-60h]

  v5 = just::analyzer::Analyzer::resolve_recipe(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16), a2, a3);
  if ( v5 )
    return just::alias::Alias<just::namepath::Namepath>::resolve(a1, a4, v5);
  v15 = just::token::Token::lexeme(a4 + 24);
  v16 = v7;
  v13 = *(_OWORD *)a4;
  v14 = *(_QWORD *)(a4 + 16);
  v12 = 0x800000000000003FLL;
  just::token::Token::error(v11, a4 + 24, &v12);
  *(_OWORD *)(a1 + 64) = v11[4];
  v8 = v11[0];
  v9 = v11[1];
  v10 = v11[2];
  *(_OWORD *)(a1 + 48) = v11[3];
  *(_OWORD *)(a1 + 32) = v10;
  *(_OWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  *(_BYTE *)(a1 + 96) = 37;
  return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a4 + 96);
}