__int64 __fastcall uu_dd::calc_loop_bsize(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax

  result = a8;
  if ( a1 != 2 )
  {
    if ( (a1 & 1) != 0 )
      return core::cmp::Ord::min(a8, 0LL, a2 - a5, (a2 - __PAIR128__(a6, a5)) >> 64);
    else
      return core::cmp::Ord::min(a8, a7 * (a2 - (a4 + a3)));
  }
  return result;
}