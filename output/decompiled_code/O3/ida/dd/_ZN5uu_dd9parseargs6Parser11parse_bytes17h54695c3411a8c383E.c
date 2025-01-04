__int64 __fastcall uu_dd::parseargs::Parser::parse_bytes(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // xmm0
  _OWORD v3[2]; // [rsp+0h] [rbp-28h] BYREF

  result = uu_dd::parseargs::parse_bytes_with_opt_multiplier(v3);
  v2 = v3[0];
  if ( *(_QWORD *)&v3[0] != 14LL )
    a1[1] = v3[1];
  *a1 = v2;
  return result;
}
