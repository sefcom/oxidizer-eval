unsigned __int64 __fastcall sniffnet::networking::parse_packets::from_linux_sll(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        int a4)
{
  unsigned __int64 result; // rax
  unsigned __int8 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi

  result = a3;
  v5 = a2;
  if ( !a4 )
  {
    if ( result >= 0x15 )
    {
      v6 = 20LL;
      v7 = 1LL;
      goto LABEL_7;
    }
LABEL_5:
    *a1 = 6;
    return result;
  }
  if ( result <= 0x10 )
    goto LABEL_5;
  a2 += 14;
  v6 = 16LL;
  v7 = 15LL;
LABEL_7:
  v8 = (v5[v7] << 8) | (unsigned int)*a2;
  LOWORD(v8) = __ROL2__(v8, 8);
  return etherparse::lax_packet_headers::LaxPacketHeaders::from_ether_type(a1, v8, &v5[v6], result - v6);
}