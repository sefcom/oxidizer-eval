__int64 __fastcall uu_test::parser::Parser::peek_is_boolop(_QWORD *a1)
{
  unsigned int v1; // ebp
  __int64 v3[7]; // [rsp+0h] [rbp-38h] BYREF

  uu_test::parser::Parser::peek(v3, a1);
  LOBYTE(v1) = LODWORD(v3[0]) == 2;
  core::ptr::drop_in_place<uu_test::parser::Symbol>(v3);
  return v1;
}