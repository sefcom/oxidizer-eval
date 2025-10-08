char __fastcall sniffnet::networking::manage_packets::get_traffic_type(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char is_multicast; // cl
  char result; // al

  if ( !a4 )
    return 0;
  is_multicast = core::net::ip_addr::IpAddr::is_multicast(a1);
  result = 1;
  if ( !is_multicast )
    return 2 * sniffnet::networking::manage_packets::is_broadcast_address(a1, a2, a3);
  return result;
}