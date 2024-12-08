__int64 __fastcall uu_test::parser::Parser::expr(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  _OWORD v4[3]; // [rsp+8h] [rbp-30h] BYREF

  if ( ((unsigned __int8)uu_test::parser::Parser::peek_is_boolop(a2)
     || (result = uu_test::parser::Parser::term(v4, a2), LODWORD(v4[0]) == 7))
    && (result = uu_test::parser::Parser::maybe_boolop(v4, a2), LODWORD(v4[0]) == 7) )
  {
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v3 = v4[0];
    *(_OWORD *)(a1 + 16) = v4[1];
    *(_OWORD *)a1 = v3;
  }
  return result;
}
