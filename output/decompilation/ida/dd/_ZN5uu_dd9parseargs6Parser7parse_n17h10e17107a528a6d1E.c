__int64 __fastcall uu_dd::parseargs::Parser::parse_n(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  _QWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+10h] [rbp-38h]

  result = uu_dd::parseargs::parse_bytes_with_opt_multiplier((__int64)v7, a2, a3);
  v5 = v7[0];
  v6 = v7[1];
  if ( v7[0] == 14LL )
  {
    result = <char as core::str::pattern::Pattern>::is_contained_in(a2, a3);
    a1[2] = v6;
    v6 = (unsigned __int8)result;
  }
  else
  {
    *((_OWORD *)a1 + 1) = v8;
  }
  a1[1] = v6;
  *a1 = v5;
  return result;
}
