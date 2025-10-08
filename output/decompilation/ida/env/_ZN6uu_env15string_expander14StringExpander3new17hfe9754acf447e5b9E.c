_QWORD *__fastcall uu_env::string_expander::StringExpander::new(_QWORD *a1)
{
  uu_env::string_parser::StringParser::new(a1 + 3);
  *a1 = 0LL;
  a1[1] = 1LL;
  a1[2] = 0LL;
  return a1;
}