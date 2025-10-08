__int64 __fastcall ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::visit_string_like_part(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  __int64 result; // rax
  unsigned int v6; // ebp
  unsigned int v7; // edx
  unsigned int v8; // r14d
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 v11; // r15
  unsigned int v12; // ebp
  unsigned int v13; // r13d
  unsigned __int8 v14; // al
  _QWORD v15[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a1;
  v15[0] = a2;
  v15[1] = a3;
  result = ruff_python_ast::expression::StringLikePart::flags(v15);
  if ( (result & 2) != 0 && !*((_BYTE *)a1 + 8) )
  {
    if ( a2 > 1 )
    {
      v10 = *(_QWORD *)(a3 + 8) + 80LL * *(_QWORD *)(a3 + 16);
      v16[0] = *(_QWORD *)(a3 + 8);
      v16[1] = v10;
      v11 = *a1;
      while ( 1 )
      {
        result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(v16);
        if ( !result )
          break;
        v12 = *(_DWORD *)(result + 16);
        v13 = *(_DWORD *)(result + 20);
        v14 = <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::FStringFlags>>::from(*(unsigned int *)(a3 + 36));
        result = ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote(
                   v11,
                   v12,
                   v13,
                   v14);
        if ( (_BYTE)result )
        {
          v4 = a1;
          goto LABEL_10;
        }
      }
    }
    else
    {
      v6 = ruff_python_ast::expression::StringLikePart::content_range(a2, a3);
      v8 = v7;
      v9 = ruff_python_ast::expression::StringLikePart::flags(v15);
      result = ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote(
                 *a1,
                 v6,
                 v8,
                 v9);
      if ( (_BYTE)result )
LABEL_10:
        *((_BYTE *)v4 + 8) = 1;
    }
  }
  return result;
}