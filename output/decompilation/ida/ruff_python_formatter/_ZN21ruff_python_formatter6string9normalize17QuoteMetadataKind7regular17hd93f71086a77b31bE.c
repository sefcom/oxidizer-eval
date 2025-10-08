__int64 __fastcall ruff_python_formatter::string::normalize::QuoteMetadataKind::regular(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // ebp
  int v4; // r15d
  __int64 result; // rax
  int v6; // edx
  _QWORD v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v7[0] = a2;
  v7[1] = a2 + a3;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    result = core::str::validations::next_code_point(v7);
    if ( (result & 1) == 0 )
      break;
    if ( v6 == 34 )
    {
      ++v3;
    }
    else if ( v6 == 39 )
    {
      ++v4;
    }
  }
  *(_DWORD *)(a1 + 4) = v4;
  *(_DWORD *)(a1 + 8) = v3;
  *(_BYTE *)a1 = 2;
  return result;
}