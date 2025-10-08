__int64 __fastcall uu_test::parser::Parser::literal(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v4[6]; // [rsp+0h] [rbp-E8h] BYREF
  _QWORD v5[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v6[5]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v7[5]; // [rsp+68h] [rbp-80h] BYREF
  __int128 v8; // [rsp+90h] [rbp-58h] BYREF
  __int64 v9; // [rsp+A0h] [rbp-48h]
  __int64 v10[8]; // [rsp+A8h] [rbp-40h] BYREF

  uu_test::parser::Symbol::into_literal((__int64)v4, a3);
  alloc::vec::Vec<T,A>::push(a2, v4, &off_E02C0);
  uu_test::parser::Parser::peek(v6, a2);
  if ( LODWORD(v6[0]) == 4 )
  {
    uu_test::parser::Parser::next_token(v10, (__int64)a2);
    uu_test::parser::Parser::next_token(v7, (__int64)a2);
    if ( LODWORD(v7[0]) == 6 )
    {
      v5[0] = v10;
      v5[1] = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
      v4[0] = &unk_17330;
      v4[1] = 1LL;
      v4[4] = 0LL;
      v4[2] = v5;
      v4[3] = 1LL;
      core::option::Option<T>::map_or_else(&v8, v4);
      *(_QWORD *)(a1 + 24) = v9;
      *(_OWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = 3LL;
      core::ptr::drop_in_place<uu_test::parser::Symbol>(v7);
      core::ptr::drop_in_place<uu_test::parser::Symbol>(v10);
      return core::ptr::drop_in_place<uu_test::parser::Symbol>(v6);
    }
    uu_test::parser::Symbol::into_literal((__int64)v4, (__int64)v7);
    alloc::vec::Vec<T,A>::push(a2, v4, &off_E02D8);
    alloc::vec::Vec<T,A>::push(a2, v10, &off_E02F0);
  }
  result = core::ptr::drop_in_place<uu_test::parser::Symbol>(v6);
  *(_QWORD *)a1 = 7LL;
  return result;
}