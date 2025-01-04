_BOOL8 __fastcall uu_dd::Source::len(_DWORD *a1)
{
  _BOOL8 result; // rax
  int v2; // [rsp+0h] [rbp-B0h] BYREF

  result = 0LL;
  if ( !*a1 )
  {
    std::fs::File::metadata(&v2, a1 + 1, 0LL);
    return v2 == 2;
  }
  return result;
}
