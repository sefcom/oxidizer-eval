__int64 __fastcall uu_truncate::TruncateMode::to_size(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  bool v4; // cf
  __int64 v5; // rdx
  unsigned __int64 v7; // rdx

  switch ( a1 )
  {
    case 0LL:
      goto LABEL_3;
    case 1LL:
      a2 += a3;
LABEL_3:
      result = a2;
      break;
    case 2LL:
      result = 0LL;
      v4 = a3 < a2;
      v5 = a3 - a2;
      if ( !v4 )
        result = v5;
      break;
    case 3LL:
      result = core::cmp::Ord::min(a3);
      break;
    case 4LL:
      result = core::cmp::Ord::max(a3);
      break;
    case 5LL:
      if ( !a2 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_E3FA0);
      if ( (a2 | a3) >> 32 )
        v7 = a3 % a2;
      else
        v7 = (unsigned int)a3 % (unsigned int)a2;
      result = a3 - v7;
      break;
    case 6LL:
      if ( !a2 )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_E3FB8);
      if ( (a2 | a3) >> 32 )
        result = a3 + a3 % a2;
      else
        result = a3 + (unsigned int)a3 % (unsigned int)a2;
      break;
  }
  return result;
}