__int64 __fastcall just::lexer::Lexer::lex_string(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int8 v5; // al
  char v6; // dl
  __int64 result; // rax
  char v8; // bp
  __int64 v9; // rcx
  const char *v10; // rsi
  const char *v11; // rdx
  unsigned __int8 v12; // r15
  int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned __int8 v15; // cl
  __int64 v16; // r15
  const char *v17; // rsi
  const char *v18; // rdx
  const char *v19; // rdx
  char v20; // si
  char v21; // r12
  char v22; // r13
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int64 v26; // [rsp+0h] [rbp-B8h]
  __int64 v27; // [rsp+10h] [rbp-A8h]
  _OWORD v28[4]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v29; // [rsp+60h] [rbp-58h]

  v3 = just::lexer::Lexer::rest((_QWORD *)a2);
  v5 = just::string_kind::StringKind::from_token_start(v3, v4);
  if ( v5 == 2 )
  {
    result = just::lexer::Lexer::advance((__int64)v28, a2);
    if ( BYTE8(v29) == 37 )
      return just::lexer::Lexer::internal_error(a1, a2, aLexerLexString, 39LL);
    goto LABEL_47;
  }
  v8 = v6;
  if ( v6 )
  {
    v9 = 2LL * v5 + 1;
    if ( v6 == 1 )
    {
      v10 = (const char *)&unk_71291;
      v11 = asc_6B312;
    }
    else
    {
      v10 = (const char *)&unk_71294;
      v11 = "'\\\\``\\Mismatched closing delimiter ``. (Did you mean to close the `` on line ?)Found a mix of tabs and sp"
            "aces in leading whitespace: ``\n"
            "Leading whitespace may consist of tabs or spaces, but not both` has both `[no-cd]` and `[working-directory]`"
            " attributesParameter `` follows variadic parameter` first defined on line ` defined on line  is redefined as"
            "  on line ` has both shebang line and `[script]` attributeShell expansion failed: Non-default parameter `` f"
            "ollows default parameter` not definedExpected character Unexpected closing delimiter ` but found end-of-file"
            "Expected , but found expected hex digit [0-9A-Fa-f] but found `expected unicode escape sequence delimiter `{"
            "` but found `unicode escape sequence starting with `\\u{` longer than six hex digitsunicode escape sequence "
            "value `` greater than maximum valid code point `10FFFF`Alias `` has an unknown target `Unknown attribute `` "
            "has unknown dependency `Call to unknown function `Unknown setting `Unknown start of token 'orattributeaan";
    }
  }
  else
  {
    v9 = 2LL * v5 + 1;
    v10 = (const char *)&unk_7128E;
    v11 = asc_6E541;
  }
  v12 = v5;
  if ( (v5 & 1) != 0 )
    v11 = v10;
  result = just::lexer::Lexer::presume_str((__int64)v28, a2, (__int64)v11, v9);
  if ( BYTE8(v29) != 37 )
    goto LABEL_47;
  v13 = *(_DWORD *)(a2 + 192);
  if ( v13 == (_DWORD)&unk_110000 )
  {
LABEL_13:
    v14 = 0x8000000000000048LL;
    if ( !v8 )
      v14 = 0x8000000000000046LL;
    *(_QWORD *)&v28[0] = v14;
    return just::lexer::Lexer::error(a1, a2, v28);
  }
  v15 = v12;
  v16 = 2LL * v12 + 1;
  v17 = "'\\\\``\\Mismatched closing delimiter ``. (Did you mean to close the `` on line ?)Found a mix of tabs and spaces"
        " in leading whitespace: ``\n"
        "Leading whitespace may consist of tabs or spaces, but not both` has both `[no-cd]` and `[working-directory]` att"
        "ributesParameter `` follows variadic parameter` first defined on line ` defined on line  is redefined as  on lin"
        "e ` has both shebang line and `[script]` attributeShell expansion failed: Non-default parameter `` follows defau"
        "lt parameter` not definedExpected character Unexpected closing delimiter ` but found end-of-fileExpected , but f"
        "ound expected hex digit [0-9A-Fa-f] but found `expected unicode escape sequence delimiter `{` but found `unicode"
        " escape sequence starting with `\\u{` longer than six hex digitsunicode escape sequence value `` greater than ma"
        "ximum valid code point `10FFFF`Alias `` has an unknown target `Unknown attribute `` has unknown dependency `Call"
        " to unknown function `Unknown setting `Unknown start of token 'orattributeaan";
  if ( (v15 & 1) != 0 )
    v17 = (const char *)&unk_71294;
  v18 = asc_6E541;
  if ( (v15 & 1) != 0 )
    v18 = (const char *)&unk_7128E;
  v26 = (__int64)v18;
  v19 = asc_6B312;
  if ( (v15 & 1) != 0 )
    v19 = (const char *)&unk_71291;
  v27 = (__int64)v19;
  if ( v8 == 1 )
  {
    v21 = 0;
    do
    {
      if ( v13 != 92 || (v22 = 1, (v21 & 1) != 0) )
      {
        if ( (unsigned __int8)just::lexer::Lexer::rest_starts_with((_QWORD *)a2, v27, v16) && (v21 & 1) == 0 )
          goto LABEL_31;
        v22 = 0;
      }
      result = just::lexer::Lexer::advance((__int64)v28, a2);
      if ( BYTE8(v29) != 37 )
        goto LABEL_47;
      v13 = *(_DWORD *)(a2 + 192);
      v21 = v22;
    }
    while ( v13 != (_DWORD)&unk_110000 );
    goto LABEL_13;
  }
  if ( v8 )
  {
    while ( !(unsigned __int8)just::lexer::Lexer::rest_starts_with((_QWORD *)a2, (__int64)v17, v16) )
    {
      result = just::lexer::Lexer::advance((__int64)v28, a2);
      if ( BYTE8(v29) != 37 )
        goto LABEL_47;
      if ( *(_DWORD *)(a2 + 192) == (_DWORD)&unk_110000 )
        goto LABEL_13;
    }
  }
  else
  {
    while ( !(unsigned __int8)just::lexer::Lexer::rest_starts_with((_QWORD *)a2, v26, v16) )
    {
      result = just::lexer::Lexer::advance((__int64)v28, a2);
      if ( BYTE8(v29) != 37 )
        goto LABEL_47;
      if ( *(_DWORD *)(a2 + 192) == (_DWORD)&unk_110000 )
        goto LABEL_13;
    }
  }
LABEL_31:
  if ( v8 )
  {
    v26 = v27;
    if ( v8 == 2 )
      v26 = (__int64)v17;
  }
  result = just::lexer::Lexer::presume_str((__int64)v28, a2, v26, v16);
  if ( BYTE8(v29) != 37 )
  {
LABEL_47:
    *(_OWORD *)(a1 + 64) = v29;
    v23 = v28[0];
    v24 = v28[1];
    v25 = v28[2];
    *(_OWORD *)(a1 + 48) = v28[3];
    *(_OWORD *)(a1 + 32) = v25;
    *(_OWORD *)(a1 + 16) = v24;
    *(_OWORD *)a1 = v23;
    return result;
  }
  v20 = 33;
  if ( !v8 )
    v20 = 3;
  result = just::lexer::Lexer::token(a2, v20);
  *(_BYTE *)(a1 + 72) = 37;
  return result;
}