char __fastcall ruff_python_formatter::expression::binary_like::Operand::has_unparenthesized_leading_comments(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  bool v13; // zf
  __int64 v14; // [rsp+8h] [rbp-60h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h]
  _QWORD *v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h]
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( *a1 )
  {
    v6 = a1[1];
    v14 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v6);
    v15 = v7;
    v17 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading((_QWORD *)(a2 + 16));
    v9 = v8;
    v10 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v6);
    if ( (unsigned __int8)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                            v10,
                            v11,
                            *(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL),
                            *(_QWORD *)(*(_QWORD *)(a2 + 96) + 16LL),
                            a3,
                            a4) )
    {
      v18[0] = v17;
      v18[1] = v17 + 12 * v9;
      v14 = a3;
      v15 = a4;
      v16 = a1 + 1;
      return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v18, &v14);
    }
    v13 = v9 == 0;
  }
  else
  {
    v13 = a1[3] == 0LL;
  }
  return !v13;
}