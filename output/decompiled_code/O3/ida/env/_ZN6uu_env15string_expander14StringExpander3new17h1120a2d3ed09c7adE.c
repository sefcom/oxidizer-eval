_QWORD *__fastcall uu_env::string_expander::StringExpander::new(_QWORD *a1, __int64 a2, __int64 a3)
{
  uu_env::string_parser::StringParser::new((__int64)(a1 + 3), a2, a3);
  *a1 = 0LL;
  a1[1] = 1LL;
  a1[2] = 0LL;
  return a1;
}
