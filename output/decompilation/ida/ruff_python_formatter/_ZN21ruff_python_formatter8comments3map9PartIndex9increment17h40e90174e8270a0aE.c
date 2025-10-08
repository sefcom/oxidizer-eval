__int64 __fastcall ruff_python_formatter::comments::map::PartIndex::increment(_DWORD *a1)
{
  __int64 result; // rax

  result = ruff_python_formatter::comments::map::PartIndex::incremented((unsigned int)*a1);
  *a1 = result;
  return result;
}