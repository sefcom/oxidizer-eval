__int64 __fastcall uu_expr::syntax_tree::Parser::parse_op(_QWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-8h] BYREF

  v3 = a2;
  return uu_expr::syntax_tree::Parser::accept(a1, (__int64)&v3);
}
