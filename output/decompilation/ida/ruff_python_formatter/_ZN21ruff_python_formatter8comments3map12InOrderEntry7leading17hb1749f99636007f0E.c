__int64 __fastcall ruff_python_formatter::comments::map::InOrderEntry::leading(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  __int64 result; // rax

  v4 = ruff_python_formatter::comments::map::PartIndex::from_len(a2);
  result = ruff_python_formatter::comments::map::PartIndex::from_len(a3);
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = result;
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}