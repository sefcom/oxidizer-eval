char __fastcall ruff_python_formatter::expression::has_own_parentheses(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rax
  __int64 v4; // rdx

  result = 2;
  switch ( *(_DWORD *)a1 )
  {
    case 6:
    case 7:
    case 0x1D:
      goto LABEL_2;
    case 8:
    case 9:
    case 0xA:
    case 0x1A:
      return 1;
    case 0xB:
      return 2 - *(_BYTE *)(a1 + 52);
    case 0x10:
      if ( !(*(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 24)) )
        goto LABEL_8;
      return 1;
    case 0x1E:
      if ( !*(_BYTE *)(a1 + 44) )
        return result;
LABEL_2:
      if ( *(_QWORD *)(a1 + 24) )
        return 1;
LABEL_8:
      v3 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(a1);
      ruff_python_formatter::comments::Comments::dangling(a2, v3);
      return v4 != 0;
    default:
      return result;
  }
}