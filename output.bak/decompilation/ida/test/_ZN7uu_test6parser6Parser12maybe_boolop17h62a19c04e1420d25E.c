__int64 __fastcall uu_test::parser::Parser::maybe_boolop(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v6; // [rsp+10h] [rbp-C8h]
  __int64 v7; // [rsp+20h] [rbp-B8h]
  __int128 v8; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+40h] [rbp-98h]
  __int64 v10; // [rsp+50h] [rbp-88h]
  _OWORD v11[2]; // [rsp+58h] [rbp-80h] BYREF
  _DWORD v12[10]; // [rsp+80h] [rbp-58h] BYREF
  _OWORD v13[3]; // [rsp+A8h] [rbp-30h] BYREF

  result = uu_test::parser::Parser::peek_is_boolop(a2);
  if ( !(_BYTE)result )
    goto LABEL_8;
  uu_test::parser::Parser::next_token((__int64)&v8, a2);
  uu_test::parser::Parser::peek((__int64)v12, a2);
  if ( v12[0] != 6 )
  {
    v7 = v10;
    v6 = v9;
    v5 = v8;
    uu_test::parser::Parser::boolop((__int64)v11, a2, &v5);
    if ( LODWORD(v11[0]) != 7 )
    {
      v3 = v11[0];
      v4 = v11[1];
      goto LABEL_11;
    }
    uu_test::parser::Parser::maybe_boolop((__int64)&v5, a2);
    if ( (_DWORD)v5 != 7 )
    {
      v3 = v5;
      v4 = v6;
      goto LABEL_11;
    }
    goto LABEL_7;
  }
  v7 = v10;
  v6 = v9;
  v5 = v8;
  uu_test::parser::Symbol::into_literal((__int64)v11, (__int64)&v5);
  uu_test::parser::Parser::literal((__int64)v13, a2, (__int64)v11);
  if ( LODWORD(v13[0]) == 7 )
  {
LABEL_7:
    result = core::ptr::drop_in_place<uu_test::parser::Symbol>(v12);
LABEL_8:
    *(_QWORD *)a1 = 7LL;
    return result;
  }
  v3 = v13[0];
  v4 = v13[1];
LABEL_11:
  *(_OWORD *)(a1 + 16) = v4;
  *(_OWORD *)a1 = v3;
  return core::ptr::drop_in_place<uu_test::parser::Symbol>(v12);
}
