__int64 __fastcall just::lexer::Lexer::advance(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  __int64 v4; // rcx
  bool v5; // zf
  unsigned int v6; // edx

  v2 = *(_DWORD *)(a2 + 192);
  if ( v2 == (_DWORD)&unk_110000 )
    return just::lexer::Lexer::internal_error(a1, a2, aLexerAdvancedP, 31LL);
  v4 = 1LL;
  if ( v2 >= 0x80 )
  {
    v4 = 2LL;
    if ( v2 >= 0x800 )
      v4 = 4LL - (v2 < (unsigned int)&stru_10000);
  }
  *(_QWORD *)(a2 + 160) += v4;
  *(_QWORD *)(a2 + 144) += v4;
  if ( v2 == 10 )
  {
    *(_QWORD *)(a2 + 144) = 0LL;
    ++*(_QWORD *)(a2 + 152);
  }
  v5 = (core::str::validations::next_code_point(a2 + 96) & 1) == 0;
  result = (__int64)&unk_110000;
  if ( !v5 )
    result = v6;
  *(_DWORD *)(a2 + 192) = result;
  *(_BYTE *)(a1 + 72) = 37;
  return result;
}