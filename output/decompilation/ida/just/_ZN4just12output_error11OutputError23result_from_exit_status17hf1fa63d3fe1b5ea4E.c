__int64 __fastcall just::output_error::OutputError::result_from_exit_status(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  char v3; // cl
  unsigned int v4; // esi

  result = a2 & 0x7F;
  if ( (a2 & 0x7F) != 0 )
  {
    v3 = 5;
    if ( (char)(result + 1) < 2 )
    {
      *(_BYTE *)(a1 + 8) = 6;
      return result;
    }
    goto LABEL_5;
  }
  v3 = 2;
  v4 = HIBYTE(a2);
  result = v4;
  if ( v4 )
  {
LABEL_5:
    *(_DWORD *)a1 = result;
    *(_BYTE *)(a1 + 8) = v3;
    return result;
  }
  *(_BYTE *)(a1 + 8) = 7;
  return result;
}