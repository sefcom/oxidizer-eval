unsigned __int64 __fastcall uu_truncate::TruncateMode::to_size(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  bool v4; // cf
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi

  switch ( a1 )
  {
    case 0LL:
      return a2;
    case 1LL:
      a2 += a3;
      return a2;
    case 2LL:
      result = 0LL;
      v4 = a3 < a2;
      v5 = a3 - a2;
      if ( !v4 )
        return v5;
      return result;
    case 3LL:
      return core::cmp::min_by(a3);
    case 4LL:
      return core::cmp::max_by(a3);
    case 5LL:
      if ( !a2 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_116570);
      if ( (a2 | a3) >> 32 )
        v7 = a3 % a2;
      else
        v7 = (unsigned int)a3 % (unsigned int)a2;
      return a3 - v7;
    case 6LL:
      if ( !a2 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_116588);
      if ( (a2 | a3) >> 32 )
        v8 = a3 % a2;
      else
        v8 = (unsigned int)a3 % (unsigned int)a2;
      return a3 + v8;
  }
}
