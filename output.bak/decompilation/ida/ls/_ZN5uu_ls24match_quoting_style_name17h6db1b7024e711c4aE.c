__int64 __fastcall uu_ls::match_quoting_style_name(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int16 v4; // ax

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aLiteral, 7LL) )
  {
    v4 = a3;
    a3 = 3;
  }
  else
  {
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aShell, 5LL) )
    {
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aShellAlways, 12LL) )
      {
        v4 = 256;
        return (a3 << 16) | (unsigned int)v4;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aShellEscape, 12LL) )
      {
        v4 = 1;
        return (a3 << 16) | (unsigned int)v4;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aShellEscapeAlw_0, 19LL) )
      {
        v4 = 257;
        return (a3 << 16) | (unsigned int)v4;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aC, 1LL) )
      {
        a3 = 2;
        v4 = 2;
        return (a3 << 16) | (unsigned int)v4;
      }
      a3 = 2 * (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aEscape, 6LL) ^ 1) + 2;
    }
    v4 = 0;
  }
  return (a3 << 16) | (unsigned int)v4;
}
