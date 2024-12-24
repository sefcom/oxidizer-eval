__int64 __fastcall uu_expr::syntax_tree::AstNode::parse(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v4[0] = a2;
  v4[1] = a3;
  v4[2] = 0LL;
  uu_expr::syntax_tree::Parser::parse(a1, v4);
  return a1;
}
