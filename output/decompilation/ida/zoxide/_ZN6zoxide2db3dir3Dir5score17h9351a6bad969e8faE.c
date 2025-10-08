double __fastcall zoxide::db::dir::Dir::score(unsigned __int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rsi

  v3 = 0LL;
  v4 = a2 < a1;
  v5 = a2 - a1;
  if ( !v4 )
    v3 = v5;
  if ( v3 < 0xE10 )
    return a3 * 4.0;
  if ( v3 >= (unsigned __int64)&unk_15180 )
    return a3 * dbl_18CD0[v3 < 0x93A80];
  return a3 * 2.0;
}