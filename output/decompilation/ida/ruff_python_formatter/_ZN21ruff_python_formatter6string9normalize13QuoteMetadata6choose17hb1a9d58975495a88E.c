char __fastcall ruff_python_formatter::string::normalize::QuoteMetadata::choose(__int64 a1, char a2)
{
  char result; // al
  char v3; // cl

  result = a2;
  if ( *(_BYTE *)a1 && *(_BYTE *)a1 != 1 )
  {
    v3 = (*(_DWORD *)(a1 + 4) > *(_DWORD *)(a1 + 8)) - (*(_DWORD *)(a1 + 4) < *(_DWORD *)(a1 + 8));
    if ( v3 )
      return v3 == 1;
  }
  else if ( *(_BYTE *)(a1 + 1) )
  {
    return *(_BYTE *)(a1 + 12);
  }
  return result;
}