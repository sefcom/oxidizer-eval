__int64 __fastcall uu_stat::Stater::process_flags(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdi

  result = a1;
  v6 = *a3;
  if ( *a3 < a4 )
  {
    while ( 2 )
    {
      if ( v6 < a2 )
      {
        switch ( *(_DWORD *)(result + 4 * v6) )
        {
          case ' ':
          case 'I':
            a5[3] = 1;
            goto LABEL_4;
          case '#':
            *a5 = 1;
            goto LABEL_4;
          case '\'':
            a5[5] = 1;
            goto LABEL_4;
          case '+':
            a5[4] = 1;
            goto LABEL_4;
          case '-':
            a5[2] = 1;
            goto LABEL_4;
          case '0':
            a5[1] = 1;
LABEL_4:
            *a3 = ++v6;
            if ( a4 != v6 )
              continue;
            return result;
          default:
            return result;
        }
      }
      break;
    }
    core::panicking::panic_bounds_check(v6, a2, &off_119D48);
  }
  return result;
}