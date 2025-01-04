        __int64 a8)
{
  __int64 result; // rax

  result = a8;
  if ( !a1 )
    return core::cmp::min_by(a8, a7 * (a2 - (a4 + a3)));
  if ( a1 == 1 )
    return core::cmp::min_by(a8, 0LL, a2 - a5, (a2 - __PAIR128__(a6, a5)) >> 64);
  return result;
}
