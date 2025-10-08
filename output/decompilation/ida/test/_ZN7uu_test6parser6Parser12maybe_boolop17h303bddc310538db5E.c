__int64 __fastcall uu_test::parser::Parser::maybe_boolop(_OWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  _OWORD v5[2]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v6[5]; // [rsp+28h] [rbp-90h] BYREF
  _OWORD v7[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v8[9]; // [rsp+70h] [rbp-48h] BYREF

  result = uu_test::parser::Parser::peek_is_boolop(a2);
  if ( !(_BYTE)result )
    goto LABEL_7;
  uu_test::parser::Parser::next_token(v8, (__int64)a2);
  uu_test::parser::Parser::peek(v6, a2);
  if ( LODWORD(v6[0]) != 6 )
  {
    core::ptr::drop_in_place<uu_test::parser::Symbol>(v6);
    result = uu_test::parser::Parser::boolop(v5, a2, v8);
    if ( LODWORD(v5[0]) != 7 || (result = uu_test::parser::Parser::maybe_boolop(v5, a2), LODWORD(v5[0]) != 7) )
    {
      v3 = v5[0];
      a1[1] = v5[1];
      *a1 = v3;
      return result;
    }
LABEL_7:
    *(_QWORD *)a1 = 7LL;
    return result;
  }
  uu_test::parser::Symbol::into_literal((__int64)v5, (__int64)v8);
  uu_test::parser::Parser::literal(v7, a2, v5);
  if ( LODWORD(v7[0]) == 7 )
  {
    result = core::ptr::drop_in_place<uu_test::parser::Symbol>(v6);
    *(_QWORD *)a1 = 7LL;
  }
  else
  {
    v4 = v7[0];
    a1[1] = v7[1];
    *a1 = v4;
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(v6);
  }
  return result;
}