bool __fastcall uu_sort::custom_str_cmp::filter_char(unsigned int a1, char a2, int a3)
{
  bool result; // al
  __int64 v4; // rdx

  if ( !a3
    || a1 - 48 < 0xA
    || (a1 & 0xFFFFFFDF) - 65 < 0x1A
    || (result = 0, a1 <= 0x20) && (v4 = 0x100003600LL, _bittest64(&v4, a1)) )
  {
    result = 1;
    if ( a2 )
      return a1 - 32 < 0x5F;
  }
  return result;
}
