unsigned __int64 __fastcall uu_truncate::TruncateMode::to_size(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  bool v3; // cf
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx

  result = a1[1];
  switch ( *a1 )
  {
    case 0LL:
      return result;
    case 1LL:
      v3 = __CFADD__(a2, result);
      result += a2;
      if ( v3 )
        core::panicking::panic_const::panic_const_add_overflow(&off_1066D0, a2);
      return result;
    case 2LL:
      v4 = 0LL;
      v3 = a2 < result;
      v5 = a2 - result;
      if ( !v3 )
        return v5;
      return v4;
    case 3LL:
      if ( a2 < result )
        return a2;
      return result;
    case 4LL:
      if ( a2 > result )
        return a2;
      return result;
    case 5LL:
      if ( !result )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_1066E8);
      if ( (result | a2) >> 32 )
        v6 = a2 % a1[1];
      else
        v6 = (unsigned int)a2 % (unsigned int)result;
      return a2 - v6;
    case 6LL:
      if ( !result )
        core::panicking::panic_const::panic_const_rem_by_zero(&off_106700);
      v7 = a1[1];
      if ( (result | a2) >> 32 )
      {
        v3 = __CFADD__(a2 % v7, a2);
        v8 = a2 % v7 + a2;
        if ( v3 )
LABEL_27:
          core::panicking::panic_const::panic_const_add_overflow(&off_106718, v8);
      }
      else
      {
        v9 = (unsigned int)a2 % (unsigned int)result;
        v3 = __CFADD__(v9, a2);
        v8 = (unsigned int)v9 + a2;
        if ( v3 )
          goto LABEL_27;
      }
      return v8;
  }
}
