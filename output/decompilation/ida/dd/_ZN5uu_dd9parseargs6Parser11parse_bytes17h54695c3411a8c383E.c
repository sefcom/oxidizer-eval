__int64 __fastcall uu_dd::parseargs::Parser::parse_bytes(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  _OWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF

  result = uu_dd::parseargs::parse_bytes_with_opt_multiplier((__int64)v5, a2, a3);
  v4 = v5[0];
  if ( *(_QWORD *)&v5[0] != 14LL )
    a1[1] = v5[1];
  *a1 = v4;
  return result;
}
