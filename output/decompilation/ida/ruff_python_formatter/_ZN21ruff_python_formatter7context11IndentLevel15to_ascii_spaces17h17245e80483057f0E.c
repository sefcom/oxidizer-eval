__int16 __fastcall ruff_python_formatter::context::IndentLevel::to_ascii_spaces(__int16 a1, unsigned __int8 a2)
{
  bool v2; // cf
  unsigned __int16 v3; // di
  __int16 result; // ax

  v2 = a1 == 0;
  v3 = a1 - 1;
  if ( v2 )
    v3 = 0;
  result = v3 * a2;
  if ( !is_mul_ok(v3, a2) )
    return -1;
  return result;
}