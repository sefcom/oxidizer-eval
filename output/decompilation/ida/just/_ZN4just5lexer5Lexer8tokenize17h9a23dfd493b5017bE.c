__int64 __fastcall just::lexer::Lexer::tokenize(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 *v20; // rsi
  __int64 v21; // rax
  __int64 *v22; // rdx
  char **v23; // r8
  _OWORD v24[4]; // [rsp+0h] [rbp-118h] BYREF
  __int128 v25; // [rsp+40h] [rbp-D8h]
  __int64 v26; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-C0h] BYREF
  _OWORD v28[4]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-78h]
  _OWORD v30[4]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-28h]

  while ( 1 )
  {
    if ( !*(_QWORD *)(a2 + 168) )
    {
      just::lexer::Lexer::lex_line_start(v24, a2);
      if ( BYTE8(v25) != 37 )
        goto LABEL_13;
    }
    v8 = *(_DWORD *)(a2 + 192);
    if ( v8 == (_DWORD)&unk_110000 )
      break;
    v9 = *(_QWORD *)(a2 + 40);
    if ( v9 )
    {
      v3 = *(_QWORD *)(a2 + 32);
      v4 = 9 * v9;
      v29 = *(_QWORD *)(v3 + 8 * v4 - 8);
      v5 = *(_OWORD *)(v3 + 8 * v4 - 72);
      v6 = *(_OWORD *)(v3 + 8 * v4 - 56);
      v7 = *(_OWORD *)(v3 + 8 * v4 - 40);
      v28[3] = *(_OWORD *)(v3 + 8 * v4 - 24);
      v28[2] = v7;
      v28[1] = v6;
      v28[0] = v5;
      just::lexer::Lexer::lex_interpolation(v24, a2, v28);
    }
    else if ( *(_BYTE *)(a2 + 196) )
    {
      just::lexer::Lexer::lex_body(v24, a2);
    }
    else
    {
      just::lexer::Lexer::lex_normal(v24, a2, v8);
    }
    if ( BYTE8(v25) != 37 )
      goto LABEL_13;
  }
  v10 = *(_QWORD *)(a2 + 40);
  if ( !v10 )
  {
    while ( just::lexer::Lexer::indented(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16)) )
      just::lexer::Lexer::lex_dedent(a2);
    just::lexer::Lexer::token(a2, 19);
    v20 = (__int64 *)(a2 + 184);
    v21 = *(_QWORD *)(a2 + 184);
    if ( v21 == *(_QWORD *)(a2 + 160) )
    {
      v26 = *(_QWORD *)(a2 + 136);
      if ( v21 == v26 )
      {
        v27 = *(_QWORD *)(a2 + 16);
        if ( v27 == 1 )
        {
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 88);
          *(_OWORD *)a1 = *(_OWORD *)(a2 + 72);
          *(_BYTE *)(a1 + 72) = 37;
          core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
            *(_QWORD *)a2,
            *(_QWORD *)(a2 + 8));
          core::ptr::drop_in_place<alloc::vec::Vec<just::name::Name>>(*(_QWORD *)(a2 + 24), *(_QWORD *)(a2 + 32));
          return core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
                   *(_QWORD *)(a2 + 48),
                   *(_QWORD *)(a2 + 56));
        }
        v23 = &off_430440;
        v22 = (__int64 *)&unk_69270;
        v20 = &v27;
      }
      else
      {
        v23 = &off_430428;
        v22 = &v26;
      }
    }
    else
    {
      v22 = (__int64 *)(a2 + 160);
      v23 = &off_430410;
    }
    *(_QWORD *)&v24[0] = 0LL;
    core::panicking::assert_failed(0LL, v20, v22, v24, v23);
  }
  v11 = *(_QWORD *)(a2 + 32);
  v12 = 9 * v10;
  v31 = *(_QWORD *)(v11 + 8 * v12 - 8);
  v13 = *(_OWORD *)(v11 + 8 * v12 - 72);
  v14 = *(_OWORD *)(v11 + 8 * v12 - 56);
  v15 = *(_OWORD *)(v11 + 8 * v12 - 40);
  v30[3] = *(_OWORD *)(v11 + 8 * v12 - 24);
  v30[2] = v15;
  v30[1] = v14;
  v30[0] = v13;
  just::lexer::Lexer::unterminated_interpolation_error((__int64)v24, (__int64)v30);
LABEL_13:
  *(_OWORD *)(a1 + 64) = v25;
  v16 = v24[0];
  v17 = v24[1];
  v18 = v24[2];
  *(_OWORD *)(a1 + 48) = v24[3];
  *(_OWORD *)(a1 + 32) = v18;
  *(_OWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v16;
  return core::ptr::drop_in_place<just::lexer::Lexer>(a2);
}