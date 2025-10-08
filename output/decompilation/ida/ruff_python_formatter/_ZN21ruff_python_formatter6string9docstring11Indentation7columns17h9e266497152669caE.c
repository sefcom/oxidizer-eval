__int64 __fastcall ruff_python_formatter::string::docstring::Indentation::columns(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 4:
      return result;
    case 1:
      result *= 8LL;
      break;
    case 2:
      result = *(_QWORD *)(a1 + 16) + 8 * result;
      break;
    case 3:
      result = (result & 0xFFFFFFFFFFFFFFF8LL) + 8LL * *(_QWORD *)(a1 + 16);
      break;
  }
  return result;
}