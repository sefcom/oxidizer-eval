__int64 __fastcall just::lexer::Lexer::lex_dedent(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v3[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 160) - *(_QWORD *)(a1 + 184);
  if ( v2 )
  {
    v3[0] = 0LL;
    core::panicking::assert_failed(0LL, &v2, &unk_692D0, v3, &off_4304E8);
  }
  just::lexer::Lexer::token(a1, 17);
  result = *(_QWORD *)(a1 + 16);
  if ( result )
    *(_QWORD *)(a1 + 16) = --result;
  *(_WORD *)(a1 + 196) = 0;
  return result;
}