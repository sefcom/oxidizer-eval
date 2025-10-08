__int64 __fastcall ruff_python_formatter::expression::can_omit_optional_parentheses(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[0] = 0LL;
  memset(&v4[3], 0, 14);
  v4[2] = a2;
  ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor::visit_subexpression(v4, a1);
  v2 = 0;
  if ( BYTE4(v4[4]) != 1 )
    return v2;
  if ( LODWORD(v4[4]) >= 2 )
    return v2;
  LOBYTE(v2) = 1;
  if ( BYTE5(v4[4]) < 2u
    || v4[3]
    && (unsigned __int8)ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(v4[3], a2) )
  {
    return v2;
  }
  if ( LODWORD(v4[0]) < 2 )
    return 0;
  return ruff_python_formatter::expression::can_omit_optional_parentheses::is_parenthesized(v4[1], a2);
}