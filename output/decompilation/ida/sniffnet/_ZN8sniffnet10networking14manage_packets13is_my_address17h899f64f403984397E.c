char __fastcall sniffnet::networking::manage_packets::is_my_address(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15

  if ( a3 )
  {
    v4 = 68 * a3;
    while ( !(unsigned __int8)<core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(a2, a1) )
    {
      a2 += 68LL;
      v4 -= 68LL;
      if ( !v4 )
        goto LABEL_5;
    }
    return 1;
  }
  else
  {
LABEL_5:
    if ( *(_BYTE *)a1 )
      return _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a1 + 1)), (__m128i)xmmword_26F440)) == 0xFFFF;
    else
      return *(_BYTE *)(a1 + 1) == 127;
  }
}