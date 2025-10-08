__int64 __fastcall just::lexer::Lexer::error(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _OWORD v11[2]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+38h] [rbp-30h]
  char v15; // [rsp+48h] [rbp-20h]

  if ( *a3 == 0x8000000000000046LL || *a3 == 0x8000000000000048LL )
  {
    v4 = just::lexer::Lexer::lexeme((_QWORD *)a2);
    v6 = just::string_kind::StringKind::from_token_start(v4, v5);
    if ( v6 == 2 )
    {
      just::lexer::Lexer::internal_error(a1, a2, aLexerErrorExpe, 53LL);
      return core::ptr::drop_in_place<just::compile_error_kind::CompileErrorKind>(a3);
    }
    v8 = 2LL * v6 + 1;
  }
  else
  {
    just::lexer::Lexer::lexeme((_QWORD *)a2);
  }
  v9 = *(_OWORD *)(a2 + 112);
  v10 = *(_OWORD *)(a2 + 128);
  v12 = *(_QWORD *)(a2 + 168);
  v15 = 35;
  v13 = v8;
  v14 = *(_OWORD *)(a2 + 176);
  v11[0] = v9;
  v11[1] = v10;
  return just::compile_error::CompileError::new(a1, (__int64)v11, (__int64)a3);
}