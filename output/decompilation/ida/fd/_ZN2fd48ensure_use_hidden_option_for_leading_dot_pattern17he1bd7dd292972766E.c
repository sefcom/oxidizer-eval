__int64 __fastcall fd::ensure_use_hidden_option_for_leading_dot_pattern(char a1, char **a2, __int64 a3)
{
  char **v4; // [rsp+0h] [rbp-30h] BYREF
  __int64 v5; // [rsp+8h] [rbp-28h]
  __int64 v6; // [rsp+10h] [rbp-20h]
  __int128 v7; // [rsp+18h] [rbp-18h]

  if ( (a1 & 1) == 0 )
    return 0LL;
  v4 = a2;
  v5 = (__int64)&a2[3 * a3];
  if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v4) )
    return 0LL;
  v4 = &off_402950;
  v5 = 1LL;
  v6 = 8LL;
  v7 = 0LL;
  return anyhow::__private::format_err(&v4);
}