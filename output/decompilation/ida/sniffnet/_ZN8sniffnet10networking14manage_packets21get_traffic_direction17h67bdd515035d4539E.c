__int64 __fastcall sniffnet::networking::manage_packets::get_traffic_direction(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int16 a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  bool v12; // cl
  bool v13; // cl
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+10h] [rbp-38h]

  core::iter::traits::iterator::Iterator::collect(&v19, a7, a7 + 68 * a8);
  v12 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a1 + 1)), (__m128i)xmmword_26F440)) == 0xFFFF;
  if ( !*(_BYTE *)a1 )
    v12 = *(_BYTE *)(a1 + 1) == 127;
  if ( !v12 )
    goto LABEL_10;
  v13 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a2 + 1)), (__m128i)xmmword_26F440)) == 0xFFFF;
  if ( !*(_BYTE *)a2 )
    v13 = *(_BYTE *)(a2 + 1) == 127;
  if ( v13 && (a3 & 1) != 0 && (a5 & 1) != 0 )
  {
    LOBYTE(a6) = a4 > (unsigned __int16)a6;
    v14 = v19;
    v15 = v20;
  }
  else
  {
LABEL_10:
    v16 = v20;
    v17 = v21;
    LOBYTE(a6) = 1;
    if ( !(unsigned __int8)sniffnet::networking::manage_packets::get_traffic_direction::{{closure}}(v20, v21, a1) )
    {
      if ( (unsigned __int8)<core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(a1, &byte_183839E)
        || (unsigned __int8)<core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(a1, &unk_18383AF) )
      {
        a6 = sniffnet::networking::manage_packets::get_traffic_direction::{{closure}}(v16, v17, a2);
        LOBYTE(a6) = a6 ^ 1;
      }
      else
      {
        a6 = 0;
      }
    }
    v14 = v19;
    v15 = v16;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<core::net::ip_addr::IpAddr>>(v14, v15);
  return a6;
}