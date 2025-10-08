__int64 __fastcall uu_test::parser::Parser::uop(__int64 a1, __int64 a2)
{
  __int64 v3[5]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  uu_test::parser::Parser::next_token(v3, a1);
  if ( LODWORD(v3[0]) == 6 )
  {
    uu_test::parser::Symbol::into_literal((__int64)v4, a2);
    alloc::vec::Vec<T,A>::push(a1, v4, &off_E0278);
    return core::ptr::drop_in_place<uu_test::parser::Symbol>(v3);
  }
  else
  {
    uu_test::parser::Symbol::into_literal((__int64)v4, (__int64)v3);
    alloc::vec::Vec<T,A>::push(a1, v4, &off_E0290);
    return alloc::vec::Vec<T,A>::push(a1, a2, &off_E02A8);
  }
}