__int64 __fastcall uu_expr::syntax_tree::BinOp::eval(__int64 a1, char a2, char a3, __int64 a4, __int64 a5)
{
  if ( !a2 )
    return uu_expr::syntax_tree::RelationOp::eval(a1, a3, a4, a5);
  if ( a2 == 1 )
    return uu_expr::syntax_tree::NumericOp::eval(a1, a3, a4, a5);
  return uu_expr::syntax_tree::StringOp::eval(a1, a3, a4, a5);
}
