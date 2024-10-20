__int64 __fastcall uu_test::parser::Parser::expr(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-88h] BYREF
  __int128 v6; // [rsp+8h] [rbp-80h]
  __int64 v7; // [rsp+18h] [rbp-70h]
  __int64 v8; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+38h] [rbp-50h]
  _QWORD v11[9]; // [rsp+40h] [rbp-48h] BYREF

  uu_test::parser::Parser::peek((__int64)v11, a2);
  v2 = v11[0];
  core::ptr::drop_in_place<uu_test::parser::Symbol>(v11);
  if ( v2 != 2 )
  {
    uu_test::parser::Parser::term(&v5, a2);
    if ( v5 != 7 )
    {
      *(_QWORD *)a1 = v5;
      *(_OWORD *)(a1 + 8) = v6;
      v3 = v7;
      goto LABEL_7;
    }
  }
  uu_test::parser::Parser::maybe_boolop(&v8, a2);
  if ( v8 != 7 )
  {
    *(_QWORD *)a1 = v8;
    *(_OWORD *)(a1 + 8) = v9;
    v3 = v10;
LABEL_7:
    *(_QWORD *)(a1 + 24) = v3;
    return a1;
  }
  *(_QWORD *)a1 = 7LL;
  return a1;
}
