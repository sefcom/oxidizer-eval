char __fastcall ruff_python_formatter::expression::binary_like::is_simple_power_operand(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = 0;
  while ( 2 )
  {
    v2 = 48LL;
    switch ( *(_DWORD *)a1 )
    {
      case 3:
        v2 = 8LL;
        if ( *(_BYTE *)(a1 + 28) != 1 )
          goto LABEL_2;
        result = 0;
        break;
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x1C:
        result = 1;
        break;
      case 0x19:
LABEL_2:
        a1 = *(_QWORD *)(a1 + v2);
        continue;
      default:
        return result;
    }
    return result;
  }
}