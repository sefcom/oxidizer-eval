__int64 __fastcall uu_sort::custom_str_cmp::cmp_chars(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  bool v5; // cf
  bool v6; // zf
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a1 & 0x5F;
    if ( a1 - 97 >= 0x1A )
      v3 = a1;
    v4 = a2 & 0x5F;
    if ( a2 - 97 >= 0x1A )
      v4 = a2;
    v5 = v3 < v4;
    v6 = v3 == v4;
  }
  else
  {
    v5 = a1 < a2;
    v6 = a1 == a2;
  }
  result = 255LL;
  if ( !v5 )
    return !v6;
  return result;
}
