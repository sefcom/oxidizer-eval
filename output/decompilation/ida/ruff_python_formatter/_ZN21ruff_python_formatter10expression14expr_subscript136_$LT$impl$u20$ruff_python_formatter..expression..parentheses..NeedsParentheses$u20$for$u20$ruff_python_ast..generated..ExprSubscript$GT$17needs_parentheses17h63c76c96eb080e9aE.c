__int64 __fastcall ruff_python_formatter::expression::expr_subscript::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprSubscript>::needs_parentheses(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  char is_expression_parenthesized; // al
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx

  v6 = a4[2];
  v7 = *a4;
  v8 = a4[1];
  if ( (unsigned __int8)ruff_python_formatter::expression::CallChainLayout::from_expression(
                          26LL,
                          a1,
                          *(_QWORD *)(*(_QWORD *)(v6 + 96) + 8LL),
                          *(_QWORD *)(*(_QWORD *)(v6 + 96) + 16LL),
                          *a4,
                          v8) == 1 )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    v9 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*a1);
    is_expression_parenthesized = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                                    v9,
                                    v10,
                                    *(_QWORD *)(*(_QWORD *)(v6 + 96) + 8LL),
                                    *(_QWORD *)(*(_QWORD *)(v6 + 96) + 16LL),
                                    v7,
                                    v8);
    LOBYTE(v7) = 3;
    if ( !is_expression_parenthesized )
    {
      LODWORD(v7) = ruff_python_formatter::expression::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Expr>::needs_parentheses(
                      *a1,
                      53LL,
                      a1,
                      a4);
      if ( (_BYTE)v7 == 2 )
      {
        LOBYTE(v7) = 2;
        if ( a2 == 2 )
        {
          v12 = *(_QWORD *)(a3 + 112);
          if ( v12 )
          {
            v13 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v12);
            if ( (unsigned __int8)ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::ptr_eq(
                                    v13,
                                    v14,
                                    53LL,
                                    a1) )
            {
              LOBYTE(v7) = 3;
              if ( (unsigned __int8)ruff_python_ast::nodes::Parameters::is_empty(*(_QWORD *)(a3 + 88)) )
                LODWORD(v7) = 3 * (hashbrown::map::HashMap<K,V,S,A>::get_inner(v6 + 64) != 0);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}