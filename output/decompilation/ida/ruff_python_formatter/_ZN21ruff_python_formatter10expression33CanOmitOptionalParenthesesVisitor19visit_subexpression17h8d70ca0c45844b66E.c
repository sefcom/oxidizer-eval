char __fastcall ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor::visit_subexpression(
        __int64 a1,
        int *a2)
{
  int v2; // eax
  __int64 v3; // rbx
  int *v4; // r14
  char v5; // al
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rcx
  int v9; // eax
  bool v10; // cf
  int v11; // ecx
  unsigned __int8 v12; // cl
  char v13; // cl
  char v14; // al

  v2 = *a2;
  switch ( *a2 )
  {
    case 0:
      v8 = *((_QWORD *)a2 + 3);
      v9 = 0;
      v10 = v8 == 0;
      v11 = v8 - 1;
      if ( !v10 )
        v9 = v11;
      v12 = (*(unsigned __int8 *)(a1 + 37) > 0xBuLL) - (*(unsigned __int8 *)(a1 + 37) < 0xBuLL);
      if ( !v12 )
        goto LABEL_35;
      if ( v12 != 255 )
        goto LABEL_18;
      *(_DWORD *)(a1 + 32) = v9;
      *(_BYTE *)(a1 + 37) = 11;
      LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
      return v2;
    case 1:
      goto LABEL_18;
    case 2:
      v6 = byte_8D57C[*((unsigned __int8 *)a2 + 36)];
      v7 = (*(unsigned __int8 *)(a1 + 37) > v6) - (*(unsigned __int8 *)(a1 + 37) < v6);
      if ( v7 )
      {
        if ( v7 == 1 )
          goto LABEL_18;
        *(_DWORD *)(a1 + 32) = 1;
        *(_BYTE *)(a1 + 37) = v6;
        LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
      }
      else
      {
        ++*(_DWORD *)(a1 + 32);
        LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
      }
      return v2;
    case 3:
      if ( !*((_BYTE *)a2 + 28) )
      {
        v14 = (*(unsigned __int8 *)(a1 + 37) > 3uLL) - (*(unsigned __int8 *)(a1 + 37) < 3uLL);
        if ( v14 )
        {
          if ( v14 != 1 )
          {
            *(_DWORD *)(a1 + 32) = 1;
            *(_BYTE *)(a1 + 37) = 3;
          }
        }
        else
        {
          ++*(_DWORD *)(a1 + 32);
        }
      }
      goto LABEL_17;
    case 4:
    case 12:
    case 13:
    case 14:
    case 27:
LABEL_17:
      if ( *(_QWORD *)a1 )
        goto LABEL_18;
      *(_QWORD *)a1 = 1LL;
      LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
      return v2;
    case 5:
      v5 = (*(unsigned __int8 *)(a1 + 37) > 0xCuLL) - (*(unsigned __int8 *)(a1 + 37) < 0xCuLL);
      if ( v5 )
      {
        if ( v5 == 1 )
          goto LABEL_18;
        *(_DWORD *)(a1 + 32) = 2;
        *(_BYTE *)(a1 + 37) = 12;
        LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
      }
      else
      {
        *(_DWORD *)(a1 + 32) += 2;
        LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
      }
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 29:
      goto LABEL_26;
    case 11:
      if ( *((_BYTE *)a2 + 52) )
        goto LABEL_26;
      goto LABEL_18;
    case 15:
      v9 = a2[6];
      v13 = (*(unsigned __int8 *)(a1 + 37) > 0xAuLL) - (*(unsigned __int8 *)(a1 + 37) < 0xAuLL);
      if ( v13 )
      {
        if ( v13 == 1 )
        {
LABEL_18:
          LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
        }
        else
        {
          *(_DWORD *)(a1 + 32) = v9;
          *(_BYTE *)(a1 + 37) = 10;
          LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
        }
      }
      else
      {
LABEL_35:
        *(_DWORD *)(a1 + 32) += v9;
        LOBYTE(v2) = ruff_python_ast::visitor::source_order::walk_expr();
      }
      break;
    case 16:
    case 26:
      *(_BYTE *)(a1 + 36) = 1;
      v3 = a1;
      v4 = a2;
      LOBYTE(v2) = <ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor as ruff_python_ast::visitor::source_order::SourceOrderVisitor>::visit_expr(
                     a1,
                     *((_QWORD *)a2 + 1));
      goto LABEL_3;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 28:
    case 31:
    case 32:
      return v2;
    case 25:
      v3 = a1;
      <ruff_python_formatter::expression::CanOmitOptionalParenthesesVisitor as ruff_python_ast::visitor::source_order::SourceOrderVisitor>::visit_expr(
        a1,
        *((_QWORD *)a2 + 6));
      v4 = a2;
      LOBYTE(v2) = ruff_python_formatter::expression::has_parentheses(*((_QWORD *)a2 + 6), *(_QWORD *)(a1 + 16));
      if ( (_BYTE)v2 != 2 )
      {
        LOBYTE(v2) = (*(unsigned __int8 *)(a1 + 37) >= 2uLL) - (*(_BYTE *)(a1 + 37) == 0LL);
        if ( (_BYTE)v2 )
        {
          if ( (unsigned __int8)v2 != 1 )
          {
            *(_DWORD *)(a1 + 32) = 1;
            *(_BYTE *)(a1 + 37) = 1;
          }
        }
        else
        {
          ++*(_DWORD *)(a1 + 32);
        }
      }
LABEL_3:
      *(_QWORD *)(v3 + 24) = v4;
      return v2;
    case 30:
      if ( !*((_BYTE *)a2 + 44) )
        goto LABEL_18;
LABEL_26:
      *(_BYTE *)(a1 + 36) = 1;
      return v2;
  }
  return v2;
}