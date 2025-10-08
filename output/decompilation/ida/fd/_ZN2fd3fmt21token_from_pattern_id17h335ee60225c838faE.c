__int64 __fastcall fd::fmt::token_from_pattern_id(unsigned __int64 *a1, int a2)
{
  unsigned int v2; // esi
  __int64 result; // rax

  v2 = a2 - 2;
  if ( v2 >= 5 )
    core::panicking::panic(aInternalErrorE, 40LL, &off_4024B8);
  result = v2;
  *a1 = v2 | 0x8000000000000000LL;
  return result;
}