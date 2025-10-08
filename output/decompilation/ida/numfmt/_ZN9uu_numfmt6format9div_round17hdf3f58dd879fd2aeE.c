__int64 __fastcall uu_numfmt::format::div_round(char a1, double a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // [rsp-6h] [rbp-8h] BYREF

  v5 = v3;
  HIBYTE(v5) = a1;
  if ( fabs(a2 / a3) >= 10.0 )
    uu_numfmt::options::RoundMethod::round((char *)&v5 + 7);
  else
    uu_numfmt::options::RoundMethod::round((char *)&v5 + 7);
  return v5;
}