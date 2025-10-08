void __fastcall ruff_python_formatter::statement::stmt_with::WithItemsLayout::from_statement(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  bool v11; // cl
  __int64 v12; // rax
  int v13; // ecx
  char v14; // al
  _BYTE v15[24]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-40h]
  __int64 v17; // [rsp+20h] [rbp-38h]

  if ( a4 )
    goto LABEL_2;
  if ( (unsigned __int8)ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma(a2, a3) )
  {
    *(_QWORD *)(a1 + 8) = 4LL;
    goto LABEL_23;
  }
  if ( *(_QWORD *)(a2 + 16) != 1LL )
    goto LABEL_10;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = a3[2];
  v16 = 84LL;
  v17 = v5;
  ruff_python_formatter::comments::map::MultiMap<K,V>::leading((_QWORD *)(v6 + 16));
  if ( !v7 )
  {
    *(_QWORD *)v15 = 84LL;
    *(_QWORD *)&v15[8] = v5;
    ruff_python_formatter::comments::map::MultiMap<K,V>::trailing((_QWORD *)(v6 + 16));
    if ( !v8 )
    {
      v9 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v5);
      if ( ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
             v9,
             v10,
             *(_QWORD *)(*(_QWORD *)(v6 + 96) + 8LL),
             *(_QWORD *)(*(_QWORD *)(v6 + 96) + 16LL),
             *a3,
             a3[1]) )
      {
        *(_QWORD *)(a1 + 8) = 0LL;
        goto LABEL_22;
      }
LABEL_10:
      v11 = *((_BYTE *)a3 + 44) >= 3u;
      if ( *((_BYTE *)a3 + 44) == 3 )
        v11 = *((_BYTE *)a3 + 45) >= 9u;
      if ( !v11 )
      {
        ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized(v15, a2, *a3, a3[1]);
        v13 = *(_DWORD *)v15;
        v14 = v15[4];
        if ( *(_DWORD *)v15 != 4 )
        {
          *(_DWORD *)(a1 + 20) = *(_DWORD *)&v15[20];
          *(_OWORD *)(a1 + 5) = *(_OWORD *)&v15[5];
          *(_DWORD *)a1 = v13;
          *(_BYTE *)(a1 + 4) = v14;
          return;
        }
        if ( (v15[4] & 1) == 0 )
        {
          *(_QWORD *)(a1 + 8) = 3LL;
          goto LABEL_23;
        }
      }
      v5 = *(_QWORD *)(a2 + 8);
      v12 = 4LL;
      if ( *(_QWORD *)(a2 + 16) == 1LL )
      {
        if ( *(_QWORD *)(v5 + 88) )
          v12 = 2LL
              * ((unsigned __int8)ruff_python_formatter::expression::can_omit_optional_parentheses(
                                    *(_QWORD *)(a2 + 8),
                                    (__int64)a3) ^ 1u)
              + 2;
        else
          v12 = 1LL;
      }
      *(_QWORD *)(a1 + 8) = v12;
LABEL_22:
      *(_QWORD *)(a1 + 16) = v5;
      goto LABEL_23;
    }
  }
LABEL_2:
  *(_QWORD *)(a1 + 8) = 5LL;
LABEL_23:
  *(_DWORD *)a1 = 4;
}