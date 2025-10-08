__int64 __fastcall uu_ls::match_quoting_style_name(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v4; // ecx
  unsigned __int8 v5; // al

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aLiteral, 7LL) )
  {
    v4 = a3;
    v5 = 3;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aShell, 5LL) )
  {
    v4 = a3 << 8;
    v5 = 0;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aShellAlways, 12LL) )
  {
    v4 = (a3 << 8) + 1;
    v5 = 0;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aShellEscape, 12LL) )
  {
    v4 = a3 << 8;
    v5 = 1;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aShellEscapeAlw, 19LL) )
  {
    v4 = (a3 << 8) + 1;
    v5 = 1;
  }
  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aC_0, 1LL) )
  {
    v5 = 2;
    LOWORD(v4) = 2;
  }
  else
  {
    v5 = 2 * (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, aEscape, 6LL) ^ 1) + 2;
    v4 = 0;
  }
  return (v4 << 8) | (unsigned int)v5;
}