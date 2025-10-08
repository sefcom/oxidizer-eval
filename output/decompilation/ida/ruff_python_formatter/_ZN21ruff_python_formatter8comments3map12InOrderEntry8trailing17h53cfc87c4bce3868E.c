__int64 __fastcall ruff_python_formatter::comments::map::InOrderEntry::trailing(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 result; // rax

  v4 = ruff_python_formatter::comments::map::PartIndex::from_len(a2);
  result = ruff_python_formatter::comments::map::PartIndex::from_len(a3);
  *a1 = v4;
  a1[1] = v4;
  a1[2] = v4;
  a1[3] = result;
  return result;
}