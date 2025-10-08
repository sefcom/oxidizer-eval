__int64 __fastcall ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style(
        _BYTE *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  bool v6; // cf
  bool v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // r15
  unsigned __int8 v10; // al
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h]

  v5 = a2;
  v12 = a3;
  v13 = a4;
  if ( (_BYTE)a2 != 3 )
  {
    v6 = a1[44] < 3u;
    if ( a1[44] != 3 )
      goto LABEL_3;
LABEL_6:
    v7 = a1[45] >= 0xCu;
    if ( a1[42] == 2 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v5 = (unsigned __int8)a1[53];
  v6 = a1[44] < 3u;
  if ( a1[44] == 3 )
    goto LABEL_6;
LABEL_3:
  v7 = !v6;
  if ( a1[42] == 2 )
    goto LABEL_9;
LABEL_7:
  v8 = (unsigned __int8)a1[43];
  if ( (v8 & 2) != 0 && (ruff_python_ast::expression::StringLikePart::flags(&v12) & 2) == 0 )
  {
LABEL_9:
    LOBYTE(v4) = 2;
    if ( (_BYTE)v5 == 2 )
      return v4;
    if ( v12 == 3 )
    {
      v9 = v13;
      v10 = <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::TStringFlags>>::from(*(unsigned int *)(v13 + 36));
    }
    else
    {
      if ( (_DWORD)v12 != 2 )
      {
LABEL_18:
        v4 = v5;
        if ( (ruff_python_ast::expression::StringLikePart::flags(&v12) & 2) != 0 )
        {
          v4 = 1;
          if ( a1[60] != 2 )
            return a1[60] ^ 1u;
        }
        return v4;
      }
      v9 = v13;
      if ( !v7
        && ((unsigned __int8)ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression(v13, a1)
         || (unsigned __int8)ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes(
                               *(_QWORD *)(v9 + 8),
                               *(_QWORD *)(v9 + 16),
                               a1)) )
      {
        return v4;
      }
      v10 = <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::FStringFlags>>::from(*(unsigned int *)(v9 + 36));
    }
    if ( (unsigned __int8)ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug(
                            *(_QWORD *)(v9 + 8),
                            *(_QWORD *)(v9 + 16),
                            v10,
                            a1) )
      return v4;
    goto LABEL_18;
  }
  LOBYTE(v4) = 2;
  if ( !v7 || (_BYTE)v5 != 2 )
  {
    LOBYTE(v8) = (v8 & 1) == 0;
    return v8;
  }
  return v4;
}