__int64 __fastcall sniffnet::gui::pages::connection_details_page::get_local_tooltip(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // r15
  _BOOL8 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r13
  unsigned __int8 is_local_connection; // bl
  __int64 is_bogon; // r14
  __int64 v14; // rdx
  unsigned __int8 traffic_type; // bp
  unsigned __int8 is_my_address; // [rsp+Fh] [rbp-199h]
  __int64 v18; // [rsp+10h] [rbp-198h]
  __int64 v19; // [rsp+18h] [rbp-190h]
  unsigned __int8 v21; // [rsp+28h] [rbp-180h]
  _BYTE dest[208]; // [rsp+38h] [rbp-170h] BYREF
  _BYTE v23[160]; // [rsp+108h] [rbp-A0h] BYREF

  memcpy(dest, (const void *)(a2 + 1208), sizeof(dest));
  v6 = a4 + 8;
  v18 = a4 + 8;
  v21 = *(_BYTE *)(a2 + 1497);
  v7 = <core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(a3, a4 + 8);
  v8 = a4 + 25;
  if ( v7 )
    v6 = v8;
  v9 = __OFSUB__(0LL, *(_QWORD *)(a2 + 720));
  v10 = *(_QWORD *)(a2 + 8 * v9 + 752);
  v11 = *(_QWORD *)(a2 + 8 * v9 + 760);
  is_my_address = sniffnet::networking::manage_packets::is_my_address(v6, v10, v11);
  is_local_connection = sniffnet::networking::manage_packets::is_local_connection(v6, v10, v11);
  is_bogon = sniffnet::networking::types::bogon::is_bogon(v6);
  v19 = v14;
  if ( !(unsigned __int8)<core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(a3, v18) )
    v8 = v18;
  traffic_type = sniffnet::networking::manage_packets::get_traffic_type(
                   v8,
                   *(_QWORD *)(a2 + 8 * v9 + 752),
                   *(_QWORD *)(a2 + 8 * v9 + 760),
                   1LL);
  sniffnet::gui::styles::types::style_type::StyleType::get_extension(v23, dest);
  return sniffnet::countries::country_utils::get_computer_tooltip(
           a1,
           is_my_address,
           is_local_connection,
           is_bogon,
           v19,
           traffic_type,
           v21,
           (__int64)v23);
}