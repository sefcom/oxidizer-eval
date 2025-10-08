__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleKind::code(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  v1 = 1LL;
  if ( (*a1 ^ 0x8000000000000000LL) < 3 )
    v1 = *a1 ^ 0x8000000000000000LL;
  if ( v1 == 1 )
    return ruff_python_formatter::string::docstring::CodeExampleRst::indented_code();
  else
    return a1[2];
}