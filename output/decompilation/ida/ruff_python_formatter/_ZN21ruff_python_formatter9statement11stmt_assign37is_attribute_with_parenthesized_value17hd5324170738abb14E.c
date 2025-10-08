__int64 __fastcall ruff_python_formatter::statement::stmt_assign::is_attribute_with_parenthesized_value(
        _DWORD *a1,
        __int64 *a2)
{
  unsigned int v2; // ebp
  _DWORD *v3; // rbx
  int v4; // eax

  v3 = a1;
  v4 = *a1;
  LOBYTE(v2) = 1;
  if ( *a1 == 25 )
  {
    while ( (unsigned __int8)ruff_python_formatter::expression::has_parentheses(*((_QWORD *)v3 + 6), a2) == 2 )
    {
      v3 = (_DWORD *)*((_QWORD *)v3 + 6);
      v4 = *v3;
      LOBYTE(v2) = 1;
      if ( *v3 != 25 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( v4 != 26 )
    {
      if ( v4 == 16 )
        LOBYTE(v2) = *((_QWORD *)v3 + 5) + *((_QWORD *)v3 + 3) != 0LL;
      else
        return 0;
    }
  }
  return v2;
}