__int64 __fastcall ruff_python_formatter::comments::map::InOrderEntry::increment_leading_range(__int64 a1)
{
  _QWORD v2[3]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v3; // [rsp+18h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 8) )
  {
    v2[0] = &off_57D000;
    v2[1] = 1LL;
    v2[2] = 8LL;
    v3 = 0LL;
    core::panicking::panic_fmt(v2, &off_57D010);
  }
  return ruff_python_formatter::comments::map::PartIndex::increment(a1 + 4);
}