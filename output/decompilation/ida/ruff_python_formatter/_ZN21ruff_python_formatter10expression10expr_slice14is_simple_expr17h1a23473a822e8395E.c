bool __fastcall ruff_python_formatter::expression::expr_slice::is_simple_expr(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 3 )
  {
    while ( *(_BYTE *)(a1 + 28) != 1 )
    {
      a1 = *(_QWORD *)(a1 + 8);
      v1 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 3 )
        return (unsigned int)(v1 - 19) < 6 || v1 == 28;
    }
    v1 = 3;
  }
  return (unsigned int)(v1 - 19) < 6 || v1 == 28;
}