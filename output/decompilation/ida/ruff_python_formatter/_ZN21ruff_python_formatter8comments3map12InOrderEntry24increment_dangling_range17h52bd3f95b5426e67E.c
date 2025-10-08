__int64 __fastcall ruff_python_formatter::comments::map::InOrderEntry::increment_dangling_range(unsigned int *a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v3; // [rsp+18h] [rbp-20h]

  if ( a1[3] )
  {
    v2[0] = &off_57D028;
    v2[1] = 1LL;
    v2[2] = 8LL;
    v3 = 0LL;
    core::panicking::panic_fmt(v2, &off_57D038);
  }
  if ( a1[2] )
    return ruff_python_formatter::comments::map::PartIndex::increment(a1 + 2);
  result = ruff_python_formatter::comments::map::PartIndex::incremented(a1[1]);
  a1[2] = result;
  return result;
}