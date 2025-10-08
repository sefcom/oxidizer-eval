__int64 __fastcall ruff_python_formatter::options::PyFormatOptions::from_extension(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rsi

  v3 = ruff_python_ast::PySourceType::try_from_path(a2, a3);
  v4 = v3;
  if ( v3 == 3 )
    v4 = 0LL;
  ruff_python_formatter::options::PyFormatOptions::from_source_type(a1, v4);
  return a1;
}