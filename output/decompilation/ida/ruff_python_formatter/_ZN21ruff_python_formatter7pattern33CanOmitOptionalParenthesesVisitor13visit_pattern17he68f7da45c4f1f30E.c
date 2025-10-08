char __fastcall ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rsi
  __int64 v9; // r15

  v3 = *a2 ^ 0x8000000000000000LL;
  v4 = 3LL;
  if ( v3 < 8 )
    v4 = *a2 ^ 0x8000000000000000LL;
  switch ( v4 )
  {
    case 0uLL:
      v3 = a2[1];
      if ( *(_DWORD *)v3 == 2 )
      {
        LOBYTE(v3) = (*(unsigned __int8 *)(a1 + 33) >= 2uLL) - (*(_BYTE *)(a1 + 33) == 0LL);
        if ( (_BYTE)v3 )
        {
          if ( (unsigned __int8)v3 != 1 )
          {
            *(_QWORD *)(a1 + 16) = 1LL;
            *(_BYTE *)(a1 + 33) = 1;
          }
        }
        else
        {
          ++*(_QWORD *)(a1 + 16);
        }
      }
      break;
    case 1uLL:
    case 5uLL:
    case 6uLL:
      return v3;
    case 2uLL:
    case 3uLL:
      *(_BYTE *)(a1 + 32) = 1;
      break;
    case 4uLL:
      *(_BYTE *)(a1 + 32) = 1;
      if ( !*(_QWORD *)a1 )
        *(_QWORD *)a1 = 1LL;
      break;
    case 7uLL:
      v3 = a2[3];
      v6 = 0LL;
      if ( v3 )
        v6 = v3 - 1;
      v7 = (*(unsigned __int8 *)(a1 + 33) > 2uLL) - (*(unsigned __int8 *)(a1 + 33) < 2uLL);
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          *(_QWORD *)(a1 + 16) = v6;
          *(_BYTE *)(a1 + 33) = 2;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) += v6;
      }
      if ( v3 )
      {
        v8 = a2[2];
        v9 = 104 * v3;
        do
        {
          LOBYTE(v3) = ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_sub_pattern(
                         a1,
                         v8,
                         a3,
                         v6);
          v8 += 104LL;
          v9 -= 104LL;
        }
        while ( v9 );
      }
      break;
  }
  return v3;
}