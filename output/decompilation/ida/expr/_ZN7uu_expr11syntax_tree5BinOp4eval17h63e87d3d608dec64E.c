void __fastcall uu_expr::syntax_tree::BinOp::eval(__int64 a1, char a2, char a3, __int64 a4, __int64 a5)
{
  if ( a2 )
  {
    if ( a2 == 1 )
      uu_expr::syntax_tree::NumericOp::eval(a1, a3, a4, a5);
    else
      uu_expr::syntax_tree::StringOp::eval(a1, a3, a4, a5);
  }
  else
  {
    uu_expr::syntax_tree::RelationOp::eval(a1, a3, a4, a5);
  }
}
