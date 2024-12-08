__int64 __fastcall uu_test::parser::Parser::peek_is_boolop(__int64 a1)
{
  unsigned int v1; // ebp
  _DWORD v3[14]; // [rsp+0h] [rbp-38h] BYREF

  uu_test::parser::Parser::peek((__int64)v3, a1);
  LOBYTE(v1) = v3[0] == 2;
  core::ptr::drop_in_place<uu_test::parser::Symbol>(v3);
  return v1;
}
