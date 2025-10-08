char __fastcall ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses(__int64 a1, __int64 a2)
{
  char result; // al
  char is_non_empty; // cl
  _QWORD v4[2]; // [rsp+8h] [rbp-30h] BYREF
  __int128 v5; // [rsp+18h] [rbp-20h]
  __int16 v6; // [rsp+28h] [rbp-10h]

  v4[0] = 0LL;
  v5 = 0LL;
  v6 = 0;
  ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern(v4, a1, a2);
  result = 0;
  if ( (_BYTE)v6 == 1 && (unsigned __int64)v5 < 2 )
  {
    if ( !*((_QWORD *)&v5 + 1)
      || (is_non_empty = ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(
                           *((_QWORD *)&v5 + 1),
                           a2),
          result = 1,
          !is_non_empty) )
    {
      if ( LODWORD(v4[0]) >= 2 )
        return ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(
                 v4[1],
                 a2);
      else
        return 0;
    }
  }
  return result;
}