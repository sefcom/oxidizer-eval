char __fastcall ruff_python_formatter::statement::suite::DocstringStmt::is_docstring_statement(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // rdx
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 19 )
    return 0;
  result = 1;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 8)) )
  {
    v4[0] = ruff_python_ast::nodes::StringLiteralValue::iter(a1 + 8);
    v4[1] = v3;
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v4, a2) ^ 1;
  }
  return result;
}