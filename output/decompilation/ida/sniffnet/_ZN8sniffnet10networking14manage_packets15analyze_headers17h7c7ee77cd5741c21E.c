__int64 __fastcall sniffnet::networking::manage_packets::analyze_headers(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // al

  sniffnet::networking::manage_packets::analyze_link_header(a2 + 2381, a3, a3 + 24);
  v9 = *a2;
  v10 = a7 + 8;
  v11 = a7 + 9;
  v12 = a7 + 26;
  if ( *a2 == 5 )
  {
    if ( !(unsigned __int8)sniffnet::networking::manage_packets::analyze_network_header(a2, a4, v10, v11, v12, a6) )
      goto LABEL_8;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)sniffnet::networking::manage_packets::analyze_network_header(a2, a4, v10, v11, v12, a6) )
    goto LABEL_8;
  if ( v9 != 4 )
  {
LABEL_6:
    if ( (unsigned __int8)sniffnet::networking::manage_packets::analyze_transport_header(
                            a2 + 2364,
                            a7,
                            a7 + 4,
                            a7 + 43,
                            a5) )
      goto LABEL_7;
LABEL_8:
    *(_WORD *)a1 = 2;
    return core::ptr::drop_in_place<etherparse::lax_packet_headers::LaxPacketHeaders>(a2);
  }
LABEL_7:
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a7 + 25);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)(a7 + 9);
  *(_OWORD *)(a1 + 25) = *(_OWORD *)(a7 + 26);
  *(_BYTE *)(a1 + 41) = *(_BYTE *)(a7 + 42);
  v13 = *(_BYTE *)(a7 + 43);
  *(_QWORD *)a1 = *(_QWORD *)a7;
  *(_BYTE *)(a1 + 42) = v13;
  return core::ptr::drop_in_place<etherparse::lax_packet_headers::LaxPacketHeaders>(a2);
}