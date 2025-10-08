bool __fastcall uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(int a1, _BYTE *a2, int a3)
{
  bool result; // al

  if ( a1 != a3 )
    return (unsigned int)(a1 - 58) < 0xFFFFFFF6;
  result = 1;
  if ( *a2 != 1 )
  {
    *a2 = 1;
    return 0;
  }
  return result;
}