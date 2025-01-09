__int64 __fastcall uu_fmt::parasplit::char_width(unsigned int a1)
{
  if ( a1 >= 0xA0 )
    return unicode_width::tables::charwidth::lookup_width();
  else
    return 1LL;
}
