void *__fastcall sniffnet::networking::parse_packets::get_sniffable_headers(
        _DWORD *dest,
        __int64 a2,
        __int64 a3,
        int a4)
{
  void *v4; // rbx
  void *result; // rax
  _QWORD src[1194]; // [rsp+8h] [rbp-2550h] BYREF

  src[681] = 0LL;
  src[169] = 0LL;
  switch ( a4 )
  {
    case 0:
    case 3:
      result = (void *)sniffnet::networking::parse_packets::from_null(dest);
      break;
    case 1:
    case 8:
    case 9:
      v4 = dest;
      result = (void *)etherparse::lax_packet_headers::LaxPacketHeaders::from_ethernet(src);
      if ( LODWORD(src[0]) != 6 )
        goto LABEL_6;
      *dest = 6;
      break;
    case 2:
    case 4:
    case 5:
      v4 = dest;
      result = (void *)etherparse::lax_packet_headers::LaxPacketHeaders::from_ip(src);
      if ( LODWORD(src[0]) == 6 )
        *dest = 6;
      else
LABEL_6:
        result = memcpy(v4, src, 0x2548uLL);
      break;
    case 6:
      result = (void *)sniffnet::networking::parse_packets::from_linux_sll(dest, a2, a3, 1LL);
      break;
    case 7:
      result = (void *)sniffnet::networking::parse_packets::from_linux_sll(dest, a2, a3, 0LL);
      break;
  }
  return result;
}