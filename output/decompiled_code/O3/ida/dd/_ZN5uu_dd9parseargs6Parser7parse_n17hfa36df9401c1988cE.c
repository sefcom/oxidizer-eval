__int64 __fastcall uu_dd::parseargs::Parser::parse_n(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+8h] [rbp-40h] BYREF
  __int128 v8; // [rsp+18h] [rbp-30h]

  uu_dd::parseargs::parse_bytes_with_opt_multiplier(v7, a2, a3);
  result = v7[0];
  v5 = v7[1];
  if ( v7[0] != 14LL )
  {
    *(_OWORD *)(a1 + 16) = v8;
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = v5;
    return result;
  }
  if ( a3 > 0xF )
  {
    if ( core::slice::memchr::memchr_aligned(66LL, a2, a3) != 1 )
    {
      result = 0LL;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  result = 0LL;
  if ( a3 )
  {
    v6 = 0LL;
    while ( *(_BYTE *)(a2 + v6) != 66 )
    {
      if ( a3 == ++v6 )
        goto LABEL_12;
    }
LABEL_10:
    result = 1LL;
  }
LABEL_12:
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)a1 = 14LL;
  return result;
}
