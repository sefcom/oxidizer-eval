__int64 __fastcall ruff_python_formatter::expression::left_most(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx

  while ( 2 )
  {
    v8 = a1;
    switch ( *(_DWORD *)a1 )
    {
      case 0:
        goto LABEL_7;
      case 1:
      case 3:
      case 4:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x20:
        return v8;
      case 2:
      case 0xF:
      case 0x10:
      case 0x1A:
        v9 = 8LL;
        goto LABEL_12;
      case 5:
        v9 = 16LL;
        goto LABEL_12;
      case 0xB:
        v9 = 32LL;
        if ( *(_BYTE *)(a1 + 52) )
          return v8;
        goto LABEL_12;
      case 0x19:
        v9 = 48LL;
        goto LABEL_12;
      case 0x1E:
        if ( *(_BYTE *)(a1 + 44) )
          return v8;
LABEL_7:
        v9 = 16LL;
        if ( !*(_QWORD *)(a1 + 24) )
          return v8;
LABEL_12:
        a1 = *(_QWORD *)(a1 + v9);
LABEL_13:
        v10 = <ruff_python_ast::generated::ExprRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1);
        if ( !ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v10, v11, a2, a3, a4, a5) )
          continue;
        return v8;
      case 0x1F:
        a1 = *(_QWORD *)(a1 + 16);
        if ( !a1 )
          return v8;
        goto LABEL_13;
    }
  }
}