_QWORD *__fastcall ruff_python_formatter::statement::suite::DocstringStmt::try_from_statement(
        _QWORD *a1,
        char a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *result; // rax

  v3 = a3;
  result = a1;
  LOBYTE(a3) = 5;
  if ( (a2 != 2 || *(_BYTE *)(v3 + 51) != 2) && *a1 == 0x8000000000000013LL )
  {
    ruff_python_formatter::statement::suite::DocstringStmt::is_docstring_statement(a1[1], v3, a3);
    return a1;
  }
  return result;
}