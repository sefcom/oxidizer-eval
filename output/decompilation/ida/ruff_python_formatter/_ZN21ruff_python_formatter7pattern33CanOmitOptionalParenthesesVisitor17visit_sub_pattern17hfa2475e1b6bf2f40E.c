char __fastcall ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_sub_pattern(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  char result; // al

  *(_QWORD *)(a1 + 24) = a2;
  result = ruff_python_formatter::pattern::is_pattern_parenthesized(
             a2,
             *(_QWORD *)(*(_QWORD *)(a3[2] + 96) + 8LL),
             *(_QWORD *)(*(_QWORD *)(a3[2] + 96) + 16LL),
             *a3,
             a3[1]);
  if ( result )
  {
    *(_BYTE *)(a1 + 32) = 1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_6;
  }
  else
  {
    result = ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern(a1, a2, (__int64)a3);
    if ( !*(_QWORD *)a1 )
    {
LABEL_6:
      *(_QWORD *)a1 = 2LL;
      *(_QWORD *)(a1 + 8) = a2;
    }
  }
  return result;
}