char __fastcall uu_sort::custom_str_cmp::cmp_chars(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx

  if ( !a3 )
    return (a1 > a2) - (a1 < a2);
  v3 = a1 & 0x5F;
  if ( a1 - 97 >= 0x1A )
    v3 = a1;
  v4 = a2 & 0x5F;
  if ( a2 - 97 >= 0x1A )
    v4 = a2;
  return (v3 > v4) - (v3 < v4);
}