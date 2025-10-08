__int64 __fastcall ruff_python_formatter::string::normalize::QuoteMetadata::from_str(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v7; // [rsp+Ch] [rbp-1Ch] BYREF
  int v8; // [rsp+14h] [rbp-14h]

  if ( a4 > 0x3Fu )
  {
    ruff_python_formatter::string::normalize::QuoteMetadataKind::raw(&v7, a2, a3, a5, (a4 & 2) == 0);
  }
  else if ( (a4 & 2) != 0 )
  {
    ruff_python_formatter::string::normalize::QuoteMetadataKind::triple_quoted(&v7, a2, a3, a5);
  }
  else
  {
    ruff_python_formatter::string::normalize::QuoteMetadataKind::regular(&v7);
  }
  *(_DWORD *)(a1 + 8) = v8;
  result = v7;
  *(_QWORD *)a1 = v7;
  *(_BYTE *)(a1 + 12) = a4 & 1;
  return result;
}