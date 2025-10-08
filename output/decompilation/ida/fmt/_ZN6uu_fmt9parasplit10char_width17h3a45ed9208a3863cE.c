__int64 __fastcall uu_fmt::parasplit::char_width(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( (unsigned int)a1 >= 0xA0 )
    return (unsigned __int8)unicode_width::tables::lookup_width(a1);
  return result;
}