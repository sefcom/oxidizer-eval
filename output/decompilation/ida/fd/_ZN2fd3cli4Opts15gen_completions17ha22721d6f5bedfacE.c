char __fastcall fd::cli::Opts::gen_completions(__int64 a1, unsigned __int8 a2)
{
  char result; // al
  _BYTE v3[8]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v4; // [rsp+8h] [rbp-10h]

  if ( a2 == 6 )
  {
    *(_BYTE *)(a1 + 1) = 5;
  }
  else
  {
    fd::cli::Opts::gen_completions::{{closure}}(v3, a2);
    if ( (v3[0] & 1) != 0 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      result = 1;
      *(_BYTE *)a1 = 1;
      return result;
    }
    *(_BYTE *)(a1 + 1) = v3[1];
  }
  result = 0;
  *(_BYTE *)a1 = 0;
  return result;
}