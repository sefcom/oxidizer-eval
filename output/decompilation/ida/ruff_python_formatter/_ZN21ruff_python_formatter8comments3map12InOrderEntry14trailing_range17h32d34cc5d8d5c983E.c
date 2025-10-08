__int64 __fastcall ruff_python_formatter::comments::map::InOrderEntry::trailing_range(_DWORD *a1)
{
  int v1; // eax
  _QWORD v3[3]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v4; // [rsp+18h] [rbp-18h]

  v1 = a1[2];
  if ( v1 )
    return (unsigned int)(v1 - 1);
  if ( a1[3] )
  {
    v3[0] = &off_57D068;
    v3[1] = 1LL;
    v3[2] = 8LL;
    v4 = 0LL;
    core::panicking::panic_fmt(v3, &off_57D078);
  }
  return (unsigned int)(a1[1] - 1);
}