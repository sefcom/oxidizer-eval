__int64 __fastcall ruff_python_formatter::comments::map::InOrderEntry::range(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[3];
  if ( v1 )
    return (unsigned int)(v1 - 1);
  v1 = a1[2];
  if ( v1 )
    return (unsigned int)(v1 - 1);
  else
    return (unsigned int)(a1[1] - 1);
}