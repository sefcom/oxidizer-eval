__int64 __fastcall ruff_python_formatter::context::IndentLevel::increment(unsigned int a1)
{
  __int64 result; // rax

  LOWORD(a1) = a1 + 1;
  result = 0xFFFFLL;
  if ( (_WORD)a1 )
    return a1;
  return result;
}