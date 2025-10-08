__int64 __fastcall just::shebang::Shebang::interpreter_filename(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[48]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v4; // [rsp+38h] [rbp-30h]
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int16 v6; // [rsp+48h] [rbp-20h]

  <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v3, 0x5C0000002FLL, a1, a2);
  v4 = 0LL;
  v5 = a2;
  v6 = 1;
  result = core::str::iter::SplitInternal<P>::next_back(v3);
  if ( !result )
    return a1;
  return result;
}