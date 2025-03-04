__int64 __fastcall uu_numfmt::format::div_round(char a1, double a2, double a3)
{
  __int64 v3; // rax
  double v4; // xmm0_8
  __int64 v6; // [rsp-6h] [rbp-8h] BYREF

  v6 = v3;
  HIBYTE(v6) = a1;
  v4 = a2 / a3;
  if ( fabs(v4) >= 10.0 )
    uu_numfmt::options::RoundMethod::round(v4, (_BYTE *)&v6 + 7);
  else
    uu_numfmt::options::RoundMethod::round(v4 * 10.0, (_BYTE *)&v6 + 7);
  return v6;
}
